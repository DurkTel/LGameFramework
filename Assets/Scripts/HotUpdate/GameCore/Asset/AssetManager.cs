using GameCore;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public enum AssetLoadMode
{
    AssetBundle,
    Editor
}
public class AssetManager : MonoBehaviour
{
    private static AssetManager s_Instance;
    public static AssetManager instance { get { return s_Instance; } }

    private static AssetLoadMode s_AssetLoadMode;
    public static AssetLoadMode assetLoadMode { get { return s_AssetLoadMode; } }
    /// <summary>
    /// 正在加载的资源加载器
    /// </summary>
    private DictionaryEx<string, AssetLoader> m_AssetLoaders = new DictionaryEx<string, AssetLoader>();
    /// <summary>
    /// 加载完成的列表
    /// </summary>
    private List<string> m_CompleteList = new List<string>();
    /// <summary>
    /// ab包资源清单
    /// </summary>
    private AssetManifest_AssetBundle m_FileManifest;
    /// <summary>
    /// 所有加载过的ab包
    /// </summary>
    private Dictionary<string, AssetBundleRecord> m_AllAB = new Dictionary<string, AssetBundleRecord>(100);
    /// <summary>
    /// 等待释放的ab包列表
    /// </summary>
    private List<string> m_WaitDestroyABList = new List<string>(100);
    /// <summary>
    /// 等待释放ab包的时间
    /// </summary>
    private float m_WaitDestroyTime;

    public static void Initialize(AssetLoadMode assetLoadMode)
    {
        s_AssetLoadMode = assetLoadMode;
        GameObject gameObject = new GameObject("AssetManager");
        s_Instance = gameObject.AddComponent<AssetManager>();
    }

    public AssetManifest_AssetBundle GetAssetManifest_Bundle()
    { 
        if(m_FileManifest == null)
        {
            AssetBundle file = AssetBundle.LoadFromFile(Path.Combine(AssetDefine.localDataPath, "lgassetmanifest.asset"));
            //AddAssetBundle("LGAssetManifest.asset", file); 不记录 防止被卸载
            m_FileManifest = file.LoadAsset<AssetManifest_AssetBundle>("lgassetmanifest");
        }

        return m_FileManifest;
    }

    /// <summary>
    /// 记录一个AB包
    /// </summary>
    /// <param name="abName">包名</param>
    /// <param name="bundle">包</param>
    internal AssetBundleRecord AddAssetBundle(string abName, AssetBundle bundle)
    {
        AssetBundleRecord record = Pool<AssetBundleRecord>.Get();
        record.assetBundle = bundle;
        record.bundleName = abName;

        if (!m_AllAB.ContainsKey(abName))
            m_AllAB.Add(abName, record);

        return record;
    }

    /// <summary>
    /// 移除一个AB包
    /// </summary>
    /// <param name="abName">包名</param>
    /// <returns>是否移除成功</returns>
    internal bool RemoveAssetBundle(string abName)
    {
        AssetBundleRecord bundle;
        if (m_AllAB.TryGetValue(abName, out bundle))
        {
            bundle.Unload(true);
            m_AllAB.Remove(abName);
            return true;
        }

        return false;
    }

    /// <summary>
    /// 获取一个AB包
    /// </summary>
    /// <param name="abName">包名</param>
    /// <param name="bundle">包</param>
    /// <returns>是否获取成功</returns>
    internal bool TryGetAssetBundle(string abName, out AssetBundleRecord bundle)
    {
        return m_AllAB.TryGetValue(abName, out bundle);
    }

    /// <summary>
    /// 是否存在这个AB包
    /// </summary>
    /// <param name="abName"></param>
    /// <returns></returns>
    internal bool IsExistAssetBundle(string abName)
    {
        return m_AllAB.ContainsKey(abName);
    }

    /// <summary>
    /// 异步加载
    /// </summary>
    /// <param name="assetName"></param>
    /// <param name="type"></param>
    /// <returns></returns>
    internal AssetLoader LoadAssetAsync(string assetName, Type type)
    {
        AssetLoader loader;

        if (!m_AssetLoaders.TryGetValue(assetName, out loader))
        {
            switch (s_AssetLoadMode)
            {
                case AssetLoadMode.AssetBundle:
                    loader = new BundleAssetLoader(assetName.ToLower(), type, true);
                    break;
                case AssetLoadMode.Editor:
                    loader = new EditorAssetLoader(assetName, type);
                    break;
            }

            m_AssetLoaders.Add(assetName, loader);
        }


        return loader;
    }

    /// <summary>
    /// 同步加载
    /// </summary>
    /// <param name="assetName"></param>
    /// <param name="type"></param>
    /// <returns></returns>
    internal T LoadAsset<T>(string assetName) where T : UnityEngine.Object
    {
        AssetLoader loader;

        if (!m_AssetLoaders.TryGetValue(assetName, out loader))
        {
            switch (s_AssetLoadMode)
            {
                case AssetLoadMode.AssetBundle:
                    loader = new BundleAssetLoader(assetName.ToLower(), typeof(T), false);
                    break;
                case AssetLoadMode.Editor:
                    loader = new EditorAssetLoader(assetName, typeof(T));
                    break;
            }

            loader.Update();
            m_AssetLoaders.Add(assetName, loader);
        }

        return loader.GetRawObject<T>();
    }

    /// <summary>
    /// 移除加载器
    /// </summary>
    /// <param name="assetName"></param>
    internal void RemoveAssetLoader(string assetName)
    {
        if (m_AssetLoaders.TryGetValue(assetName, out AssetLoader loader))
        {
            loader.Dispose();
            m_AssetLoaders.Remove(assetName);
        }
    }


    private void Update()
    {
        if (m_AssetLoaders.Count <= 0) return;

        AssetLoader loader;

        //更新当前每个加载器的进度
        for (int i = 0; i < m_AssetLoaders.keyList.Count; i++)
        {
            string name = m_AssetLoaders.keyList[i];
            loader = m_AssetLoaders[name];
            loader.onProgress?.Invoke(loader.progress);

            loader.Update();

            if (loader.isDone)
                m_CompleteList.Add(name);
        }


        if (m_CompleteList.Count <= 0) return;

        //加载完成 移除加载器
        foreach (string name in m_CompleteList)
        {
            if (m_AssetLoaders.TryGetValue(name, out loader))
            {
                loader.onComplete?.Invoke(loader);
                loader.Dispose();
                m_AssetLoaders.Remove(name);
            }
        }

        m_CompleteList.Clear();
    }

    private void LateUpdate()
    {
        if(m_AllAB.Count <= 0) return;

        string abName;
        AssetBundleRecord record;
        foreach (var ab in m_AllAB)
        {
            abName = ab.Key;
            record = ab.Value;
            if (m_WaitDestroyABList.Contains(abName))
                continue;

            if (record.dpendsReferenceCount <= 0 && record.rawReferenceCount <= 0 && !record.isAssetLoading)
            {
                record.beginDestroyTime = Time.realtimeSinceStartup;
                m_WaitDestroyABList.Add(abName);
            }
        }

        for (int i = m_WaitDestroyABList.Count - 1; i >= 0; i--)
        {
            abName = m_WaitDestroyABList[i];
            record = m_AllAB[abName];
            if (Time.realtimeSinceStartup - record.beginDestroyTime >= m_WaitDestroyTime)
            {
                record.Unload(true);
                Pool<AssetBundleRecord>.Release(record);
                m_WaitDestroyABList.RemoveAt(i);
                m_AllAB.Remove(abName);
            }
        }
    }
}

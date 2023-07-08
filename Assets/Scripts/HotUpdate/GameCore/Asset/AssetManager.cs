using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public enum AssetLoadMode
{
    AssetBundle,
    Editor,
    Resources
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
    private Dictionary<string, AssetBundle> m_AllAB = new Dictionary<string, AssetBundle>();

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
            m_AllAB.Add("LGAssetManifest.asset", file);
            m_FileManifest = file.LoadAsset<AssetManifest_AssetBundle>("lgassetmanifest");
        }

        return m_FileManifest;
    }

    /// <summary>
    /// 记录一个AB包
    /// </summary>
    /// <param name="abName">包名</param>
    /// <param name="bundle">包</param>
    public void AddAssetBundle(string abName, AssetBundle bundle)
    {
        if (!m_AllAB.ContainsKey(abName))
            m_AllAB.Add(abName, bundle);
    }

    /// <summary>
    /// 移除一个AB包
    /// </summary>
    /// <param name="abName">包名</param>
    /// <returns>是否移除成功</returns>
    public bool RemoveAssetBundle(string abName)
    {
        if (m_AllAB.ContainsKey(abName))
        { 
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
    public bool TryGetAssetBundle(string abName, out AssetBundle bundle)
    {
        return m_AllAB.TryGetValue(abName, out bundle);
    }

    /// <summary>
    /// 是否存在这个AB包
    /// </summary>
    /// <param name="abName"></param>
    /// <returns></returns>
    public bool IsExistAssetBundle(string abName)
    {
        return m_AllAB.ContainsKey(abName);
    }

    /// <summary>
    /// 加载依赖
    /// </summary>
    public void LoadDependencies(List<string> abNames)
    {
        if (abNames == null || abNames.Count == 0) return; 
        foreach (string dependPath in abNames)
        {
            if (!m_AllAB.ContainsKey(dependPath))
            {
                AssetBundle ab = AssetBundle.LoadFromFile(Path.Combine(AssetDefine.localDataPath, dependPath));
                m_AllAB.Add(dependPath, ab);
            }
        }

    }

    /// <summary>
    /// 异步加载
    /// </summary>
    /// <param name="assetName"></param>
    /// <param name="type"></param>
    /// <returns></returns>
    public AssetLoader LoadAssetAsync(string assetName, Type type)
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
                case AssetLoadMode.Resources:
                    loader = new ResourcesAssetLoader(assetName, type, true);
                    break;
                default:
                    loader = new ResourcesAssetLoader(assetName, type, true);
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
    public T LoadAsset<T>(string assetName) where T : UnityEngine.Object
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
                case AssetLoadMode.Resources:
                    loader = new ResourcesAssetLoader(assetName, typeof(T), false);
                    break;
                default:
                    loader = new ResourcesAssetLoader(assetName, typeof(T), false);
                    break;
            }

            loader.Update();
            m_AssetLoaders.Add(assetName, loader);
        }

        return loader.rawObject as T;
    }

    /// <summary>
    /// 移除加载器
    /// </summary>
    /// <param name="assetName"></param>
    public void RemoveAssetLoader(string assetName)
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
            {
                m_CompleteList.Add(name);
            }
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
}

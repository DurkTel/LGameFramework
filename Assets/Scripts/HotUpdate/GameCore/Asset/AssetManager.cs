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
    /// ���ڼ��ص���Դ������
    /// </summary>
    private DictionaryEx<string, AssetLoader> m_AssetLoaders = new DictionaryEx<string, AssetLoader>();
    /// <summary>
    /// ������ɵ��б�
    /// </summary>
    private List<string> m_CompleteList = new List<string>();
    /// <summary>
    /// ab����Դ�嵥
    /// </summary>
    private AssetManifest_AssetBundle m_FileManifest;
    /// <summary>
    /// ���м��ع���ab��
    /// </summary>
    private Dictionary<string, AssetBundleRecord> m_AllAB = new Dictionary<string, AssetBundleRecord>(100);
    /// <summary>
    /// �ȴ��ͷŵ�ab���б�
    /// </summary>
    private List<string> m_WaitDestroyABList = new List<string>(100);
    /// <summary>
    /// �ȴ��ͷ�ab����ʱ��
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
            //AddAssetBundle("LGAssetManifest.asset", file); ����¼ ��ֹ��ж��
            m_FileManifest = file.LoadAsset<AssetManifest_AssetBundle>("lgassetmanifest");
        }

        return m_FileManifest;
    }

    /// <summary>
    /// ��¼һ��AB��
    /// </summary>
    /// <param name="abName">����</param>
    /// <param name="bundle">��</param>
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
    /// �Ƴ�һ��AB��
    /// </summary>
    /// <param name="abName">����</param>
    /// <returns>�Ƿ��Ƴ��ɹ�</returns>
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
    /// ��ȡһ��AB��
    /// </summary>
    /// <param name="abName">����</param>
    /// <param name="bundle">��</param>
    /// <returns>�Ƿ��ȡ�ɹ�</returns>
    internal bool TryGetAssetBundle(string abName, out AssetBundleRecord bundle)
    {
        return m_AllAB.TryGetValue(abName, out bundle);
    }

    /// <summary>
    /// �Ƿ�������AB��
    /// </summary>
    /// <param name="abName"></param>
    /// <returns></returns>
    internal bool IsExistAssetBundle(string abName)
    {
        return m_AllAB.ContainsKey(abName);
    }

    /// <summary>
    /// �첽����
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
    /// ͬ������
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
    /// �Ƴ�������
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

        //���µ�ǰÿ���������Ľ���
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

        //������� �Ƴ�������
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

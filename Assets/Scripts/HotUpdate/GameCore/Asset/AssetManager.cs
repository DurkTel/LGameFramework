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
    /// ��¼һ��AB��
    /// </summary>
    /// <param name="abName">����</param>
    /// <param name="bundle">��</param>
    public void AddAssetBundle(string abName, AssetBundle bundle)
    {
        if (!m_AllAB.ContainsKey(abName))
            m_AllAB.Add(abName, bundle);
    }

    /// <summary>
    /// �Ƴ�һ��AB��
    /// </summary>
    /// <param name="abName">����</param>
    /// <returns>�Ƿ��Ƴ��ɹ�</returns>
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
    /// ��ȡһ��AB��
    /// </summary>
    /// <param name="abName">����</param>
    /// <param name="bundle">��</param>
    /// <returns>�Ƿ��ȡ�ɹ�</returns>
    public bool TryGetAssetBundle(string abName, out AssetBundle bundle)
    {
        return m_AllAB.TryGetValue(abName, out bundle);
    }

    /// <summary>
    /// �Ƿ�������AB��
    /// </summary>
    /// <param name="abName"></param>
    /// <returns></returns>
    public bool IsExistAssetBundle(string abName)
    {
        return m_AllAB.ContainsKey(abName);
    }

    /// <summary>
    /// ��������
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
    /// �첽����
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
    /// ͬ������
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
    /// �Ƴ�������
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

        //���µ�ǰÿ���������Ľ���
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
}

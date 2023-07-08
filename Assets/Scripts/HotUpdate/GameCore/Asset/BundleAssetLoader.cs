using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class BundleAssetLoader : AssetLoader
{
    public BundleAssetLoader(string assetName) : base(assetName)
    {
    }

    public BundleAssetLoader(string assetName, System.Type assetType, bool async) : base(assetName, assetType, async)
    {
        this.m_AssetName = assetName;
        this.m_AssetType = assetType;
        this.m_Async = async;
    }
    /// <summary>
    /// 依赖包体加载
    /// </summary>
    private AssetBundleCreateRequest m_DependsBundleRequest;
    /// <summary>
    /// 资源包体加载
    /// </summary>
    private AssetBundleCreateRequest m_BundleRequest;
    /// <summary>
    /// 资源加载
    /// </summary>
    private AssetBundleRequest m_AssetRequest;
    /// <summary>
    /// 包名
    /// </summary>
    private string m_BundleName;
    /// <summary>
    /// 加载此资源需要的未加载的依赖包
    /// </summary>
    private List<string> m_NeedDepends;

    public override void Dispose()
    {
        m_Error = false;
        m_IsDone = false;
        m_Async = false;
        m_RawObject = null;
        m_AssetName = null;
        m_BundleName = null;
        m_AssetType = null;
        onProgress = null;
        onComplete = null;
        m_AssetRequest = null;
    }

    public override string GetAssetPath(string assetName)
    {
        return AssetUtility.GetAssetManifest_Bundle().GetPath(assetName);
    }

    public string GetBundleName(string assetName)
    {
        return AssetUtility.GetAssetManifest_Bundle().GetBundleName(assetName);
    }

    /// <summary>
    /// 获取未加载的依赖包
    /// </summary>
    /// <param name="assetName"></param>
    /// <returns></returns>
    public List<string> GetAbsentDependsName(string assetName)
    {
        List<string> result = AssetUtility.GetAssetManifest_Bundle().GetDependsName(assetName);
        for (int i = result.Count - 1; i >= 0; i--)
        {
            if (AssetUtility.IsExistAssetBundle(result[i]))
                result.RemoveAt(i); 
        }

        return result;
    }

    private bool LoadDependencies(string assetName)
    {
        m_NeedDepends ??= GetAbsentDependsName(assetName);

        if (m_NeedDepends.Count > 0 && m_DependsBundleRequest == null)
        {
            string dependName = m_NeedDepends[0];
            m_DependsBundleRequest = AssetBundle.LoadFromFileAsync(Path.Combine(AssetDefine.localDataPath, dependName));
        }

        if (m_DependsBundleRequest != null && m_DependsBundleRequest.isDone)
        {
            AssetUtility.AddAssetBundle(m_NeedDepends[0], m_DependsBundleRequest.assetBundle);
            m_NeedDepends.RemoveAt(0);
            m_DependsBundleRequest = null;
        }

        return m_NeedDepends.Count <= 0;
    }

    private UnityEngine.Object Load(string abName, string assetName, Type type)
    {
        AssetUtility.LoadDependencies(GetAbsentDependsName(assetName));
        AssetBundle ab;
        if (!AssetUtility.TryGetAssetBundle(abName, out ab))
        {
            ab = AssetBundle.LoadFromFile(Path.Combine(AssetDefine.localDataPath, abName));
            AssetUtility.AddAssetBundle(abName, ab);
        }

        UnityEngine.Object obj = ab.LoadAsset(assetName, type);

        return obj;
    }

    private AssetBundleRequest LoadAsync(string abName, string assetName, Type type)
    {
        AssetBundle ab;
        if (!AssetUtility.TryGetAssetBundle(abName, out ab))
        {
            m_BundleRequest ??= AssetBundle.LoadFromFileAsync(Path.Combine(AssetDefine.localDataPath, abName));
            if (m_BundleRequest.isDone)
            {
                ab = m_BundleRequest.assetBundle;
                AssetUtility.AddAssetBundle(abName, ab);
            }
            else
                return null;
        }

        return ab.LoadAssetAsync(assetName, type);
    }

    public override void Update()
    {
        if (m_IsDone || m_Error)
            return;

        if (!AssetCache.TryGetRawObject(m_AssetName, out m_RawObject))
        {
            m_BundleName ??= GetBundleName(m_AssetName);
            if (string.IsNullOrEmpty(m_BundleName))
            {
                m_Error = true;
                AssetUtility.StopLoadingAsset(m_AssetName);
                return;
            }

            if (m_Async)
            {
                if (!LoadDependencies(assetName))
                    return;

                m_AssetRequest ??= LoadAsync(m_BundleName, m_AssetName, m_AssetType);

                if (m_AssetRequest != null && m_AssetRequest.isDone)
                    m_RawObject = m_AssetRequest.asset;
            }
            else
            {
                m_RawObject = Load(m_BundleName, m_AssetName, m_AssetType);
            }

            if (m_RawObject != null)
                AssetCache.AddRawObject(m_AssetName, m_RawObject);
        }
        else
            m_RawObject = AssetCache.GetRawObject(m_AssetName);


        m_IsDone = m_RawObject != null;
    }
}

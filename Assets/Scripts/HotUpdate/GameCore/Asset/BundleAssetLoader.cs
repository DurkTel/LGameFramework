using GameCore;
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
    /// AB包
    /// </summary>
    private AssetBundleRecord m_AssetRecord;
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
        m_AssetRecord = null;
        m_NeedDepends.Clear();
        m_NeedDepends = null;
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
        AssetBundleRecord record;
        for (int i = result.Count - 1; i >= 0; i--)
        {
            if (AssetUtility.TryGetAssetBundle(result[i], out record))
            { 
                result.RemoveAt(i);
                record.dpendsReferenceCount++; //已经加载过了 引用计数加1
            }
        }

        return result;
    }

    /// <summary>
    /// 异步加载该资源的依赖包
    /// </summary>
    /// <param name="assetName"></param>
    /// <returns></returns>
    private bool LoadDependenciesAsync(string assetName)
    {
        m_NeedDepends ??= GetAbsentDependsName(assetName);

        if (m_NeedDepends.Count > 0 && m_DependsBundleRequest == null)
        {
            string dependName = m_NeedDepends[0];
            m_DependsBundleRequest = AssetBundle.LoadFromFileAsync(Path.Combine(AssetDefine.localDataPath, dependName));
        }

        if (m_DependsBundleRequest != null && m_DependsBundleRequest.isDone)
        {
            AssetBundleRecord record = AssetUtility.AddAssetBundle(m_NeedDepends[0], m_DependsBundleRequest.assetBundle);
            record.dpendsReferenceCount++;
            m_NeedDepends.RemoveAt(0);
            m_DependsBundleRequest = null;
        }

        return m_NeedDepends.Count <= 0;
    }

    /// <summary>
    /// 同步加载该资源的依赖包
    /// </summary>
    /// <param name="assetName"></param>
    private void LoadDependencies(string assetName)
    {
        m_NeedDepends = GetAbsentDependsName(assetName);
        foreach (string dependPath in m_NeedDepends)
        {
            AssetBundle ab = AssetBundle.LoadFromFile(Path.Combine(AssetDefine.localDataPath, dependPath));
            AssetBundleRecord record = AssetUtility.AddAssetBundle(m_NeedDepends[0], ab);
            record.dpendsReferenceCount++;
        }
        m_NeedDepends.Clear();
    }

    /// <summary>
    /// 同步加载资源
    /// </summary>
    /// <param name="abName"></param>
    /// <param name="assetName"></param>
    /// <param name="type"></param>
    /// <returns></returns>
    private UnityEngine.Object Load(string abName, string assetName, Type type)
    {
        if (!AssetUtility.TryGetAssetBundle(abName, out m_AssetRecord))
            m_AssetRecord = AssetUtility.AddAssetBundle(abName, AssetBundle.LoadFromFile(Path.Combine(AssetDefine.localDataPath, abName)));

        UnityEngine.Object obj = m_AssetRecord.assetBundle.LoadAsset(assetName, type);

        return obj;
    }

    /// <summary>
    /// 异步加载资源
    /// </summary>
    /// <param name="abName"></param>
    /// <param name="assetName"></param>
    /// <param name="type"></param>
    /// <returns></returns>
    private AssetBundleRequest LoadAsync(string abName, string assetName, Type type)
    {
        if (!AssetUtility.TryGetAssetBundle(abName, out m_AssetRecord))
        {
            m_BundleRequest ??= AssetBundle.LoadFromFileAsync(Path.Combine(AssetDefine.localDataPath, abName));
            if (m_BundleRequest.isDone)
                m_AssetRecord = AssetUtility.AddAssetBundle(abName, m_BundleRequest.assetBundle);
            else
                return null;
        }

        m_AssetRecord.isAssetLoading = true;
        return m_AssetRecord.assetBundle.LoadAssetAsync(assetName, type);
    }

    public override void Update()
    {
        if (m_IsDone || m_Error)
            return;

        if (!AssetCache.TryGetRawObject(m_AssetName, out m_RawObjectInfo))
        {
            m_BundleName ??= GetBundleName(m_AssetName);
            if (string.IsNullOrEmpty(m_BundleName) || string.IsNullOrEmpty(m_AssetName))
            {
                m_Error = true;
                AssetUtility.StopLoadingAsset(m_AssetName);
                return;
            }

            if (m_Async)
            {
                if (!LoadDependenciesAsync(m_AssetName))
                    return;

                m_AssetRequest ??= LoadAsync(m_BundleName, m_AssetName, m_AssetType);

                if (m_AssetRequest != null && m_AssetRequest.isDone)
                    m_RawObject = m_AssetRequest.asset;
            }
            else
            {
                LoadDependencies(m_AssetName);

                m_RawObject = Load(m_BundleName, m_AssetName, m_AssetType);
            }

            if (m_RawObject != null)
            { 
                m_RawObjectInfo = AssetCache.AddRawObject(m_AssetName, m_RawObject);
                m_AssetRecord.isAssetLoading = false;
                //新加载出源资源
                m_AssetRecord.rawReferenceCount++;
            }
        }
        else
        {
            m_RawObject = m_RawObjectInfo.rawObject;
        }


        m_IsDone = m_RawObject != null;
    }
}

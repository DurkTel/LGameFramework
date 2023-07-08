using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResourcesAssetLoader : AssetLoader
{
    public ResourcesAssetLoader(string assetName) : base(assetName)
    {
    }

    public ResourcesAssetLoader(string assetName, Type assetType, bool async) : base(assetName, assetType, async)
    {
        this.m_AssetName = assetName;
        this.m_AssetType = assetType;
        this.m_Async = async;
    }

    private ResourceRequest m_resourceRequest;

    public override void Dispose()
    {
        m_Error = false;
        m_IsDone = false;
        m_Async = false;
        m_RawObject = null;
        m_AssetName = null;
        m_AssetType = null;
        onProgress = null;
        onComplete = null;
    }

    public override string GetAssetPath(string assetName)
    {
        return ""; //AssetManifest.GetAssetManifest(AssetManifest.resourcesPath).GetPath(assetName);
    }

    public override void Update()
    {
        if (m_IsDone || m_Error)
            return;

        if (!AssetCache.TryGetRawObject(m_AssetName, out m_RawObject))
        {
            string path = GetAssetPath(m_AssetName);
            if (string.IsNullOrEmpty(path))
            {
                m_Error = true;
                AssetUtility.StopLoadingAsset(m_AssetName);
                return;
            }

            if (m_Async)
            {
                m_resourceRequest ??= Resources.LoadAsync(path, m_AssetType);
                if (m_resourceRequest.isDone)
                    m_RawObject = m_resourceRequest.asset;
            }
            else
            {
                
                m_RawObject = Resources.Load(path, m_AssetType);
            }

            if (m_RawObject != null)
                AssetCache.AddRawObject(m_AssetName, m_RawObject);
        }
        else
            m_RawObject = AssetCache.GetRawObject(m_AssetName);


        m_IsDone = m_RawObject != null;
    }

}

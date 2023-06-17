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
        this.m_assetName = assetName;
        this.m_assetType = assetType;
        this.m_async = async;
    }

    private ResourceRequest m_resourceRequest;

    public override void Dispose()
    {
        m_error = false;
        m_isDone = false;
        m_async = false;
        m_rawObject = null;
        m_assetName = null;
        m_assetType = null;
        onProgress = null;
        onComplete = null;
    }

    public override string GetAssetPath(string assetName)
    {
        return ""; //AssetManifest.GetAssetManifest(AssetManifest.resourcesPath).GetPath(assetName);
    }

    public override void Update()
    {
        if (m_isDone || m_error)
            return;

        if (!AssetCache.TryGetRawObject(m_assetName, out m_rawObject))
        {
            string path = GetAssetPath(m_assetName);
            if (string.IsNullOrEmpty(path))
            {
                m_error = true;
                AssetUtility.StopLoadingAsset(m_assetName);
                return;
            }

            if (m_async)
            {
                m_resourceRequest ??= Resources.LoadAsync(path, m_assetType);
                if (m_resourceRequest.isDone)
                    m_rawObject = m_resourceRequest.asset;
            }
            else
            {
                
                m_rawObject = Resources.Load(path, m_assetType);
            }

            if (m_rawObject != null)
                AssetCache.AddRawObject(m_assetName, m_rawObject);
        }
        else
            m_rawObject = AssetCache.GetRawObject(m_assetName);


        m_isDone = m_rawObject != null;
    }

}

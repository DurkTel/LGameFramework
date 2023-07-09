using System;
using System.Collections;
using System.Collections.Generic;
#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine;

public class EditorAssetLoader : AssetLoader
{
    public EditorAssetLoader(string assetName) : base(assetName)
    {
    }

    //编辑模式下加载没有异步
    public EditorAssetLoader(string assetName, Type assetType) : base(assetName, assetType, false)
    {
    }

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
#if UNITY_EDITOR
        return AssetManifest_Editor.GetAssetManifest(AssetManifest_Editor.editorPath).GetPath(assetName);
#else
        return "";
#endif
    }

    public override void Update()
    {
#if UNITY_EDITOR
        if (m_IsDone || m_Error)
            return;

        if (!AssetCache.TryGetRawObject(m_AssetName, out m_RawObjectInfo))
        {
            string path = GetAssetPath(m_AssetName);
            if (path == "")
            {
                m_Error = true;
                AssetUtility.StopLoadingAsset(m_AssetName);
                return;
            }

            m_RawObject = AssetDatabase.LoadAssetAtPath(path, m_AssetType);
            if (m_RawObject != null)
                m_RawObjectInfo = AssetCache.AddRawObject(m_AssetName, m_RawObject);
        }
        else
        {
            m_RawObjectInfo = AssetCache.GetRawObject(m_AssetName);
            m_RawObject = m_RawObjectInfo.rawObject;
        }


        m_IsDone = m_RawObject != null;
#endif
    }
}

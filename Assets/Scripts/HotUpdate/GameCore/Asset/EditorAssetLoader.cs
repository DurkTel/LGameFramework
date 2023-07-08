using System;
using System.Collections;
using System.Collections.Generic;
//#if UNITY_EDITOR
//using UnityEditor;
//#endif
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
//#if UNITY_EDITOR
//        return AssetManifest_Editor.GetAssetManifest(AssetManifest_Editor.editorPath).GetPath(assetName);
//#else
        return "";
//#endif
    }

    public override void Update()
    {
//#if UNITY_EDITOR
//        if(m_isDone || m_error)
//            return;

//        if (!AssetCache.TryGetRawObject(m_assetName, out m_rawObject))
//        {
//            string path = GetAssetPath(m_assetName);
//            if (path == "")
//            {
//                m_error = true;
//                AssetUtility.StopLoadingAsset(m_assetName);
//                return;
//            }

//            m_rawObject = AssetDatabase.LoadAssetAtPath(path, m_assetType);
//            if (m_rawObject != null)
//                AssetCache.AddRawObject(m_assetName, m_rawObject);
//        }
//        else
//            m_rawObject = AssetCache.GetRawObject(m_assetName);


//        m_isDone = m_rawObject != null;
//#endif
    }
}

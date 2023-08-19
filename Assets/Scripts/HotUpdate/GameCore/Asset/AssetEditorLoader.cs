using LGameFramework.GameBase.Pool;
using System;
using System.Collections;
using System.Collections.Generic;
#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine;

namespace GameCore.Asset
{
    public class AssetEditorLoader : Loader
    {
        //编辑模式下加载没有异步
        public override void SetData(string assetName, System.Type assetType, bool async)
        {
            this.m_AssetName = assetName;
            this.m_AssetType = assetType;
            this.m_Async = false;
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
            Pool<AssetEditorLoader>.Release(this);
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
                    AssetModule.RemoveAssetLoader(m_AssetName);
                    return;
                }

                m_RawObject = AssetDatabase.LoadAssetAtPath(path, m_AssetType);
                if (m_RawObject != null)
                    m_RawObjectInfo = AssetCache.AddRawObject(m_AssetName, m_RawObject);
            }
            else
            {
                m_RawObject = m_RawObjectInfo.rawObject;
            }


            m_IsDone = m_RawObject != null;
#endif
        }
    }
}
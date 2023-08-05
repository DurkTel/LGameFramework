using System;
using UnityEngine;

namespace GameCore.Asset
{
    public class AssetLoader : Loader
    {
        public AssetLoader(string assetName) : base(assetName)
        {
        }

        public AssetLoader(string assetName, System.Type assetType, bool async) : base(assetName, assetType, async)
        {
            this.m_AssetName = assetName;
            this.m_AssetType = assetType;
            this.m_Async = async;
        }
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

        public override string GetAssetPath(string bundleName)
        {
            return AssetModule.GetAssetManifest_Bundle().GetPath(bundleName);
        }

        public string GetBundleName(string assetName)
        {
            return AssetModule.GetAssetManifest_Bundle().GetBundleName(assetName);
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
            if (!AssetModule.TryGetAssetBundle(abName, out m_AssetRecord))
            {
                AssetModule.LoadAssetBundle(abName, false);
                m_AssetRecord = AssetModule.GetAssetBundle(abName);
            }

            if (m_AssetRecord == null || m_AssetRecord.AssetBundle == null) return null;

            UnityEngine.Object obj = m_AssetRecord.AssetBundle.LoadAsset(assetName, type);

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
            //走进来代表没加载/下载完
            if (!AssetModule.TryGetAssetBundle(abName, out m_AssetRecord))
            {
                AssetModule.LoadAssetBundle(abName, true);
                return null;
            }

            m_AssetRecord.IsAssetLoading = true;
            return m_AssetRecord.AssetBundle.LoadAssetAsync(assetName, type);
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
                    AssetModule.RemoveAssetLoader(m_AssetName);
                    return;
                }

                if (m_Async)
                {
                    m_AssetRequest ??= LoadAsync(m_BundleName, m_AssetName, m_AssetType);

                    if (m_AssetRequest != null && m_AssetRequest.isDone)
                        m_RawObject = m_AssetRequest.asset;
                }
                else
                {
                    m_RawObject = Load(m_BundleName, m_AssetName, m_AssetType);
                }

                if (m_RawObject != null)
                {
                    m_RawObjectInfo = AssetCache.AddRawObject(m_AssetName, m_RawObject, m_BundleName);
                    m_AssetRecord.IsAssetLoading = false;
                    //新加载出源资源
                    m_AssetRecord.RawReferenceCount++;
                }
            }
            else
            {
                m_RawObject = m_RawObjectInfo.rawObject;
            }


            m_IsDone = m_RawObject != null;
        }
    }
}
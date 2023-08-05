using GameCore;
using LGameFramework.GameBase;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;

namespace GameCore.Asset
{
    public class AssetBundleLoader : AssetLoader
    {
        public AssetBundleLoader(string assetName) : base(assetName)
        {
        }

        public AssetBundleLoader(string assetName, System.Type assetType, bool async) : base(assetName, assetType, async)
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
        /// <summary>
        /// 是否下载中
        /// </summary>
        private bool m_IsDownloading;

        public override void Dispose()
        {
            m_IsDownloading = false;
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

        public override string GetAssetPath(string bundleName)
        {
            return Module.GetAssetManifest_Bundle().GetPath(bundleName);
        }

        public string GetBundleName(string assetName)
        {
            return Module.GetAssetManifest_Bundle().GetBundleName(assetName);
        }

        /// <summary>
        /// 获取未加载的依赖包
        /// </summary>
        /// <param name="assetName"></param>
        /// <returns></returns>
        public List<string> GetAbsentDependsName(string bundleName)
        {
            string[] result = Module.GetAssetManifest_Bundle().GetDependsName(bundleName);
            List<string> ret = result.ToList();
            AssetBundleRecord record;
            for (int i = ret.Count - 1; i >= 0; i--)
            {
                if (Module.TryGetAssetBundle(result[i], out record))
                {
                    ret.RemoveAt(i);
                    record.DpendsReferenceCount++; //已经加载过了 引用计数加1
                }
            }

            return ret;
        }

        /// <summary>
        /// 异步加载该资源的依赖包
        /// </summary>
        /// <param name="bundleName"></param>
        /// <returns></returns>
        private bool LoadDependenciesAsync(string bundleName)
        {
            m_NeedDepends ??= GetAbsentDependsName(bundleName);

            if (m_NeedDepends.Count > 0 && m_DependsBundleRequest == null)
            {
                string dependName = m_NeedDepends[0];
                m_DependsBundleRequest = AssetBundle.LoadFromFileAsync(Path.Combine(Module.GamePath.downloadDataPath.AssetPath, GetAssetPath(dependName)));
            }

            if (m_DependsBundleRequest != null && m_DependsBundleRequest.isDone)
            {
                AssetBundleRecord record = Module.AddAssetBundle(m_NeedDepends[0], m_DependsBundleRequest.assetBundle);
                record.DpendsReferenceCount++;
                m_NeedDepends.RemoveAt(0);
                m_DependsBundleRequest = null;
            }

            return m_NeedDepends.Count <= 0;
        }

        /// <summary>
        /// 同步加载该资源的依赖包
        /// </summary>
        /// <param name="bundleName"></param>
        private void LoadDependencies(string bundleName)
        {
            m_NeedDepends = GetAbsentDependsName(bundleName);
            foreach (string dependPath in m_NeedDepends)
            {
                AssetBundle ab = AssetBundle.LoadFromFile(Path.Combine(Module.GamePath.downloadDataPath.AssetPath, GetAssetPath(dependPath)));
                AssetBundleRecord record = Module.AddAssetBundle(m_NeedDepends[0], ab);
                record.DpendsReferenceCount++;
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
            if (!Module.TryGetAssetBundle(abName, out m_AssetRecord))
            {
                string assetPath = GetAssetPath(abName);
                string abPath = Path.Combine(Module.GamePath.buildingPath.AssetPath, assetPath);
                if (!File.Exists(abPath))
                {
                    abPath = Path.Combine(Module.GamePath.downloadDataPath.AssetPath, assetPath);
                    if (!File.Exists(abPath))
                    {
                        Module.EnqueueDownload(Path.Combine(Module.GamePath.downloadDataPath.AssetPath, assetPath), abPath);
                        m_IsDownloading = true;
                    }
                }
                m_AssetRecord = Module.AddAssetBundle(abName, AssetBundle.LoadFromFile(abPath));
            }

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
            if (!Module.TryGetAssetBundle(abName, out m_AssetRecord))
            {
                m_BundleRequest ??= AssetBundle.LoadFromFileAsync(Path.Combine(Module.GamePath.downloadDataPath.AssetPath, GetAssetPath(abName)));
                if (m_BundleRequest.isDone)
                    m_AssetRecord = Module.AddAssetBundle(abName, m_BundleRequest.assetBundle);
                else
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
                    Module.RemoveAssetLoader(m_AssetName);
                    return;
                }

                if (m_Async)
                {
                    if (!LoadDependenciesAsync(m_BundleName))
                        return;

                    m_AssetRequest ??= LoadAsync(m_BundleName, m_AssetName, m_AssetType);

                    if (m_AssetRequest != null && m_AssetRequest.isDone)
                        m_RawObject = m_AssetRequest.asset;
                }
                else
                {
                    LoadDependencies(m_BundleName);

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
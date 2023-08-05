using LGameFramework.GameBase;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;

namespace GameCore.Asset
{
    public class AssetBundleLoader : Loader
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
        /// 资源包体加载
        /// </summary>
        private AssetBundleCreateRequest m_BundleRequest;
        /// <summary>
        /// AB包
        /// </summary>
        private AssetBundleRecord m_AssetRecord;
        /// <summary>
        /// 下载中列表
        /// </summary>
        private Dictionary<string, AssetFileDownloader> m_DownloadingMap;
        /// <summary>
        /// 下载完成列表
        /// </summary>
        private List<string> m_DownloadCompleteList;

        public override void Dispose()
        {
            m_Error = false;
            m_IsDone = false;
            m_Async = false;
            m_AssetName = null;
            m_AssetRecord = null;
        }

        /// <summary>
        /// 获取AB包路径
        /// </summary>
        /// <param name="bundleName"></param>
        /// <returns></returns>
        public override string GetAssetPath(string bundleName)
        {
            if (m_DownloadingMap != null && m_DownloadingMap.ContainsKey(bundleName)) return null;

            string path = Module.GetAssetManifest_Bundle().GetPath(bundleName);
            string filePath = Path.Combine(Module.GamePath.downloadDataPath.AssetPath, path);
            //先去判断下载路径是否有
            if (!File.Exists(filePath))
                filePath = Path.Combine(Module.GamePath.buildingPath.AssetPath, path); //再判断首包路径

            //都没有 文件异常 重新从资源服务器下载
            if (!File.Exists(filePath))
                return null;

            return filePath;
        }

        /// <summary>
        /// 获取CRC校验码
        /// </summary>
        /// <param name="bundleName"></param>
        /// <returns></returns>
        public uint GetCRC(string bundleName)
        {
            return Module.GetAssetManifest_Bundle().GetCRC(bundleName);
        }

        /// <summary>
        /// 文件异常 尝试重新从资源服务器下载
        /// </summary>
        private void TryDownloadFile(string fileName)
        {
            if (m_DownloadingMap != null && m_DownloadingMap.ContainsKey(fileName)) return;
            string path = Module.GetAssetManifest_Bundle().GetPath(fileName);
            string serverPath = Path.Combine(Module.GamePath.serverDataPath.AssetPath, path);
            string downloadPath = Path.Combine(Module.GamePath.downloadDataPath.AssetPath, path);
            AssetFileDownloader downloader = Module.EnqueueDownload(serverPath, downloadPath);
            m_DownloadingMap ??= new Dictionary<string, AssetFileDownloader>();
            m_DownloadingMap.Add(fileName, downloader);
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
        /// 同步加载AB包
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        private AssetBundleRecord Load(string abName)
        {
            AssetBundleRecord assetBundle;

            if (!Module.TryGetAssetBundle(abName, out assetBundle))
            {
                string path = GetAssetPath(abName);
                if (path == null)
                {
                    Debug.LogError("同步加载AB时发生文件异常！");
                    return null;
                }
                uint crc = GetCRC(abName);
                assetBundle = Module.AddAssetBundle(abName, AssetBundle.LoadFromFile(path, crc));
            }

            return assetBundle;
        }

        /// <summary>
        /// 异步加载AB包
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        private AssetBundleRecord LoadAsync(string abName)
        {
            AssetBundleRecord assetBundle;
            if (!Module.TryGetAssetBundle(abName, out assetBundle))
            {
                string path = GetAssetPath(abName);
                if (path == null)
                {
                    TryDownloadFile(abName);
                    return null;
                }
                uint crc = GetCRC(abName);
                m_BundleRequest ??= AssetBundle.LoadFromFileAsync(path, crc);
                if (m_BundleRequest.isDone)
                { 
                    assetBundle = Module.AddAssetBundle(abName, m_BundleRequest.assetBundle);
                    assetBundle.IsAssetLoading = true;
                }
            }

            return assetBundle;
        }

        public override void Update()
        {
            if (m_IsDone || m_Error)
                return;

            if (m_DownloadingMap != null && m_DownloadingMap.Count > 0)
            {
                foreach (var item in m_DownloadingMap)
                {
                    if (item.Value.IsDone)
                    {
                        m_DownloadCompleteList ??= new List<string>();
                        m_DownloadCompleteList.Add(item.Key);
                    }
                }

                if (m_DownloadCompleteList != null && m_DownloadCompleteList.Count > 0)
                {
                    foreach (string key in m_DownloadCompleteList)
                    {
                        m_DownloadingMap.Remove(key);
                    }
                    m_DownloadCompleteList.Clear();
                }
            }

            if (!Module.TryGetAssetBundle(m_AssetName, out m_AssetRecord))
            {
                if (string.IsNullOrEmpty(m_AssetName) || string.IsNullOrEmpty(m_AssetName))
                {
                    m_Error = true;
                    Module.RemoveAssetLoader(m_AssetName);
                    return;
                }

                if (m_Async)
                    m_AssetRecord = LoadAsync(m_AssetName);
                else
                    m_AssetRecord = Load(m_AssetName);

            }

            m_IsDone = m_AssetRecord != null && m_AssetRecord.AssetBundle != null;
        }
    }
}
using LGameFramework.GameBase;
using System.IO;
using UnityEngine;

namespace LGameFramework.GameCore.Asset
{
    public class AssetBundleLoader : Loader
    {
        /// <summary>
        /// 资源包体加载
        /// </summary>
        private AssetBundleCreateRequest m_BundleRequest;
        /// <summary>
        /// 资源包的信息
        /// </summary>
        private AssetBundleRecord m_AssetRecord;
        /// <summary>
        /// 下载器
        /// </summary>
        private AssetFileDownloader m_AssetDownloader;
        /// <summary>
        /// 是否被动加载
        /// </summary>
        private bool m_IsPassive;

        public override float Progress { get { return m_BundleRequest != null ? m_BundleRequest.progress : 0f; } }

        public virtual void SetData(string assetName, bool async, bool passive)
        {
            this.m_AssetName = assetName;
            this.m_IsPassive = passive;
            this.m_Async = async;
        }

        public override void Dispose()
        {
            m_Error = false;
            m_IsDone = false;
            m_Async = false;
            m_AssetName = null;
            m_AssetRecord = null;
            m_AssetDownloader = null;
            m_BundleRequest = null;
            Pool.Release(this);
        }

        /// <summary>
        /// 获取AB包路径
        /// </summary>
        /// <param name="bundleName"></param>
        /// <returns></returns>
        public override string GetAssetPath(string bundleName)
        {
            //正在下载中
            if (m_AssetDownloader != null) return null;

            string path = AssetModule.GetAssetManifest_Bundle().GetPath(bundleName);
            string filePath = Path.Combine(AssetModule.GamePath.downloadDataPath.AssetPath, path);
            //先去判断下载路径是否有
            if (!File.Exists(filePath))
                filePath = Path.Combine(AssetModule.GamePath.buildingPath.AssetPath, path); //再判断首包路径

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
            return AssetModule.GetAssetManifest_Bundle().GetCRC(bundleName);
        }

        /// <summary>
        /// 文件异常 尝试重新从资源服务器下载
        /// </summary>
        private void TryDownloadFile(string fileName)
        {
            if (m_AssetDownloader != null) return;
            string path = AssetModule.GetAssetManifest_Bundle().GetPath(fileName);
            string serverPath = Path.Combine(AssetModule.GamePath.serverDataPath.AssetPath, path);
            string downloadPath = Path.Combine(AssetModule.GamePath.downloadDataPath.AssetPath, path);
            m_AssetDownloader = AssetModule.EnqueueDownload(serverPath, downloadPath);
        }

        /// <summary>
        /// 同步加载AB包
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        private AssetBundleRecord Load(string abPath, uint crc)
        {
            AssetBundle bundle = AssetBundle.LoadFromFile(abPath, crc);
            AssetBundleRecord assetBundle = AssetModule.AddAssetBundle(m_AssetName, bundle);

            //如果是被动加载 引用计数+1
            if (m_IsPassive)
                assetBundle.DpendsReferenceCount++;

            return assetBundle;
        }

        /// <summary>
        /// 异步加载AB包
        /// </summary>
        /// <param name="abPath"></param>
        /// <returns></returns>
        private AssetBundleRecord LoadAsync(string abPath, uint crc)
        {
            m_BundleRequest ??= AssetBundle.LoadFromFileAsync(abPath, crc);
            AssetBundleRecord assetBundle = AssetModule.RecordAssetBundle(m_AssetName);
            
            return assetBundle;
        }

        public override void Update()
        {
            if (m_IsDone || m_Error)
                return;

            if (m_AssetDownloader != null)
            {
                if (!m_AssetDownloader.IsDone)
                    return;

                m_AssetDownloader.Dispose();
                m_AssetDownloader = null;
                //下载完成 重新请求加载
                m_BundleRequest = null;
            }

            if (!AssetModule.TryGetAssetBundle(m_AssetName, out m_AssetRecord))
            {
                if (string.IsNullOrEmpty(m_AssetName) || string.IsNullOrEmpty(m_AssetName))
                {
                    m_Error = true;
                    AssetModule.RemoveAssetLoader(m_AssetName);
                    return;
                }

                string path = GetAssetPath(m_AssetName);
                if (path == null) //文件丢失
                {
                    Debug.LogWarning(string.Format("文件丢失，尝试重新下载：文件名{0}，文件路径{1}", m_AssetName, path));
                    TryDownloadFile(m_AssetName);
                    return;
                }

                uint crc = GetCRC(m_AssetName);

                if (m_Async)
                    m_AssetRecord = LoadAsync(path, crc);
                else
                    m_AssetRecord = Load(path, crc);
            }

            UpdateProgress();
            m_IsDone = m_AssetRecord != null && m_AssetRecord.IsLoadComplete;
        }

        private void UpdateProgress()
        {
            if (m_Async)
            {
                if (m_BundleRequest.isDone && m_BundleRequest.assetBundle != null)
                {
                    m_AssetRecord.AssetBundle = m_BundleRequest.assetBundle;

                    //如果是被动加载 引用计数+1
                    if (m_IsPassive)
                        m_AssetRecord.DpendsReferenceCount++;
                    else
                        m_AssetRecord.IsAssetLoading = true;
                }
            }

            if ((!m_Async && !m_AssetRecord.IsLoadComplete) || (m_Async && m_BundleRequest.isDone && m_BundleRequest.assetBundle == null))
            {
                Debug.LogWarning(string.Format("文件校验失败，尝试重新下载：文件名{0}", m_AssetName));
                //移除记录 等待重新下载
                AssetModule.RemoveAssetBundle(m_AssetName);
                TryDownloadFile(m_AssetName);
            }
        }
    }

   
}
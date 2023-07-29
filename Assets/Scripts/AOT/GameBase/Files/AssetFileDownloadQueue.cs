using System;
using System.Collections.Generic;
using LGameFramework.GameBase.Pool;

namespace LGameFramework.GameBase
{
    /// <summary>
    /// 并发文件下载队列
    /// </summary>
    public class AssetFileDownloadQueue : IDisposable
    {
        private bool m_Pause;
        public bool Pause { get { return m_Pause; } }

        private readonly int m_MaximumSimultaneouslyDownloading = 10;
        /// <summary>
        /// 最大同时下载数
        /// </summary>
        public int MaximumSimultaneouslyDownloading { get { return m_MaximumSimultaneouslyDownloading; } }
        
        private Queue<AssetFileDownloader> m_DownloaderQueuePrepare;
        /// <summary>
        /// 预备下载队列
        /// </summary>
        public Queue<AssetFileDownloader> DownloaderQueuePrepare { get { return m_DownloaderQueuePrepare; } }
        
        private List<AssetFileDownloader> m_DownloadingCurrent;
        /// <summary>
        /// 正在下载列表
        /// </summary>
        public List<AssetFileDownloader> DownloadingCurrent { get { return m_DownloadingCurrent; } }

        public void SetPause(bool value)
        {
            m_Pause = value;
        }

        public void Enqueue(string downloadURL, string downloadPath)
        {
            AssetFileDownloader assetFileDownloader = Pool<AssetFileDownloader>.Get();
            assetFileDownloader.SetData(downloadURL, downloadPath);
            Enqueue(assetFileDownloader);
        }

        public void Enqueue(AssetFileDownloader loader)
        {
            m_DownloaderQueuePrepare ??= new Queue<AssetFileDownloader>();
            m_DownloaderQueuePrepare.Enqueue(loader);
            DownloadStart();
        }

        private void DownloadStart()
        {
            m_DownloadingCurrent ??= new List<AssetFileDownloader>();

            if (m_DownloaderQueuePrepare == null || m_DownloaderQueuePrepare.Count == 0 || m_DownloadingCurrent.Count >= m_MaximumSimultaneouslyDownloading)
                return;

            AssetFileDownloader loader = m_DownloaderQueuePrepare.Dequeue();
            loader.Reset();
            m_DownloadingCurrent.Add(loader);
        }


        public void Update()
        {
            if (m_Pause || m_DownloadingCurrent == null || m_DownloadingCurrent.Count == 0)
                return;

            AssetFileDownloader loader = null;
            for (int i = m_DownloadingCurrent.Count - 1; i >= 0; i--)
            {
                loader = m_DownloadingCurrent[i];

                if (loader.IsDone)
                {
                    m_DownloadingCurrent.Remove(loader);
                    loader.Dispose();
                    Pool<AssetFileDownloader>.Release(loader);
                    DownloadStart();
                }
            }
        }

        public void Dispose()
        {
            if (m_DownloadingCurrent != null)
                m_DownloadingCurrent.Clear();

            m_DownloadingCurrent = null;

            if (m_DownloaderQueuePrepare != null)
                m_DownloaderQueuePrepare.Clear();

            m_DownloaderQueuePrepare = null;
        }
    }
}

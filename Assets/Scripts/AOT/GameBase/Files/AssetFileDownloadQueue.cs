using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase
{
    public class AssetFileDownloadQueue : SingletonMonoAuto<AssetFileDownloadQueue>
    {
        private bool m_Pause;
        public bool pause { get { return m_Pause; } }

        private int m_MaximumSimultaneouslyDownloading = 10;
        /// <summary>
        /// 最大同时下载数
        /// </summary>
        public int maximumSimultaneouslyDownloading { get { return m_MaximumSimultaneouslyDownloading; } }
        
        private Queue<AssetFileDownloader> m_DownloaderQueuePrepare;
        /// <summary>
        /// 预备下载队列
        /// </summary>
        public Queue<AssetFileDownloader> downloaderQueuePrepare { get { return m_DownloaderQueuePrepare; } }
        
        private List<AssetFileDownloader> m_DownloadingCurrent;
        /// <summary>
        /// 正在下载列表
        /// </summary>
        public List<AssetFileDownloader> downloadingCurrent { get { return m_DownloadingCurrent; } }


        public static void Pause(bool value)
        {
            instance.m_Pause = value;
        }

        public static void Enqueue(AssetFileDownloader loader)
        {
            instance.m_DownloaderQueuePrepare ??= new Queue<AssetFileDownloader>();
            instance.m_DownloaderQueuePrepare.Enqueue(loader);
            instance.DownloadStart();
        }


        public static void Enqueue(string downloadURL, string downloadPath)
        {
            AssetFileDownloader assetFileDownloader = Pool<AssetFileDownloader>.Get();
            assetFileDownloader.SetData(downloadURL, downloadPath);
            Enqueue(assetFileDownloader);
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


        private void Update()
        {
            if (m_Pause || m_DownloadingCurrent == null || m_DownloadingCurrent.Count == 0)
                return;

            AssetFileDownloader loader = null;
            for (int i = m_DownloadingCurrent.Count - 1; i >= 0; i--)
            {
                loader = m_DownloadingCurrent[i];

                if (loader.isDone)
                {
                    m_DownloadingCurrent.Remove(loader);
                    loader.Dispose();
                    Pool<AssetFileDownloader>.Release(loader);
                    DownloadStart();
                }
            }
        }
    }
}

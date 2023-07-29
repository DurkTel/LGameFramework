using System;
using System.Collections;
using System.ComponentModel;
using System.IO;
using System.Net;
using UnityEngine;
using LGameFramework.GameBase.Pool;

namespace LGameFramework.GameBase
{
    /// <summary>
    /// 文件下载器
    /// </summary>
    public class AssetFileDownloader : IEnumerator, IDisposable
    {
        protected object m_Current;
        public object Current { get { return m_Current; } }

        protected string m_DownloadURL;
        public string DownloadURL { get { return m_DownloadURL; } }

        protected string m_DownloadPath;
        public string DownloadPath { get { return m_DownloadPath; } }

        protected float m_Progress;
        public float Progress { get { return m_Progress; } }

        protected bool m_IsDone;
        public bool IsDone { get { return m_IsDone; } } 

        protected WebClient m_WebClient;
        public WebClient WebClient { get { return m_WebClient; } }

        private void Download()
        {
            if (!Directory.Exists(Path.GetDirectoryName(m_DownloadPath)))
                Directory.CreateDirectory(Path.GetDirectoryName(m_DownloadPath));

            if (File.Exists(m_DownloadPath))
                File.Delete(m_DownloadPath);
            m_WebClient = Pool<WebClient>.Get();
            m_WebClient.DownloadFileAsync(new System.Uri(m_DownloadURL), m_DownloadPath);
            m_WebClient.DownloadProgressChanged += DownloadProgressChanged;
            m_WebClient.DownloadFileCompleted += DownloadFileCompleted;
        }

        public void DownloadFileAsync(string downloadURL, string downloadPath)
        {
            SetData(downloadURL, downloadPath);
            Download();
        }

        public void SetData(string downloadURL, string downloadPath)
        {
            if (string.IsNullOrEmpty(downloadURL) || string.IsNullOrEmpty(downloadPath))
            {
                Debug.LogError("下载异常，地址为空");
                return;
            }
            m_DownloadURL = downloadURL;
            m_DownloadPath = downloadPath;
        }

        public bool MoveNext()
        {
            return !m_IsDone;
        }

        public void Reset()
        {
            Dispose();
            Download();
        }

        public void Dispose()
        {
            if (m_WebClient == null) return;
            m_WebClient.DownloadProgressChanged -= DownloadProgressChanged;
            m_WebClient.DownloadFileCompleted -= DownloadFileCompleted;
            m_WebClient.CancelAsync();
            m_WebClient.Dispose();
            m_Current = null;
            Pool<WebClient>.Release(m_WebClient);
        }

        protected void DownloadProgressChanged(object obj, DownloadProgressChangedEventArgs eventArgs)
        {
            m_Progress = eventArgs.ProgressPercentage;
            Debug.Log("下载进度：" + m_DownloadPath + m_Progress);
        }

        protected void DownloadFileCompleted(object obj, AsyncCompletedEventArgs eventArgs)
        {
            m_IsDone = true;
            m_Current = obj;
        }
    }
}

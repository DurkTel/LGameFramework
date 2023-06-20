using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using UnityEngine;

namespace LGameFramework.GameBase
{
    public class AssetFileDownloader : IEnumerator, IDisposable
    {
        public object Current { get; }

        protected float m_DownloadURL;
        public float downloadURL { get { return m_DownloadURL; } }

        protected float m_DownloadPath;
        public float downloadPath { get { return m_DownloadPath; } }

        protected float m_Progress;
        public float progress { get { return m_Progress; } }

        protected bool m_IsDone;
        public bool isDone { get { return m_IsDone; } } 

        protected WebClient m_WebClient;
        public WebClient webClient { get { return m_WebClient; } }

        

        public bool MoveNext()
        {
            return !m_IsDone;
        }

        public void Reset()
        {
            
        }

        public void Dispose()
        {
            m_WebClient.Dispose();
        }

        protected void DownloadProgressChanged(object obj, DownloadProgressChangedEventArgs eventArgs)
        {
            m_Progress = eventArgs.ProgressPercentage;
        }

        protected void DownloadFileCompleted(object obj, DownloadProgressChangedEventArgs eventArgs)
        {
            m_IsDone = true;
        }
    }
}

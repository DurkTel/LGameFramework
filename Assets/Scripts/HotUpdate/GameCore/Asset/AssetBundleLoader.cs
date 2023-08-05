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
        /// ��Դ�������
        /// </summary>
        private AssetBundleCreateRequest m_BundleRequest;
        /// <summary>
        /// AB��
        /// </summary>
        private AssetBundleRecord m_AssetRecord;
        /// <summary>
        /// �������б�
        /// </summary>
        private Dictionary<string, AssetFileDownloader> m_DownloadingMap;
        /// <summary>
        /// ��������б�
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
        /// ��ȡAB��·��
        /// </summary>
        /// <param name="bundleName"></param>
        /// <returns></returns>
        public override string GetAssetPath(string bundleName)
        {
            if (m_DownloadingMap != null && m_DownloadingMap.ContainsKey(bundleName)) return null;

            string path = Module.GetAssetManifest_Bundle().GetPath(bundleName);
            string filePath = Path.Combine(Module.GamePath.downloadDataPath.AssetPath, path);
            //��ȥ�ж�����·���Ƿ���
            if (!File.Exists(filePath))
                filePath = Path.Combine(Module.GamePath.buildingPath.AssetPath, path); //���ж��װ�·��

            //��û�� �ļ��쳣 ���´���Դ����������
            if (!File.Exists(filePath))
                return null;

            return filePath;
        }

        /// <summary>
        /// ��ȡCRCУ����
        /// </summary>
        /// <param name="bundleName"></param>
        /// <returns></returns>
        public uint GetCRC(string bundleName)
        {
            return Module.GetAssetManifest_Bundle().GetCRC(bundleName);
        }

        /// <summary>
        /// �ļ��쳣 �������´���Դ����������
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
        /// ��ȡδ���ص�������
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
                    record.DpendsReferenceCount++; //�Ѿ����ع��� ���ü�����1
                }
            }

            return ret;
        }

        /// <summary>
        /// ͬ������AB��
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
                    Debug.LogError("ͬ������ABʱ�����ļ��쳣��");
                    return null;
                }
                uint crc = GetCRC(abName);
                assetBundle = Module.AddAssetBundle(abName, AssetBundle.LoadFromFile(path, crc));
            }

            return assetBundle;
        }

        /// <summary>
        /// �첽����AB��
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
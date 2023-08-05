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
        /// ������
        /// </summary>
        private AssetFileDownloader m_AssetDownloader;

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
            if (m_AssetDownloader != null) return null;

            string path = AssetModule.GetAssetManifest_Bundle().GetPath(bundleName);
            string filePath = Path.Combine(AssetModule.GamePath.downloadDataPath.AssetPath, path);
            //��ȥ�ж�����·���Ƿ���
            if (!File.Exists(filePath))
                filePath = Path.Combine(AssetModule.GamePath.buildingPath.AssetPath, path); //���ж��װ�·��

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
            return AssetModule.GetAssetManifest_Bundle().GetCRC(bundleName);
        }

        /// <summary>
        /// �ļ��쳣 �������´���Դ����������
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
        /// ��ȡδ���ص�������
        /// </summary>
        /// <param name="assetName"></param>
        /// <returns></returns>
        public List<string> GetAbsentDependsName(string bundleName)
        {
            string[] result = AssetModule.GetAssetManifest_Bundle().GetDependsName(bundleName);
            List<string> ret = result.ToList();
            AssetBundleRecord record;
            for (int i = ret.Count - 1; i >= 0; i--)
            {
                if (AssetModule.TryGetAssetBundle(result[i], out record))
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
        private AssetBundleRecord Load(string abPath, uint crc)
        {
            AssetBundle bundle = AssetBundle.LoadFromFile(abPath, crc);
            if (bundle == null) return null;
            AssetBundleRecord assetBundle = AssetModule.AddAssetBundle(m_AssetName, bundle);

            return assetBundle;
        }

        /// <summary>
        /// �첽����AB��
        /// </summary>
        /// <param name="abPath"></param>
        /// <returns></returns>
        private AssetBundleRecord LoadAsync(string abPath, uint crc)
        {
            AssetBundleRecord assetBundle = null;
            m_BundleRequest ??= AssetBundle.LoadFromFileAsync(abPath, crc);
            if (m_BundleRequest.isDone && m_BundleRequest.assetBundle != null)
            {
                assetBundle = AssetModule.AddAssetBundle(m_AssetName, m_BundleRequest.assetBundle);
                assetBundle.IsAssetLoading = true;
            }

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

                m_AssetDownloader = null;
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

                if (!AssetModule.TryGetAssetBundle(m_AssetName, out m_AssetRecord))
                {
                    string path = GetAssetPath(m_AssetName);
                    if (path == null) //�ļ���ʧ
                    {
                        Debug.LogError("�ļ���ʧ��������������");
                        TryDownloadFile(m_AssetName);
                        return;
                    }

                    uint crc = GetCRC(m_AssetName);

                    if (m_Async)
                        m_AssetRecord = LoadAsync(path, crc);
                    else
                        m_AssetRecord = Load(path, crc);
                }

                if ((!m_Async && m_AssetRecord == null) || m_Async && m_BundleRequest.isDone && m_BundleRequest.assetBundle == null)
                {
                    Debug.LogError("�ļ�У��ʧ�ܣ�������������");
                    TryDownloadFile(m_AssetName);
                }

            }

            m_IsDone = m_AssetRecord != null && m_AssetRecord.AssetBundle != null;
        }
    }
}
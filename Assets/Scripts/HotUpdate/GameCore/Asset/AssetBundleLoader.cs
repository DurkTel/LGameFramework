using LGameFramework.GameBase;
using System.IO;
using UnityEngine;

namespace LGameFramework.GameCore.Asset
{
    public class AssetBundleLoader : Loader
    {
        /// <summary>
        /// ��Դ�������
        /// </summary>
        private AssetBundleCreateRequest m_BundleRequest;
        /// <summary>
        /// ��Դ������Ϣ
        /// </summary>
        private AssetBundleRecord m_AssetRecord;
        /// <summary>
        /// ������
        /// </summary>
        private AssetFileDownloader m_AssetDownloader;
        /// <summary>
        /// �Ƿ񱻶�����
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
        /// ��ȡAB��·��
        /// </summary>
        /// <param name="bundleName"></param>
        /// <returns></returns>
        public override string GetAssetPath(string bundleName)
        {
            //����������
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
        /// ͬ������AB��
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        private AssetBundleRecord Load(string abPath, uint crc)
        {
            AssetBundle bundle = AssetBundle.LoadFromFile(abPath, crc);
            AssetBundleRecord assetBundle = AssetModule.AddAssetBundle(m_AssetName, bundle);

            //����Ǳ������� ���ü���+1
            if (m_IsPassive)
                assetBundle.DpendsReferenceCount++;

            return assetBundle;
        }

        /// <summary>
        /// �첽����AB��
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
                //������� �����������
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
                if (path == null) //�ļ���ʧ
                {
                    Debug.LogWarning(string.Format("�ļ���ʧ�������������أ��ļ���{0}���ļ�·��{1}", m_AssetName, path));
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

                    //����Ǳ������� ���ü���+1
                    if (m_IsPassive)
                        m_AssetRecord.DpendsReferenceCount++;
                    else
                        m_AssetRecord.IsAssetLoading = true;
                }
            }

            if ((!m_Async && !m_AssetRecord.IsLoadComplete) || (m_Async && m_BundleRequest.isDone && m_BundleRequest.assetBundle == null))
            {
                Debug.LogWarning(string.Format("�ļ�У��ʧ�ܣ������������أ��ļ���{0}", m_AssetName));
                //�Ƴ���¼ �ȴ���������
                AssetModule.RemoveAssetBundle(m_AssetName);
                TryDownloadFile(m_AssetName);
            }
        }
    }

   
}
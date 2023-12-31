using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.Asset
{
    public class AssetBundleRecord 
    {
        /// <summary>
        /// AB��
        /// </summary>
        public AssetBundle AssetBundle { get; set; }
        /// <summary>
        /// ����
        /// </summary>
        public string BundleName { get; set; }
        /// <summary>
        /// ������AB�������ü���
        /// </summary>
        public int DpendsReferenceCount { get; set; }
        /// <summary>
        /// ��AB�����س�����Դ�������
        /// </summary>
        public int RawReferenceCount { get; set; }
        /// <summary>
        /// ��AB�Ƿ����ڼ�����Դ
        /// </summary>
        public bool IsAssetLoading { get; set; }
        /// <summary>
        /// ��ʼ�ȴ������¼�
        /// </summary>
        public float BeginUnloadTime { get; set; }
        /// <summary>
        /// �Ƿ�������
        /// </summary>
        public bool IsLoadComplete { get { return AssetBundle != null; } }

        /// <summary>
        /// ж�ش�AB��
        /// </summary>
        /// <param name="unloadAllLoadedObjects"></param>
        internal void Unload(bool unloadAllLoadedObjects = false)
        {
            AssetBundle.Unload(unloadAllLoadedObjects);
            AssetBundle = null;
            BundleName = null;
            DpendsReferenceCount = 0;
            RawReferenceCount = 0;
        }
    }
}

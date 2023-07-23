using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.Asset
{
    public class AssetBundleRecord 
    {
        /// <summary>
        /// AB��
        /// </summary>
        public AssetBundle assetBundle { get; set; }
        /// <summary>
        /// ����
        /// </summary>
        public string bundleName { get; set; }
        /// <summary>
        /// ������AB�������ü���
        /// </summary>
        public int dpendsReferenceCount { get; set; }
        /// <summary>
        /// ��AB�����س�����Դ�������
        /// </summary>
        public int rawReferenceCount { get; set; }
        /// <summary>
        /// ��AB�Ƿ����ڼ�����Դ
        /// </summary>
        public bool isAssetLoading { get; set; }
        /// <summary>
        /// ��ʼ�ȴ������¼�
        /// </summary>
        public float beginDestroyTime { get; set; }

        /// <summary>
        /// ж�ش�AB��
        /// </summary>
        /// <param name="unloadAllLoadedObjects"></param>
        internal void Unload(bool unloadAllLoadedObjects = false)
        {
            assetBundle.Unload(unloadAllLoadedObjects);
            assetBundle = null;
            bundleName = null;
            dpendsReferenceCount = 0;
            rawReferenceCount = 0;
        }
    }
}

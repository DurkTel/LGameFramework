using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.Asset
{
    public class AssetBundleRecord 
    {
        /// <summary>
        /// AB包
        /// </summary>
        public AssetBundle assetBundle { get; set; }
        /// <summary>
        /// 包名
        /// </summary>
        public string bundleName { get; set; }
        /// <summary>
        /// 依赖此AB包的引用计数
        /// </summary>
        public int dpendsReferenceCount { get; set; }
        /// <summary>
        /// 此AB包加载出来的源对象计数
        /// </summary>
        public int rawReferenceCount { get; set; }
        /// <summary>
        /// 此AB是否正在加载资源
        /// </summary>
        public bool isAssetLoading { get; set; }
        /// <summary>
        /// 开始等待销毁事件
        /// </summary>
        public float beginDestroyTime { get; set; }

        /// <summary>
        /// 卸载此AB包
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

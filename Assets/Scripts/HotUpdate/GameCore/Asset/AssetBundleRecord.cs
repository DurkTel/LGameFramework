using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.Asset
{
    public class AssetBundleRecord 
    {
        /// <summary>
        /// AB包
        /// </summary>
        public AssetBundle AssetBundle { get; set; }
        /// <summary>
        /// 包名
        /// </summary>
        public string BundleName { get; set; }
        /// <summary>
        /// 依赖此AB包的引用计数
        /// </summary>
        public int DpendsReferenceCount { get; set; }
        /// <summary>
        /// 此AB包加载出来的源对象计数
        /// </summary>
        public int RawReferenceCount { get; set; }
        /// <summary>
        /// 此AB是否正在加载资源
        /// </summary>
        public bool IsAssetLoading { get; set; }
        /// <summary>
        /// 开始等待销毁事件
        /// </summary>
        public float BeginUnloadTime { get; set; }
        /// <summary>
        /// 是否加载完成
        /// </summary>
        public bool IsLoadComplete { get { return AssetBundle != null; } }

        /// <summary>
        /// 卸载此AB包
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

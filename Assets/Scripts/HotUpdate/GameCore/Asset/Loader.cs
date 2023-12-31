using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.Events;

namespace LGameFramework.GameCore.Asset
{
    public abstract class Loader : IEnumerator
    {
        public GMAssetManager AssetModule { get; set; }
        /// <summary>
        /// 资源名字
        /// </summary>
        protected string m_AssetName;
        public string AssetName { get { return m_AssetName; } }
        /// <summary>
        /// 资源类型
        /// </summary>
        protected System.Type m_AssetType;
        public System.Type AssetType { get { return m_AssetType; } }
        /// <summary>
        /// 是否加载完成
        /// </summary>
        protected bool m_IsDone;
        public bool IsDone { get { return m_IsDone; } }
        /// <summary>
        /// 加载进度
        /// </summary>
        public abstract float Progress { get; }
        /// <summary>
        /// 优先级
        /// </summary>
        protected int m_Priority;
        public int Priority { get { return m_Priority; } }
        /// <summary>
        /// 是否异步
        /// </summary>
        protected bool m_Async;
        public bool Async { get { return m_Async; } }
        /// <summary>
        /// 错误
        /// </summary>
        protected bool m_Error;
        public bool Error { get { return m_Error; } }

        protected Object m_RawObject;

        protected AssetCache.RawObjectInfo m_RawObjectInfo;
        public AssetCache.RawObjectInfo RawObjectInfo { get { return m_RawObjectInfo; } }

        public object Current { get; }

        public UnityAction<float> onProgress;

        public UnityAction<Loader> onComplete;

        public virtual void SetData(string assetName)
        {
            this.m_AssetName = assetName;
            this.m_AssetType = typeof(Object);
            this.m_Async = false;
        }

        public virtual void SetData(string assetName, System.Type assetType)
        {
            this.m_AssetName = assetName;
            this.m_AssetType = assetType;
            this.m_Async = false;
        }
        /// <summary>
        /// 设置加载器信息
        /// </summary>
        /// <param name="assetName">资源名称</param>
        /// <param name="assetType">资源类型</param>
        /// <param name="async">是否异步</param>
        public virtual void SetData(string assetName, System.Type assetType, bool async)
        {
            this.m_AssetName = assetName;
            this.m_AssetType = assetType;
            this.m_Async = async;
        }

        /// <summary>
        /// 帧更新
        /// </summary>
        public abstract void Update();

        /// <summary>
        /// 获取资源地址
        /// </summary>
        /// <param name="assetName">资源名称</param>
        /// <returns>资源地址</returns>
        public abstract string GetAssetPath(string assetName);

        /// <summary>
        /// 销毁
        /// </summary>
        public abstract void Dispose();

        /// <summary>
        /// 获取加载出来的源对象
        /// </summary>
        /// <typeparam name="T">资源类型</typeparam>
        /// <returns>源对象</returns>
        public virtual T GetRawObject<T>() where T : Object
        {
            if (!m_IsDone)
            {
                Debug.LogError("资源未加载完成，就尝试获取源对象");
                return null;
            }

            AssetCache.RawObjectInfo rawObject = AssetCache.GetRawObject(m_AssetName);
            return rawObject.rawObject as T;
        }

        /// <summary>
        /// 获取加载出来的源对象的实例
        /// </summary>
        /// <typeparam name="T">资源类型</typeparam>
        /// <returns>源对象实例</returns>
        public virtual T GetInstantiate<T>() where T : Object
        {
            if (!m_IsDone)
            {
                Debug.LogError("资源未加载完成，就尝试获取源对象");
                return null;
            }

            AssetCache.RawObjectInfo rawObject = AssetCache.GetRawObject(m_AssetName);
            Object instance = Object.Instantiate(rawObject.rawObject);
            AssetCache.AddInstanceObject(instance.GetInstanceID(), instance, rawObject);

            return instance as T;
        }

        public bool MoveNext()
        {
            return m_IsDone;
        }

        public void Reset()
        {

        }
    }
}
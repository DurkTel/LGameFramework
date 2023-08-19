using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.Events;

namespace GameCore.Asset
{
    public abstract class Loader : IEnumerator
    {
        public GMAssetManager AssetModule { get; set; }

        protected string m_AssetName;
        public string AssetName { get { return m_AssetName; } }

        protected System.Type m_AssetType;
        public System.Type AssetType { get { return m_AssetType; } }

        protected bool m_IsDone;
        public bool IsDone { get { return m_IsDone; } }

        protected float m_Progress;
        public float Progress { get { return m_Progress; } }

        protected int m_Priority;
        public int Priority { get { return m_Priority; } }

        protected bool m_Async;
        public bool Async { get { return m_Async; } }

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

        public virtual void SetData(string assetName, System.Type assetType, bool async)
        {
            this.m_AssetName = assetName;
            this.m_AssetType = assetType;
            this.m_Async = async;
        }

        public abstract void Update();

        public abstract string GetAssetPath(string assetName);

        public abstract void Dispose();

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
            return !m_IsDone;
        }

        public void Reset()
        {

        }
    }
}
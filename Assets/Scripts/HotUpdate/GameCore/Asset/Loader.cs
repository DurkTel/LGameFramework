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
        /// ��Դ����
        /// </summary>
        protected string m_AssetName;
        public string AssetName { get { return m_AssetName; } }
        /// <summary>
        /// ��Դ����
        /// </summary>
        protected System.Type m_AssetType;
        public System.Type AssetType { get { return m_AssetType; } }
        /// <summary>
        /// �Ƿ�������
        /// </summary>
        protected bool m_IsDone;
        public bool IsDone { get { return m_IsDone; } }
        /// <summary>
        /// ���ؽ���
        /// </summary>
        public abstract float Progress { get; }
        /// <summary>
        /// ���ȼ�
        /// </summary>
        protected int m_Priority;
        public int Priority { get { return m_Priority; } }
        /// <summary>
        /// �Ƿ��첽
        /// </summary>
        protected bool m_Async;
        public bool Async { get { return m_Async; } }
        /// <summary>
        /// ����
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
        /// ���ü�������Ϣ
        /// </summary>
        /// <param name="assetName">��Դ����</param>
        /// <param name="assetType">��Դ����</param>
        /// <param name="async">�Ƿ��첽</param>
        public virtual void SetData(string assetName, System.Type assetType, bool async)
        {
            this.m_AssetName = assetName;
            this.m_AssetType = assetType;
            this.m_Async = async;
        }

        /// <summary>
        /// ֡����
        /// </summary>
        public abstract void Update();

        /// <summary>
        /// ��ȡ��Դ��ַ
        /// </summary>
        /// <param name="assetName">��Դ����</param>
        /// <returns>��Դ��ַ</returns>
        public abstract string GetAssetPath(string assetName);

        /// <summary>
        /// ����
        /// </summary>
        public abstract void Dispose();

        /// <summary>
        /// ��ȡ���س�����Դ����
        /// </summary>
        /// <typeparam name="T">��Դ����</typeparam>
        /// <returns>Դ����</returns>
        public virtual T GetRawObject<T>() where T : Object
        {
            if (!m_IsDone)
            {
                Debug.LogError("��Դδ������ɣ��ͳ��Ի�ȡԴ����");
                return null;
            }

            AssetCache.RawObjectInfo rawObject = AssetCache.GetRawObject(m_AssetName);
            return rawObject.rawObject as T;
        }

        /// <summary>
        /// ��ȡ���س�����Դ�����ʵ��
        /// </summary>
        /// <typeparam name="T">��Դ����</typeparam>
        /// <returns>Դ����ʵ��</returns>
        public virtual T GetInstantiate<T>() where T : Object
        {
            if (!m_IsDone)
            {
                Debug.LogError("��Դδ������ɣ��ͳ��Ի�ȡԴ����");
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
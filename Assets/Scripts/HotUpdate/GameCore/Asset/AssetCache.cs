using System.Collections.Generic;
using UnityEngine;
using LGameFramework.GameBase;

namespace LGameFramework.GameCore.Asset
{
    /// <summary>
    /// ��Դ����
    /// </summary>
    public sealed class AssetCache
    {
        /// <summary>
        /// Դ������Դ��Ϣ
        /// </summary>
        public class RawObjectInfo
        {
            /// <summary>
            /// Դ����
            /// </summary>
            public Object rawObject;
            /// <summary>
            /// ��Դ����
            /// </summary>
            public string asstName;
            /// <summary>
            /// ��Դ������
            /// </summary>
            public string bundleName;
            /// <summary>
            /// Դ�������ü���
            /// </summary>
            public int referenceCount;
        }
        /// <summary>
        /// ʵ����������Ϣ
        /// </summary>
        public class InstanceObjectInfo
        {
            /// <summary>
            /// ʵ��������
            /// </summary>
            public Object instanceObject;
            /// <summary>
            /// Դ������Դ��Ϣ
            /// </summary>
            public RawObjectInfo rawObjectInfo;
        }

        private static GMAssetManager m_AssetModule;
        public static GMAssetManager AssetModule
        {
            get
            {
                m_AssetModule ??= GameFrameworkEntry.GetModule<GMAssetManager>();
                return m_AssetModule;
            }
        }
        /// <summary>
        /// Դ����Map name2info
        /// </summary>
        private static readonly Dictionary<string, RawObjectInfo> m_RawAssetMap = new Dictionary<string, RawObjectInfo>();
        public static Dictionary<string , RawObjectInfo> RawAssetMap { get { return m_RawAssetMap; } }  
        /// <summary>
        /// Դ����Map obj2info
        /// </summary>
        private static readonly Dictionary<Object, RawObjectInfo> m_RawNameMap = new Dictionary<Object, RawObjectInfo>();
        /// <summary>
        /// ʵ��������Map instanceId2info
        /// </summary>
        private static readonly Dictionary<int, InstanceObjectInfo> m_InstanceAssetMap = new Dictionary<int, InstanceObjectInfo>();
        public static Dictionary<int, InstanceObjectInfo> InstanceAssetMap { get { return m_InstanceAssetMap; } }

        /// <summary>
        /// ����ʵ������
        /// </summary>
        /// <param name="instanceId"></param>
        /// <param name="instanceObject"></param>
        /// <param name="rawObjectInfo"></param>
        /// <returns></returns>
        public static InstanceObjectInfo AddInstanceObject(int instanceId, Object instanceObject, RawObjectInfo rawObjectInfo)
        {
            InstanceObjectInfo instanceInfo;
            if (m_InstanceAssetMap.TryGetValue(instanceId, out instanceInfo))
                return instanceInfo;

            instanceInfo = Pool.Get<InstanceObjectInfo>();
            instanceInfo.instanceObject = instanceObject;
            instanceInfo.rawObjectInfo = rawObjectInfo;
            m_InstanceAssetMap.Add(instanceId, instanceInfo);

            return instanceInfo;
        }

        /// <summary>
        /// �Ƴ�ʵ������
        /// </summary>
        /// <param name="instanceId"></param>
        /// <returns></returns>
        public static bool RemoveInstanceObject(int instanceId)
        {
            if (m_InstanceAssetMap.TryGetValue(instanceId, out InstanceObjectInfo rawInfo))
            {
                m_InstanceAssetMap.Remove(instanceId);
                return true;
            }

            return false;
        }

        /// <summary>
        /// ������ԴԴ����
        /// </summary>
        /// <param name="rawObject"></param>
        public static RawObjectInfo AddRawObject(string assetName, Object rawObject, string bundleName = "")
        {
            RawObjectInfo rawInfo;
            if (m_RawAssetMap.TryGetValue(assetName, out rawInfo))
                return rawInfo;

            rawInfo = Pool.Get<RawObjectInfo>();
            rawInfo.rawObject = rawObject;
            rawInfo.asstName = assetName;
            rawInfo.bundleName = bundleName;

            m_RawAssetMap.Add(assetName, rawInfo);
            m_RawNameMap.Add(rawObject, rawInfo);

            return rawInfo;
        }

        /// <summary>
        /// �Ƴ�������Դ
        /// </summary>
        /// <param name="assetName"></param>
        /// <returns></returns>
        public static bool RemoveRawObject(string assetName)
        {
            if (m_RawAssetMap.TryGetValue(assetName, out RawObjectInfo rawInfo))
            {
                m_RawNameMap.Remove(rawInfo.rawObject);
                m_RawAssetMap.Remove(assetName);
                return true;
            }

            return false;
        }

        /// <summary>
        /// ��ȡ������Դ
        /// </summary>
        /// <param name="assetName"></param>
        /// <returns></returns>
        public static RawObjectInfo GetRawObject(string assetName, bool ignoreRef = false)
        {
            RawObjectInfo rawObject;
            if (!m_RawAssetMap.TryGetValue(assetName, out rawObject))
                return null;

            if (!ignoreRef)
                AddReferenceCount(rawObject);
            return rawObject;
        }

        /// <summary>
        /// ���Ի�ȡ������Դ
        /// </summary>
        /// <param name="assetName"></param>
        /// <param name="rawObject"></param>
        /// <returns></returns>
        public static bool TryGetRawObject(string assetName, out RawObjectInfo rawObject)
        {
            rawObject = GetRawObject(assetName, true);

            return rawObject != null;
        }

        private static void AddReferenceCount(RawObjectInfo rawObject)
        {
            rawObject.referenceCount++;
        }

        private static void RemoveReferenceCount(RawObjectInfo rawObject)
        {
            rawObject.referenceCount--;
        }

        public static void Destroy(Object obj)
        {
            RawObjectInfo rawInfo;
            InstanceObjectInfo instanceInfo;
            Object rawObj = obj;

            int instanceID = obj.GetInstanceID();

            //����ʵ������ ȡ��Ӧ��Դ����
            if (m_InstanceAssetMap.TryGetValue(instanceID, out instanceInfo))
            {
                rawInfo = instanceInfo.rawObjectInfo;
                rawObj = rawInfo.rawObject;
                if (obj is GameObject)
                    Object.Destroy(obj);
                else if (obj is Material)
                    Object.DestroyImmediate(obj);

                RemoveInstanceObject(instanceID);
            }
            else if (!m_RawNameMap.TryGetValue(obj, out rawInfo)) //���û��ʵ������ ��ȥԴ�������ȡ
            {
                //�����Ҳ��� ˵����ֱ��new������ ֱ������
                if (obj is GameObject)
                    Object.Destroy(obj);
                else if (obj is Material)
                    Object.DestroyImmediate(obj);
                return;
            }

            RemoveReferenceCount(rawInfo);

            if (rawInfo.referenceCount > 0)
                return;

            //�ȴ�����
            AssetModule.WaitDestroyList.Add(rawInfo.asstName, Time.unscaledTime);
        }
    }
}
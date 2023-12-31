using System.Collections.Generic;
using UnityEngine;
using LGameFramework.GameBase;

namespace LGameFramework.GameCore.Asset
{
    /// <summary>
    /// 资源缓存
    /// </summary>
    public sealed class AssetCache
    {
        /// <summary>
        /// 源对象资源信息
        /// </summary>
        public class RawObjectInfo
        {
            /// <summary>
            /// 源对象
            /// </summary>
            public Object rawObject;
            /// <summary>
            /// 资源名称
            /// </summary>
            public string asstName;
            /// <summary>
            /// 资源包名称
            /// </summary>
            public string bundleName;
            /// <summary>
            /// 源对象引用计数
            /// </summary>
            public int referenceCount;
        }
        /// <summary>
        /// 实例化对象信息
        /// </summary>
        public class InstanceObjectInfo
        {
            /// <summary>
            /// 实例化对象
            /// </summary>
            public Object instanceObject;
            /// <summary>
            /// 源对象资源信息
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
        /// 源对象Map name2info
        /// </summary>
        private static readonly Dictionary<string, RawObjectInfo> m_RawAssetMap = new Dictionary<string, RawObjectInfo>();
        public static Dictionary<string , RawObjectInfo> RawAssetMap { get { return m_RawAssetMap; } }  
        /// <summary>
        /// 源对象Map obj2info
        /// </summary>
        private static readonly Dictionary<Object, RawObjectInfo> m_RawNameMap = new Dictionary<Object, RawObjectInfo>();
        /// <summary>
        /// 实例化对象Map instanceId2info
        /// </summary>
        private static readonly Dictionary<int, InstanceObjectInfo> m_InstanceAssetMap = new Dictionary<int, InstanceObjectInfo>();
        public static Dictionary<int, InstanceObjectInfo> InstanceAssetMap { get { return m_InstanceAssetMap; } }

        /// <summary>
        /// 缓存实例对象
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
        /// 移除实例对象
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
        /// 缓存资源源对象
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
        /// 移除缓存资源
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
        /// 获取缓存资源
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
        /// 尝试获取缓存资源
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

            //销毁实例对象 取对应的源对象
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
            else if (!m_RawNameMap.TryGetValue(obj, out rawInfo)) //如果没有实例对象 再去源对象表里取
            {
                //还是找不到 说明的直接new出来的 直接销毁
                if (obj is GameObject)
                    Object.Destroy(obj);
                else if (obj is Material)
                    Object.DestroyImmediate(obj);
                return;
            }

            RemoveReferenceCount(rawInfo);

            if (rawInfo.referenceCount > 0)
                return;

            //等待销毁
            AssetModule.WaitDestroyList.Add(rawInfo.asstName, Time.unscaledTime);
        }
    }
}
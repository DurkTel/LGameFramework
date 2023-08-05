using System.Collections.Generic;
using UnityEngine;
using LGameFramework.GameBase.Pool;

namespace GameCore.Asset
{
    public class AssetCache
    {
        public class RawObjectInfo
        {
            public Object rawObject;
            public string asstName;
            public string bundleName;
            public int referenceCount;
        }
        public class InstanceObjectInfo
        {
            public Object instanceObject;
            public RawObjectInfo rawObjectInfo;
        }

        private static FMAssetManager m_AssetModule;
        public static FMAssetManager AssetModule
        {
            get
            {
                if (m_AssetModule == null)
                    m_AssetModule = GameEntry.GetModule<FMAssetManager>();

                return m_AssetModule;
            }
        }

        private static Dictionary<string, RawObjectInfo> m_RawAssetMap = new Dictionary<string, RawObjectInfo>();

        private static Dictionary<Object, RawObjectInfo> m_RawNameMap = new Dictionary<Object, RawObjectInfo>();

        private static Dictionary<int, InstanceObjectInfo> m_InstanceAssetMap = new Dictionary<int, InstanceObjectInfo>();

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

            instanceInfo = Pool<InstanceObjectInfo>.Get();
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

            rawInfo = Pool<RawObjectInfo>.Get();
            rawInfo.rawObject = rawObject;
            rawInfo.asstName = assetName;
            rawInfo.bundleName = bundleName;

            m_RawAssetMap.Add(assetName, rawInfo);
            m_RawNameMap.Add(rawObject, rawInfo);

            return rawInfo;
        }

        /// <summary>
        /// 删除缓存资源
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
                return;

            RemoveReferenceCount(rawInfo);

            if (rawInfo.referenceCount > 0)
                return;

            //AB包模式下计算引用
            if (FMAssetManager.AssetLoadMode == AssetLoadMode.AssetBundle)
            {
                AssetBundleRecord record;
                //这个资源的AB引用减1
                if (AssetModule.TryGetAssetBundle(rawInfo.bundleName, out record))
                    record.RawReferenceCount--;
            }

            //销毁源对象
            if (rawObj is TextAsset)
                Object.DestroyImmediate(rawObj);
            if (!(rawObj is GameObject))
                Resources.UnloadAsset(rawObj);

            RemoveRawObject(rawInfo.asstName);
        }
    }
}
using GameCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AssetCache
{
    public class RawObjectInfo
    {
        public Object rawObject;
        public string asstName;
        public int referenceCount;
    }

    private static Dictionary<string, RawObjectInfo> m_RawAssetMap = new Dictionary<string, RawObjectInfo>();

    private static Dictionary<Object, RawObjectInfo> m_RawNameMap = new Dictionary<Object, RawObjectInfo>();

    //ȱʵ�����������

    /// <summary>
    /// ������ԴԴ����
    /// </summary>
    /// <param name="rawObject"></param>
    public static RawObjectInfo AddRawObject(string assetName, Object rawObject)
    {
        RawObjectInfo rawInfo;
        if (m_RawAssetMap.TryGetValue(assetName, out rawInfo))
            return rawInfo;

        rawInfo = Pool<RawObjectInfo>.Get();
        rawInfo.rawObject = rawObject;
        rawInfo.asstName = assetName;

        m_RawAssetMap.Add(assetName, rawInfo);
        m_RawNameMap.Add(rawObject, rawInfo);
        AddReferenceCount(rawInfo);

        return rawInfo;
    }

    /// <summary>
    /// ɾ��������Դ
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
    public static RawObjectInfo GetRawObject(string assetName)
    {
        RawObjectInfo rawObject;
        if (!m_RawAssetMap.TryGetValue(assetName, out rawObject))
            return null;

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
        rawObject = GetRawObject(assetName);

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
        if (!m_RawNameMap.TryGetValue(obj, out rawInfo))
            return;

        RemoveReferenceCount(rawInfo);
        
        if (rawInfo.referenceCount > 0)
            return;

        //AB��ģʽ�¼�������
        if (AssetManager.assetLoadMode == AssetLoadMode.AssetBundle)
        {
            AssetManifest_AssetBundle assetManifest = AssetUtility.GetAssetManifest_Bundle();
            List<string> result = assetManifest.GetDependsName(rawInfo.asstName);
            //�����Դ��ж�� �������Դ�����İ����ü�����1
            AssetBundleRecord record;
            foreach (string abName in result) 
                if (AssetUtility.TryGetAssetBundle(abName, out record))
                    record.dpendsReferenceCount--;

            //�����Դ��Դ�������ü�1
            if (AssetUtility.TryGetAssetBundle(assetManifest.GetBundleName(rawInfo.asstName), out record))
                record.rawReferenceCount--;
        }

        if (obj is GameObject)
            Object.Destroy(obj);
        else
            Resources.UnloadAsset(obj);

    }
}

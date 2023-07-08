using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AssetCache
{
    private static Dictionary<string, Object> m_RawAssetMap = new Dictionary<string, Object>();

    private static Dictionary<Object, int> m_RenferenceCounts = new Dictionary<Object, int>();


    /// <summary>
    /// 缓存资源源对象
    /// </summary>
    /// <param name="rawObject"></param>
    public static void AddRawObject(string assetName, Object rawObject)
    {
        if (m_RawAssetMap.ContainsKey(assetName))
            return;

        m_RawAssetMap.Add(assetName, rawObject);
        AddRenferenceCount(rawObject);
    }

    /// <summary>
    /// 删除缓存资源
    /// </summary>
    /// <param name="assetName"></param>
    /// <returns></returns>
    public static bool RemoveRawObject(string assetName)
    {
        if (m_RawAssetMap.ContainsKey(assetName))
        { 
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
    public static Object GetRawObject(string assetName)
    {
        Object rawObject;
        if (!m_RawAssetMap.TryGetValue(assetName, out rawObject))
            return null;

        AddRenferenceCount(rawObject);
        return rawObject;
    }

    /// <summary>
    /// 尝试获取缓存资源
    /// </summary>
    /// <param name="assetName"></param>
    /// <param name="rawObject"></param>
    /// <returns></returns>
    public static bool TryGetRawObject(string assetName, out Object rawObject)
    {
        rawObject = GetRawObject(assetName);

        return rawObject != null;
    }

    public static void Destroy(Object obj)
    {
        RemoveRenferenceCount(obj);

        if (m_RenferenceCounts.ContainsKey(obj) && m_RenferenceCounts[obj] > 0)
            return;

        if (obj is GameObject)
            Object.Destroy(obj);
        else
            Resources.UnloadAsset(obj);

    }

    private static void AddRenferenceCount(Object rawObject)
    {
        if (!m_RenferenceCounts.ContainsKey(rawObject))
            m_RenferenceCounts[rawObject] = 0;
        m_RenferenceCounts[(rawObject)]++;
    }

    private static void RemoveRenferenceCount(Object rawObject)
    {
        if (m_RenferenceCounts.ContainsKey(rawObject))
        {
            if (--m_RenferenceCounts[rawObject] <= 0)
            {
                m_RenferenceCounts.Remove(rawObject);
            }
        }

    }
}

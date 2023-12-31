using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase
{
    /// <summary>
    /// 首包列表
    /// </summary>
    public class BuildFiles : ScriptableObject, ISerializationCallbackReceiver
    {
        public static string s_BuildFilesPath = "Assets/LGBuildingFiles.asset";

        public List<AssetBundleInfo> bundleList = new List<AssetBundleInfo>(50);

        public Dictionary<string, AssetBundleInfo> bundleMap = new Dictionary<string, AssetBundleInfo>(50);

        public void Add(AssetBundleInfo bundleInfo)
        {
            if (bundleMap.ContainsKey(bundleInfo.bundleName))
                bundleMap[bundleInfo.bundleName] = bundleInfo;
            else
                bundleMap.Add(bundleInfo.bundleName, bundleInfo);
        }

        public bool Contains(string bundleName)
        {
            return bundleMap.ContainsKey(bundleName);
        }

        public void Clear()
        {
            bundleMap.Clear();
        }

        public void OnAfterDeserialize()
        {
            foreach (var item in bundleList)
            {
                if (!this.bundleMap.ContainsKey(item.bundleName))
                    this.bundleMap.Add(item.bundleName, item);
            }
        }

        public void OnBeforeSerialize()
        {
            bundleList.Clear();
            foreach (var item in this.bundleMap)
                bundleList.Add(item.Value);
        }
    }
}

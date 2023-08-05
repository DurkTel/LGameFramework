using System.Collections.Generic;
using UnityEngine;
using LGameFramework.GameBase;

namespace GameCore.Asset
{
    public class AssetManifest_Bundle : ScriptableObject, ISerializationCallbackReceiver
    {
        public static string s_AbPath = "Assets/LGAssetManifest.asset";

        public List<AssetFileInfo> assetList = new List<AssetFileInfo>(5000);

        public Dictionary<string, AssetFileInfo> assetMap = new Dictionary<string, AssetFileInfo>(5000);

        public List<AssetBundleInfo> bundleList = new List<AssetBundleInfo>(5000);

        public Dictionary<string, AssetBundleInfo> bundleMap = new Dictionary<string, AssetBundleInfo>(1000);

        public void Add(AssetFileInfo file)
        {
            if (assetMap.ContainsKey(file.assetName))
                assetMap[file.assetName] = file;
            else
                assetMap.Add(file.assetName, file);
        }

        public bool Contains(string assetName)
        {
            return assetMap.ContainsKey(assetName);
        }

        public void AddAssetBundle(AssetBundleInfo bundleInfo)
        {
            if (bundleMap.ContainsKey(bundleInfo.bundleName))
                bundleMap[bundleInfo.bundleName] = bundleInfo;
            else
                bundleMap.Add(bundleInfo.bundleName, bundleInfo);   
        }

        public string GetPath(string bundleName)
        {
            if (bundleMap.ContainsKey(bundleName))
                return bundleMap[bundleName].assetPath;

            Debug.LogWarning("资源清单中没有名为：" + bundleName + "的资源，请更新资源清单或检查资源名称");
            return string.Empty;
        }

        public uint GetCRC(string bundleName)
        {
            if (bundleMap.ContainsKey(bundleName))
                return bundleMap[bundleName].crc;

            Debug.LogWarning("资源清单中没有名为：" + bundleName + "的资源，请更新资源清单或检查资源名称");
            return default;
        }

        public string GetBundleName(string assetName)
        {
            if (assetMap.ContainsKey(assetName))
                return assetMap[assetName].bundleName;

            Debug.LogWarning("资源清单中没有名为：" + assetName + "的资源，请更新资源清单或检查资源名称");
            return string.Empty;
        }

        public string[] GetDependsName(string bundleName)
        {
            if (bundleMap.ContainsKey(bundleName))
                return bundleMap[bundleName].dependencieBundleNames;

            Debug.LogWarning("资源清单中没有名为：" + bundleName + "的资源，请更新资源清单或检查资源名称");
            return default;
        }

        public void Clear()
        {
            assetMap.Clear();
            bundleMap.Clear();
        }

        public void OnAfterDeserialize()
        {
            foreach (var item in assetList)
            {
                if (!this.assetMap.ContainsKey(item.assetName))
                    this.assetMap.Add(item.assetName, item);
            }

            foreach (var item in bundleList)
            {
                if (!this.bundleMap.ContainsKey(item.bundleName))
                    this.bundleMap.Add(item.bundleName, item);
            }
        }

        public void OnBeforeSerialize()
        {
            assetList.Clear();
            foreach (var item in this.assetMap)
                assetList.Add(item.Value);

            bundleList.Clear();
            foreach (var item in this.bundleMap)
                bundleList.Add(item.Value);
        }
    }
}
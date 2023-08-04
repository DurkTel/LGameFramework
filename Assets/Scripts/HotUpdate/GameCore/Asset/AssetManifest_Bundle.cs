using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;
using LGameFramework.GameBase;

namespace GameCore.Asset
{
    public class AssetManifest_Bundle : ScriptableObject, ISerializationCallbackReceiver
    {
        public static string s_AbPath = "Assets/LGAssetManifest.asset";

        public List<AssetFile> assetList = new List<AssetFile>(5000);

        public Dictionary<string, AssetFile> assetMap = new Dictionary<string, AssetFile>(5000);

        public Dictionary<string, List<string>> dependsMap = new Dictionary<string, List<string>>(5000);

        public void Add(AssetFile file)
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

        public string GetPath(string assetName)
        {
            if (assetMap.ContainsKey(assetName))
                return assetMap[assetName].assetPath;

            Debug.LogWarning("资源清单中没有名为：" + assetName + "的资源，请更新资源清单或检查资源名称");
            return string.Empty;
        }

        public string GetBundleName(string assetName)
        {
            if (assetMap.ContainsKey(assetName))
                return assetMap[assetName].bundleName;

            Debug.LogWarning("资源清单中没有名为：" + assetName + "的资源，请更新资源清单或检查资源名称");
            return string.Empty;
        }

        public List<string> GetDependsName(string assetName)
        {
            if (assetMap.ContainsKey(assetName))
                return assetMap[assetName].dependencieBundleNames;

            Debug.LogWarning("资源清单中没有名为：" + assetName + "的资源，请更新资源清单或检查资源名称");
            return default;
        }

        public List<string> GetBundleDepends(string bundleName)
        {
            if (dependsMap.ContainsKey(bundleName))
                return dependsMap[bundleName];

            Debug.LogWarning("资源清单中没有名为：" + bundleName + "的包，请更新资源清单或检查资源名称");
            return default;
        }

        public void Clear()
        {
            assetMap.Clear();
            dependsMap.Clear();
        }

        public void OnAfterDeserialize()
        {
            foreach (var item in assetList)
            {
                if (!this.assetMap.ContainsKey(item.assetName))
                    this.assetMap.Add(item.assetName, item);

                if (!this.dependsMap.ContainsKey(item.bundleName))
                    this.dependsMap.Add(item.bundleName, item.dependencieBundleNames);
            }
        }

        public void OnBeforeSerialize()
        {
            assetList.Clear();
            foreach (var item in this.assetMap)
                assetList.Add(item.Value);
        }
    }
}
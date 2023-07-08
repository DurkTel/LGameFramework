using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;

public class AssetManifest_AssetBundle : ScriptableObject, ISerializationCallbackReceiver
{
    public static string s_AbPath = "Assets/LGAssetManifest.asset";

    [System.Serializable]
    public class AssetInfo
    {
        public string assetName;
        public string assetPath;
        public string bundleName;
        public string md5Code;
        public List<string> dependencieBundleNames;
        public AssetInfo(string assetName, string assetPath, string bundleName, string md5Code, List<string> dependencieBundleNames)
        {
            this.assetName = assetName;
            this.assetPath = assetPath;
            this.bundleName = bundleName;
            this.md5Code = md5Code; 
            this.dependencieBundleNames = dependencieBundleNames;
        }
    }

    public List<AssetInfo> assetList = new List<AssetInfo>(5000);

    public Dictionary<string, AssetInfo> assetMap = new Dictionary<string, AssetInfo>(5000);

    public void Add(string assetName, string assetPath, string bundleName, string md5Code, List<string> dependencieBundleNames)
    {
        if (assetMap.ContainsKey(assetName))
        {
            assetMap[assetName].assetPath = assetPath;
            assetMap[assetName].bundleName = bundleName;
            assetMap[assetName].md5Code = md5Code;

        }
        else
            assetMap.Add(assetName, new AssetInfo(assetName, assetPath, bundleName, md5Code, dependencieBundleNames));
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

    public void Clear()
    {
        assetMap.Clear();
    }

    public void OnAfterDeserialize()
    {
        foreach (var item in assetList)
            if (!this.assetMap.ContainsKey(item.assetName))
                this.assetMap.Add(item.assetName, item);
    }

    public void OnBeforeSerialize()
    {
        assetList.Clear();
        foreach (var item in this.assetMap)
            assetList.Add(item.Value);
    }
}

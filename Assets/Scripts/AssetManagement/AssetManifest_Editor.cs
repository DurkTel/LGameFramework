using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

public class AssetManifest_Editor : ScriptableObject, ISerializationCallbackReceiver
{
    public const string editorPath = "Assets/Plugins/EditorAssetManifest.asset";
    public const string resourcesPath = "Assets/Plugins/ResourcesAssetManifest.asset";
    [System.Serializable]
    public class AssetInfo
    {
        public string assetName;
        public string assetPath;
        public AssetInfo(string assetName, string assetPath)
        {
            this.assetName = assetName;
            this.assetPath = assetPath;
        }
    }
    public List<AssetInfo> assetList = new List<AssetInfo>(5000);

    public Dictionary<string, string> assetMap = new Dictionary<string, string>(5000);

    public void OnBeforeSerialize()
    {
        assetList.Clear();
        foreach (var item in this.assetMap)
            assetList.Add(new AssetInfo(item.Key, item.Value));
    }

    public void OnAfterDeserialize()
    {
        foreach (var item in assetList)
            if (!this.assetMap.ContainsKey(item.assetName))
                this.assetMap.Add(item.assetName, item.assetPath);
    }



#if UNITY_EDITOR
    [MenuItem("Assets/AssetsManifest/RefreshEditorAssets")]
    public static void RefreshEditorAssetsManifest()
    {
        AssetManifest_Editor assetManifest = GetAssetManifest(editorPath);
        assetManifest.Clear();

        string[] allfile = Directory.GetFiles(Application.dataPath, "*", SearchOption.AllDirectories);
        int spos = Application.dataPath.Length - 6;
        foreach (var item in allfile)
        {
            string path = item.Substring(spos).Replace("\\", "/");
            if (path.StartsWith("Assets"))
            {
                string ex = Path.GetExtension(path);
                if (ex != ".meta" && ex != ".cs")
                { 
                    assetManifest.Add(path);
                }
            }
        }
        EditorUtility.SetDirty(assetManifest);
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
        Debug.Log("更新资源清单完成");
    }

    [MenuItem("Assets/AssetsManifest/RefreshResourceAssets")]
    public static void RefreshResourceAssetsManifest()
    {
        AssetManifest_Editor assetManifest = GetAssetManifest(resourcesPath);
        assetManifest.Clear();

        string assetPath = Application.dataPath + "/Resources";
        if (!Directory.Exists(assetPath)) return;
        string[] allfile = Directory.GetFiles(assetPath, "*", SearchOption.AllDirectories);
        int spos = Application.dataPath.Length + 11;
        foreach (var item in allfile)
        {
            string path = item.Substring(spos).Replace("\\", "/");
            string ex = Path.GetExtension(path);
            if (ex != ".meta" && ex != ".cs")
            {
                assetManifest.Add(path.Replace(ex, ""));
            }
        }
        EditorUtility.SetDirty(assetManifest);
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
        Debug.Log("更新资源清单完成");
    }

    
    public static AssetManifest_Editor GetAssetManifest(string path)
    {
        AssetManifest_Editor assetManifest = AssetDatabase.LoadAssetAtPath<AssetManifest_Editor>(path);

        if (assetManifest == null)
        {
            assetManifest = ScriptableObject.CreateInstance<AssetManifest_Editor>();
            AssetDatabase.CreateAsset(assetManifest, path);
        }

        return assetManifest;
    }


    public string GetPath(string assetName)
    {
        if (assetMap.ContainsKey(assetName))
            return assetMap[assetName];

        Debug.LogWarning("资源清单中没有名为：" + assetName + "的资源，请更新资源清单或检查资源名称");
        return string.Empty;
    }

    public void Add(string assetPath)
    {
        string assetName = Path.GetFileName(assetPath);

        if (assetMap.ContainsKey(assetName))
            assetMap[assetName] = assetPath;
        else
            assetMap.Add(assetName, assetPath);
    }

    public bool Contains(string assetName)
    {
        return assetMap.ContainsKey(assetName);
    }


    public void Clear()
    {
        assetMap.Clear();
    }
#endif

}

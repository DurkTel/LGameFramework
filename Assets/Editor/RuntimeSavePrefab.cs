using UnityEditor;
using UnityEngine;
using UnityEditorInternal;
using LGameFramework.GameCore.Asset;

/// <summary>
/// 运行时修改预制体
/// </summary>
public class RuntimeSavePrefab
{
    [MenuItem("GameObject/ArtTools/SavePrefab")]
    public static void SavePrefab()
    {
        GameObject select = Selection.activeGameObject;

        string path = select.name;
        GameObject root = GetRootParent(select.transform, ref path);
        string prefabPath = GetPrefabPath(root.name.Replace("(Clone)", ""));
        if (string.IsNullOrEmpty(prefabPath))
        {
            EditorUtility.DisplayDialog("警告", "预制体路径为空！", "确认");
            return;
        }

        var prefab = PrefabUtility.LoadPrefabContents(prefabPath);
        if (prefab == null)
        {
            EditorUtility.DisplayDialog("警告", "找不到该预制体！\n预制体路径：" + prefabPath, "确认");
            return;
        }
        var target = prefab.transform.Find(path);
        CopyComponent(select, target.gameObject);

        PrefabUtility.SaveAsPrefabAsset(prefab, prefabPath);
        PrefabUtility.UnloadPrefabContents(prefab);
        EditorUtility.DisplayDialog("提示", "修改成功^^_", "确认");
    }

    [MenuItem("GameObject/ArtTools/SavePrefab", validate = true)]
    public static bool SavePrefabValidate()
    {
        return Application.isPlaying;
    }

    /// <summary>
    /// 获取所选物体根节点预制
    /// </summary>
    /// <param name="child"></param>
    /// <param name="path">所选物体相对路径</param>
    /// <returns></returns>
    private static GameObject GetRootParent(Transform child, ref string path)
    {
        if (child == null) return null;

        if (child.parent != null && child.parent.name.Contains("(Clone)"))
            return child.parent.gameObject;

        path = child.parent.name + "/" + path;
        return GetRootParent(child.parent, ref path);
    }

    /// <summary>
    /// 获取预制资源路径
    /// </summary>
    /// <param name="prefabName"></param>
    /// <returns></returns>
    private static string GetPrefabPath(string prefabName)
    {
        return AssetManifest_Editor.GetAssetManifest(AssetManifest_Editor.editorPath).GetPath(prefabName + ".prefab");
    }

    /// <summary>
    /// 复制所有组件参数 如果没有就新建
    /// </summary>
    /// <param name="source"></param>
    /// <param name="target"></param>
    private static void CopyComponent(GameObject source, GameObject target)
    {
        Component[] components = source.GetComponents<Component>();
        foreach (Component com in components)
        {
            ComponentUtility.CopyComponent(com);
            if (target.TryGetComponent(com.GetType(), out Component tcom))
                ComponentUtility.PasteComponentValues(tcom);
            else
                ComponentUtility.PasteComponentAsNew(target);
        }
    }
}

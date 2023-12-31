using UnityEditor;
using UnityEngine;
using UnityEditorInternal;
using LGameFramework.GameCore.Asset;

/// <summary>
/// ����ʱ�޸�Ԥ����
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
            EditorUtility.DisplayDialog("����", "Ԥ����·��Ϊ�գ�", "ȷ��");
            return;
        }

        var prefab = PrefabUtility.LoadPrefabContents(prefabPath);
        if (prefab == null)
        {
            EditorUtility.DisplayDialog("����", "�Ҳ�����Ԥ���壡\nԤ����·����" + prefabPath, "ȷ��");
            return;
        }
        var target = prefab.transform.Find(path);
        CopyComponent(select, target.gameObject);

        PrefabUtility.SaveAsPrefabAsset(prefab, prefabPath);
        PrefabUtility.UnloadPrefabContents(prefab);
        EditorUtility.DisplayDialog("��ʾ", "�޸ĳɹ�^^_", "ȷ��");
    }

    [MenuItem("GameObject/ArtTools/SavePrefab", validate = true)]
    public static bool SavePrefabValidate()
    {
        return Application.isPlaying;
    }

    /// <summary>
    /// ��ȡ��ѡ������ڵ�Ԥ��
    /// </summary>
    /// <param name="child"></param>
    /// <param name="path">��ѡ�������·��</param>
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
    /// ��ȡԤ����Դ·��
    /// </summary>
    /// <param name="prefabName"></param>
    /// <returns></returns>
    private static string GetPrefabPath(string prefabName)
    {
        return AssetManifest_Editor.GetAssetManifest(AssetManifest_Editor.editorPath).GetPath(prefabName + ".prefab");
    }

    /// <summary>
    /// ��������������� ���û�о��½�
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

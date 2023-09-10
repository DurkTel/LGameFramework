using System.IO;
using UnityEditor;
using UnityEngine;

public class AvatarPartExport
{
    private readonly static string m_ExportPath = Application.dataPath + "/SkinMeshPreafb.prefab";

    [MenuItem("GameObject/ArtTools/ExportSkinMeshPreafb")]
    public static void Export()
    {
        GameObject prefab = new GameObject();

        GameObject[] allSelectObject = Selection.gameObjects;
        if (allSelectObject == null || allSelectObject.Length == 0) return;
        foreach ( GameObject selectObject in allSelectObject )
        {
            InternalExport(selectObject, prefab.transform);
        }

        if(File.Exists(m_ExportPath))
            File.Delete(m_ExportPath);

        PrefabUtility.SaveAsPrefabAsset(prefab, m_ExportPath);

        Object.DestroyImmediate(prefab);
    }

    private static void InternalExport(GameObject go, Transform parent)
    {
        if (go == null) return;
        SkinnedMeshRenderer skin = go.GetComponent<SkinnedMeshRenderer>();
        if (skin == null) return;

        GameObject newSkinObj = new GameObject(skin.name);
        newSkinObj.transform.SetParent(parent.transform);

        SkinnedMeshRenderer newSkin = newSkinObj.AddComponent<SkinnedMeshRenderer>();
        newSkin.sharedMesh = skin.sharedMesh;
        newSkin.sharedMaterials = skin.sharedMaterials;
        newSkin.localBounds = skin.localBounds;

        if (skin.rootBone != null)
        {
            GameObject rootBone = new GameObject(skin.rootBone.name);
            rootBone.transform.SetParent(newSkinObj.transform);

            foreach (Transform bone in skin.bones)
            {
                GameObject subBone = new GameObject(bone.name);
                subBone.transform.SetParent(rootBone.transform);
            }
            newSkin.rootBone = rootBone.transform;
        }

    }
}

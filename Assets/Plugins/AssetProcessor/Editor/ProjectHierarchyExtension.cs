using UnityEngine;
using UnityEditor;
using System.Collections.Generic;

[InitializeOnLoad]
public class ProjectHierarchyExtension
{
    static ProjectHierarchyExtension()
    {
        EditorApplication.projectWindowItemOnGUI += OnProjectWindowItemOnGUI;
        EditorApplication.hierarchyWindowItemOnGUI += OnHierarchyWindowItemOnGUI;
    }

    private static Dictionary<string, GUIContent> s_ProjectFolderDesc = new Dictionary<string, GUIContent>()
    {
        {"Assets/ArtModules",new GUIContent("������Դ")},


        {"Assets/Scripts/AOT",new GUIContent("Ԥ����Ŀ¼���޸ĺ���Ҫ���´����")},

        {"Assets/Scripts/AOT/GameBase",new GUIContent("��Ϸ��ܻ�������")},
        {"Assets/Scripts/AOT/GameLaunch",new GUIContent("��Ϸ�����������")},


        {"Assets/Scripts/HotUpdate",new GUIContent("�ȸ���Ŀ¼���޸ĺ���ȸ��£�")},

        {"Assets/Scripts/HotUpdate/GameCore",new GUIContent("��Ϸ��ܺ��Ĵ���")},
        {"Assets/Scripts/HotUpdate/GameCore/Asset",new GUIContent("��Դ")},
        {"Assets/Scripts/HotUpdate/GameCore/Audio",new GUIContent("��Ч")},
        {"Assets/Scripts/HotUpdate/GameCore/Avatar",new GUIContent("����")},
        {"Assets/Scripts/HotUpdate/GameCore/Camera",new GUIContent("���")},
        {"Assets/Scripts/HotUpdate/GameCore/Core",new GUIContent("ģ�����")},
        {"Assets/Scripts/HotUpdate/GameCore/Entity",new GUIContent("ʵ��")},
        {"Assets/Scripts/HotUpdate/GameCore/Event",new GUIContent("�¼�")},
        {"Assets/Scripts/HotUpdate/GameCore/GUI",new GUIContent("UI")},
        {"Assets/Scripts/HotUpdate/GameCore/Input",new GUIContent("��ƽ̨����")},
        {"Assets/Scripts/HotUpdate/GameCore/AOI",new GUIContent("��֪�㷨")},
        {"Assets/Scripts/HotUpdate/GameCore/Pool",new GUIContent("�����")},
        {"Assets/Scripts/HotUpdate/GameCore/Timer",new GUIContent("��ʱ��")},


        {"Assets/Scripts/HotUpdate/GameLogic",new GUIContent("��Ϸ����߼�����")},


    };

    private static GUIStyle label;
    private static GUIStyle label2;
    private static GUIStyle GetLabelStyle(bool isHierarchy = false)
    {
        GUIStyle style = null;
        if (!isHierarchy)
        {
            if (label == null)
            {
                label = new GUIStyle(EditorStyles.label);
                label.alignment = TextAnchor.MiddleRight;
                label.padding.right = 10;
                label.normal.textColor = Color.gray;
            }
            style = label;
        }
        else
        {
            if (label2 == null)
            {
                label2 = new GUIStyle(EditorStyles.label);
                label2.alignment = TextAnchor.MiddleRight;
                label2.padding.right = 10;
                label2.normal.textColor = Color.gray;
            }
            style = label2;
        }

        return style;
    }

    private static void OnProjectWindowItemOnGUI(string guid, Rect selectionRect)
    {
        string path = AssetDatabase.GUIDToAssetPath(guid);
        if (!AssetDatabase.IsValidFolder(path))
        {
            return;
        }
        GUIContent content;
        if (s_ProjectFolderDesc.TryGetValue(path, out content))
        {
            EditorGUI.LabelField(selectionRect, content, GetLabelStyle());
        }
        else
        {
            TextAsset textAsset = AssetDatabase.LoadAssetAtPath<TextAsset>(path + "/readme.txt");
            if (textAsset != null)
            {
                EditorGUI.LabelField(selectionRect, textAsset.text, GetLabelStyle());
            }
        }
    }


    private static Dictionary<string, GUIContent> s_HierarchyDesc = new Dictionary<string, GUIContent>()
    {
        {"Camera",new GUIContent("���")},
    };

    private static void OnHierarchyWindowItemOnGUI(int instanceID, Rect selectionRect)
    {
        GameObject go = EditorUtility.InstanceIDToObject(instanceID) as GameObject;
        if (go == null)
            return;

        GUIContent content;
        if (s_HierarchyDesc.TryGetValue(go.name, out content))
        {
            EditorGUI.LabelField(selectionRect, content, GetLabelStyle(true));
        }
    }
}
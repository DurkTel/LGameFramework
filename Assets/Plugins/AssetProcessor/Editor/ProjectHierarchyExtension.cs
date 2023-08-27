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
        {"Assets/ArtModules",new GUIContent("美术资源")},


        {"Assets/Scripts/AOT",new GUIContent("预编译目录（修改后需要重新打包）")},

        {"Assets/Scripts/AOT/GameBase",new GUIContent("游戏框架基础代码")},
        {"Assets/Scripts/AOT/GameLaunch",new GUIContent("游戏框架启动代码")},


        {"Assets/Scripts/HotUpdate",new GUIContent("热更新目录（修改后可热更新）")},

        {"Assets/Scripts/HotUpdate/GameCore",new GUIContent("游戏框架核心代码")},
        {"Assets/Scripts/HotUpdate/GameCore/Asset",new GUIContent("资源")},
        {"Assets/Scripts/HotUpdate/GameCore/Audio",new GUIContent("音效")},
        {"Assets/Scripts/HotUpdate/GameCore/Avatar",new GUIContent("替身")},
        {"Assets/Scripts/HotUpdate/GameCore/Camera",new GUIContent("相机")},
        {"Assets/Scripts/HotUpdate/GameCore/Core",new GUIContent("模块基类")},
        {"Assets/Scripts/HotUpdate/GameCore/Entity",new GUIContent("实体")},
        {"Assets/Scripts/HotUpdate/GameCore/Event",new GUIContent("事件")},
        {"Assets/Scripts/HotUpdate/GameCore/GUI",new GUIContent("UI")},
        {"Assets/Scripts/HotUpdate/GameCore/Input",new GUIContent("跨平台输入")},
        {"Assets/Scripts/HotUpdate/GameCore/AOI",new GUIContent("感知算法")},
        {"Assets/Scripts/HotUpdate/GameCore/Pool",new GUIContent("对象池")},
        {"Assets/Scripts/HotUpdate/GameCore/Timer",new GUIContent("计时器")},


        {"Assets/Scripts/HotUpdate/GameLogic",new GUIContent("游戏框架逻辑代码")},


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
        {"Camera",new GUIContent("相机")},
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
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEditor;
using UnityEditor.IMGUI.Controls;
using UnityEditorInternal;
using UnityEngine;

[CustomEditor(typeof(Injection))]
public class InjectionEditor : Editor
{
    private static string[] s_ExtendToolBar = new string[] { "查找匹配", "自动注入" };

    private static string[] s_AutoInjectComponent = new string[] { "Button", "Image" , "TextMeshProUGUI", "Transform"};

    public SerializedProperty injectionObjects;

    public ReorderableList reorderableList;

    private bool m_EnableExtend;

    private int m_CurrentToolBarIndex;

    private string[] m_AllComponents;

    private int m_SearchComponentIndex;

    private int m_AutoInjectComponentIndex;

    private bool m_EnableFindStartWhithStr;

    private bool m_EnableAutoInjectComponent;

    private SearchField m_SearchField;

    private string m_SearchString;

    private string m_FindStartWithStr;

    private Color m_DefaultColor;

    private Color m_HightlightColor;

    public void OnEnable()
    {
        m_AllComponents = new string[0]; 

        m_HightlightColor = Color.cyan;

        m_DefaultColor = GUI.backgroundColor;

        m_SearchField = new SearchField();

        injectionObjects = serializedObject.FindProperty("injectionObjects");

        reorderableList = new ReorderableList(serializedObject, injectionObjects);

        reorderableList.drawHeaderCallback = OnDrawHeader;

        reorderableList.drawElementCallback = OnDrawElement;

        reorderableList.onAddCallback = OnAddElement;

        reorderableList.onRemoveCallback = OnRemoveElement;

        UpdateAllComponent();
    }

    public void OnDisable()
    {
        m_AllComponents = null;

        m_SearchField = null;

        injectionObjects = null;

        reorderableList.drawHeaderCallback = null;

        reorderableList.drawElementCallback = null;

        reorderableList.onAddCallback = null;

        reorderableList.onRemoveCallback = null;

        reorderableList = null;
    }

    public override void OnInspectorGUI()
    {
        if (GUILayout.Button(m_EnableExtend ? "关闭扩展工具" : "启用扩展工具"))
            m_EnableExtend = !m_EnableExtend;
        if (m_EnableExtend)
        {
            m_CurrentToolBarIndex = GUILayout.Toolbar(m_CurrentToolBarIndex, s_ExtendToolBar);

            if (m_CurrentToolBarIndex == 0)
                OnDrawSearch();
            else
                OnDrawAutoInject();

            EditorGUILayout.Space(5);
        }

        serializedObject.Update();
        reorderableList.DoLayoutList();
        serializedObject.ApplyModifiedProperties();
    }

    private void OnDrawElement(Rect rect, int index, bool isActive, bool isFocused)
    {
        SerializedProperty element = reorderableList.serializedProperty.GetArrayElementAtIndex(index);
        SerializedProperty target = element.FindPropertyRelative("m_Target");
        SerializedProperty component = element.FindPropertyRelative("m_Component");
        SerializedProperty name = element.FindPropertyRelative("m_Name");

        OnDrawTarget(target, name, rect);

        OnDrawPopup(target, component, rect);

        OnDrawText(name, rect);

    }

    private void OnDrawHeader(Rect rect)
    { 
        EditorGUI.LabelField(rect, "组件注入");
    }

    private void OnAddElement(ReorderableList list)
    {
        list.serializedProperty.arraySize++;
        list.index = list.serializedProperty.arraySize - 1;
        SerializedProperty item = list.serializedProperty.GetArrayElementAtIndex(list.index);
        item.FindPropertyRelative("m_Target").objectReferenceValue = null;
        item.FindPropertyRelative("m_Name").stringValue = string.Empty;
        item.FindPropertyRelative("m_Component").objectReferenceValue = null;
    }

    private void OnRemoveElement(ReorderableList list)
    {
        ReorderableList.defaultBehaviours.DoRemoveButton(list);
        UpdateAllComponent();
    }

    private void OnDrawTarget(SerializedProperty target, SerializedProperty name, Rect rect)
    {
        Rect objectRect = rect;
        objectRect.y += 2;
        objectRect.height = 20;
        objectRect.width *= 0.3f;

        if (m_EnableExtend && target.objectReferenceValue != null && StringMate(target.objectReferenceValue.name, m_SearchString))
            GUI.backgroundColor = m_HightlightColor;

        EditorGUI.BeginChangeCheck();
        target.objectReferenceValue = EditorGUI.ObjectField(objectRect, target.objectReferenceValue, typeof(Object), true);
        if (EditorGUI.EndChangeCheck())
        {
            UpdateAllComponent();
            name.stringValue = target.objectReferenceValue.name;
        }

        GUI.backgroundColor = m_DefaultColor;
    }

    private void OnDrawPopup(SerializedProperty target, SerializedProperty component, Rect rect)
    {
        Rect objectRect = rect;
        objectRect.y += 2;
        objectRect.height = 20;
        objectRect.width *= 0.3f;
        objectRect.x += rect.width * 0.3f + 5;
        string[] contents = new string[0] { };
        Component[] components = null;
        int popupIndex = 0;

        if (target.objectReferenceValue != null)
        {
            GameObject go = target.objectReferenceValue as GameObject;
            components = go.GetComponents<Component>();
            List<string> list = new List<string>();
            foreach (var item in components)
            {
                list.Add(item.GetType().Name);
            }

            for (int i = 0; i < components.Length; i++)
            {
                if (components[i] == component.objectReferenceValue)
                {
                    popupIndex = i;
                    break;
                }
            }
            contents = list.ToArray();
        }


        Component value = component.objectReferenceValue as Component;
        if (m_EnableExtend && value != null && value.GetType().Name == m_AllComponents[m_SearchComponentIndex])
            GUI.backgroundColor = m_HightlightColor;

        popupIndex = EditorGUI.Popup(objectRect, popupIndex, contents);

        component.objectReferenceValue = components == null ? null : components[popupIndex];

        GUI.backgroundColor = m_DefaultColor;
    }

    private void OnDrawText(SerializedProperty name, Rect rect)
    {
        Rect objectRect = rect;
        objectRect.y += 2;
        objectRect.height = 20;
        objectRect.x += (rect.width * 0.3f + 5) * 2;
        objectRect.width = (rect.width - objectRect.x) + 10;
        if (m_EnableExtend && StringMate(name.stringValue, m_SearchString))
            GUI.backgroundColor = m_HightlightColor;

        name.stringValue = EditorGUI.TextField(objectRect, name.stringValue);

        GUI.backgroundColor = m_DefaultColor;

    }

    private void UpdateAllComponent()
    {
        int count = reorderableList.count;
        Component[] components = null;
        List<string> temp = new List<string>();

        for (int i = 0; i < count; i++)
        {
            SerializedProperty element = reorderableList.serializedProperty.GetArrayElementAtIndex(i);
            SerializedProperty target = element.FindPropertyRelative("m_Target");
            if (target.objectReferenceValue != null)
            {
                GameObject go = target.objectReferenceValue as GameObject;
                components = go.GetComponents<Component>();
                foreach (var item in components)
                {
                    string name = item.GetType().Name;
                    if (temp.Contains(name))
                        continue;

                    temp.Add(name);
                }
            }
        }
        m_AllComponents = temp.ToArray();
    }

    private bool StringMate(string s1, string s2)
    {
        if (string.IsNullOrEmpty(s1) || string.IsNullOrEmpty(s2)) return false;
        return s1.ToLower().Contains(s2.ToLower());
    }

    private void OnDrawSearch()
    {
        EditorGUILayout.BeginVertical();

        EditorGUILayout.BeginHorizontal();
        EditorGUILayout.PrefixLabel("按字符匹配");
        m_SearchString = m_SearchField.OnToolbarGUI(m_SearchString);
        EditorGUILayout.EndHorizontal();

        EditorGUILayout.BeginHorizontal();
        m_SearchComponentIndex = EditorGUILayout.Popup("按类型匹配", m_SearchComponentIndex, m_AllComponents);

        EditorGUILayout.EndHorizontal();

        EditorGUILayout.EndVertical();
    }


    private void OnDrawAutoInject()
    {
        EditorGUILayout.BeginHorizontal();
        m_EnableFindStartWhithStr = EditorGUILayout.Toggle("按字符开头匹配", m_EnableFindStartWhithStr);
        if (m_EnableFindStartWhithStr)
            m_FindStartWithStr = EditorGUILayout.TextField(m_FindStartWithStr);
        EditorGUILayout.EndHorizontal();

        EditorGUILayout.BeginHorizontal();
        m_EnableAutoInjectComponent = EditorGUILayout.Toggle("按类型匹配", m_EnableAutoInjectComponent);
        if (m_EnableAutoInjectComponent)
            m_AutoInjectComponentIndex = EditorGUILayout.Popup(m_AutoInjectComponentIndex, s_AutoInjectComponent);
        EditorGUILayout.EndHorizontal();

        if (GUILayout.Button("开始注入"))
        {
            Transform tra = target.GetComponent<Transform>();
            if (tra == null)
            {
                Debug.LogError("选中对象为空");
                return;
            }
            List<Transform> childs = new List<Transform>();
            if (!m_EnableFindStartWhithStr || string.IsNullOrEmpty(m_FindStartWithStr) || tra.name.StartsWith(m_FindStartWithStr))
                childs.Add(tra);

            GetAllChild(tra, childs);

            injectionObjects.ClearArray();
            string componentName = "";
            foreach (Transform go in childs)
            {
                componentName = GetComponts(go);
                if (string.IsNullOrEmpty(componentName))
                    continue;

                injectionObjects.InsertArrayElementAtIndex(injectionObjects.arraySize);
                SerializedProperty item = injectionObjects.GetArrayElementAtIndex(injectionObjects.arraySize - 1);
                item.FindPropertyRelative("m_Target").objectReferenceValue = go.gameObject;
                item.FindPropertyRelative("m_Name").stringValue = go.name.Replace("b_", "");
                item.FindPropertyRelative("m_Component").objectReferenceValue = go.GetComponent(componentName);
            }

            UpdateAllComponent();
            serializedObject.ApplyModifiedProperties();
        }
    }

    private void GetAllChild(Transform tra, List<Transform> childs)
    {
        for (int i = 0; i < tra.childCount; i++)
        {
            Transform temp = tra.GetChild(i);

            if (!m_EnableFindStartWhithStr || string.IsNullOrEmpty(m_FindStartWithStr) || temp.name.StartsWith(m_FindStartWithStr))
            {
                childs.Add(temp);
            }

            if (temp.childCount > 0)
            {
                GetAllChild(tra, childs);
            }
        }
    }

    private string GetComponts(Transform go)
    {
        Component[] components = go.GetComponents<Component>();
        string name = s_AutoInjectComponent[m_AutoInjectComponentIndex];

        if (m_EnableAutoInjectComponent)
        {
            foreach (var comp in components)
            {
                if (comp.GetType().Name == name)
                {
                    return name;
                }
            }
        }
        else
        {
            foreach (string comName in s_AutoInjectComponent)
            {
                foreach (var comp in components)
                {
                    if (comp.GetType().Name == comName)
                    {
                        return comName;
                    }
                }
            }
        }


        return "";
    }
}

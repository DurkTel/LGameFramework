using GameCore;
using GameCore.Asset;
using LGameFramework.GameBase.Pool;
using System;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(GMPoolHelper))]
public class GMPoolHelperEditor : Editor
{
    private bool m_ShowHelper;

    private GUISkin m_Skin;

    public void OnEnable()
    {
        
        m_Skin = Resources.Load("GUISkin") as GUISkin;
    }

    public void OnDisable()
    {
        
    }

    public override bool RequiresConstantRepaint()
    {
        return true;
    }

    public override void OnInspectorGUI()
    {
        if (GUILayout.Button(m_ShowHelper ? "�رն���ؼ��" : "��������ؼ��"))
            m_ShowHelper = !m_ShowHelper;

        if (!m_ShowHelper) return;

        int flag = 0;
        int count = Pool.SubPools.Values.Count - 1;
        EditorGUILayout.BeginVertical();

        foreach (var item in Pool.SubPools.Values)
        {
            if (flag % 2 == 0)
                EditorGUILayout.BeginHorizontal();

            EditorGUILayout.BeginVertical(m_Skin.box);

            EditorGUILayout.LabelField(string.Format("���������ռ䣺<color=#ffffff>{0}</color>", item.ReferenceType.Namespace), m_Skin.label);
            EditorGUILayout.SelectableLabel(string.Format("�������ͣ�<color=#ffffff>{0}</color>", item.ReferenceType.Name), m_Skin.label);
            EditorGUILayout.LabelField(string.Format("ʹ���У�<color=#77dc60>{0}</color>", item.UsingCount), m_Skin.label);
            EditorGUILayout.LabelField(string.Format("���ճ��У�<color=#77dc60>{0}</color>", item.ReleaseCount), m_Skin.label);
            EditorGUILayout.LabelField(string.Format("��ȡ������<color=#77dc60>{0}</color>", item.GetCount), m_Skin.label);
            EditorGUILayout.LabelField(string.Format("��Ӵ�����<color=#77dc60>{0}</color>", item.AddCount), m_Skin.label);
            EditorGUILayout.LabelField(string.Format("�Ƴ�������<color=#77dc60>{0}</color>", item.RemoveCount), m_Skin.label);

            EditorGUILayout.EndVertical();

            if (flag % 2 == 1 || flag == count)
                EditorGUILayout.EndHorizontal();

            flag++;
        }
        EditorGUILayout.EndVertical();

    }
}

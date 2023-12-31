using LGameFramework.GameBase.ZoneArea;
using System;
using UnityEditor;
using UnityEngine;
using static Unity.IO.LowLevel.Unsafe.AsyncReadManagerMetrics;


[CustomEditor(typeof(ZoneArea))]
public class ZoneAreaEditor : Editor
{
    private ZoneArea m_ZoneArea;

    private GUISkin m_Skin;

    private bool m_Empty;

    private int m_CurrentIndex;

    public void OnEnable()
    {
        m_ZoneArea = (ZoneArea)target;
        m_Skin = Resources.Load("GUISkin") as GUISkin;
        m_CurrentIndex = -1;
    }

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        m_Empty = m_ZoneArea.zoneAreaData == null || m_ZoneArea.zoneAreaData.Count == 0;
        if (m_Empty)
            EditorGUILayout.HelpBox("场景中未添加任何区域", MessageType.Info);

        EditorGUILayout.BeginHorizontal();

        if (GUILayout.Button("添加区域"))
        {
            m_ZoneArea.AddZoneAreaData(ZoneShape.Rect, 2, new ZoneAreaData());
            Repaint();
        }

        if (!m_Empty)
        {
            if (GUILayout.Button("移除区域"))
            {
                if (m_CurrentIndex <= -1)
                {
                    EditorUtility.DisplayDialog("警告", "请选择需要移除的区域", "确定");
                    return;

                }
                m_ZoneArea.zoneAreaData.RemoveAt(m_CurrentIndex);
                Repaint();
            }

            if (GUILayout.Button("移除所有区域"))
            {
                if (EditorUtility.DisplayDialog("警告", "确定要清空所有区域数据吗？", "确定"))
                {
                    m_ZoneArea.zoneAreaData.Clear();
                    Repaint();
                }
            }
        }
        EditorGUILayout.EndHorizontal();

        EditorHelper.DrawBorder(m_ZoneArea.zoneAreaData, 1, (p, r, i) =>
        {
            Color normalColor = GUI.color;
            GUI.color = m_CurrentIndex == i ? Color.green : normalColor;
            if (r.Contains(Event.current.mousePosition) && Event.current.type == EventType.MouseDown)
            {
                m_CurrentIndex = m_CurrentIndex != i ? i : -1;
                Repaint();
            }

            SerializableZoneAreaData info = (SerializableZoneAreaData)p;
            EditorGUILayout.BeginHorizontal();
            EditorGUI.BeginChangeCheck();
            info.zoneType = EditorGUILayout.IntField("区域类型：", info.zoneType, m_Skin.label);
            if (EditorGUI.EndChangeCheck())
            {
                if ((info.zoneType & 2) != 0 || info.zoneType <= 0)
                {
                    EditorUtility.DisplayDialog("警告", "区域类型需要为2的N次方且大于0", "确定");
                    info.zoneType = 2;
                }
            }
            info.shape = (ZoneShape)EditorGUILayout.EnumPopup(info.shape);
            EditorGUILayout.EndHorizontal();

            switch (info.shape)
            {
                case ZoneShape.Rect:
                    DrawRectZoneArea(info);
                    break;
                case ZoneShape.Sphere:
                    DrawSphereZoneArea(info);
                    break;
            }
            GUI.color = normalColor;

        }, m_Skin);
    }


    private void DrawRectZoneArea(SerializableZoneAreaData info)
    {
        GUILayout.Space(10);
        info.data.vector1 = EditorGUILayout.Vector3Field("中心点：", info.data.vector1);
        info.data.vector2 = EditorGUILayout.Vector3Field("长宽高：", info.data.vector2);
    }

    private void DrawSphereZoneArea(SerializableZoneAreaData info)
    {
        GUILayout.Space(10);
        info.data.vector1 = EditorGUILayout.Vector3Field("中心点：", info.data.vector1);
        info.data.x1 = EditorGUILayout.FloatField("半径：", info.data.x1);
    }
}

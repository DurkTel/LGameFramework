using LGameFramework.GameCore;
using System;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(GMOrbitCameraHelper))]
public class GMOrbitCameraHelperEditor : Editor
{
    private GUISkin m_Skin;

    private GMOrbitCamera m_GMOrbitCamera;

    private Vector2 m_ScrollPos;

    private SerializedProperty m_SerializedProperty;

    private SerializedProperty m_Distance;
    private SerializedProperty m_FocusRadius;
    private SerializedProperty m_FocusCentering;
    private SerializedProperty m_RotationSpeed;
    private SerializedProperty m_MinVerticalAngle;
    private SerializedProperty m_MaxVerticalAngle;
    private SerializedProperty m_AlignSmoothRange;
    private SerializedProperty m_AlignDelay;
    private SerializedProperty m_LockonSmooth;
    private SerializedProperty m_ObstructionMask;
    private SerializedProperty m_LockonRadius;
    private SerializedProperty m_LockonLayer;


    public void OnEnable()
    {
        m_GMOrbitCamera = (target as GMOrbitCameraHelper).DataSource;
        m_SerializedProperty = serializedObject.FindProperty("m_DataSource");
        m_Distance = m_SerializedProperty.FindPropertyRelative("m_Distance");
        m_FocusRadius = m_SerializedProperty.FindPropertyRelative("m_FocusRadius");
        m_FocusCentering = m_SerializedProperty.FindPropertyRelative("m_FocusCentering");
        m_RotationSpeed = m_SerializedProperty.FindPropertyRelative("m_RotationSpeed");
        m_MinVerticalAngle = m_SerializedProperty.FindPropertyRelative("m_MinVerticalAngle");
        m_MaxVerticalAngle = m_SerializedProperty.FindPropertyRelative("m_MaxVerticalAngle");
        m_AlignSmoothRange = m_SerializedProperty.FindPropertyRelative("m_AlignSmoothRange");
        m_AlignDelay = m_SerializedProperty.FindPropertyRelative("m_AlignDelay");
        m_LockonSmooth = m_SerializedProperty.FindPropertyRelative("m_LockonSmooth");
        m_LockonRadius = m_SerializedProperty.FindPropertyRelative("m_LockonRadius");
        m_ObstructionMask = m_SerializedProperty.FindPropertyRelative("m_ObstructionMask");
        m_LockonLayer = m_SerializedProperty.FindPropertyRelative("m_LockonLayer");

        m_Skin = Resources.Load("GUISkin") as GUISkin;

    }

    public override void OnInspectorGUI()
    {
        EditorGUI.BeginChangeCheck();
        m_Distance.floatValue = EditorGUILayout.Slider("焦点距离", m_Distance.floatValue, 1f, 20f);
        m_FocusRadius.floatValue = EditorGUILayout.Slider("焦点的缓动半径", m_FocusRadius.floatValue, 0f, 1f);
        m_FocusCentering.floatValue = EditorGUILayout.Slider("焦点居中系数", m_FocusCentering.floatValue, 0f, 1f);
        m_RotationSpeed.floatValue = EditorGUILayout.Slider("相机旋转速度", m_RotationSpeed.floatValue, 1f, 360f);
        m_MinVerticalAngle.floatValue = EditorGUILayout.Slider("约束角度（最小）", m_MinVerticalAngle.floatValue, -89f, 89f);
        m_MaxVerticalAngle.floatValue = EditorGUILayout.Slider("约束角度（最大）", m_MaxVerticalAngle.floatValue, -89f, 89f);
        m_AlignSmoothRange.floatValue = EditorGUILayout.Slider("对齐平滑范围", m_AlignSmoothRange.floatValue, 0f, 90f);
        m_AlignDelay.floatValue = EditorGUILayout.Slider("自动对齐等待时间", m_AlignDelay.floatValue, 0f, 90f);
        m_LockonSmooth.floatValue = EditorGUILayout.FloatField("锁定时的平滑时间", m_LockonSmooth.floatValue);
        m_LockonRadius.floatValue = EditorGUILayout.FloatField("锁定范围", m_LockonRadius.floatValue);
        EditorGUILayout.PropertyField(m_ObstructionMask, new GUIContent("相机遮挡检测的层级"));
        EditorGUILayout.PropertyField(m_LockonLayer, new GUIContent("可锁定层级"));

        if (EditorGUI.EndChangeCheck())
        {
            serializedObject.ApplyModifiedProperties();
        }
    }
}

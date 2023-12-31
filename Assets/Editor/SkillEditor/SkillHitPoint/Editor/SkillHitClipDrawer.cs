using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using SkillEditor;
using System;

[CustomEditor(typeof(SkillHitClip))]
public class SkillHitClipDrawer : Editor
{
    protected GUIContent m_effectCout = new GUIContent("打击次数");
    protected GUIContent m_repulsionDistance = new GUIContent("击退距离");
    protected GUIContent m_strikeFly = new GUIContent("受击浮空系数");
    protected GUIContent m_shakeOrient = new GUIContent("镜头震动模式");
    protected GUIContent m_period = new GUIContent("震动周期");
    protected GUIContent m_shakeTime = new GUIContent("震动时长");
    protected GUIContent m_maxWave = new GUIContent("震动最大波峰");
    protected GUIContent m_minWave = new GUIContent("震动最小波峰");
    protected GUIContent m_shakeCurve = new GUIContent("震动曲线");


    public override void OnInspectorGUI()
    {
        SerializedProperty effectCout = serializedObject.FindProperty("effectCout");
        SerializedProperty repulsionDistance = serializedObject.FindProperty("repulsionDistance");
        SerializedProperty strikeFly = serializedObject.FindProperty("strikeFly");
        //SerializedProperty shakeOrient = serializedObject.FindProperty("shakeOrient");
        SerializedProperty period = serializedObject.FindProperty("period");
        SerializedProperty shakeTime = serializedObject.FindProperty("shakeTime");
        SerializedProperty maxWave = serializedObject.FindProperty("maxWave");
        SerializedProperty minWave = serializedObject.FindProperty("minWave");
        SerializedProperty shakeCurve = serializedObject.FindProperty("shakeCurve");

        EditorGUILayout.PropertyField(effectCout, m_effectCout);
        EditorGUILayout.PropertyField(repulsionDistance, m_repulsionDistance);
        EditorGUILayout.PropertyField(strikeFly, m_strikeFly);
        //EditorGUILayout.PropertyField(shakeOrient, m_shakeOrient);
        EditorGUI.indentLevel++;
        //if (shakeOrient.enumValueIndex != 0)
        //{
        //    if (shakeOrient.enumValueIndex == 4)
        //        EditorGUILayout.PropertyField(shakeCurve, m_shakeCurve);
        //    else
        //    {
        //        EditorGUILayout.PropertyField(period, m_period);
        //        EditorGUILayout.PropertyField(shakeTime, m_shakeTime);
        //        EditorGUILayout.PropertyField(maxWave, m_maxWave);
        //        EditorGUILayout.PropertyField(minWave, m_minWave);
        //    }
        //}

        serializedObject.ApplyModifiedProperties();
    }
}

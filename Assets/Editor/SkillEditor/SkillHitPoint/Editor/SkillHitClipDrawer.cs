using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using SkillEditor;
using System;

[CustomEditor(typeof(SkillHitClip))]
public class SkillHitClipDrawer : Editor
{
    protected GUIContent m_effectCout = new GUIContent("�������");
    protected GUIContent m_repulsionDistance = new GUIContent("���˾���");
    protected GUIContent m_strikeFly = new GUIContent("�ܻ�����ϵ��");
    protected GUIContent m_shakeOrient = new GUIContent("��ͷ��ģʽ");
    protected GUIContent m_period = new GUIContent("������");
    protected GUIContent m_shakeTime = new GUIContent("��ʱ��");
    protected GUIContent m_maxWave = new GUIContent("����󲨷�");
    protected GUIContent m_minWave = new GUIContent("����С����");
    protected GUIContent m_shakeCurve = new GUIContent("������");


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

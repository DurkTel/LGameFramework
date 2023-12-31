using SkillEditor;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(SkillComboTrack))]

public class SkillComboTrackDrawer : Editor
{
    private GUIContent m_combatSkillConfig = new GUIContent("技能连招派生");

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();


        EditorGUILayout.HelpBox("   该轨道用于派生连招，一个派生轨道代表一种派生", MessageType.Info);

    }
}

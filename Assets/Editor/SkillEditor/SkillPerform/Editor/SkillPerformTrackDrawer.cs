using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace SkillEditor
{
    [CustomEditor(typeof(SkillPerformTrack))]
    public class SkillPerformTrackDrawer : Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();

            EditorGUILayout.HelpBox("   该轨道用于调整技能的前摇 后摇", MessageType.Info);
        }
    }
}

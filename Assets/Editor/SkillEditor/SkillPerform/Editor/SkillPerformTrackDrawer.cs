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

            EditorGUILayout.HelpBox("   �ù�����ڵ������ܵ�ǰҡ ��ҡ", MessageType.Info);
        }
    }
}

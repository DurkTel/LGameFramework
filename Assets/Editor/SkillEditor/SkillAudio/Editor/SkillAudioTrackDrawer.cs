using UnityEditor;
using UnityEngine;

namespace SkillEditor
{
    [CustomEditor(typeof(SkillAudioTrack))]
    public class SkillAudioTrackDrawer : Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();

            EditorGUILayout.HelpBox("   该轨道用于调整技能的声效", MessageType.Info);
        }
    }
}
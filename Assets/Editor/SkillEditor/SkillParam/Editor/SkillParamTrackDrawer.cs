using UnityEditor;
using UnityEngine;

namespace SkillEditor
{
    [CustomEditor(typeof(SkillParamTrack))]
    public class SkillParamTrackDrawer : Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();

            EditorGUILayout.HelpBox("   该轨道用于调整技能的各个杂项参数", MessageType.Info);
        }
    }
}
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace SkillEditor
{
    [CustomEditor(typeof(SkillHitTrack))]
    public class SkillHitTrackDrawer : Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();  
            EditorGUILayout.HelpBox("   该轨道用于调整技能的攻击检测开启\n   多个片段代表多段攻击\n   只有一个片段代表只有一次伤害", MessageType.Info);

        }
    }

}

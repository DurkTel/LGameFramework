using SkillEditor;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace SkillEditor
{
    [CustomEditor(typeof(SkillAnimationTrack))]

    public class SkillAnimationTrackDrawer : Editor
    {

        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();
            EditorGUILayout.HelpBox("   该轨道用于预览技能的动画", MessageType.Info);
            EditorGUILayout.HelpBox("   技能动画名称必须与使用该技能的角色的动画机上的命名一致", MessageType.Warning);

        }
    }

}

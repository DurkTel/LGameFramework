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
            EditorGUILayout.HelpBox("   �ù������Ԥ�����ܵĶ���", MessageType.Info);
            EditorGUILayout.HelpBox("   ���ܶ������Ʊ�����ʹ�øü��ܵĽ�ɫ�Ķ������ϵ�����һ��", MessageType.Warning);

        }
    }

}

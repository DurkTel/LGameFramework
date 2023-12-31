using NUnit;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;

namespace SkillEditor
{
    //[CustomEditor(typeof(SkillAudioClip))]
    public class SkillAudioClipDrawer : Editor
    {
        protected GUIContent m_audio = new GUIContent("技能声效");

        protected GUIContent m_hurtAudio = new GUIContent("击中声效");


        public override void OnInspectorGUI()
        {
            SerializedProperty audio = serializedObject.FindProperty("audio");
            SerializedProperty hurtAudio = serializedObject.FindProperty("hurtAudio");

            EditorGUILayout.PropertyField(audio, m_audio);
            EditorGUILayout.PropertyField(hurtAudio, m_hurtAudio);

            serializedObject.ApplyModifiedProperties();

        }
    }
}
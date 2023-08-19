using GameCore.Audio;
using UnityEditor;
using UnityEngine;
using UnityEngine.Audio;
using static GameCore.Audio.AudioSetting;

[CustomEditor(typeof(AudioSetting))]
public class AudioSettingEditor : Editor
{
    private SerializedProperty m_AudioMixerObjects;

    private AudioSetting m_AudioSetting;

    private AudioMixer m_AudioMixer;

    public void OnEnable()
    {
        m_AudioSetting = (AudioSetting)target;
        m_AudioMixerObjects = serializedObject.FindProperty("audioMixer");
        //SetMixerAsset();
    }

    public void OnDisable()
    {
        m_AudioMixerObjects = null;
    }

    public override void OnInspectorGUI()
    {
        EditorGUI.BeginChangeCheck();
        EditorGUILayout.PropertyField(m_AudioMixerObjects, new GUIContent("音效混合器"));
        EditorGUILayout.Space(10);

        if (EditorGUI.EndChangeCheck())
        {
            m_AudioSetting.audioMixer = m_AudioMixerObjects.objectReferenceValue as AudioMixer;
            if (m_AudioSetting.audioMixer != null)
                SetMixerAsset(m_AudioSetting.audioMixer);
            else
            {
                m_AudioMixer = null;
                m_AudioSetting.audioParam = null;
                AssetDatabase.SaveAssets();
                AssetDatabase.Refresh();
            }
        }

        DrawFrameList();
    }

    private void SetMixerAsset(AudioMixer tempMixer)
    {
        if (tempMixer == m_AudioMixer)
            return;

        m_AudioMixer = tempMixer;
        AudioMixerGroup[] audioMixerGroup = m_AudioMixer.FindMatchingGroups("Master");
        m_AudioSetting.audioParam = new AudioParam[audioMixerGroup.Length];
        for (int i = 0; i < audioMixerGroup.Length; i++)
        {
            m_AudioSetting.audioParam[i] ??= new AudioParam();
            m_AudioSetting.audioParam[i].trackName = audioMixerGroup[i].name;
        }

        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
    }

    private void DrawFrameList()
    {
        if (m_AudioSetting.audioParam == null || m_AudioSetting.audioParam.Length <= 0) return;

        EditorGUILayout.BeginVertical();

        EditorGUI.BeginChangeCheck();
        foreach (AudioParam audioParam in m_AudioSetting.audioParam)
        {
            EditorGUILayout.LabelField("轨道名称：" + audioParam.trackName);
            //EditorGUILayout.BeginHorizontal();
            audioParam.isLoop = EditorGUILayout.Toggle("是否循环", audioParam.isLoop);
            audioParam.playMode = (AudioGroup.AudioPlayMode)EditorGUILayout.EnumPopup("播放模式", audioParam.playMode);
            //EditorGUILayout.EndHorizontal();
            EditorGUILayout.Space(10);
        }
        if (EditorGUI.EndChangeCheck())
        {
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
        }

        EditorGUILayout.EndVertical();
    }
}

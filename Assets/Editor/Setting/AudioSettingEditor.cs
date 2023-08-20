using GameCore.Audio;
using System.IO;
using UnityEditor;
using UnityEngine;
using UnityEngine.Audio;
using static GameCore.Audio.AudioSetting;

[CustomEditor(typeof(AudioSetting))]
public class AudioSettingEditor : Editor
{
    private GUISkin m_Skin;

    private AudioSetting m_AudioSetting;

    private AudioMixer m_AudioMixer;

    public void OnEnable()
    {
        m_Skin = Resources.Load("GUISkin") as GUISkin;

        m_AudioSetting = (AudioSetting)target;
    }


    public override void OnInspectorGUI()
    {
        EditorGUILayout.HelpBox("音效管理器路径：" + Path.Combine(BuildPath.s_AudioBuildPath, "GameAudioMixer.mixer"), MessageType.Info);
        if (GUILayout.Button("获取音效混合器并更新轨道"))
        { 
            m_AudioMixer = AssetDatabase.LoadAssetAtPath<AudioMixer>(Path.Combine(BuildPath.s_AudioBuildPath, "GameAudioMixer.mixer"));
            SetMixerAsset();
        }

        DrawFrameList();
    }

    private void SetMixerAsset()
    {
        AudioMixerGroup[] audioMixerGroup = m_AudioMixer.FindMatchingGroups("Master");
        m_AudioSetting.audioParam = new AudioParam[audioMixerGroup.Length];
        for (int i = 0; i < audioMixerGroup.Length; i++)
        {
            m_AudioSetting.audioParam[i] = new AudioParam();
            m_AudioSetting.audioParam[i].trackName = audioMixerGroup[i].name;
        }

        serializedObject.ApplyModifiedProperties();

    }

    private void DrawFrameList()
    {
        if (m_AudioSetting.audioParam == null || m_AudioSetting.audioParam.Length <= 0) return;

        EditorGUI.BeginChangeCheck();

        foreach (AudioParam audioParam in m_AudioSetting.audioParam)
        {
            EditorGUILayout.BeginVertical(m_Skin.box);

            EditorGUILayout.LabelField("轨道名称：" + audioParam.trackName);
            audioParam.isLoop = EditorGUILayout.Toggle("是否循环", audioParam.isLoop);
            audioParam.playMode = (AudioGroup.AudioPlayMode)EditorGUILayout.EnumPopup("播放模式", audioParam.playMode);

            EditorGUILayout.EndVertical();

        }
        if (EditorGUI.EndChangeCheck())
        {
            serializedObject.ApplyModifiedProperties();
        }

    }
}

using LGameFramework.GameCore.Fight;
using SkillEditor;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Playables;
using UnityEngine.Timeline;

[CustomEditor(typeof(SkillPreview))]
public class SkillPreviewEditor : Editor
{
    private const string m_SkillPath = "Assets/ArtModules/ScriptObject/SkillTimeLines/";

    private const string m_SkillPreviewPath = "Assets/SkillPreview/";

    private SkillPreview m_SkillPreview;

    private PlayableDirector m_PlayableDirector;

    private bool m_IsCreateIng;

    private string m_NewName;

    private void OnEnable()
    {
        m_SkillPreview = (target as SkillPreview);
        m_PlayableDirector = m_SkillPreview.GetComponent<PlayableDirector>();
    }


    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        if (m_IsCreateIng)
        {
            m_NewName = EditorGUILayout.TextField("��������", m_NewName);

            if (GUILayout.Button("ȷ��"))
                CreateSkillTimeLine();

            return;
        }

        if (GUILayout.Button("�½�����ʱ����"))
        {
            m_IsCreateIng = true;
        }

        if (GUILayout.Button("������������"))
        {
            ExportSkillData();
        }
    }

    private void CreateSkillTimeLine()
    {
        if (string.IsNullOrEmpty(m_NewName))
        {
            EditorUtility.DisplayDialog("����", "�������¼�������", "ȷ��");
            return;
        }
        string roleCareer = m_SkillPreview.RoleCareer.ToString();
        string fullPath = Path.Combine(m_SkillPreviewPath, roleCareer);

        if (!Directory.Exists(fullPath))
            Directory.CreateDirectory(fullPath);

        string skillAssetsFolder = Path.Combine(fullPath, roleCareer + "_" + m_NewName);
        if (File.Exists(skillAssetsFolder))
        { 
            if (!EditorUtility.DisplayDialog("����", "�Ѵ�����ͬ���ܣ��Ƿ��滻", "ȷ��", "ȡ��"))
                return;

            AssetDatabase.DeleteAsset(skillAssetsFolder);
            AssetDatabase.Refresh();
        }

        SkillTimeLine timelineAsset = ScriptableObject.CreateInstance<SkillTimeLine>();
        AssetDatabase.CreateAsset(timelineAsset, skillAssetsFolder + "_preview.playable");

        timelineAsset.CreateTrack<SkillAnimationTrack>("���ܶ������");
        timelineAsset.CreateTrack<SkillPerformTrack>("�����ݳ����");
        timelineAsset.CreateTrack<SkillHitTrack>("���ܴ�����");
        timelineAsset.CreateTrack<SkillAudioTrack>("������Ч���");
        timelineAsset.CreateTrack<SkillParamTrack>("���ܲ������");
        timelineAsset.CreateTrack<SkillComboTrack>("�����������_1");

        AssetDatabase.SaveAssets();
        EditorUtility.DisplayDialog("��ʾ", "�½��������", "ȷ��");
        if (m_PlayableDirector.playableAsset != null)
        {
            foreach (var item in m_PlayableDirector.playableAsset.outputs)
                m_PlayableDirector.ClearGenericBinding(item.sourceObject);
        }

        m_PlayableDirector.playableAsset = timelineAsset;
        m_IsCreateIng = false;
    }

    private void ExportSkillData()
    {
        Object select = m_PlayableDirector.playableAsset;
        if (select == null || !(select is SkillTimeLine))
        {
            EditorUtility.DisplayDialog("����", "��ѡ�м���SkillTimeLine", "ȷ��");
            return;
        }
        
        if (select != null && select is SkillTimeLine)
        {
            SkillTimeLine asset = select as SkillTimeLine;
            ClientTrackGroupSO skillObj = ScriptableObject.CreateInstance<ClientTrackGroupSO>();

            skillObj.AllTrackGroupSO ??= new List<ClientTrackGroupSO.TrackCfg>();

            foreach (TrackAsset track in asset.GetOutputTracks())
            {
                if (track is SkillAnimationTrack)
                {
                    InitCommonTrack<TrackAnimation>(track, skillObj, (p) =>
                    {
                        foreach (var item in track.GetClips())
                        {
                            p.animationName = item.displayName;
                            p.useRootMotion = (item.asset as SkillAnimationClip).useRootMotion;
                            break;
                        }
                    });
                }
                else if (track is SkillHitTrack)
                    InitCommonTrack<TrackHit>(track, skillObj);
                else if (track is SkillPerformTrack)
                    InitCommonTrack<TrackPoint>(track, skillObj);
                //else if (track is SkillPerformTrack)
                //    InitPerformTrack(track as SkillPerformTrack, skillObj);
                else if (track is SkillAudioTrack)
                    InitCommonTrack<TrackAudio>(track, skillObj, (p) =>
                    {
                        p.audioTrackNames = new TrackAudio.AudioTrackNameStruct[track.GetClips().Count()];
                        int i = 0;
                        foreach (var item in track.GetClips())
                        {
                            var clip = (item.asset as SkillAudioClip);
                            p.audioTrackNames[i++] = new TrackAudio.AudioTrackNameStruct() { audioName = clip.audioName, trackName = clip.trackName };
                        }
                    });
                else if (track is SkillComboTrack)
                    InitCommonTrack<TrackCombo>(track, skillObj, (p) =>
                    {
                        int[] allComboCode = new int[track.GetClips().Count()];
                        int i = 0;
                        foreach (var item in track.GetClips())
                            allComboCode[i++] = (item.asset as SkillComboClip).comboSkillCode;
                        p.allCombo = allComboCode;
                    });
                else if (track is SkillDetectionTrack)
                    InitCommonTrack<TrackDetection>(track, skillObj);
            }


            if (!Directory.Exists(m_SkillPath))
                Directory.CreateDirectory(m_SkillPath);

            string skillAssetsFolder = Path.Combine(m_SkillPath, select.name.Replace("_preview", ""));
            if (File.Exists(skillAssetsFolder))
            {
                if (!EditorUtility.DisplayDialog("����", "�Ѵ�����ͬ���ܣ��Ƿ��滻", "ȷ��", "ȡ��"))
                    return;

                AssetDatabase.DeleteAsset(skillAssetsFolder);
                AssetDatabase.Refresh();
            }

            AssetDatabase.CreateAsset(skillObj, skillAssetsFolder + ".asset");
            EditorUtility.DisplayDialog("��ʾ", "�����������", "ȷ��");

            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
        }

    }

    private T InitCommonTrack<T>(TrackAsset track, ClientTrackGroupSO skillObj, UnityAction<T> call = null) where T : FightTrack
    {
        T skillTrack = CreateInstance<T>();
        int allCount = track.GetClips().Count();
        if (allCount == 0) return null;

        ClipRange[] allClip = new ClipRange[allCount];
        int i = 0;
        foreach (var item in track.GetClips())
            allClip[i++] = new ClipRange() { StartTime = item.start, EndTime = item.end };

        call?.Invoke(skillTrack);

        string path = Path.Combine(m_SkillPath, typeof(T).Name);
        if (!Directory.Exists(path))
            Directory.CreateDirectory(path);

        Object select = m_PlayableDirector.playableAsset;
        AssetDatabase.CreateAsset(skillTrack, string.Format("{0}/{1}_{2}.asset", path, typeof(T).Name, select.name.Replace("_preview", "")));
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();

        skillObj.AllTrackGroupSO.Add(new ClientTrackGroupSO.TrackCfg() { Track = skillTrack, AllClip = allClip });

        return skillTrack;
    }
}

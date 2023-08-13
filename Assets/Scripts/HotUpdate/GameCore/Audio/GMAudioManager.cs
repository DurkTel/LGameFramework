using GameCore;
using GameCore.Asset;
using LGameFramework.GameBase.Pool;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.Pool;

namespace GameCore.Audio
{
    public class GMAudioManager : FrameworkModule
    {
        private AudioMixer m_AudioMixer;

        private Dictionary<string, AudioMixerGroup> m_AudioMixerGroups;
        public Dictionary<string, AudioMixerGroup> AudioMixerGroups { get { return m_AudioMixerGroups; } }

        private Dictionary<string, AudioGroup> m_AudioGroups;
        public Dictionary<string, AudioGroup> AudioGroups { get { return m_AudioGroups; } }

        internal override int Priority => 2;

        internal override GameObject GameObject { get; set; }
        internal override Transform Transform { get; set; }

        internal override void OnInit()
        {
            m_AudioMixerGroups = new Dictionary<string, AudioMixerGroup>();
            m_AudioGroups = new Dictionary<string, AudioGroup>();

            m_AudioMixer = GameEntry.GetModule<GMAssetManager>().LoadAsset<AudioMixer>("GameAudioMixer.mixer");

            AudioTrackRegister.AudioParam param;
            AudioMixerGroup[] audioMixerGroup = m_AudioMixer.FindMatchingGroups("Master");
            foreach (var group in audioMixerGroup)
            {
                AudioMixerGroups.Add(group.name, group);
                if (AudioTrackRegister.audioTrack.TryGetValue(group.name, out param))
                {
                    GameObject temp = new GameObject(string.Format("[{0}]", group.name));
                    temp.transform.SetParent(Transform);
                    AudioGroup audioGroup = new AudioGroup();
                    audioGroup.OnInit(temp, group, param);
                    AudioGroups.Add(group.name, audioGroup);
                }
            }
        }

        internal override void Update(float deltaTime, float unscaledTime)
        {
            foreach (var group in m_AudioGroups.Values)
                group.Update();
        }

        public bool Play(string audioGroupName, string assetName)
        {
            AudioGroup audioGroup;
            if (AudioGroups.TryGetValue(audioGroupName, out audioGroup))
            {
                audioGroup.Play(assetName);
                return true;
            }

            Debug.LogError("没有AudioGroupName = " + audioGroupName + "assetName = " + assetName + "的音效");
            return false;
        }

        public bool Play(string audioGroupName, AudioClip audioClip)
        {
            AudioGroup audioGroup;
            if (AudioGroups.TryGetValue(audioGroupName, out audioGroup))
            {
                audioGroup.Play(audioClip);
                return true;
            }

            return false;
        }

        public bool IsPlaying(string AudioGroupName, string assetName)
        {
            AudioGroup audioGroup;
            if (AudioGroups.TryGetValue(AudioGroupName, out audioGroup))
                return audioGroup.IsPlaying(assetName);

            return false;
        }

        public bool IsPlaying(string AudioGroupName, AudioClip audioClip)
        {
            AudioGroup audioGroup;
            if (AudioGroups.TryGetValue(AudioGroupName, out audioGroup))
                return audioGroup.IsPlaying(audioClip);

            return false;
        }

        public bool Delete(string AudioGroupName, AudioClip audioClip)
        {
            AudioGroup audioGroup;
            if (AudioGroups.TryGetValue(AudioGroupName, out audioGroup))
                return audioGroup.Delete(audioClip);

            return false;
        }

        public bool Delete(string AudioGroupName, string assetName)
        {
            AudioGroup audioGroup;
            if (AudioGroups.TryGetValue(AudioGroupName, out audioGroup))
                return audioGroup.Delete(assetName);

            return false;
        }

        public void SetTotalAudio(float volume)
        {
            if (AudioMixerGroups.TryGetValue("Master", out AudioMixerGroup group))
            {
                group.audioMixer.SetFloat("Total", volume);
            }
        }

        public void SetBgAudio(float volume)
        {
            if (AudioMixerGroups.TryGetValue("BGAudio", out AudioMixerGroup group))
            {
                group.audioMixer.SetFloat("BG", volume);
            }
        }

        public void SetEffectAudio(float volume)
        {
            if (AudioMixerGroups.TryGetValue("EffectAudio", out AudioMixerGroup group))
            {
                group.audioMixer.SetFloat("Effect", volume);
            }
        }

        public void SetUIAudio(float volume)
        {
            if (AudioMixerGroups.TryGetValue("UiAudio", out AudioMixerGroup group))
            {
                group.audioMixer.SetFloat("UI", volume);
            }
        }
    }
}
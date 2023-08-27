using LGameFramework.GameCore.Asset;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

namespace LGameFramework.GameCore.Audio
{
    public sealed partial class GMAudioManager : FrameworkModule
    {
        private AudioSetting m_AudioSetting;
        public AudioSetting AudioSetting { get { return m_AudioSetting; } }

        private AudioMixer m_AudioMixer;
        public AudioMixer AudioMixer { get { return m_AudioMixer; } }

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

            m_AudioSetting = AudioSetting.GetFormAssetBundle();
            m_AudioMixer = GameFrameworkEntry.GetModule<GMAssetManager>().LoadAsset<AudioMixer>("GameAudioMixer.mixer");

            AudioMixerGroup[] audioMixerGroup = m_AudioMixer.FindMatchingGroups("Master");
            AudioMixerGroup group;
            AudioSetting.AudioParam param;
            for (int i = 0; i < m_AudioSetting.audioParam.Length; i++)
            {
                group = audioMixerGroup[i];
                param = m_AudioSetting.audioParam[i];

                AudioMixerGroups.Add(group.name, group);
                GameObject temp = new GameObject(string.Format("[{0}]", group.name));
                temp.transform.SetParent(Transform);
                AudioGroup audioGroup = new AudioGroup();
                audioGroup.OnInit(temp, group, param);
                m_AudioGroups.Add(group.name, audioGroup);
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
            if (m_AudioGroups.TryGetValue(audioGroupName, out audioGroup))
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
            if (m_AudioGroups.TryGetValue(audioGroupName, out audioGroup))
            {
                audioGroup.Play(audioClip);
                return true;
            }

            return false;
        }

        public bool IsPlaying(string AudioGroupName, string assetName)
        {
            AudioGroup audioGroup;
            if (m_AudioGroups.TryGetValue(AudioGroupName, out audioGroup))
                return audioGroup.IsPlaying(assetName);

            return false;
        }

        public bool IsPlaying(string AudioGroupName, AudioClip audioClip)
        {
            AudioGroup audioGroup;
            if (m_AudioGroups.TryGetValue(AudioGroupName, out audioGroup))
                return audioGroup.IsPlaying(audioClip);

            return false;
        }

        public bool Delete(string AudioGroupName, AudioClip audioClip)
        {
            AudioGroup audioGroup;
            if (m_AudioGroups.TryGetValue(AudioGroupName, out audioGroup))
                return audioGroup.Delete(audioClip);

            return false;
        }

        public bool Delete(string AudioGroupName, string assetName)
        {
            AudioGroup audioGroup;
            if (m_AudioGroups.TryGetValue(AudioGroupName, out audioGroup))
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
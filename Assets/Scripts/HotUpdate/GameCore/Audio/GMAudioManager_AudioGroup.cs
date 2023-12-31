using LGameFramework.GameBase;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

namespace LGameFramework.GameCore.Audio
{
    public sealed partial class GMAudioManager
    {
        public sealed class AudioGroup
        {
            public struct AudioParam
            {
                public AudioParam(bool isLoop, AudioPlayMode playMode)
                {
                    this.isLoop = isLoop;
                    this.playMode = playMode;
                }

                public bool isLoop;

                public AudioPlayMode playMode;
            }

            public enum AudioPlayMode
            {
                /// <summary>
                /// 是否允许多个声音同时播放 true的话切断当前 播放下一个
                /// </summary>
                Single,
                /// <summary>
                /// 是否只允许同时播一个 true的话 如果当前有在播 不会播另外的
                /// </summary>
                Only,
                /// <summary>
                /// 是否允许多个声音同时播放 true的话可以多个音效同时播放
                /// </summary>
                Multiple,
            }

            private AudioPlayMode m_PlayMode;
            public AudioPlayMode PlayMode { get { return m_PlayMode; } }

            private AudioMixerGroup m_AudioMixerGroup;
            public AudioMixerGroup AudioMixerGroup { get { return m_AudioMixerGroup; } }

            private bool m_IsLoop;
            public bool IsLoop { get { return m_IsLoop; } }

            private List<AudioObject> m_ActiveAudios;
            public List<AudioObject> ActiveAudios { get { return m_ActiveAudios; } }

            private List<AudioObject> m_UnActiveAudios;
            public List<AudioObject> UnActiveAudios { get { return m_UnActiveAudios; } }

            private GameObject m_GameObject;
            public GameObject GameObject { get { return m_GameObject; } }

            private Transform m_Transform;
            public Transform Transform { get { return m_Transform; } }

            public void OnInit(GameObject gameObject, AudioMixerGroup mixerGroup, AudioSetting.AudioParam param)
            {
                m_GameObject = gameObject;
                m_Transform = gameObject.transform;
                m_AudioMixerGroup = mixerGroup;
                m_IsLoop = param.isLoop;
                m_PlayMode = param.playMode;
            }

            private AudioObject Create()
            {
                AudioObject ao = Pool.Get<AudioObject>();
                ao.Init(new GameObject());
                ao.Transform.SetParent(m_Transform);
                ao.MixerGroup = m_AudioMixerGroup;
                ao.AudioSource.loop = m_IsLoop;
                return ao;
            }

            private AudioObject GetAudioObjectFromActive()
            {
                AudioObject ao = null;

                if (m_ActiveAudios != null && m_ActiveAudios.Count > 0)
                {
                    ao = m_ActiveAudios[0];
                    ao.Release();
                }
                else if (m_UnActiveAudios != null && m_UnActiveAudios.Count > 0)
                {
                    ao = m_UnActiveAudios[0];
                    ao.Release();
                    m_UnActiveAudios.RemoveAt(0);
                    m_ActiveAudios.Add(ao);
                }
                else
                {
                    m_ActiveAudios ??= new List<AudioObject>();
                    ao = Create();
                    m_ActiveAudios.Add(ao);
                }
                return ao;
            }

            private AudioObject GetAudioObjectFromUnActive()
            {
                AudioObject ao = null;

                if (m_UnActiveAudios != null && m_UnActiveAudios.Count > 0)
                {
                    ao = m_UnActiveAudios[0];
                    ao.Release();
                    m_UnActiveAudios.RemoveAt(0);
                    ActiveAudios.Add(ao);
                }
                else
                {
                    m_ActiveAudios ??= new List<AudioObject>();
                    ao = Create();
                    m_ActiveAudios.Add(ao);
                }
                return ao;
            }

            private AudioObject GetAudioObject()
            {
                AudioObject ao = null;

                if (PlayMode == AudioPlayMode.Multiple || (PlayMode == AudioPlayMode.Only && (m_ActiveAudios == null || m_ActiveAudios.Count <= 0)))
                    ao = GetAudioObjectFromUnActive();
                else if (PlayMode == AudioPlayMode.Single)
                    ao = GetAudioObjectFromActive();

                return ao;
            }

            public void Play(string assetName, bool immediately)
            {
                AudioObject ao = GetAudioObject();
                if (ao == null) return;
                ao.Play(assetName, immediately);
            }

            public void Play(AudioClip audioClip)
            {
                AudioObject ao = GetAudioObject();
                if (ao == null) return;
                ao.Play(audioClip);
            }

            public bool IsPlaying(string assetName)
            {
                if (m_ActiveAudios == null || m_ActiveAudios.Count == 0) return false;
                foreach (var item in m_ActiveAudios)
                {
                    if (item.AssetName == assetName)
                        return true;
                }

                return false;
            }

            public bool IsPlaying(AudioClip audioClip)
            {
                if (m_ActiveAudios == null || m_ActiveAudios.Count == 0) return false;
                foreach (var item in m_ActiveAudios)
                {
                    if (item.AudioSource.clip == audioClip)
                        return true;
                }

                return false;
            }

            public bool Delete(string assetName)
            {
                if (m_ActiveAudios == null || m_ActiveAudios.Count == 0) return false;
                foreach (var item in m_ActiveAudios)
                {
                    if (item.AssetName == assetName)
                    {
                        item.Delete();
                        return true;
                    }
                }

                return false;
            }

            public bool Delete(AudioClip audioClip)
            {
                if (m_ActiveAudios == null || m_ActiveAudios.Count == 0) return false;
                foreach (var item in m_ActiveAudios)
                {
                    if (item.AudioSource.clip == audioClip)
                    {
                        item.Delete();
                        return true;
                    }
                }

                return false;
            }

            public void Update()
            {
                if (m_ActiveAudios != null && m_ActiveAudios.Count > 0 && Time.frameCount % 60 == 0)
                {
                    for (int i = 0; i < m_ActiveAudios.Count; i++)
                    {
                        if (!m_ActiveAudios[i].AudioSource.isPlaying)
                        {
                            m_UnActiveAudios ??= new List<AudioObject>();
                            m_UnActiveAudios.Add(m_ActiveAudios[i]);
                            m_ActiveAudios.RemoveAt(i);
                        }
                    }
                }

            }
        }
    }
}

using LGameFramework.GameCore.Asset;
using UnityEngine;
using UnityEngine.Audio;

namespace LGameFramework.GameCore.Audio
{
    public sealed partial class GMAudioManager
    {
        public sealed class AudioObject
        {
            private static int guid;

            public string AssetName { get; private set; }

            public AudioSource AudioSource { get; private set; }

            public float Volume { get { return AudioSource.volume; } set { AudioSource.volume = value; } }

            public bool Pause { get; set; }

            public float Delay { get; set; }

            public GameObject GameObject { get; private set; }

            public Transform Transform { get; private set; }

            public AudioMixerGroup MixerGroup { get { return AudioSource.outputAudioMixerGroup; } set { AudioSource.outputAudioMixerGroup = value; } }

            public void Init(GameObject gameObject)
            {
                this.GameObject = gameObject;
                this.Transform = gameObject.transform;
                this.AudioSource = this.GameObject.TryAddComponent<AudioSource>();
            }

            private void LoadAudioClip(string assetName, bool immediately = false)
            {
                if (immediately)
                {
                    var clip = AssetUtility.LoadAsset<AudioClip>(assetName);
                    PlayInternal(clip);
                    return;
                }

                Loader loader = AssetUtility.LoadAssetAsync<AudioClip>(assetName);
                loader.onComplete = (p) =>
                {
                    PlayInternal(p.GetRawObject<AudioClip>());
                };
            }

            private void PlayInternal(AudioClip clip)
            {
                AudioSource.clip = clip;
                if (Delay > 0f)
                    AudioSource.PlayDelayed(Delay);
                else
                    AudioSource.Play();
            }

            public void Play(AudioClip clip)
            {
                this.Volume = 1.0f;
                this.Delay = 0f;
                this.GameObject.name = string.Format("[{0}]¡ª[{1}]", clip.name, ++guid);
                this.AssetName = AssetName;
                PlayInternal(clip);
            }

            public void Play(string assetName, bool immediately = false)
            {
                this.Volume = 1.0f;
                this.Delay = 0f;
                this.GameObject.name = string.Format("[{0}]¡ª[{1}]", assetName, ++guid);
                this.AssetName = assetName;
                LoadAudioClip(assetName, immediately);
            }

            public void Delete()
            {
                AudioSource.Stop();
            }

            public void Release()
            {
                AudioSource.clip = null;
                AudioSource.loop = false;
                AudioSource.outputAudioMixerGroup = null;
                Pause = false;
                Delay = 0f;
            }
        }
    }
}

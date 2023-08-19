using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

namespace GameCore.Audio
{
    [CreateAssetMenu(fileName = "Audio Setting", menuName = "LGameFramework/Audio Setting")]
    public class AudioSetting : GameCoreSetting<AudioSetting>
    {
        public AudioMixer audioMixer;

        public AudioParam[] audioParam;

        [System.Serializable]
        public class AudioParam
        {
            /// <summary>
            /// 轨道名
            /// </summary>
            public string trackName;
            /// <summary>
            /// 是否循环
            /// </summary>
            public bool isLoop;
            /// <summary>
            /// 轨道播放模式
            /// </summary>
            public AudioGroup.AudioPlayMode playMode;
        }
    }
}

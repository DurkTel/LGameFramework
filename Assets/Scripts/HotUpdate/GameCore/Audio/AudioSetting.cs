using UnityEngine;
using UnityEngine.Audio;

namespace LGameFramework.GameCore.Audio
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
            /// �����
            /// </summary>
            public string trackName;
            /// <summary>
            /// �Ƿ�ѭ��
            /// </summary>
            public bool isLoop;
            /// <summary>
            /// �������ģʽ
            /// </summary>
            public GMAudioManager.AudioGroup.AudioPlayMode playMode;
        }
    }
}

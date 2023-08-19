using System.Collections.Generic;
using static GameCore.Audio.AudioGroup;

namespace GameCore.Audio
{
    public class AudioTrackRegister
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

        public static Dictionary<string, AudioParam> audioTrack = new Dictionary<string, AudioParam>()
        {
            {
                "TalkAudio", new AudioParam(false, AudioPlayMode.Single)
            },
            {
                "CityLoopAudio", new AudioParam(true, AudioPlayMode.Single)
            },
            {
                "CopyLoopAudio", new AudioParam(true, AudioPlayMode.Single)
            },
            {
                "HitAudio", new AudioParam(false, AudioPlayMode.Multiple)
            },
            {
                "HurtAudio", new AudioParam(false, AudioPlayMode.Multiple)
            },
            {
                "OtherAudio", new AudioParam(false, AudioPlayMode.Multiple)
            },
            {
                "UiLoopAudio", new AudioParam(true, AudioPlayMode.Single)
            },
            {
                "UiEffectAudio", new AudioParam(false, AudioPlayMode.Multiple)
            },
        };
    }
}
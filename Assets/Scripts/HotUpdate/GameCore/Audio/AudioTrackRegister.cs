using System.Collections.Generic;
using static GameCore.Audio.AudioGroup;

namespace GameCore.Audio
{
    public class AudioTrackRegister
    {

        public struct AudioParam
        {
            public AudioParam(bool isLoop, AuidioPlayMode playMode)
            {
                this.isLoop = isLoop;
                this.playMode = playMode;
            }

            public bool isLoop;

            public AuidioPlayMode playMode;
        }

        public static Dictionary<string, AudioParam> audioTrack = new Dictionary<string, AudioParam>()
    {
        {
            "TalkAudio", new AudioParam(false, AuidioPlayMode.Single)
        },
        {
            "CityLoopAudio", new AudioParam(true, AuidioPlayMode.Single)
        },
        {
            "CopyLoopAudio", new AudioParam(true, AuidioPlayMode.Single)
        },
        {
            "HitAudio", new AudioParam(false, AuidioPlayMode.Multiple)
        },
        {
            "HurtAudio", new AudioParam(false, AuidioPlayMode.Multiple)
        },
        {
            "OtherAudio", new AudioParam(false, AuidioPlayMode.Multiple)
        },
        {
            "UiLoopAudio", new AudioParam(true, AuidioPlayMode.Single)
        },
        {
            "UiEffectAudio", new AudioParam(false, AuidioPlayMode.Multiple)
        },
    };
    }
}
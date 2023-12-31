using LGameFramework.GameCore.Audio;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// 声效轨道
    /// </summary>
    public class TrackAudio : FightTrack
    {

        public AudioTrackNameStruct[] audioTrackNames;
        public override void OnEnterClip(int index)
        {
            base.OnEnterClip(index);
            var track = audioTrackNames[index];
            AudioUtility.Play(track.trackName, track.audioName);

        }

        [System.Serializable]
        public struct AudioTrackNameStruct
        {
            /// <summary>
            /// 声效名
            /// </summary>
            public string audioName;
            /// <summary>
            /// 轨道名
            /// </summary>
            public string trackName;
        }
    }
}

using LGameFramework.GameCore.Audio;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// ��Ч���
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
            /// ��Ч��
            /// </summary>
            public string audioName;
            /// <summary>
            /// �����
            /// </summary>
            public string trackName;
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

namespace SkillEditor
{
    [TrackClipType(typeof(SkillAudioClip))]
    public class SkillAudioTrack : TrackAsset
    {
        public override Playable CreateTrackMixer(PlayableGraph graph, GameObject go, int inputCount)
        {
            return ScriptPlayable<SkillAudioMixBehavior>.Create(graph, inputCount);
        }
    }
}

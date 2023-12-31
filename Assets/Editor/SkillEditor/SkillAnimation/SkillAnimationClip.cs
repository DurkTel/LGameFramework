using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

namespace SkillEditor
{
    public class SkillAnimationClip : AnimationPlayableAsset
    {
        public bool useRootMotion;

        public override Playable CreatePlayable(PlayableGraph graph, GameObject go)
        {
            var playable = ScriptPlayable<SkillAnimationBehavior>.Create(graph);
            var behavior = playable.GetBehaviour();
            behavior.clip = clip;

            return playable;
        }
    }
}
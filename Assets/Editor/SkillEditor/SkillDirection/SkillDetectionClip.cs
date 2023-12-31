using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using LGameFramework.GameCore.Fight;

namespace SkillEditor
{
    public class SkillDetectionClip : PlayableAsset
    {
        public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
        {

            return Playable.Create(graph);
        }
    }
}
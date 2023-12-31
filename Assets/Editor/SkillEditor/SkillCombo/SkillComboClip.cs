using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

namespace SkillEditor
{
    public class SkillComboClip : PlayableAsset
    {
        public int comboSkillCode;
        public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
        {

            return Playable.Create(graph);
        }
    }

}

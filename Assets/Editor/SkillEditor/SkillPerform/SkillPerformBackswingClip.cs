using System.Collections;
using UnityEngine;
using UnityEngine.Playables;

namespace SkillEditor
{
    public class SkillPerformBackswingClip : PlayableAsset
    {
        public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
        {
            return Playable.Create(graph);
        }
    }
}
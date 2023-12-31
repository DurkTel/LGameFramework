using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

namespace SkillEditor
{
    public class SkillHitBehaviour : PlayableBehaviour
    {
        public override void OnPlayableCreate(Playable playable)
        {
            playable.SetDuration(0.5f);
        }
    }
}

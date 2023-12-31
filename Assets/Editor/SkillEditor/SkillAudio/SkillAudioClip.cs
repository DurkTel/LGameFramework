using UnityEngine;
using UnityEngine.Playables;

namespace SkillEditor
{
    public class SkillAudioClip : PlayableAsset
    {
        /// <summary>
        /// 声效名
        /// </summary>
        public string audioName;
        /// <summary>
        /// 轨道名
        /// </summary>
        public string trackName;
        public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
        {
            var playable = ScriptPlayable<SkillAudioMixBehavior>.Create(graph);
            var behavior = playable.GetBehaviour();
            behavior.audioName = audioName;
            behavior.trackName = trackName; 
            return playable;
        }

    }

}

using UnityEngine;
using UnityEngine.Playables;

namespace SkillEditor
{
    public class SkillAudioClip : PlayableAsset
    {
        /// <summary>
        /// ��Ч��
        /// </summary>
        public string audioName;
        /// <summary>
        /// �����
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

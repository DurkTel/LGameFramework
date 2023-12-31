using LGameFramework.GameCore;
using LGameFramework.GameCore.Audio;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

namespace SkillEditor
{
    public class SkillAudioMixBehavior : PlayableBehaviour
    {
        /// <summary>
        /// ��Ч��
        /// </summary>
        public string audioName;
        /// <summary>
        /// �����
        /// </summary>
        public string trackName;

        public override void OnBehaviourPlay(Playable playable, FrameData info)
        {
#if UNITY_EDITOR
            if(Application.isPlaying && !string.IsNullOrEmpty(audioName) && !string.IsNullOrEmpty(trackName))
            {
                AudioUtility.Play(trackName, audioName, true);
            }
#endif
        }
    }
}
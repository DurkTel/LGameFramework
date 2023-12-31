using UnityEngine;
using UnityEngine.Playables;

namespace SkillEditor
{
    public class SkillAnimationBehavior : PlayableBehaviour
    {
        public AnimationClip clip;

        private float m_NormalizeTime;

        private GameObject m_Actor;

        public override void OnBehaviourPlay(Playable playable, FrameData info)
        {
            m_NormalizeTime = 0;
            Animator animator = GameObject.FindAnyObjectByType<Animator>();
            if (animator == null) return;
            m_Actor = animator.gameObject;
        }

        public override void ProcessFrame(Playable playable, FrameData info, object playerData)
        {
            if (m_Actor == null) return;
            m_NormalizeTime += info.deltaTime;
            clip.SampleAnimation(m_Actor, m_NormalizeTime);
        }
    }
}
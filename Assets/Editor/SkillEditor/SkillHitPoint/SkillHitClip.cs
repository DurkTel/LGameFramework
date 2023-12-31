using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

namespace SkillEditor
{
    public class SkillHitClip : PlayableAsset
    {
        /// <summary>
        /// �������
        /// </summary>
        public int effectCout;
        /// <summary>
        /// ���˾���
        /// </summary>
        public float repulsionDistance;
        /// <summary>
        /// �ܻ�����ϵ��
        /// </summary>
        public float strikeFly;
        /// <summary>
        /// ������
        /// </summary>
        public float period;
        /// <summary>
        /// ��ʱ��
        /// </summary>
        public float shakeTime;
        /// <summary>
        /// ����󲨷�
        /// </summary>
        public float maxWave;
        /// <summary>
        /// ����С����
        /// </summary>
        public float minWave;
        /// <summary>
        /// ������
        /// </summary>
        public AnimationCurve shakeCurve;

        public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
        {
            var playable = ScriptPlayable<SkillHitBehaviour>.Create(graph);
            return playable;
        }
    }

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

namespace SkillEditor
{
    public class SkillHitClip : PlayableAsset
    {
        /// <summary>
        /// 打击次数
        /// </summary>
        public int effectCout;
        /// <summary>
        /// 击退距离
        /// </summary>
        public float repulsionDistance;
        /// <summary>
        /// 受击浮空系数
        /// </summary>
        public float strikeFly;
        /// <summary>
        /// 震动周期
        /// </summary>
        public float period;
        /// <summary>
        /// 震动时长
        /// </summary>
        public float shakeTime;
        /// <summary>
        /// 震动最大波峰
        /// </summary>
        public float maxWave;
        /// <summary>
        /// 震动最小波峰
        /// </summary>
        public float minWave;
        /// <summary>
        /// 震动曲线
        /// </summary>
        public AnimationCurve shakeCurve;

        public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
        {
            var playable = ScriptPlayable<SkillHitBehaviour>.Create(graph);
            return playable;
        }
    }

}

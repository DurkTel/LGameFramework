using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

namespace SkillEditor
{
    public class SkillParamClip : PlayableAsset
    {
        /// <summary>
        /// 优先级
        /// </summary>
        public int priority;
        /// <summary>
        /// 自动锁定
        /// </summary>
        public bool autoLock;
        /// <summary>
        /// 强制执行
        /// </summary>
        public bool force;
        /// <summary>
        /// 标签
        /// </summary>
        public string tag;
        /// <summary>
        /// 忽略攻击信号
        /// </summary>
        public bool ignoreSignal;


        public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
        {
            return Playable.Create(graph);
        }
    }

}

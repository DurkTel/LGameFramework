using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

namespace SkillEditor
{
    public class SkillParamClip : PlayableAsset
    {
        /// <summary>
        /// ���ȼ�
        /// </summary>
        public int priority;
        /// <summary>
        /// �Զ�����
        /// </summary>
        public bool autoLock;
        /// <summary>
        /// ǿ��ִ��
        /// </summary>
        public bool force;
        /// <summary>
        /// ��ǩ
        /// </summary>
        public string tag;
        /// <summary>
        /// ���Թ����ź�
        /// </summary>
        public bool ignoreSignal;


        public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
        {
            return Playable.Create(graph);
        }
    }

}

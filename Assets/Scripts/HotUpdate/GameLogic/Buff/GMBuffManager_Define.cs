using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic.Buff
{
    public partial class GMBuffManager : LogicModule
    {

        /// <summary>
        /// buff����
        /// </summary>
        public struct BuffData
        {
            /// <summary>
            /// buffID
            /// </summary>
            public int id;
            /// <summary>
            /// ӵ����
            /// </summary>
            public int owner;
            /// <summary>
            /// ������
            /// </summary>
            public int formId;
            /// <summary>
            /// ����ʱ��
            /// </summary>
            public double duration;
            /// <summary>
            /// ����
            /// </summary>
            public float param;
        }

        /// <summary>
        /// buff��ǩ
        /// </summary>
        public enum BuffTag
        { 
            /// <summary>
            /// ����
            /// </summary>
            Buff = 2,
            /// <summary>
            /// ����
            /// </summary>
            Debuff = 4,
            /// <summary>
            /// Ⱥ��
            /// </summary>
            Group = 8,
        }

        /// <summary>
        /// buff����
        /// </summary>
        public enum BuffType
        {
            /// <summary>
            /// �޸��ٶ�
            /// </summary>
            ModifySpeed,
            /// <summary>
            /// �޸���̬
            /// </summary>
            ModifyShape
        }
    }
}

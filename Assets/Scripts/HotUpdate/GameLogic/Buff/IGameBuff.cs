using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic.Buff
{
    public interface IGameBuff
    {
        /// <summary>
        /// buffID
        /// </summary>
        public int Id { get; }
        /// <summary>
        /// buff����
        /// </summary>
        public GMBuffManager.BuffType Type { get; }
        /// <summary>
        /// buff��ǩ
        /// </summary>
        public GMBuffManager.BuffTag Tag { get; }
        /// <summary>
        /// ӵ����
        /// </summary>
        public int Owner { get; }
        /// <summary>
        /// ������
        /// </summary>
        public int FormId { get; }
        /// <summary>
        /// ��ʼʱ��
        /// </summary>
        public double StartTime { get; }
        /// <summary>
        /// ����ʱ��
        /// </summary>
        public double Duration { get; }
        /// <summary>
        /// ʣ��ʱ��
        /// </summary>
        public double Remainder { get; }
        /// <summary>
        /// ��ʼ��
        /// </summary>
        /// <param name="data"></param>
        public void OnInit(GMBuffManager.BuffData data);
        /// <summary>
        /// buff��Ч
        /// </summary>
        public void OnActive();
        /// <summary>
        /// buffʧЧ
        /// </summary>
        public void OnDelete();
        /// <summary>
        /// buff����
        /// </summary>
        public void OnUpdate();
    }
}

using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// �������
    /// ��������һ�����
    /// </summary>
    public class TrackPerformance
    {
        /// <summary>
        /// ������ȥ�˶��
        /// </summary>
        private double m_PassingTime;
        public double PassingTime { get { return m_PassingTime; } }
        /// <summary>
        /// �����
        /// </summary>
        private FightTrackGroup m_TrackGroup;
        public FightTrackGroup TrackGroup { get { return m_TrackGroup; } }
        /// <summary>
        /// �Ƿ����
        /// </summary>
        public bool IsFinish { get { return m_TrackGroup.TrackGroupIsEnd; } }

        public virtual void OnInit(GMFightBroadcastManager.FightBroadcastObject fbObject)
        {
            m_TrackGroup = Pool.Get<FightTrackGroup>();
            m_PassingTime = 0f;
            //����ȥm_TrackGroup.OnInit
        }

        /// <summary>
        /// ֡���¹��
        /// </summary>
        /// <param name="deltaTime">֡���ʱ��</param>
        /// <param name="passingTime">��ȥ�˶���ʱ��</param>
        public virtual void Update(float deltaTime)
        {
            m_TrackGroup.Update(deltaTime, m_PassingTime);
            m_PassingTime += deltaTime;
        }

        public virtual void Release()
        {
            m_TrackGroup.Release();
            Pool.Release(m_TrackGroup);
            m_TrackGroup = null;
        }

    }
}

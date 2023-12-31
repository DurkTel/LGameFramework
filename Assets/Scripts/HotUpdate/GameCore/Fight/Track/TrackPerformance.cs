using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// 轨道表现
    /// 轨道组的上一层抽象
    /// </summary>
    public class TrackPerformance
    {
        /// <summary>
        /// 激活后过去了多久
        /// </summary>
        private double m_PassingTime;
        public double PassingTime { get { return m_PassingTime; } }
        /// <summary>
        /// 轨道组
        /// </summary>
        private FightTrackGroup m_TrackGroup;
        public FightTrackGroup TrackGroup { get { return m_TrackGroup; } }
        /// <summary>
        /// 是否完成
        /// </summary>
        public bool IsFinish { get { return m_TrackGroup.TrackGroupIsEnd; } }

        public virtual void OnInit(GMFightBroadcastManager.FightBroadcastObject fbObject)
        {
            m_TrackGroup = Pool.Get<FightTrackGroup>();
            m_PassingTime = 0f;
            //子类去m_TrackGroup.OnInit
        }

        /// <summary>
        /// 帧更新轨道
        /// </summary>
        /// <param name="deltaTime">帧间隔时间</param>
        /// <param name="passingTime">过去了多少时间</param>
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

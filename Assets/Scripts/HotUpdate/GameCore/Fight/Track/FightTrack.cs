
using LGameFramework.GameCore.Asset;
using UnityEngine;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// 客户端轨道
    /// 用于表现
    /// </summary>
    [System.Serializable]
    public class FightTrack : ScriptableObject
    {
        /// <summary>
        /// 所属轨道组
        /// </summary>
        private FightTrackGroup m_TrackGroup;
        public FightTrackGroup TrackGroup { get { return m_TrackGroup; } }
        /// <summary>
        /// 实体
        /// </summary>
        public int Entity { get { return m_TrackGroup != null ? m_TrackGroup.Entity : -1; } }
        /// <summary>
        /// 技能轨道的所有片段
        /// </summary>
        private ClipRange[] m_AllClip;
        public ClipRange[] AllClip { set { m_AllClip = value; } get { return m_AllClip; } }
        /// <summary>
        /// 轨道播放结束
        /// </summary>
        private bool m_TrackIsEnd;
        public bool TrackIsEnd { get { return m_TrackIsEnd; } }
        /// <summary>
        /// 当前播放到的下标
        /// </summary>
        private int m_NewIndex;
        public int NewIndex { get { return m_NewIndex; } }
        /// <summary>
        /// 上次播放到的下标
        /// </summary>
        private int m_LastIndex;
        public int LastIndex { get { return m_LastIndex; } }
        /// <summary>
        /// 当前活跃的下标
        /// </summary>
        private int m_CurrentIndex;
        public int CurrentIndex { get { return m_CurrentIndex; } }
        /// <summary>
        /// 片段数量
        /// </summary>
        public int ClipCount { get { return m_AllClip.Length; } }
        /// <summary>
        /// 在片段中
        /// </summary>
        public bool InClip { get { return m_CurrentIndex != -1; } }

        /// <summary>
        /// 初始化
        /// </summary>
        public virtual void OnInit(FightTrackGroup group)
        {
            m_TrackGroup = group;
            m_NewIndex = 0;
            m_LastIndex = -1;
            m_CurrentIndex = -1;
            m_TrackIsEnd = false;
        }

        /// <summary>
        /// 帧更新轨道
        /// </summary>
        /// <param name="deltaTime">帧间隔时间</param>
        /// <param name="passingTime">过去了多少时间</param>
        public virtual void OnUpdate(float deltaTime, double passingTime)
        {
            if (m_TrackIsEnd) return;
            int count = ClipCount;
            for (int i = m_NewIndex; i < count; i++)
            {
                ClipRange clip = m_AllClip[i];
                //未播放到该片段
                if (passingTime < clip.StartTime) break;

                //进入新的片段
                if (m_NewIndex <= i && m_LastIndex != i)
                {
                    OnEnterClip(i);
                    m_LastIndex = i;
                }

                //退出当前片段
                if (passingTime > clip.EndTime && m_NewIndex <= i)
                {
                    OnExitClip(i);
                    m_CurrentIndex = -1;
                    m_NewIndex++;
                    break;
                }
                m_CurrentIndex = i;
                OnUpdateClip(i);
            }
        }

        public virtual void Release()
        {
            m_TrackGroup = null;
            m_TrackIsEnd =  true;
            m_NewIndex = 0;
            m_LastIndex = -1;
            m_CurrentIndex = -1;
        }

        /// <summary>
        /// 进入轨道片段
        /// </summary>
        /// <param name="index">片段所在轨道的下标</param>
        public virtual void OnEnterClip(int index)
        {

        }

        /// <summary>
        /// 离开轨道片段
        /// </summary>
        /// <param name="index">片段所在轨道的下标</param>
        public virtual void OnExitClip(int index)
        {
            //离开最后一个片段 轨道播放结束
            if (index >= ClipCount - 1)
                m_TrackIsEnd = true;
        }

        /// <summary>
        /// 轮询轨道片段
        /// </summary>
        /// <param name="index">片段所在轨道的下标</param>
        public virtual void OnUpdateClip(int index)
        {

        }

        /// <summary>
        /// 获取片段长度
        /// </summary>
        /// <param name="index"></param>
        /// <returns></returns>
        public double GetLength(int index)
        {
            if (index < 0 || index >= ClipCount) return 0f;
            ClipRange clip = m_AllClip[index];
            return clip.EndTime - clip.StartTime;
        }
    }
}

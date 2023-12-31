
using LGameFramework.GameBase;
using LGameFramework.GameCore.GameEntity;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// 客户端轨道组 组合多条表现轨道
    /// 用于客户端表现
    /// </summary>
    public class FightTrackGroup
    {
        /// <summary>
        /// id
        /// </summary>
        private int m_GroupID;
        public int GroupID { get { return m_GroupID; } }
        /// <summary>
        /// 客户端表现配置
        /// </summary>
        private ClientTrackGroupSO m_ClientTrackGroup;
        /// <summary>
        /// 技能轨道
        /// </summary>
        private FightTrack[] m_AllTrack;
        public FightTrack[] AllTrack { get { return m_AllTrack; } }
        /// <summary>
        /// 实体
        /// </summary>
        private int m_Entity;
        public int Entity { get { return m_Entity; } }
        /// <summary>
        /// 轨道组播放结束
        /// </summary>
        private bool m_TrackGroupIsEnd;
        public bool TrackGroupIsEnd { get { return m_TrackGroupIsEnd; } }

        /// <summary>
        /// 初始化
        /// </summary>
        public virtual void OnInit(string assetName, int entity, int id)
        {
            m_ClientTrackGroup = AssetUtility.LoadAsset<ClientTrackGroupSO>(assetName);
            if (m_ClientTrackGroup == null)
            {
                GameLogger.ERROR_FORMAT("客户端技能表现为空!!  轨道名称为{0}", assetName);
                FightUtility.BreakFightBroad(entity);
                return;
            }
            m_Entity = entity;
            m_GroupID = id;
            int count = m_ClientTrackGroup.AllTrackGroupSO.Count;
            m_TrackGroupIsEnd = false;
            m_AllTrack = new FightTrack[count];
            for (int i = 0; i < count; i++)
            {
                m_AllTrack[i] = m_ClientTrackGroup.AllTrackGroupSO[i].Track;
                m_AllTrack[i].AllClip = m_ClientTrackGroup.AllTrackGroupSO[i].AllClip;
                m_AllTrack[i].OnInit(this);
            }
        }

        /// <summary>
        /// 帧更新轨道
        /// </summary>
        /// <param name="deltaTime">帧间隔时间</param>
        /// <param name="passingTime">过去了多少时间</param>
        public virtual void Update(float deltaTime, double passingTime)
        {
            if (m_TrackGroupIsEnd || m_AllTrack == null || m_AllTrack.Length <= 0) return;
            bool endFlag = true;
            foreach (var track in m_AllTrack)
            {
                if (track.TrackIsEnd) continue;
                endFlag = false;
                track.OnUpdate(deltaTime, passingTime);
            }

            m_TrackGroupIsEnd = endFlag;
        }


        public virtual void Release()
        {
            if (m_ClientTrackGroup != null)
            {
                AssetUtility.Destroy(m_ClientTrackGroup);
                m_ClientTrackGroup = null;
            }

            if (m_AllTrack != null)
            {
                foreach (var track in m_AllTrack)
                    track.Release();
                m_AllTrack = null;
            }
        }
    }
}

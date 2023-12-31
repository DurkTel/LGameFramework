
using LGameFramework.GameBase;
using LGameFramework.GameCore.GameEntity;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// �ͻ��˹���� ��϶������ֹ��
    /// ���ڿͻ��˱���
    /// </summary>
    public class FightTrackGroup
    {
        /// <summary>
        /// id
        /// </summary>
        private int m_GroupID;
        public int GroupID { get { return m_GroupID; } }
        /// <summary>
        /// �ͻ��˱�������
        /// </summary>
        private ClientTrackGroupSO m_ClientTrackGroup;
        /// <summary>
        /// ���ܹ��
        /// </summary>
        private FightTrack[] m_AllTrack;
        public FightTrack[] AllTrack { get { return m_AllTrack; } }
        /// <summary>
        /// ʵ��
        /// </summary>
        private int m_Entity;
        public int Entity { get { return m_Entity; } }
        /// <summary>
        /// ����鲥�Ž���
        /// </summary>
        private bool m_TrackGroupIsEnd;
        public bool TrackGroupIsEnd { get { return m_TrackGroupIsEnd; } }

        /// <summary>
        /// ��ʼ��
        /// </summary>
        public virtual void OnInit(string assetName, int entity, int id)
        {
            m_ClientTrackGroup = AssetUtility.LoadAsset<ClientTrackGroupSO>(assetName);
            if (m_ClientTrackGroup == null)
            {
                GameLogger.ERROR_FORMAT("�ͻ��˼��ܱ���Ϊ��!!  �������Ϊ{0}", assetName);
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
        /// ֡���¹��
        /// </summary>
        /// <param name="deltaTime">֡���ʱ��</param>
        /// <param name="passingTime">��ȥ�˶���ʱ��</param>
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

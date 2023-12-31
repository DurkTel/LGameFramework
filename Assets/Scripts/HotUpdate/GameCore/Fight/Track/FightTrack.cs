
using LGameFramework.GameCore.Asset;
using UnityEngine;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// �ͻ��˹��
    /// ���ڱ���
    /// </summary>
    [System.Serializable]
    public class FightTrack : ScriptableObject
    {
        /// <summary>
        /// ���������
        /// </summary>
        private FightTrackGroup m_TrackGroup;
        public FightTrackGroup TrackGroup { get { return m_TrackGroup; } }
        /// <summary>
        /// ʵ��
        /// </summary>
        public int Entity { get { return m_TrackGroup != null ? m_TrackGroup.Entity : -1; } }
        /// <summary>
        /// ���ܹ��������Ƭ��
        /// </summary>
        private ClipRange[] m_AllClip;
        public ClipRange[] AllClip { set { m_AllClip = value; } get { return m_AllClip; } }
        /// <summary>
        /// ������Ž���
        /// </summary>
        private bool m_TrackIsEnd;
        public bool TrackIsEnd { get { return m_TrackIsEnd; } }
        /// <summary>
        /// ��ǰ���ŵ����±�
        /// </summary>
        private int m_NewIndex;
        public int NewIndex { get { return m_NewIndex; } }
        /// <summary>
        /// �ϴβ��ŵ����±�
        /// </summary>
        private int m_LastIndex;
        public int LastIndex { get { return m_LastIndex; } }
        /// <summary>
        /// ��ǰ��Ծ���±�
        /// </summary>
        private int m_CurrentIndex;
        public int CurrentIndex { get { return m_CurrentIndex; } }
        /// <summary>
        /// Ƭ������
        /// </summary>
        public int ClipCount { get { return m_AllClip.Length; } }
        /// <summary>
        /// ��Ƭ����
        /// </summary>
        public bool InClip { get { return m_CurrentIndex != -1; } }

        /// <summary>
        /// ��ʼ��
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
        /// ֡���¹��
        /// </summary>
        /// <param name="deltaTime">֡���ʱ��</param>
        /// <param name="passingTime">��ȥ�˶���ʱ��</param>
        public virtual void OnUpdate(float deltaTime, double passingTime)
        {
            if (m_TrackIsEnd) return;
            int count = ClipCount;
            for (int i = m_NewIndex; i < count; i++)
            {
                ClipRange clip = m_AllClip[i];
                //δ���ŵ���Ƭ��
                if (passingTime < clip.StartTime) break;

                //�����µ�Ƭ��
                if (m_NewIndex <= i && m_LastIndex != i)
                {
                    OnEnterClip(i);
                    m_LastIndex = i;
                }

                //�˳���ǰƬ��
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
        /// ������Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public virtual void OnEnterClip(int index)
        {

        }

        /// <summary>
        /// �뿪���Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public virtual void OnExitClip(int index)
        {
            //�뿪���һ��Ƭ�� ������Ž���
            if (index >= ClipCount - 1)
                m_TrackIsEnd = true;
        }

        /// <summary>
        /// ��ѯ���Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public virtual void OnUpdateClip(int index)
        {

        }

        /// <summary>
        /// ��ȡƬ�γ���
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

using LGameFramework.GameBase;
using LGameFramework.GameCore.GameEntity;
using System.Collections.Generic;

namespace LGameFramework.GameCore.Fight
{
    public partial class GMFightBroadcastManager : FrameworkModule
    {
        public override int Priority => 3;
        /// <summary>
        /// ����ʵ���ս��
        /// </summary>
        private GameDictionary<int, FightBroadcastQueue> m_AllFightBroadcast;
        public GameDictionary<int, FightBroadcastQueue> AllFightBroadcast { get { return m_AllFightBroadcast; } }

        private Dictionary<int, FightBroadcastObject> m_AllFightBroadcastObject;
        public Dictionary<int, FightBroadcastObject> AllFightBroadcastObject { get { return m_AllFightBroadcastObject; } }

        private GameUid m_GameUid;

        public override void OnInit()
        {
            m_AllFightBroadcast = new GameDictionary<int, FightBroadcastQueue>();
            m_AllFightBroadcastObject = new Dictionary<int, FightBroadcastObject>();
            m_GameUid = new GameUid();
        }

        public override void Update(float deltaTime, float unscaledTime)
        {
            if (m_AllFightBroadcast == null || m_AllFightBroadcast.Count <= 0) return;

            int count = m_AllFightBroadcast.Count - 1;
            for (int i = count; i >= 0; i--)
            {
                int key = m_AllFightBroadcast.keyList[i];
                var queue = m_AllFightBroadcast[key];
                queue.Update(deltaTime, unscaledTime);

                if (queue.IsFinish)
                {
                    queue.Release();
                    Pool.Release(queue);
                    m_AllFightBroadcast.Remove(key);
                }
            }
        }


        /// <summary>
        /// ����ս��
        /// </summary>
        /// <param name="info">ս����Ϣ</param>
        public FightBroadcastQueue DispatchFightBroad(FightBroadInfoBegin info)
        {
            FightBroadcastQueue queue;
            if (!m_AllFightBroadcast.TryGetValue(info.FromEntityId, out queue))
            {
                queue = Pool.Get<FightBroadcastQueue>();
                queue.OnInit();
                m_AllFightBroadcast.Add(info.FromEntityId, queue);
            }

            info.FightBroadId = m_GameUid.Uid;
            var fbObj = queue.WaitActive(info);
            m_AllFightBroadcastObject.Add(fbObj.FightBroadId, fbObj);

            return queue;
        }

        /// <summary>
        /// ս��ִ���ܻ�
        /// </summary>
        /// <param name="info"></param>
        public void OnFightBroadHit(FightBroadInfoHit info)
        {
            if (m_AllFightBroadcastObject.TryGetValue(info.FightBroadId, out FightBroadcastObject fbObject))
            {
                //�˺�����
                fbObject.OnHit(info);
                //֪ͨʵ�����ܻ�����
                EntityUtility.DispatchComponentEvent(info.ToEntityIds,
                    GMEntityManager.ComponentEvent.OnRequestHit, CommonEventArg.Get(fbObject));

                //֪ͨʵ�������б���
                EntityUtility.DispatchComponentEvent(fbObject.FromEntityId,
                    GMEntityManager.ComponentEvent.OnAttackSuccess, CommonEventArg.Get(fbObject));
            }
        }

        /// <summary>
        /// ���ս��
        /// </summary>
        /// <param name="entityId"></param>
        public void BreakFightBroad(int entityId)
        {
            var fbQ = GetFightBroadQueue(entityId);
            if (fbQ == null) return;
            fbQ.Break();
        }

        /// <summary>
        /// ��ȡս��
        /// </summary>
        /// <param name="entityId"></param>
        /// <returns></returns>
        public FightBroadcastQueue GetFightBroadQueue(int entityId)
        {
            FightBroadcastQueue queue;
            if (!m_AllFightBroadcast.TryGetValue(entityId, out queue))
                return null;

            return queue;
        }
    }

    /// <summary>
    /// ����ս����Ϣ
    /// ����ս�����������Ϣ
    /// </summary>
    public struct FightBroadInfoBegin
    {
        /// <summary>
        /// ս��ID
        /// </summary>
        public int FightBroadId;
        /// <summary>
        /// �����ߵ�ʵ��ID
        /// </summary>
        public int FromEntityId;
        /// <summary>
        /// ����ID
        /// </summary>
        public int SkillCode;
    }

    /// <summary>
    /// �ܻ�ս����Ϣ
    /// ����ս���Ļ��е���Ϣ
    /// </summary>
    public struct FightBroadInfoHit
    {
        /// <summary>
        /// ս��ID
        /// </summary>
        public int FightBroadId;
        /// <summary>
        /// �����ߵ�ʵ��ID
        /// </summary>
        public int FromEntityId;
        /// <summary>
        /// �ܻ���ʵ��ID
        /// </summary>
        public int[] ToEntityIds;
        /// <summary>
        /// �˺���Ϣ
        /// </summary>
        public DamageInfo[] DamageInfos;
    }

    /// <summary>
    /// �˺���Ϣ
    /// </summary>
    public struct DamageInfo
    {
        /// <summary>
        /// �˺�����
        /// </summary>
        public int DamageType;
        /// <summary>
        /// �˺���ֵ
        /// </summary>
        public int DamageValue;
    }

    [System.Serializable]
    public struct ClipRange
    {
        public double StartTime;
        public double EndTime;
    }


    public struct AttackDetail
    {
        /// <summary>
        /// ������
        /// </summary>
        public int FromEntityId;
        /// <summary>
        /// ����ʱ��
        /// </summary>
        public float RequestTime;
        /// <summary>
        /// ����code
        /// </summary>
        public int SkillCode;
    }
}

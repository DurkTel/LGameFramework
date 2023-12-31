using LGameFramework.GameBase;
using LGameFramework.GameCore.GameEntity;
using System.Collections.Generic;

namespace LGameFramework.GameCore.Fight
{
    public partial class GMFightBroadcastManager : FrameworkModule
    {
        public override int Priority => 3;
        /// <summary>
        /// 所有实体的战报
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
        /// 发起战报
        /// </summary>
        /// <param name="info">战报信息</param>
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
        /// 战报执行受击
        /// </summary>
        /// <param name="info"></param>
        public void OnFightBroadHit(FightBroadInfoHit info)
        {
            if (m_AllFightBroadcastObject.TryGetValue(info.FightBroadId, out FightBroadcastObject fbObject))
            {
                //伤害结算
                fbObject.OnHit(info);
                //通知实体作受击表现
                EntityUtility.DispatchComponentEvent(info.ToEntityIds,
                    GMEntityManager.ComponentEvent.OnRequestHit, CommonEventArg.Get(fbObject));

                //通知实体作击中表现
                EntityUtility.DispatchComponentEvent(fbObject.FromEntityId,
                    GMEntityManager.ComponentEvent.OnAttackSuccess, CommonEventArg.Get(fbObject));
            }
        }

        /// <summary>
        /// 打断战报
        /// </summary>
        /// <param name="entityId"></param>
        public void BreakFightBroad(int entityId)
        {
            var fbQ = GetFightBroadQueue(entityId);
            if (fbQ == null) return;
            fbQ.Break();
        }

        /// <summary>
        /// 获取战报
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
    /// 发起战报信息
    /// 包含战报最基础的信息
    /// </summary>
    public struct FightBroadInfoBegin
    {
        /// <summary>
        /// 战报ID
        /// </summary>
        public int FightBroadId;
        /// <summary>
        /// 发起者的实体ID
        /// </summary>
        public int FromEntityId;
        /// <summary>
        /// 技能ID
        /// </summary>
        public int SkillCode;
    }

    /// <summary>
    /// 受击战报信息
    /// 包含战报的击中的信息
    /// </summary>
    public struct FightBroadInfoHit
    {
        /// <summary>
        /// 战报ID
        /// </summary>
        public int FightBroadId;
        /// <summary>
        /// 发起者的实体ID
        /// </summary>
        public int FromEntityId;
        /// <summary>
        /// 受击的实体ID
        /// </summary>
        public int[] ToEntityIds;
        /// <summary>
        /// 伤害信息
        /// </summary>
        public DamageInfo[] DamageInfos;
    }

    /// <summary>
    /// 伤害信息
    /// </summary>
    public struct DamageInfo
    {
        /// <summary>
        /// 伤害类型
        /// </summary>
        public int DamageType;
        /// <summary>
        /// 伤害数值
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
        /// 发起者
        /// </summary>
        public int FromEntityId;
        /// <summary>
        /// 请求时间
        /// </summary>
        public float RequestTime;
        /// <summary>
        /// 技能code
        /// </summary>
        public int SkillCode;
    }
}

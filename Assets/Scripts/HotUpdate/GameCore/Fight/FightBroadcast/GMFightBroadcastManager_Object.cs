using LGameFramework.GameBase;
using LGameFramework.GameCore.GameEntity;

namespace LGameFramework.GameCore.Fight
{
    public partial class GMFightBroadcastManager
    {
        public class FightBroadcastObject
        {
            /// <summary>
            /// ս��ID
            /// </summary>
            private int m_FightBroadId;
            public int FightBroadId { get { return m_FightBroadId; } }
            /// <summary>
            /// �ͻ��˼��ܱ���
            /// </summary>
            private FightSkillPerformance m_FightSkillPerformance;
            public FightSkillPerformance FightSkillPerformance { get { return m_FightSkillPerformance; } }
            /// <summary>
            /// ��������
            /// </summary>
            private FightSkillCfg m_FightSkillCfg;
            public FightSkillCfg FightSkillCfg { get { return m_FightSkillCfg; } }
            /// <summary>
            /// ����Code
            /// </summary>
            private int m_SkillCode;
            public int SkillCode { get { return m_SkillCode; } }
            /// <summary>
            /// �������ĸ�ʵ��
            /// </summary>
            private int m_FromEntityId;
            public int FromEntityId { get { return m_FromEntityId; } }
            /// <summary>
            /// �Ƿ����
            /// </summary>
            public bool IsFinish { get { return m_FightSkillPerformance != null && m_FightSkillPerformance.IsFinish; } }

            public void OnInit(FightBroadInfoBegin info)
            {
                m_FightBroadId = info.FightBroadId;
                m_FromEntityId = info.FromEntityId;
                m_SkillCode = info.SkillCode;
                m_FightSkillCfg = new FightSkillCfg();
                m_FightSkillCfg.AllowBreak = true;
                if (info.SkillCode != 0)
                {
                    //�޼��ܱ��� ��Ҫ�ⲿ���ս��
                    m_FightSkillPerformance = Pool.Get<FightSkillPerformance>();
                    m_FightSkillPerformance.OnInit(this);
                }
            }

            public void Update(float deltaTime)
            {
                if (m_FightSkillPerformance == null) return;

                m_FightSkillPerformance.Update(deltaTime);
            }

            public void OnHit(FightBroadInfoHit info)
            {
                int entityId;
                int remainLife;
                DamageInfo damage;
                for (int i = 0; i < info.ToEntityIds.Length; i++)
                {
                    entityId = info.ToEntityIds[i];
                    damage = info.DamageInfos[i];
                    //remainLife = EntityUtility.GetEntityData<int>(entityId, EntityAttribute.c_Life) - damage.DamageValue;
                    //EntityUtility.SetEntityData(entityId, EntityAttribute.c_Life, remainLife);
                };
            }

            public void Release()
            {
                if (m_FightSkillPerformance != null)
                {
                    m_FightSkillPerformance.Release();
                    Pool.Release(m_FightSkillPerformance);
                    m_FightSkillPerformance = null;
                }
                m_FightSkillCfg = null;
                m_FightBroadId = 0;
                m_FromEntityId = 0;
                m_SkillCode = 0;
            }
        }
    }
}

using LGameFramework.GameBase;
using LGameFramework.GameCore.GameEntity;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UnityEngine;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// ������ײ���
    /// ������
    /// </summary>
    public class FightContactDetection : MonoBehaviour
    {
        [System.Serializable]   
        public class ContactInfo
        {
            public Transform top;

            public Transform bottom;

            public float radius;
        }

        /// <summary>
        /// �����Ϣ
        /// </summary>
        public ContactInfo[] contactInfos;
        /// <summary>
        /// ���Եļ��
        /// </summary>
        //public GMEntityManager.EntityCategory[] attackIgnore;
        /// <summary>
        /// ��Ҫ����ս��id
        /// </summary>
        public Dictionary<int, int> fightBroadIds;
        /// <summary>
        /// ���������¼
        /// </summary>
        private Dictionary<string, int> m_HitCountMark;
        /// <summary>
        /// ���ɹ���ʵ��id
        /// </summary>
        private List<int> m_ToIds;
        /// <summary>
        /// ����ʵ��
        /// </summary>
        [HideInInspector]
        public int selfEntity;

        private StringBuilder m_Builder;
        private void Awake()
        {
            enabled = false;
        }

        private void OnEnable()
        {
            m_Builder ??= new StringBuilder();
            m_ToIds ??= new List<int>();
        }

        private void FixedUpdate()
        {
            if (contactInfos == null || contactInfos.Length == 0 || fightBroadIds == null || fightBroadIds.Count == 0) return;
            foreach (var info in contactInfos)
            {
                Collider[] colliders = Physics.OverlapCapsule(info.top.position, info.bottom.position, info.radius, LayerMask.GetMask("EntityLayer"));
                if (colliders.Length > 0)
                {
                    foreach (var fbId in fightBroadIds.Keys)
                    {
                        m_ToIds.Clear();
                        foreach (var item in colliders)
                        {
                            var entity = item.gameObject.GetInstanceID();
                            if (ContactFilter(entity, fbId))
                                m_ToIds.Add(entity);
                        }

                        if (m_ToIds.Count > 0)
                        {
                            var dinfo = new DamageInfo() { DamageType = 1, DamageValue = 1, };
                            var ids = m_ToIds.ToArray();
                            var dinfos = new DamageInfo[ids.Length];
                            for (int i = 0; i < dinfos.Length; i++)
                            {
                                dinfos[i] = dinfo;
                            }

                            FightUtility.OnFightBroadHit(new FightBroadInfoHit()
                            {
                                FightBroadId = fbId,
                                FromEntityId = selfEntity,
                                ToEntityIds = ids,
                                DamageInfos = dinfos
                            });
                        }
                    }
                    break;
                }
            }
            
        }

        private void OnDisable()
        {
            m_HitCountMark?.Clear();
            fightBroadIds?.Clear();
            m_ToIds?.Clear();
        }

        /// <summary>
        /// �������һ��ս��id
        /// </summary>
        /// <param name="fbId"></param>
        /// <param name="hitCount"></param>
        /// <returns></returns>
        public bool TryAddFightBroadId(int fbId, int hitCount)
        {
            fightBroadIds ??= new Dictionary<int, int>();
            if (!fightBroadIds.ContainsKey(fbId))
            {
                fightBroadIds.Add(fbId, hitCount);
                return true;
            }

            return false;
        }

        /// <summary>
        /// ���Լ�¼�������
        /// </summary>
        /// <param name="fbId"></param>
        /// <param name="entityId"></param>
        /// <returns></returns>
        public bool TryMarkFightBroadId(int fbId, int entityId)
        {
            string key = GetContactId(fbId, entityId);
            m_HitCountMark ??= new Dictionary<string, int>();
            if (!m_HitCountMark.ContainsKey(key))
                m_HitCountMark.Add(key, 1);
            else if (m_HitCountMark[key] >= fightBroadIds[fbId]) //���ս�������ʵ���Ѿ���������������
                return false;
            else
                m_HitCountMark[key]++;

            return true;
        }

        /// <summary>
        /// ��ȡս��ID+ʵ��ID
        /// </summary>
        /// <param name="fbId"></param>
        /// <param name="entityId"></param>
        /// <returns></returns>
        private string GetContactId(int fbId, int entityId)
        {
            m_Builder.Clear();
            m_Builder.Append(fbId);
            m_Builder.Append("_");
            m_Builder.Append(entityId);
            return m_Builder.ToString();
        }

        /// <summary>
        /// ���˶������ײ
        /// </summary>
        /// <param name="to"></param>
        /// <param name="fbId"></param>
        /// <returns></returns>
        private bool ContactFilter(int toEntity, int fbId)
        {
            if (toEntity == selfEntity)
                return false;

            //if (attackIgnore.Contains(toEntity.EntityData.entityType))
            //    return false;

            if (EntityUtility.GetEntityState(toEntity) == EntityState.Death)
                return false;

            return TryMarkFightBroadId(fbId, toEntity);
        }

        private void Update()
        {
#if UNITY_EDITOR
            if (contactInfos == null || contactInfos.Length == 0) return;
            foreach (var info in contactInfos)
                DebugHelper.DrawCapsule(info.top.position, info.bottom.position, info.radius, Color.red);
#endif
        }

    }

}

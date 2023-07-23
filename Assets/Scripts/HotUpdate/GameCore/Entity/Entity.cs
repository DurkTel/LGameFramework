using UnityEngine;
using static GameCore.Entity.FMEntityManager;

namespace GameCore.Entity
{
    public partial class Entity
    {
        /// <summary>
        /// 实体id
        /// </summary>
        private int m_EntityId;
        public int entityId { get { return m_EntityId; } }
        /// <summary>
        /// 实体类型
        /// </summary>
        private EntityType m_EntityType;
        public EntityType entityType { get { return m_EntityType; } }
        /// <summary>
        /// 实体状态
        /// </summary>
        private EntityStatus m_Status;
        public EntityStatus status { get { return m_Status; } }
        /// <summary>
        /// 所属实体组
        /// </summary>
        private EntityGroup m_EntityGroup;
        public EntityGroup entityGroup { get { return m_EntityGroup; } }
        /// <summary>
        /// 生成时间戳
        /// </summary>
        private float m_CreateTimeStamp;
        public float createTimeStamp { get { return m_CreateTimeStamp; } }
        /// <summary>
        /// 回事时间戳
        /// </summary>
        private float m_ReleaseTimeStamp;
        public float releaseTimesStamp { get { return m_ReleaseTimeStamp; } }
        /// <summary>
        /// 当前游戏对象
        /// </summary>
        private GameObject m_GameObject;
        public GameObject gameObject { get { return m_GameObject; } }
        /// <summary>
        /// 当前变换组件
        /// </summary>
        private Transform m_Transform;
        public Transform transform { get { return m_Transform; } }
        /// <summary>
        /// 脏状态
        /// </summary>
        private bool m_Dirty;
        public bool dirty { get { return m_Dirty; } }

        public void OnInit(int eid, EntityType etype, EntityGroup egroup)
        {
            m_EntityId = eid;
            m_EntityType = etype;
            m_Status = EntityStatus.Inited;
            m_EntityGroup = egroup;
            m_SkinLoading = false;
            m_GameObject ??= new GameObject();
            m_GameObject.name = string.Format("Entity_{0}_{1}", m_EntityType, m_EntityId);
            m_Transform = m_GameObject.transform;
            m_CreateTimeStamp = Time.unscaledTime;

            CullGroupInit();
        }

        public void Update()
        {

        }

        public void SetStatus(EntityStatus status)
        {
            m_Status = status;
        }

        public void Release()
        {
            ReleaseCullGroup();
            m_EntityGroup.ReleaseEntity(this);
            m_ReleaseTimeStamp = Time.unscaledTime;
        }


        public void Dispose()
        {
            Object.Destroy(m_GameObject);
        }

    }
}
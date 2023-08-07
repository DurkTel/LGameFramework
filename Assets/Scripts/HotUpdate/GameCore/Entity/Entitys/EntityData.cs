using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static GameCore.Entity.FMEntityManager;

namespace GameCore.Entity
{
    public class EntityData
    {
        /// <summary>
        /// ʵ��id
        /// </summary>
        private int m_EntityId;
        public int EntityId { get { return m_EntityId; } set { m_EntityId = value; } }
        /// <summary>
        /// ʵ������
        /// </summary>
        private EntityType m_EntityType;
        public EntityType EntityType { get { return m_EntityType; } set { m_EntityType = value; } }
        /// <summary>
        /// ʵ��״̬
        /// </summary>
        private EntityStatus m_Status;
        public EntityStatus Status { get { return m_Status; } set { m_Status = value; } }
        /// <summary>
        /// ����ʱ���
        /// </summary>
        private float m_CreateTimeStamp;
        public float CreateTimeStamp { get { return m_CreateTimeStamp; } set { m_CreateTimeStamp = value; } }
        /// <summary>
        /// ����ʱ���
        /// </summary>
        private float m_ReleaseTimeStamp;
        public float ReleaseTimeStamp { get { return m_ReleaseTimeStamp; } set { m_ReleaseTimeStamp = value; } }
    }
}

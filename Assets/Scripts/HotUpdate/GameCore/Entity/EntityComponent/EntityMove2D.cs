using GameCore.Entity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    public class EntityMove2D : IEntityComponent
    {
        public int Priority => 0;

        private Transform m_Transform;
        public Transform Transform { get { return m_Transform; } }

        private GameObject m_GameObject;
        public GameObject GameObject { get { return m_GameObject; } }

        private bool m_Enabled;
        public bool Enabled { get { return m_Enabled; } set { m_Enabled = value; } }

        private Vector2 m_MoveDirection;
        public Vector2 MoveDirection { get { return m_MoveDirection; } set { m_MoveDirection = value; } }

        private float m_MoveSpeed;
        public float MoveSpeed { get { return m_MoveSpeed; } }

        private Rigidbody2D m_Rigidbody;
        public Rigidbody2D Rigidbody { get { return m_Rigidbody; } }    

        public void OnInit(Entity.Entity entity)
        {
            m_GameObject = entity.GameObject;
            m_Transform = entity.Transform;
            m_Rigidbody = m_GameObject.TryAddComponent<Rigidbody2D>();  
        }

        public void Update(float deltaTime, float unscaledTime)
        {
            
        }

        public void FixedUpdate(float fixedDeltaTime, float unscaledTime)
        {
            Move(fixedDeltaTime);
        }

        public void OnDestroy()
        {
            
        }

        /// <summary>
        /// ·½ÏòÎ»ÒÆ
        /// </summary>
        /// <param name="deltaTime"></param>
        public void Move(float deltaTime)
        {
            if (!m_Enabled || m_MoveDirection.Equals(Vector3.zero)) return;

            m_Rigidbody.velocity = m_MoveDirection * m_MoveSpeed * deltaTime;
        }

    }
}

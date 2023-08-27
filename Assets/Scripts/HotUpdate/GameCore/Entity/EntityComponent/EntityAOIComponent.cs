using LGameFramework.GameCore.AOI;
using UnityEngine;

namespace LGameFramework.GameCore.Entity
{
    public class EntityAOIComponent : IEntityComponent, IGridElement
    {
        public int Priority => 1;

        private Transform m_Transform;
        public Transform Transform { get { return m_Transform; } }

        private GameObject m_GameObject;
        public GameObject GameObject { get { return m_GameObject; } }

        private bool m_Enabled;
        public bool Enabled { get { return m_Enabled; } set { m_Enabled = value; } }

        private Entity m_Entity;
        public Entity Entity { get { return m_Entity; } }

        public int ElementId { get { return m_Entity.EntityData.EntityId; } }

        private InterestLevel m_InterestLevel;
        public InterestLevel InterestLevel { get { return m_InterestLevel; } }

        public GMAOIManager.GridBlock CurrentGrid { get; set; }
        public GMAOIManager.GridBlock LastGrid { get; set; }

        public void OnInit(Entity entity)
        {
            m_Enabled = true;
            m_Entity = entity;
            m_Transform = entity.Transform;
            m_GameObject = entity.GameObject;
            m_InterestLevel = entity.EntityData.InterestLevel;
            GameFrameworkEntry.GetModule<GMAOIManager>().AddElement(this);
        }

        public void Update(float deltaTime, float unscaledTime)
        {

        }

        public void FixedUpdate(float fixedDeltaTime, float unscaledTime)
        {
            
        }

        public void Release()
        {

        }

        public void Dispose()
        {
            GameFrameworkEntry.GetModule<GMAOIManager>().RemoveElement(this);

        }

    }
}

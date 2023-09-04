using LGameFramework.GameCore.AOI;
using UnityEngine;

namespace LGameFramework.GameCore.Entity
{
    /// <summary>
    /// AOI算法组件 添加此组件以实现范围感知
    /// </summary>
    public class AOIComponent : AbstractComponent, IGridElement
    {
        public override int Priority => 1;

        public int ElementId { get { return Entity.EntityData.EntityId; } }

        private InterestLevel m_InterestLevel;
        public InterestLevel InterestLevel { get { return m_InterestLevel; } }

        public GMAOIManager.GridBlock CurrentGrid { get; set; }
        public GMAOIManager.GridBlock LastGrid { get; set; }

        public override void OnInit(Entity entity)
        {
            base.OnInit(entity);
            m_InterestLevel = entity.EntityData.InterestLevel;
            GameFrameworkEntry.GetModule<GMAOIManager>().AddElement(this);
        }

        public override void Dispose()
        {
            base.Dispose();
            GameFrameworkEntry.GetModule<GMAOIManager>().RemoveElement(this);
        }

    }
}

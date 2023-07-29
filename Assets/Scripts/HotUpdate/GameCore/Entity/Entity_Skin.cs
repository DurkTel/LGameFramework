using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static GameCore.Entity.FMEntityManager;

namespace GameCore.Entity
{
    public partial class Entity
    {
        /// <summary>
        /// 外观是否实例化完成
        /// </summary>
        private bool m_SkinInstantiate;
        public bool SkinInstantiate { get { return m_SkinInstantiate; } }
        /// <summary>
        /// 外观是否加载中
        /// </summary>
        private bool m_SkinLoading;
        public bool SkinLoading { get { return m_SkinLoading; } }
        /// <summary>
        /// 是否可见
        /// </summary>
        private bool m_Visible;
        public bool Visible
        {
            set
            {
                m_Visible = value;
                SetStatus(m_Visible ? EntityStatus.Showed : EntityStatus.Hidden);
            }
            get { return m_Visible; }
        }

        public void CreateSkin()
        {
            Debug.Log("实例化实体皮肤");
            m_SkinLoading = true;
            SetStatus(EntityStatus.Created);
            LoadSkin();
        }

        public virtual void LoadSkin()
        {
            SkinLoadComplete();
        }

        public void SkinLoadComplete()
        {
            m_SkinLoading = false;
            m_SkinInstantiate = true;
        }
    }

}

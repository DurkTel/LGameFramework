using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static GameCore.Entity.FMEntityManager;

namespace GameCore.Entity
{
    public partial class Entity
    {
        /// <summary>
        /// ����Ƿ�ʵ�������
        /// </summary>
        private bool m_SkinInstantiate;
        public bool SkinInstantiate { get { return m_SkinInstantiate; } }
        /// <summary>
        /// ����Ƿ������
        /// </summary>
        private bool m_SkinLoading;
        public bool SkinLoading { get { return m_SkinLoading; } }
        /// <summary>
        /// �Ƿ�ɼ�
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
            Debug.Log("ʵ����ʵ��Ƥ��");
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

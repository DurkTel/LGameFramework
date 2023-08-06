using GameCore.Asset;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.Avatar
{
    public partial class Avatar
    {
        /// <summary>
        /// Avatar部位
        /// </summary>
        public class AvatarPart
        {
            private AvatarPartType m_PartType;
            public AvatarPartType PartType { get { return m_PartType; } }

            private string m_AssetName;
            public string AssetName 
            { 
                get 
                { 
                    return m_AssetName; 
                } 
                set 
                {
                    if (m_AssetName != value)
                    {
                        m_AssetName = value;
                        Dirty = true;
                    }
                } 
            } 

            private Avatar m_Avatar;
            public Avatar Avatar { get { return m_Avatar; } }

            private bool m_Dirty;
            public bool Dirty { get { return m_Dirty; } set { m_Dirty = value; } }

            private bool m_IsDone;
            public bool IsDone { get { return  (m_IsDone); } }  

            private Loader m_Loader;

            private FMAssetManager m_AssetModule;
            public void OnInit(Avatar avatar, AvatarPartType partType)
            {
                m_Avatar = avatar;
                m_PartType = partType;
            }

            public void Update()
            {
                if (!m_Dirty) return;

                LoadPartAsset();
            }

            /// <summary>
            /// 加载部位资源
            /// </summary>
            private void LoadPartAsset()
            {
                m_AssetModule ??= GameEntry.GetModule<FMAssetManager>();
                m_Loader = m_AssetModule.LoadAssetAsync<GameObject>(m_AssetName);
                m_IsDone = true;
            }

            private void LoadComplete()
            {
                m_Loader.GetInstantiate<GameObject>();
            }
        }
    }
}

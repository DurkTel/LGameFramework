using GameCore.Asset;
using UnityEngine;

namespace GameCore.Avatar
{
    public partial class GameAvatar
    {
        /// <summary>
        /// Avatar部位
        /// </summary>
        public class GameAvatarPart
        {
            private AvatarPartType m_PartType;
            public AvatarPartType PartType { get { return m_PartType; } }

            private string m_AssetName;
            public string AssetName 
            { 
                get { return m_AssetName; } 
                set 
                {
                    if (m_AssetName != value)
                    {
                        m_AssetName = value;
                        Dirty = true;
                    }
                } 
            }

            private Object m_Asset;
            public Object Asset { get { return m_Asset; } }

            private GameAvatar m_Avatar;
            public GameAvatar Avatar { get { return m_Avatar; } }

            private bool m_Dirty;
            public bool Dirty { get { return m_Dirty; } set { m_Dirty = value; } }

            private Loader m_Loader;
            public Loader Loader { get { return m_Loader; } }
            public bool IsDone { get { return m_Loader == null; } }  

            private FMAssetManager m_AssetModule;
            public void OnInit(GameAvatar avatar, AvatarPartType partType)
            {
                m_Avatar = avatar;
                m_PartType = partType;
            }

            /// <summary>
            /// 加载部位资源
            /// </summary>
            public void LoadPartAsset()
            {
                m_AssetModule ??= GameEntry.GetModule<FMAssetManager>();
                m_Loader = m_AssetModule.LoadAssetAsync<GameObject>(m_AssetName);
                m_Loader.onComplete = LoadComplete;
            }

            public void LoadComplete(Loader loader)
            {
                if (loader.AssetType == typeof(GameObject))
                    m_Asset = loader.GetInstantiate<GameObject>();
                else
                    m_Asset = loader.GetRawObject<Object>();

                if (m_PartType != AvatarPartType.Skeleton)
                    UpdateConstranint();
                else
                    (m_Asset as GameObject).transform.SetParentZero(m_Avatar.Root);

                m_Loader = null;
            }

            public void UpdateConstranint()
            { 
                
            }
        }
    }
}

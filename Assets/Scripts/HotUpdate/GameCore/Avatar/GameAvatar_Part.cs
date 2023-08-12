using GameCore.Asset;
using UnityEngine;
using UnityEngine.Animations;

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
                    if (m_AssetName != value && string.IsNullOrEmpty(m_AssetName))
                    {
                        m_AssetName = value;
                        Dirty = true;
                    }
                } 
            }

            private GameObject m_Asset;
            public GameObject Asset { get { return m_Asset; } }

            private GameAvatar m_Avatar;
            public GameAvatar Avatar { get { return m_Avatar; } }

            private bool m_Dirty;
            public bool Dirty { get { return m_Dirty; } set { m_Dirty = value; } }

            private Loader m_Loader;
            public Loader Loader { get { return m_Loader; } }
            public bool IsDone { get { return m_Loader == null && m_Asset != null; } }  

            private GMAssetManager m_AssetModule;
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
                m_AssetModule ??= GameEntry.GetModule<GMAssetManager>();
                m_Loader = m_AssetModule.LoadAssetAsync<GameObject>(m_AssetName);
                m_Loader.onComplete = LoadComplete;
            }

            public void LoadComplete(Loader loader)
            {
                m_Asset = loader.GetInstantiate<GameObject>();
                m_Loader = null;

                UpdateConstranint();
                m_Asset.transform.SetParentZero(m_Avatar.Root);
            }

            public void UpdateConstranint()
            {
                if (m_PartType == AvatarPartType.Skeleton || !IsDone) return;
                Transform bone = m_Asset.transform.GetChild(0);
                ParentConstraint constraint = bone.TryAddComponent<ParentConstraint>();
                ConstraintSource cs = new ConstraintSource();
                cs.sourceTransform = Avatar.m_AllSkeletonBone[bone.name];
                cs.weight = 1.0f;
                constraint.AddSource(cs);
                constraint.constraintActive = true;
            }
        }
    }
}

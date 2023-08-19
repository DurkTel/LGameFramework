using GameCore.Asset;
using LGameFramework.GameBase.Pool;
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
                        //已经不是脏数据才添加 如果是代表已经等待刷新了 此时已无需再次添加
                        if (!m_Dirty)
                        {
                            m_Dirty = true;
                            m_Avatar.AddDirtyToRefresh(this);
                        }
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

            public void Release()
            {
                m_Avatar = null;
                m_AssetName = null;
            }

            public void Dispose()
            {
                if (m_Loader != null)
                {
                    m_Loader.Dispose();
                    m_Loader = null;
                }

                if (m_Asset != null)
                {
                    m_AssetModule.Destroy(m_Asset);
                    m_Asset = null;
                }
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
                //新资源加载完成后 清除之前的
                if (m_Asset != null && m_Asset.name.Replace("(Clone)", "") != m_AssetName.Replace(".prefab", ""))
                { 
                    m_AssetModule.Destroy(m_Asset);
                    m_Asset = null;
                }

                //同一资源不需要重复实例化
                m_Asset ??= loader.GetInstantiate<GameObject>();
                m_Loader = null;

                UpdateConstranint();
                m_Asset.transform.SetParentZero(m_Avatar.Root);
            }

            public void UpdateConstranint()
            {
                if (m_PartType == AvatarPartType.Skeleton || Avatar.m_AllSkeletonBone == null || !IsDone) return;
                int childNum = m_Asset.transform.childCount;
                for (int i = 0; i < childNum; i++)
                {
                    Transform bone = m_Asset.transform.GetChild(i);
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
}

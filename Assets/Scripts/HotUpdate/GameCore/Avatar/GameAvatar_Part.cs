using LGameFramework.GameCore.Asset;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;

namespace LGameFramework.GameCore.Avatar
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
                    AssetUtility.Destroy(m_Asset);
                    m_Asset = null;
                }
            }

            /// <summary>
            /// 加载部位资源
            /// </summary>
            public void LoadPartAsset()
            {
                m_Loader = AssetUtility.LoadAssetAsync<GameObject>(m_AssetName);
                m_Loader.onComplete += LoadComplete;
            }


            public void LoadComplete(Loader loader)
            {
                //新资源加载完成后 清除之前的
                if (m_Asset != null && m_Asset.name.Replace("(Clone)", "") != m_AssetName.Replace(".prefab", ""))
                {
                    AssetUtility.Destroy(m_Asset);
                    m_Asset = null;
                }

                //同一资源不需要重复实例化
                m_Asset ??= loader.GetInstantiate<GameObject>();
                m_Loader = null;

                UpdateConstranint();
                m_Asset.transform.SetParentIgnore(m_Avatar.Root);
            }

            public void UpdateConstranint()
            {
                if (m_PartType == AvatarPartType.Skeleton || Avatar.m_AllSkeletonBone == null || !IsDone) return;
                SkinnedMeshRenderer[] skinned = m_Asset.GetComponentsInChildren<SkinnedMeshRenderer>();
                List<Transform> newBones = new List<Transform>();
                foreach (SkinnedMeshRenderer skin in skinned)
                {
                    newBones.Clear();
                    if (skin.rootBone == null)
                    {
                        skin.transform.SetParent(Avatar.m_AllSkeletonBone[skin.name]);
                        skin.transform.localEulerAngles = Vector3.zero;
                        skin.transform.localPosition = Vector3.zero;
                        skin.transform.localScale = Vector3.one;    
                        return;
                    }
                    else
                    {
                        skin.rootBone = Avatar.m_AllSkeletonBone[skin.rootBone.name];
                        Transform rootBone = skin.transform.GetChild(0);
                        int count = rootBone.childCount;
                        for (int i = 0; i < count; i++)
                        {
                            Transform bone = rootBone.transform.GetChild(i);
                            newBones.Add(Avatar.m_AllSkeletonBone[bone.gameObject.name]);
                        }
                        skin.bones = newBones.ToArray();
                    }
                }
            }
        }
    }
}

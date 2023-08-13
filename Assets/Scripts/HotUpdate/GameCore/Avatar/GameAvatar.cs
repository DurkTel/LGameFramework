using LGameFramework.GameBase.Pool;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace GameCore.Avatar
{
    /// <summary>
    /// 模型换装替身系统
    /// </summary>
    public partial class GameAvatar : MonoBehaviour
    {
        private Vector3 hidePosition = new Vector3(9999, 9999, 9999);
        /// <summary>
        /// 部位字典
        /// </summary>
        private Dictionary<AvatarPartType, GameAvatarPart> m_PartDict;
        public Dictionary<AvatarPartType,GameAvatarPart> PartDict { get { return m_PartDict; } }
        /// <summary>
        /// 根节点
        /// </summary>
        private Transform m_Root;
        public Transform Root { get { return m_Root; } }
        /// <summary>
        /// 所有骨骼的变换组件
        /// </summary>
        private Dictionary<string, Transform> m_AllSkeletonBone;
        /// <summary>
        /// 当前正在加载的部位
        /// </summary>
        private GameAvatarPart m_LoadingPart;
        /// <summary>
        /// 是否正在加载
        /// </summary>
        public bool IsLoading { get { return m_LoadingPart != null; } }
        /// <summary>
        /// 是否显示
        /// </summary>
        private bool m_Visible;
        public bool Visible
        {
            get { return m_Visible; }
            set 
            { 
                m_Visible = value;
                m_Root.transform.position = m_Visible ? Vector3.zero : hidePosition;
            }
        }
        /// <summary>
        /// 加载完成回调
        /// </summary>
        public UnityEvent<AvatarPartType> OnLoadComplete = new UnityEvent<AvatarPartType>();

        public void OnInit()
        {
            m_Root ??= new GameObject("GameAvatar").transform;
            m_Root.SetParentZero(transform);
            Visible = true;
        }

        private void Update()
        {
            if (m_PartDict == null) return;
            //每帧检查部位是否脏 是的话更新数据 防止一帧多次调用
            foreach (var part in m_PartDict.Values)
            {
                //逐个部位更新
                if (part.Dirty && m_LoadingPart == null)
                {
                    part.LoadPartAsset();
                    part.Dirty = false;
                    m_LoadingPart = part;
                }
            }

            if (m_LoadingPart != null && m_LoadingPart.IsDone)
            {
                if (m_LoadingPart.PartType == AvatarPartType.Skeleton)
                {
                    Transform tra = m_LoadingPart.Asset.transform;
                    Transform[] temp = tra.GetComponentsInChildren<Transform>();
                    m_AllSkeletonBone = new Dictionary<string, Transform>(temp.Length);
                    foreach (Transform t in temp)
                        m_AllSkeletonBone[t.name.Replace("(Clone)", "")] = t;

                    //骨骼更新了 刷新一下部件的约束
                    foreach (var part in m_PartDict.Values)
                        part.UpdateConstranint();
                }

                OnLoadComplete?.Invoke(m_LoadingPart.PartType);
                m_LoadingPart = null;
            }
        }

        public void Release()
        {
            if (m_PartDict != null)
            {
                foreach (var part in m_PartDict.Values)
                    part.Release();
            }
            m_AllSkeletonBone = null;
        }

        public void Dispose()
        {
            if (m_PartDict != null)
            {
                foreach (var part in m_PartDict.Values)
                {
                    part.Dispose();
                    Pool<GameAvatarPart>.Release(part);
                }
                DictionaryPool<AvatarPartType, GameAvatarPart>.Release(m_PartDict);
                m_PartDict.Clear();
                m_PartDict = null;
            }
            m_Root = null;
        }

        public void AddPart(AvatarPartType partType, string assetName = null)
        {
            GameAvatarPart part = Pool<GameAvatarPart>.Get();
            part.OnInit(this, partType);
            part.AssetName = assetName;

            m_PartDict ??= DictionaryPool<AvatarPartType, GameAvatarPart>.Get();
            m_PartDict.Add(partType, part);
        }

        public GameAvatarPart GetPart(AvatarPartType partType)
        {
            if (m_PartDict == null || !m_PartDict.ContainsKey(partType))
                return null;

            return m_PartDict[partType];
        }

        public void UpdatePartAsset(AvatarPartType partType, string assetName)
        {
            if (m_PartDict.ContainsKey(partType))
                m_PartDict[partType].AssetName = assetName;
        }

        public void UpdatePart(AvatarPartType partType, string assetName)
        {
            GameAvatarPart part = GetPart(partType);
            if (part == null) return;
            part.AssetName = assetName;
        }
    }
}

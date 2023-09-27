using LGameFramework.GameBase;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore.Avatar
{
    /// <summary>
    /// 模型换装替身系统
    /// </summary>
    public partial class GameAvatar : MonoBehaviour
    {
        private Vector3 m_HidePosition = new Vector3(9999, 9999, 9999);
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
        /// 等待刷新的部位队列
        /// </summary>
        private Queue<GameAvatarPart> m_WaitRefreshParts;
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
                m_Root.transform.position = m_Visible ? Vector3.zero : m_HidePosition;
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
            //检测部位是否更新完成
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

            //有待刷新的部位且没有正在刷新的部位
            if (m_WaitRefreshParts == null || m_WaitRefreshParts.Count <= 0 || m_LoadingPart != null) return;
            //每帧刷新一个脏数据
            m_LoadingPart = m_WaitRefreshParts.Dequeue();
            m_LoadingPart.LoadPartAsset();
            //已经开始更新资源了 把脏数据标识去掉
            m_LoadingPart.Dirty = false;
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
                    Pool.Release(part);
                }
                DictionaryPool<AvatarPartType, GameAvatarPart>.Release(m_PartDict);
                m_PartDict.Clear();
                m_PartDict = null;
            }
            m_Root = null;
        }

        /// <summary>
        /// 添加一个部位
        /// </summary>
        /// <param name="partType">部位类型</param>
        /// <param name="assetName">资源名称</param>
        public void AddPart(AvatarPartType partType, string assetName = null)
        {
            GameAvatarPart part = Pool.Get<GameAvatarPart>();
            part.OnInit(this, partType);
            part.AssetName = assetName;

            m_PartDict ??= DictionaryPool<AvatarPartType, GameAvatarPart>.Get();
            m_PartDict.Add(partType, part);
        }

        /// <summary>
        /// 获取一个部位
        /// </summary>
        /// <param name="partType">部位类型</param>
        /// <returns>部位引用</returns>
        public GameAvatarPart GetPart(AvatarPartType partType)
        {
            if (m_PartDict == null || !m_PartDict.ContainsKey(partType))
                return null;

            return m_PartDict[partType];
        }

        /// <summary>
        /// 更新一个部位资源
        /// </summary>
        /// <param name="partType">部位类型</param>
        /// <param name="assetName">资源名称</param>
        public void UpdatePartAsset(AvatarPartType partType, string assetName)
        {
            GameAvatarPart part = GetPart(partType);
            if (part == null) return;
            part.AssetName = assetName;
        }

        /// <summary>
        /// 添加一个脏数据的部位待刷新
        /// </summary>
        /// <param name="part">部位</param>
        private void AddDirtyToRefresh(GameAvatarPart part)
        {
            m_WaitRefreshParts ??= new Queue<GameAvatarPart>((int)AvatarPartType.End);
            m_WaitRefreshParts.Enqueue(part);
        }
    }
}

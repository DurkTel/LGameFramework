using LGameFramework.GameBase.Pool;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace GameCore.Avatar
{
    /// <summary>
    /// ģ�ͻ�װ����ϵͳ
    /// </summary>
    public partial class GameAvatar : MonoBehaviour
    {
        /// <summary>
        /// ��λ�ֵ�
        /// </summary>
        private Dictionary<AvatarPartType, GameAvatarPart> m_PartDict;
        public Dictionary<AvatarPartType,GameAvatarPart> PartDict { get { return m_PartDict; } }
        /// <summary>
        /// ���ڵ�
        /// </summary>
        private Transform m_Root;
        public Transform Root { get { return m_Root; } }
        /// <summary>
        /// ���й����ı任���
        /// </summary>
        private Dictionary<string, Transform> m_AllSkeletonBone;
        /// <summary>
        /// ��ǰ���ڼ��صĲ�λ
        /// </summary>
        private GameAvatarPart m_LoadingPart;
        /// <summary>
        /// �Ƿ����ڼ���
        /// </summary>
        public bool IsLoading { get { return m_LoadingPart != null; } }
        /// <summary>
        /// ������ɻص�
        /// </summary>
        public UnityEvent<AvatarPartType> OnLoadComplete = new UnityEvent<AvatarPartType>();

        private void Start()
        {
            m_Root = transform;
            gameObject.name = "GameAvatar";
        }

        private void Update()
        {
            if (m_PartDict == null) return;
            //ÿ֡��鲿λ�Ƿ��� �ǵĻ��������� ��ֹһ֡��ε���
            foreach (var part in m_PartDict.Values)
            {
                //�����λ����
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
                    Transform tra = (m_LoadingPart.Asset as GameObject).transform;
                    Transform[] temp = tra.GetComponentsInChildren<Transform>();
                    m_AllSkeletonBone = new Dictionary<string, Transform>(temp.Length);
                    foreach (Transform t in temp)
                        m_AllSkeletonBone[t.name.Replace("(copy)", "")] = t;

                    //���������� ˢ��һ�²�����Լ��
                    foreach (var part in m_PartDict.Values)
                        part.UpdateConstranint();
                }

                OnLoadComplete?.Invoke(m_LoadingPart.PartType);
                m_LoadingPart = null;
            }
        }

        public void AddPart(AvatarPartType partType, string assetName = null)
        {
            GameAvatarPart part = Pool<GameAvatarPart>.Get();
            part.OnInit(this, partType);
            part.AssetName = assetName;

            m_PartDict ??= new Dictionary<AvatarPartType, GameAvatarPart>((int)AvatarPartType.End);
            m_PartDict.Add(partType, part);
        }

        public GameAvatarPart GetPart(AvatarPartType partType)
        {
            if (!m_PartDict.ContainsKey(partType))
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

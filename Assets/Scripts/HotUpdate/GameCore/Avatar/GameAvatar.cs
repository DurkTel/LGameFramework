using LGameFramework.GameBase;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore.Avatar
{
    /// <summary>
    /// ģ�ͻ�װ����ϵͳ
    /// </summary>
    public partial class GameAvatar : MonoBehaviour
    {
        private Vector3 m_HidePosition = new Vector3(9999, 9999, 9999);
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
        /// �ȴ�ˢ�µĲ�λ����
        /// </summary>
        private Queue<GameAvatarPart> m_WaitRefreshParts;
        /// <summary>
        /// ��ǰ���ڼ��صĲ�λ
        /// </summary>
        private GameAvatarPart m_LoadingPart;
        /// <summary>
        /// �Ƿ����ڼ���
        /// </summary>
        public bool IsLoading { get { return m_LoadingPart != null; } }
        /// <summary>
        /// �Ƿ���ʾ
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
        /// ������ɻص�
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
            //��ⲿλ�Ƿ�������
            if (m_LoadingPart != null && m_LoadingPart.IsDone)
            {
                if (m_LoadingPart.PartType == AvatarPartType.Skeleton)
                {
                    Transform tra = m_LoadingPart.Asset.transform;
                    Transform[] temp = tra.GetComponentsInChildren<Transform>();
                    m_AllSkeletonBone = new Dictionary<string, Transform>(temp.Length);
                    foreach (Transform t in temp)
                        m_AllSkeletonBone[t.name.Replace("(Clone)", "")] = t;

                    //���������� ˢ��һ�²�����Լ��
                    foreach (var part in m_PartDict.Values)
                        part.UpdateConstranint();
                }

                OnLoadComplete?.Invoke(m_LoadingPart.PartType);
                m_LoadingPart = null;
            }

            //�д�ˢ�µĲ�λ��û������ˢ�µĲ�λ
            if (m_WaitRefreshParts == null || m_WaitRefreshParts.Count <= 0 || m_LoadingPart != null) return;
            //ÿ֡ˢ��һ��������
            m_LoadingPart = m_WaitRefreshParts.Dequeue();
            m_LoadingPart.LoadPartAsset();
            //�Ѿ���ʼ������Դ�� �������ݱ�ʶȥ��
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
        /// ���һ����λ
        /// </summary>
        /// <param name="partType">��λ����</param>
        /// <param name="assetName">��Դ����</param>
        public void AddPart(AvatarPartType partType, string assetName = null)
        {
            GameAvatarPart part = Pool.Get<GameAvatarPart>();
            part.OnInit(this, partType);
            part.AssetName = assetName;

            m_PartDict ??= DictionaryPool<AvatarPartType, GameAvatarPart>.Get();
            m_PartDict.Add(partType, part);
        }

        /// <summary>
        /// ��ȡһ����λ
        /// </summary>
        /// <param name="partType">��λ����</param>
        /// <returns>��λ����</returns>
        public GameAvatarPart GetPart(AvatarPartType partType)
        {
            if (m_PartDict == null || !m_PartDict.ContainsKey(partType))
                return null;

            return m_PartDict[partType];
        }

        /// <summary>
        /// ����һ����λ��Դ
        /// </summary>
        /// <param name="partType">��λ����</param>
        /// <param name="assetName">��Դ����</param>
        public void UpdatePartAsset(AvatarPartType partType, string assetName)
        {
            GameAvatarPart part = GetPart(partType);
            if (part == null) return;
            part.AssetName = assetName;
        }

        /// <summary>
        /// ���һ�������ݵĲ�λ��ˢ��
        /// </summary>
        /// <param name="part">��λ</param>
        private void AddDirtyToRefresh(GameAvatarPart part)
        {
            m_WaitRefreshParts ??= new Queue<GameAvatarPart>((int)AvatarPartType.End);
            m_WaitRefreshParts.Enqueue(part);
        }
    }
}

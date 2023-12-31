using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameBase.Culling
{
    public class ObjectCullingGroup
    {
        private readonly int m_CapacitySize = 512;

        public CullingGroup CullingGroup { get; private set; }

        private BoundingSphere[] m_BoundingSpheres;
        public BoundingSphere[] BoundingSpheres { get { return m_BoundingSpheres; } }

        private readonly ICullingElement[] m_ICullings;

        private int m_CullingIndex;

        private float[] m_Distances = new float[] { 2, 5, 10 };

        private Camera m_TargetCamera = null;

        private Transform m_ReferenceTransform = null;

        private readonly Dictionary<ICullingElement, int> m_CullingObjectDic;
        public float[] Distances { get { return m_Distances; } set { m_Distances = value; CullingGroup.SetBoundingDistances(value); } }
        public UnityAction<ICullingElement, bool> OnVisibleEvent { get; set; }
        public UnityAction<ICullingElement, int, int> OnDistanceEvent { get; set; }

        public Camera TargetCamera
        {
            get { return m_TargetCamera; }
            set
            {
                m_TargetCamera = value;
                CullingGroup.targetCamera = value;
                if (m_TargetCamera)
                    ReferenceTransform = m_TargetCamera.transform;
            }
        }

        public Transform ReferenceTransform
        {
            get { return m_ReferenceTransform; }
            set
            {
                m_ReferenceTransform = value;
                CullingGroup.SetDistanceReferencePoint(m_ReferenceTransform);
            }
        }

        public ObjectCullingGroup()
        {
            CullingGroup = new CullingGroup();
            CullingGroup.enabled = true;
            CullingGroup.onStateChanged += StateChanged;

            m_CullingObjectDic = new Dictionary<ICullingElement, int>();

            //�������ֵ��ʼ��
            m_BoundingSpheres = new BoundingSphere[m_CapacitySize];
            Vector3 pos = new Vector3(0, -99999, 0);
            for (int i = 0; i < m_BoundingSpheres.Length; i++)
                m_BoundingSpheres[i].position = pos; //����һ�߱���
            m_ICullings = new ICullingElement[m_CapacitySize];
            CullingGroup.SetBoundingSpheres(m_BoundingSpheres);
            CullingGroup.SetBoundingSphereCount(m_CapacitySize);
            CullingGroup.SetBoundingDistances(m_Distances);
        }

        private void StateChanged(CullingGroupEvent sphere)
        {
            if (sphere.isVisible && sphere.hasBecomeVisible)
            {
                ICullingElement culling = m_ICullings[sphere.index];
                if (culling != null)
                {
                    culling.OnCullingVisible(true);
                    OnVisibleEvent?.Invoke(culling, true);
                }
            }
            else if (sphere.hasBecomeInvisible)
            {
                ICullingElement culling = m_ICullings[sphere.index];
                if (culling != null)
                {
                    culling.OnCullingVisible(false);
                    OnVisibleEvent?.Invoke(culling, false);
                }
            }

            if (sphere.previousDistance != sphere.currentDistance && m_Distances != null && m_Distances.Length > 0)
            {
                ICullingElement culling = m_ICullings[sphere.index];
                if (culling != null)
                {
                    culling.OnCullingDistance(sphere.currentDistance, m_Distances.Length);
                    OnDistanceEvent?.Invoke(culling, sphere.currentDistance, m_Distances.Length);
                }
            }
        }

        public void AddCullingObject(ICullingElement cullingObject)
        {
            if (m_CullingObjectDic.ContainsKey(cullingObject))
            {
                Debug.LogErrorFormat("�޳�������ӹ������� {0}", cullingObject);
                return;
            }

            if (m_ICullings[m_CullingIndex] != null)
            {
                for (int i = 0; i < m_ICullings.Length; i++)
                {
                    if (m_ICullings[i] == null)
                    {
                        m_CullingIndex = i;
                        break;
                    }
                }

                if (m_ICullings[m_CullingIndex] != null)
                {
                    Debug.LogErrorFormat("�޳���ռ䲻�� {0}", m_CullingIndex);
                    return;
                }
            }
            m_ICullings[m_CullingIndex] = cullingObject;
            m_CullingObjectDic.Add(cullingObject, m_CullingIndex);
            cullingObject.OCullingGroup = this;
        }

        public void RemoveCullingObject(ICullingElement cullingObject)
        {
            int index = GetCullingObjectIndex(cullingObject);
            if (index < 0 || index > m_BoundingSpheres.Length)
            {
                return;
            }
            m_BoundingSpheres[index].position = new Vector3(0, -999999, 0);
            m_ICullings[index] = null;
            m_CullingObjectDic.Remove(cullingObject);
            cullingObject.OCullingGroup = null;
        }

        public void UpdateBoundingSphere(ICullingElement cullingObject, Vector3 pos, float radius)
        {
            int index = GetCullingObjectIndex(cullingObject);
            if (index < 0 || index > m_BoundingSpheres.Length)
            {
                Debug.LogErrorFormat("����ˢ��һ�������������޳�{0}", index);
                return;
            }
            m_BoundingSpheres[index].position = pos;
            m_BoundingSpheres[index].radius = radius;

        }

        public int GetDistance(ICullingElement cullingObject)
        {
            int index = GetCullingObjectIndex(cullingObject);
            if (index < 0 || index > m_BoundingSpheres.Length)
            {
                return -1;
            }
            return CullingGroup.GetDistance(index);

        }

        public bool IsVisible(ICullingElement cullingObject)
        {
            int index = -1;
            if (m_CullingObjectDic.TryGetValue(cullingObject, out index))
                return CullingGroup.IsVisible(index);

            return false;
        }

        private int GetCullingObjectIndex(ICullingElement cullingObject)
        {
            int index = -1;
            m_CullingObjectDic.TryGetValue(cullingObject, out index);
            return index;
        }

        public void Dispose()
        {
            if (CullingGroup != null)
            {
                CullingGroup.onStateChanged -= StateChanged;
                CullingGroup.Dispose();
                CullingGroup = null;
            }

        }
    }
}

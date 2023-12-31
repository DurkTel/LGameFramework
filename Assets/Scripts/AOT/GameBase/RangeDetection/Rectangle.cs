using UnityEngine;

namespace LGameFramework.GameBase.RangeDetection
{
    /// <summary>
    /// ���η�Χ���
    /// </summary>
    public class Rectangle
    {
        /// <summary>
        /// ���н�
        /// </summary>
        private Vector3[] m_Corner;
        /// <summary>
        /// ���ε�һ���Խ�λ��
        /// </summary>
        private Vector3 m_Corner1;
        public Vector3 Corner1 { get {  return m_Corner1; } }
        /// <summary>
        /// ���ε���һ���Խ�λ��
        /// </summary>
        public Vector3 m_Corner2;
        public Vector3 Corner2 { get { return m_Corner2; } }

        public Rectangle(Vector3 point0, Vector3 point1)
        {
            m_Corner1.x = point0.x < point1.x ? point0.x : point1.x;
            m_Corner2.x = point0.x < point1.x ? point1.x : point0.x;

            m_Corner1.z = point0.z < point1.z ? point0.z : point1.z;
            m_Corner2.z = point0.z < point1.z ? point1.z : point0.z;

            m_Corner = new Vector3[4];
            GetVerts(out m_Corner[0], out m_Corner[1], out m_Corner[2], out m_Corner[3]);
        }

        public Vector3 this[int index]
        {
            get
            {
                return m_Corner[index];
            }
        }

        /// <summary>
        /// ��ȡ�ĸ��Ƕ���
        /// </summary>
        /// <param name="vertex0"></param>
        /// <param name="vertex1"></param>
        /// <param name="vertex2"></param>
        /// <param name="vertex3"></param>
        public void GetVerts(out Vector3 vertex0, out Vector3 vertex1, out Vector3 vertex2, out Vector3 vertex3)
        {
            vertex0 = Corner1;
            vertex1 = new Vector3(Corner2.x, 0, Corner1.z);
            vertex2 = Corner2;
            vertex3 = new Vector3(Corner1.x, 0, Corner2.z); 
        }

        /// <summary>
        /// �Ƿ��ڷ�Χ��
        /// </summary>
        /// <param name="position"></param>
        /// <returns></returns>
        public bool IsInZone(Vector3 position)
        {
            return position.x >= m_Corner1.x && position.x <= m_Corner2.x && position.z >= m_Corner1.z && position.z <= m_Corner2.z;
        }
    }
}

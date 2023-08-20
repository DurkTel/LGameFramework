using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.AOI
{
    /// <summary>
    /// 九宫格AOI
    /// </summary>
    public partial class GMNGridAOIManager : FrameworkModule
    {
        internal override int Priority => 1;
        internal override GameObject GameObject { get; set; }
        internal override Transform Transform { get; set; }
        /// <summary>
        /// 所有的格子大小
        /// </summary>
        private readonly int m_TotalGridSize = 500;
        public int TotalGrid { get { return m_TotalGridSize; } }
        /// <summary>
        /// 一个格子的大小
        /// </summary>
        private readonly int m_GridSize = 20;
        public int GridSize { get { return m_GridSize; } }
        /// <summary>
        /// 所有的格子区域块
        /// </summary>
        private GridBlock[] m_AllGridBlock;
        public GridBlock[] AllGridBlock { get { return m_AllGridBlock; } }
        /// <summary>
        /// 行数
        /// </summary>
        private int m_RowCount;
        public int RowCount { get { return m_RowCount; } }

        internal override void OnInit()
        {
            m_RowCount = Mathf.CeilToInt(m_TotalGridSize / m_GridSize);
            m_AllGridBlock = new GridBlock[m_RowCount * m_RowCount];
            for (int i = 0; i < m_AllGridBlock.Length; i++)
                m_AllGridBlock[i] = new GridBlock(GetAxisByIndex(i));
        }

        internal override void Update(float deltaTime, float unscaledTime)
        {
            
        }

        private Vector2Int GetAxisByIndex(int idx)
        {
            return new Vector2Int(idx % m_RowCount, idx / m_RowCount);
        }

        private int GetIndexByAxis(Vector2Int vector)
        {
            int x = vector[0];
            int y = vector[1];
            if (x < 0 || y < 0 || x >= m_RowCount || y >= m_RowCount)
                return -1;
            return x + y * m_RowCount;
        }

        public void Test()
        { 
        
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.AOI
{
    public partial class GMNGridAOIManager : FrameworkModule
    {
        /// <summary>
        /// 格子区域块
        /// </summary>
        public class GridBlock
        {
            /// <summary>
            /// 格子内所有元素
            /// </summary>
            public LinkedList<IGridElement> allElements;
            /// <summary>
            /// 格子坐标
            /// </summary>
            private readonly Vector2Int m_GridPosition;
            public Vector2Int GridPosition { get { return m_GridPosition; } }

            public GridBlock(Vector2Int position)
            {
                m_GridPosition = position;
            }
        }
    }

    /// <summary>
    /// 格子内元素
    /// </summary>
    public interface IGridElement
    {
        /// <summary>
        /// 元素ID
        /// </summary>
        public int ElementId { get; }
        /// <summary>
        /// 元素位置
        /// </summary>
        public Vector2 Position { get; }
    }
}

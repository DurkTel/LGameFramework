using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.AOI
{
    public partial class GMNGridAOIManager : FrameworkModule
    {
        /// <summary>
        /// ���������
        /// </summary>
        public class GridBlock
        {
            /// <summary>
            /// ����������Ԫ��
            /// </summary>
            public LinkedList<IGridElement> allElements;
            /// <summary>
            /// ��������
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
    /// ������Ԫ��
    /// </summary>
    public interface IGridElement
    {
        /// <summary>
        /// Ԫ��ID
        /// </summary>
        public int ElementId { get; }
        /// <summary>
        /// Ԫ��λ��
        /// </summary>
        public Vector2 Position { get; }
    }
}

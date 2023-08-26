using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using static GameCore.AOI.GMAOIManager;

namespace GameCore.AOI
{
    public partial class GMAOIManager : FrameworkModule
    {
        /// <summary>
        /// ���������
        /// </summary>
        public class GridBlock
        {
            /// <summary>
            /// ����������Ԫ��
            /// </summary>
            private LinkedList<IGridElement> m_AllElements;
            public LinkedList<IGridElement> AllElements { get { return m_AllElements; } }
            /// <summary>
            /// ��������
            /// </summary>
            private readonly Vector2Int m_GridPosition;
            public Vector2Int GridPosition { get { return m_GridPosition; } }

            public GridBlock(Vector2Int position)
            {
                m_GridPosition = position;
            }

            /// <summary>
            /// ���һ��Ԫ�ص�������
            /// </summary>
            /// <param name="element"></param>
            public void AddElement(IGridElement element)
            {
                m_AllElements ??= new LinkedList<IGridElement>();
                m_AllElements.AddLast(element);
            }

            /// <summary>
            /// �Ƴ�һ��Ԫ��
            /// </summary>
            /// <param name="element"></param>
            public void RemoveElement(IGridElement element)
            {
                if(m_AllElements == null || m_AllElements.Count <= 0) return;
                m_AllElements.Remove(element);
            }
        }

        /// <summary>
        /// �Ź������
        /// </summary>
        public enum AOIAxis
        {
            XYZ,
            XY
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
        int ElementId { get; }
        /// <summary>
        /// ��֪֪ͨ�ȼ�
        /// </summary>
        InterestLevel InterestLevel { get; }
        /// <summary>
        /// Ԫ�ر任���
        /// </summary>
        Transform Transform { get; }
        /// <summary>
        /// ��ǰ���ڸ���
        /// </summary>
        GridBlock CurrentGrid { get; set; }
        /// <summary>
        /// �ϴ����ڸ���
        /// </summary>
        GridBlock LastGrid { get; set; }
    }

    /// <summary>
    /// ��֪֪ͨ�ȼ�
    /// </summary>
    public enum InterestLevel
    {
        /// <summary>
        /// ��ֹ�ģ������ƶ���
        /// </summary>
        Stationary,
        /// <summary>
        /// ��Ծ�ģ������ƶ���
        /// </summary>
        Active,
        /// <summary>
        /// ����
        /// </summary>
        LocalTarget
    }
}

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
        /// 格子区域块
        /// </summary>
        public class GridBlock
        {
            /// <summary>
            /// 格子内所有元素
            /// </summary>
            private LinkedList<IGridElement> m_AllElements;
            public LinkedList<IGridElement> AllElements { get { return m_AllElements; } }
            /// <summary>
            /// 格子坐标
            /// </summary>
            private readonly Vector2Int m_GridPosition;
            public Vector2Int GridPosition { get { return m_GridPosition; } }

            public GridBlock(Vector2Int position)
            {
                m_GridPosition = position;
            }

            /// <summary>
            /// 添加一个元素到格子里
            /// </summary>
            /// <param name="element"></param>
            public void AddElement(IGridElement element)
            {
                m_AllElements ??= new LinkedList<IGridElement>();
                m_AllElements.AddLast(element);
            }

            /// <summary>
            /// 移除一个元素
            /// </summary>
            /// <param name="element"></param>
            public void RemoveElement(IGridElement element)
            {
                if(m_AllElements == null || m_AllElements.Count <= 0) return;
                m_AllElements.Remove(element);
            }
        }

        /// <summary>
        /// 九宫格的轴
        /// </summary>
        public enum AOIAxis
        {
            XYZ,
            XY
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
        int ElementId { get; }
        /// <summary>
        /// 感知通知等级
        /// </summary>
        InterestLevel InterestLevel { get; }
        /// <summary>
        /// 元素变换组件
        /// </summary>
        Transform Transform { get; }
        /// <summary>
        /// 当前所在格子
        /// </summary>
        GridBlock CurrentGrid { get; set; }
        /// <summary>
        /// 上次所在格子
        /// </summary>
        GridBlock LastGrid { get; set; }
    }

    /// <summary>
    /// 感知通知等级
    /// </summary>
    public enum InterestLevel
    {
        /// <summary>
        /// 静止的（不能移动）
        /// </summary>
        Stationary,
        /// <summary>
        /// 活跃的（可以移动）
        /// </summary>
        Active,
        /// <summary>
        /// 本机
        /// </summary>
        LocalTarget
    }
}

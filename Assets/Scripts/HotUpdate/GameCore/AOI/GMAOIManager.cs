using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore.AOI
{
    /// <summary>
    /// 九宫格AOI
    /// </summary>
    public sealed partial class GMAOIManager : FrameworkModule
    {
        public override int Priority => 1;
        /// <summary>
        /// 九宫格的轴向
        /// </summary>
        private AOIAxis m_Axis = AOIAxis.XYZ;
        public AOIAxis Axis { get {  return m_Axis; } }
        /// <summary>
        /// 一个格子的大小
        /// </summary>
        private readonly int m_GridSize = 10;
        public int GridSize { get { return m_GridSize; } }
        /// <summary>
        /// 行数
        /// </summary>
        private readonly int m_RowCount = 10;
        public int RowCount { get { return m_RowCount; } }
        /// <summary>
        /// 所有的格子区域块
        /// </summary>
        private GridBlock[] m_AllGridBlock;
        public GridBlock[] AllGridBlock { get { return m_AllGridBlock; } }
        /// <summary>
        /// 活动元素列表
        /// </summary>
        private List<IGridElement> m_ActiveElement;
        public List<IGridElement> ActiveElement { get { return m_ActiveElement; } }
        /// <summary>
        /// 更新目标元素
        /// </summary>
        private IGridElement m_TargetElement;
        public IGridElement TargetElement { get { return m_TargetElement; } }
        /// <summary>
        /// 目标元素相邻的格子
        /// </summary>
        private List<GridBlock> m_TargetNearGrid = new List<GridBlock>(9);
        public List<GridBlock> TargetNearGrid { get { return m_TargetNearGrid; } }  
        /// <summary>
        /// 元素进出目标元素相邻格子事件
        /// </summary>
        public UnityEvent<int, bool> onNearChangerEvent;
        public override void OnInit()
        {
            onNearChangerEvent = new UnityEvent<int, bool>();
            m_AllGridBlock = new GridBlock[m_RowCount * m_RowCount];
            for (int i = 0; i < m_AllGridBlock.Length; i++)
                m_AllGridBlock[i] = new GridBlock(GetAxisByIndex(i));
        }

        public override void Update(float deltaTime, float unscaledTime)
        {
            if (m_TargetElement == null || m_TargetElement.Transform == null) return;

            //主目标所处格子发生变化
            if (UpdateElement(m_TargetElement))
                CalculateNearChange(m_TargetElement);

            if (m_ActiveElement != null && m_ActiveElement.Count > 0)
            {
                foreach (var element in m_ActiveElement)
                {
                    if (UpdateElement(element))
                    {
                        //活跃元素所在格子更新了 判断是否进出了主目标的相邻格子
                        if (m_TargetNearGrid.Contains(element.CurrentGrid))
                            onNearChangerEvent?.Invoke(element.ElementId, true);
                        else if (m_TargetNearGrid.Contains(element.LastGrid))
                            onNearChangerEvent?.Invoke(element.ElementId, false);
                    }
                }
            }
        }

        /// <summary>
        /// 添加一个元素
        /// </summary>
        /// <param name="element"></param>
        internal void AddElement(IGridElement element)
        {
            UpdateElement(element);

            switch (element.InterestLevel)
            {
                case InterestLevel.Active:
                    m_ActiveElement ??= new List<IGridElement>();
                    m_ActiveElement.Add(element);
                    break;
                case InterestLevel.LocalTarget:
                    m_TargetElement = element;
                    GetNearGrid(m_TargetElement, ref m_TargetNearGrid);
                    break;
            }
        }

        /// <summary>
        /// 移除一个元素
        /// </summary>
        /// <param name="element"></param>
        internal void RemoveElement(IGridElement element)
        {
            element.CurrentGrid.RemoveElement(element);
            m_ActiveElement.Remove(element);
        }

        /// <summary>
        /// 更新元素位置
        /// </summary>
        /// <param name="element"></param>
        private bool UpdateElement(IGridElement element)
        {
            GridBlock block = GetBlockByElement(element);

            //所在格子没变
            if (block == element.CurrentGrid || block == null)
                return false;

            //发生变化
            element.LastGrid = element.CurrentGrid;
            element.CurrentGrid = block;
            element.LastGrid?.RemoveElement(element);
            element.CurrentGrid.AddElement(element);

            return true;
        }

        /// <summary>
        /// 计算与上次位置相比相邻格子的变化
        /// </summary>
        /// <param name="element"></param>
        /// <param name="blocks"></param>
        private void CalculateNearChange(IGridElement element)
        {
            //更新一下相邻格子
            GetNearGrid(element, ref m_TargetNearGrid);

            //发布进出相邻格子元素
            int x = element.CurrentGrid.GridPosition.x - element.LastGrid.GridPosition.x;
            int y = element.CurrentGrid.GridPosition.y - element.LastGrid.GridPosition.y;

            Vector2Int pointS = element.LastGrid.GridPosition - new Vector2Int(x, y);
            Vector2Int pointE = element.CurrentGrid.GridPosition + new Vector2Int(x, y);
            Vector2Int temp = Vector2Int.zero;
            GridBlock grid = null;

            int to = Mathf.Abs(y) + Mathf.Abs(x);
            int from = to - 2;

            int factorx = x == 0 ? 1 : x;
            int factory = y == 0 ? 1 : y;

            for (int i = from; i <= to; i++)
            {
                if (x != 0)
                {
                    temp.Set(pointS.x, pointS.y + i * factory);
                    grid = GetBlockByAxis(temp);
                    if (grid != null && grid.AllElements != null)
                    {
                        foreach (var item in grid.AllElements)
                            onNearChangerEvent?.Invoke(item.ElementId, false);
                    }

                    temp.Set(pointE.x, pointE.y - i * factory);
                    grid = GetBlockByAxis(temp);
                    if (grid != null && grid.AllElements != null)
                    {
                        foreach (var item in grid.AllElements)
                            onNearChangerEvent?.Invoke(item.ElementId, true);
                    }
                }

                if (y != 0)
                {
                    temp.Set(pointS.x + i * factorx, pointS.y);
                    grid = GetBlockByAxis(temp);
                    if (grid != null && grid.AllElements != null)
                    {
                        foreach (var item in grid.AllElements)
                            onNearChangerEvent?.Invoke(item.ElementId, false);
                    }

                    temp.Set(pointE.x - i * factorx, pointE.y);
                    grid = GetBlockByAxis(temp);
                    if (grid != null && grid.AllElements != null)
                    {
                        foreach (var item in grid.AllElements)
                            onNearChangerEvent?.Invoke(item.ElementId, true);
                    }
                }
            }
        }

        /// <summary>
        /// 获取该元素相邻的格子
        /// </summary>
        /// <param name="element"></param>
        /// <param name="blocks"></param>
        internal void GetNearGrid(IGridElement element, ref List<GridBlock> blocks)
        {
            blocks.Clear();
            int index = GetIndexByPosition(element.Transform.position);
            GridBlock block = m_AllGridBlock[index];
            GridBlock near;
            Vector2Int temp = block.GridPosition;
            for (int x = -1; x <= 1; x++)
            {
                for (int y = -1; y <= 1; y++)
                {
                    temp.Set(block.GridPosition[0] + x, block.GridPosition[1] + y);
                    near = GetBlockByAxis(temp);
                    if (near != null)
                        blocks.Add(near);
                }
            }
        }

        /// <summary>
        /// 返回元素所在格子
        /// </summary>
        /// <param name="element"></param>
        /// <returns></returns>
        internal GridBlock GetBlockByElement(IGridElement element)
        {
            int index = GetIndexByPosition(element.Transform.position);
            if (index == -1) return null;

            return m_AllGridBlock[index];
        }

        /// <summary>
        /// 通过行列获取格子
        /// </summary>
        /// <param name="vector"></param>
        /// <returns></returns>
        private GridBlock GetBlockByAxis(Vector2Int vector)
        {
            int index = GetIndexByAxis(vector);
            if (index == -1) return null;

            return m_AllGridBlock[index];
        }

        /// <summary>
        /// 通过世界坐标计算所在格子下标
        /// </summary>
        /// <param name="position"></param>
        /// <returns></returns>
        public int GetIndexByPosition(Vector3 position)
        { 
            Vector3 pos = position / m_GridSize;
            return GetIndexByAxis(new Vector2Int(Mathf.FloorToInt(pos.x), Mathf.FloorToInt(m_Axis == AOIAxis.XYZ ? pos.z : pos.y))) ;
        }

        /// <summary>
        /// 通过格子下标获取行列
        /// </summary>
        /// <param name="idx"></param>
        /// <returns></returns>
        private Vector2Int GetAxisByIndex(int idx)
        {
            return new Vector2Int(idx % m_RowCount, idx / m_RowCount);
        }

        /// <summary>
        /// 通过行列获取格子下标
        /// </summary>
        /// <param name="vector"></param>
        /// <returns></returns>
        private int GetIndexByAxis(Vector2Int vector)
        {
            int x = vector[0];
            int y = vector[1];
            if (x < 0 || y < 0 || x >= m_RowCount || y >= m_RowCount)
                return -1;
            return x + y * m_RowCount;
        }

    }
}

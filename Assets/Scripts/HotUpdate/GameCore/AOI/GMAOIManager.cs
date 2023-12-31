using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore.AOI
{
    /// <summary>
    /// �Ź���AOI
    /// </summary>
    public sealed partial class GMAOIManager : FrameworkModule
    {
        public override int Priority => 1;
        /// <summary>
        /// �Ź��������
        /// </summary>
        private AOIAxis m_Axis = AOIAxis.XYZ;
        public AOIAxis Axis { get {  return m_Axis; } }
        /// <summary>
        /// һ�����ӵĴ�С
        /// </summary>
        private readonly int m_GridSize = 10;
        public int GridSize { get { return m_GridSize; } }
        /// <summary>
        /// ����
        /// </summary>
        private readonly int m_RowCount = 10;
        public int RowCount { get { return m_RowCount; } }
        /// <summary>
        /// ���еĸ��������
        /// </summary>
        private GridBlock[] m_AllGridBlock;
        public GridBlock[] AllGridBlock { get { return m_AllGridBlock; } }
        /// <summary>
        /// �Ԫ���б�
        /// </summary>
        private List<IGridElement> m_ActiveElement;
        public List<IGridElement> ActiveElement { get { return m_ActiveElement; } }
        /// <summary>
        /// ����Ŀ��Ԫ��
        /// </summary>
        private IGridElement m_TargetElement;
        public IGridElement TargetElement { get { return m_TargetElement; } }
        /// <summary>
        /// Ŀ��Ԫ�����ڵĸ���
        /// </summary>
        private List<GridBlock> m_TargetNearGrid = new List<GridBlock>(9);
        public List<GridBlock> TargetNearGrid { get { return m_TargetNearGrid; } }  
        /// <summary>
        /// Ԫ�ؽ���Ŀ��Ԫ�����ڸ����¼�
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

            //��Ŀ���������ӷ����仯
            if (UpdateElement(m_TargetElement))
                CalculateNearChange(m_TargetElement);

            if (m_ActiveElement != null && m_ActiveElement.Count > 0)
            {
                foreach (var element in m_ActiveElement)
                {
                    if (UpdateElement(element))
                    {
                        //��ԾԪ�����ڸ��Ӹ����� �ж��Ƿ��������Ŀ������ڸ���
                        if (m_TargetNearGrid.Contains(element.CurrentGrid))
                            onNearChangerEvent?.Invoke(element.ElementId, true);
                        else if (m_TargetNearGrid.Contains(element.LastGrid))
                            onNearChangerEvent?.Invoke(element.ElementId, false);
                    }
                }
            }
        }

        /// <summary>
        /// ���һ��Ԫ��
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
        /// �Ƴ�һ��Ԫ��
        /// </summary>
        /// <param name="element"></param>
        internal void RemoveElement(IGridElement element)
        {
            element.CurrentGrid.RemoveElement(element);
            m_ActiveElement.Remove(element);
        }

        /// <summary>
        /// ����Ԫ��λ��
        /// </summary>
        /// <param name="element"></param>
        private bool UpdateElement(IGridElement element)
        {
            GridBlock block = GetBlockByElement(element);

            //���ڸ���û��
            if (block == element.CurrentGrid || block == null)
                return false;

            //�����仯
            element.LastGrid = element.CurrentGrid;
            element.CurrentGrid = block;
            element.LastGrid?.RemoveElement(element);
            element.CurrentGrid.AddElement(element);

            return true;
        }

        /// <summary>
        /// �������ϴ�λ��������ڸ��ӵı仯
        /// </summary>
        /// <param name="element"></param>
        /// <param name="blocks"></param>
        private void CalculateNearChange(IGridElement element)
        {
            //����һ�����ڸ���
            GetNearGrid(element, ref m_TargetNearGrid);

            //�����������ڸ���Ԫ��
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
        /// ��ȡ��Ԫ�����ڵĸ���
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
        /// ����Ԫ�����ڸ���
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
        /// ͨ�����л�ȡ����
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
        /// ͨ����������������ڸ����±�
        /// </summary>
        /// <param name="position"></param>
        /// <returns></returns>
        public int GetIndexByPosition(Vector3 position)
        { 
            Vector3 pos = position / m_GridSize;
            return GetIndexByAxis(new Vector2Int(Mathf.FloorToInt(pos.x), Mathf.FloorToInt(m_Axis == AOIAxis.XYZ ? pos.z : pos.y))) ;
        }

        /// <summary>
        /// ͨ�������±��ȡ����
        /// </summary>
        /// <param name="idx"></param>
        /// <returns></returns>
        private Vector2Int GetAxisByIndex(int idx)
        {
            return new Vector2Int(idx % m_RowCount, idx / m_RowCount);
        }

        /// <summary>
        /// ͨ�����л�ȡ�����±�
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

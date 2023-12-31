using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace LGameFramework.GameLogic.GUI
{
    /// <summary>
    /// 无限滑动列表
    /// </summary>
    public abstract class AbstractListView : UIBehaviour
    {
        /// <summary>
        /// 列表布局类型
        /// </summary>
        public enum ListLayout
        {
            Horizontal,
            Vertical,
            Grid,
            Custom
        }

        /// <summary>
        /// 格子部件行列数
        /// </summary>
        public enum GridConstraint
        {
            ColumnCount,
            RowCount
        }

        /// <summary>
        /// 列表布局类型
        /// </summary>
        [SerializeField]
        private ListLayout m_ListLayout = ListLayout.Horizontal;

        /// <summary>
        /// 格子部件行列类型
        /// </summary>
        [SerializeField]
        private GridConstraint m_GridConstraint = GridConstraint.ColumnCount;

        /// <summary>
        /// 格子部件行列数
        /// </summary>
        [SerializeField]
        private int m_GridConstraintCount;

        /// <summary>
        /// 滑动区域
        /// </summary>
        [SerializeField]
        private ScrollRect m_ScrollRect;
        public ScrollRect ScrollRect { get { return m_ScrollRect; } set { m_ScrollRect = value; } }

        /// <summary>
        /// 可视区域
        /// </summary>
        [SerializeField]
        private RectTransform m_ViewPort;
        public RectTransform ViewPort { get { return m_ViewPort; } set { m_ViewPort = value; } }

        /// <summary>
        /// 完整区域
        /// </summary>
        [SerializeField]
        private RectTransform m_Content;
        public RectTransform Content { get { return m_Content; } set { m_Content = value; } }

        /// <summary>
        /// 预制
        /// </summary>
        [SerializeField]
        private GameObject m_Template;

        /// <summary>
        /// 预制名
        /// </summary>
        [SerializeField]
        private string m_TemplateAsset;

        /// <summary>
        /// 数据数量
        /// </summary>
        [SerializeField]
        private int m_DataCount;
        public int DataCount { get { return m_DataCount; } set { m_DataCount = value; RefreshContent(); ForceRefresh(); } }

        /// <summary>
        /// 超过该值后分帧创建
        /// </summary>
        [SerializeField]
        private int m_WaitCreateCount;

        /// <summary>
        /// 间隔
        /// </summary>
        [SerializeField]
        private Vector2 m_Spacing;
        public Vector2 Spacing { get { return m_Spacing; } set { m_Spacing = value; RefreshContent(); ForceRefresh(); } }

        /// <summary>
        /// 当前创建到哪个
        /// </summary>
        private int m_WaitIndex;

        /// <summary>
        /// 处于可视范围的item
        /// </summary>
        private Dictionary<int, ListViewItemRender> m_VisibleList;

        /// <summary>
        /// 回收中的item
        /// </summary>
        private List<ListViewItemRender> m_ReleaseList;

        /// <summary>
        /// 临时变量
        /// </summary>
        private List<ListViewItemRender> m_Temps;

        /// <summary>
        /// 是否要进行强制刷新
        /// </summary>
        private bool m_ForceRefresh;

        /// <summary>
        /// 可视范围的下标
        /// </summary>
        private Vector2Int m_VisibleRage;

        /// <summary>
        /// item的大小
        /// </summary>
        private Vector2 m_ItemSize;
        public Vector2 ItemSize
        {
            get
            {
                if (m_ItemSize == Vector2.zero && m_Template != null)
                {
                    RectTransform rect = m_Template.GetComponent<RectTransform>();
                    m_ItemSize = rect.rect.size;
                    return m_ItemSize;
                }
                return m_ItemSize;
            }
        }
        public UnityAction<ListViewItemRender> OnItemCreate { get; set; }
        public UnityAction<ListViewItemRender> OnItemUpdate { get; set; }
        public UnityAction<ListViewItemRender> OnItemRelease { get; set; }
        public UnityAction OnUpdateComplete { get; set; }

        protected override void Start()
        {
            if (m_Template != null)
                m_Template.SetActive(false);

            Init();
            RefreshContent();
            ForceRefresh();
        }

        protected virtual void Update()
        {
            if (m_ForceRefresh)
                RefreshItems();
        }

        /// <summary>
        /// 初始化获取组件
        /// </summary>
        protected virtual void Init()
        {
            m_ViewPort ??= GetComponent<RectTransform>();

            m_Content ??= m_ViewPort;

            m_VisibleList ??= new Dictionary<int, ListViewItemRender>();

            if (m_ScrollRect != null)
                m_ScrollRect.onValueChanged.AddListener(OnScroll);

        }

        #region 刷新相关

        /// <summary>
        /// 滑动时更新
        /// </summary>
        /// <param name="vector"></param>
        private void OnScroll(Vector2 vector)
        {
            ForceRefresh();
        }

        /// <summary>
        /// 刷新item
        /// </summary>
        private void RefreshItems()
        {
            RefreshItemsState();
            RefreshItemsPos();
        }

        /// <summary>
        /// 刷新item状态
        /// </summary>
        private void RefreshItemsState()
        {
            //计算显示范围
            int firstIndex = 0;
            int lastIndex = 0;
            switch (m_ListLayout)
            {
                case ListLayout.Horizontal:
                    GetVisibleRange(0, 1, out firstIndex, out lastIndex);
                    break;
                case ListLayout.Vertical:
                    GetVisibleRange(1, 1, out firstIndex, out lastIndex);
                    break;
                case ListLayout.Grid:
                    int axis = m_GridConstraint == GridConstraint.ColumnCount ? 1 : 0;
                    GetVisibleRange(axis, m_GridConstraintCount, out firstIndex, out lastIndex);
                    break;
            }

            //筛选超出显示范围
            foreach (var render in m_VisibleList.Values)
            {
                if (render.Index < firstIndex || render.Index > lastIndex)
                {
                    if (m_Temps == null)
                        m_Temps = new List<ListViewItemRender>();

                    m_Temps.TryUniqueAdd(render);
                }
            }

            ListViewItemRender item;
            //回收超出显示范围的Item
            if (m_Temps != null && m_Temps.Count > 0)
            {
                for (int i = 0; i < m_Temps.Count; i++)
                {
                    if (m_ReleaseList == null)
                        m_ReleaseList = new List<ListViewItemRender>();

                    int index = m_Temps[i].Index;
                    if (m_VisibleList.TryGetValue(index, out item))
                    {
                        m_VisibleList.Remove(index);
                        m_ReleaseList.TryUniqueAdd(item);
                        item.Release();
                        OnItemRelease?.Invoke(item);
                    }
                }

                m_Temps.Clear();
            }

            //计算滑动时由于分帧导致的误差 重置index
            int offset = firstIndex - m_VisibleRage[0];
            m_WaitIndex = offset >= 0 ? m_WaitIndex - offset : 0;

            int waitFlag = 0;
            //刷新/创建在显示范围的Item
            for (int i = firstIndex + m_WaitIndex; i <= lastIndex; i++)
            {
                if (m_WaitCreateCount != 0 && waitFlag++ >= m_WaitCreateCount) //分帧刷新/创建
                    break;

                m_WaitIndex++;
                if (!m_VisibleList.TryGetValue(i, out item))
                {
                    if (m_ReleaseList == null || m_ReleaseList.Count < 1)
                    {
                        item = GetItemRenderer();
                        GameObject go = Instantiate(m_Template);
                        go.transform.SetParentZero(m_Content);

                        if (!go.activeSelf)
                            go.SetActive(true);

                        item.SetData(i);
                        item.Create(go, this as ListView);
                        OnItemCreate?.Invoke(item);
                    }
                    else
                    {
                        item = m_ReleaseList[0];
                        m_ReleaseList.RemoveAt(0);
                    }

                    m_VisibleList.TryAdd(i, item);
                }
                item.SetData(i);
                item.Refresh();
                OnItemUpdate?.Invoke(item);
            }

            if (m_VisibleList.Count > lastIndex - firstIndex)
            {
                m_ForceRefresh = false;
                m_WaitIndex = 0;
                OnUpdateComplete?.Invoke();
            }

            m_VisibleRage.Set(firstIndex, lastIndex);
        }

        /// <summary>
        /// 刷新item位置
        /// </summary>
        private void RefreshItemsPos()
        {
            switch (m_ListLayout)
            {
                case ListLayout.Horizontal:
                    RefreshHorizontalORVerticalPos(0);
                    break;
                case ListLayout.Vertical:
                    RefreshHorizontalORVerticalPos(1);
                    break;
                case ListLayout.Grid:
                    RefreshGridPos();
                    break;
                case ListLayout.Custom:
                    break;
                default:
                    break;
            }

            if (m_ReleaseList != null && m_ReleaseList.Count > 0)
            {
                foreach (var item in m_ReleaseList)
                {
                    item.RectTransform.anchoredPosition = new Vector2(9999, 9999);
                }

            }
        }

        /// <summary>
        /// 刷新水平或垂直方向的位置
        /// </summary>
        /// <param name="axis"></param>
        private void RefreshHorizontalORVerticalPos(int axis)
        {
            Vector3 vector = Vector3.zero;
            int symbol = axis == 0 ? 1 : -1;
            foreach (var item in m_VisibleList.Values)
            {
                vector[axis] = item.Index * (ItemSize[axis] + m_Spacing[axis]) * symbol;
                item.RectTransform.anchoredPosition = vector;
            }
        }

        /// <summary>
        /// 刷新格子状态的位置
        /// </summary>
        private void RefreshGridPos()
        {
            Vector3 vector = Vector3.zero;
            int fixedAxis = m_GridConstraint == GridConstraint.ColumnCount ? 0 : 1;
            int variableAxis = fixedAxis == 0 ? 1 : 0;
            int symbol = m_GridConstraint == GridConstraint.ColumnCount ? 1 : -1;

            foreach (var item in m_VisibleList.Values)
            {
                vector[fixedAxis] = item.Index % m_GridConstraintCount * (ItemSize[0] + m_Spacing[0]) * symbol;
                vector[variableAxis] = item.Index / m_GridConstraintCount * (ItemSize[1] + m_Spacing[1]) * -symbol;
                item.RectTransform.anchoredPosition = vector;
            }
        }

        /// <summary>
        /// 刷新完整区域大小
        /// </summary>
        private void RefreshContent()
        {

            if (m_DataCount == 0)
                m_Content.sizeDelta = Vector2.zero;

            switch (m_ListLayout)
            {
                case ListLayout.Horizontal:
                    m_Content.sizeDelta = new Vector2(m_DataCount * (ItemSize[0] + m_Spacing[0]), ItemSize[1]);
                    break;
                case ListLayout.Vertical:
                    m_Content.sizeDelta = new Vector2(ItemSize[0], m_DataCount * (ItemSize[1] + m_Spacing[1]));
                    break;
                case ListLayout.Grid:
                    Vector2 size = Vector2.zero;
                    int fixedAxis = m_GridConstraint == GridConstraint.ColumnCount ? 0 : 1;
                    int variableAxis = fixedAxis == 0 ? 1 : 0;
                    size[fixedAxis] = m_GridConstraintCount * (ItemSize[fixedAxis] + m_Spacing[fixedAxis]);
                    size[variableAxis] = Mathf.Ceil(m_DataCount / (float)m_GridConstraintCount) * (ItemSize[1] + m_Spacing[variableAxis]);
                    m_Content.sizeDelta = size;
                    break;
                case ListLayout.Custom:
                    break;
                default:
                    break;
            }

            m_Content.anchorMax = m_Content.anchorMin = m_Content.pivot = new Vector2(0, 1);
        }

        /// <summary>
        /// 计算可视范围的下标
        /// </summary>
        /// <param name="axis"></param>
        /// <param name="maxShowNum"></param>
        /// <param name="firstIndex"></param>
        /// <param name="lastIndex"></param>
        private void GetVisibleRange(int axis, int maxShowNum, out int firstIndex, out int lastIndex)
        {
            int symbol = axis == 1 ? 1 : -1;

            float offsetStart = m_Content.anchoredPosition[axis] * symbol;
            firstIndex = (int)(offsetStart / (ItemSize[axis] + m_Spacing[axis])) * maxShowNum;

            float offsetEnd = m_Content.anchoredPosition[axis] * symbol + m_ViewPort.rect.size[axis];
            lastIndex = (int)(offsetEnd / (ItemSize[axis] + m_Spacing[axis])) * maxShowNum + maxShowNum - 1;

            firstIndex = Mathf.Max(firstIndex, 0);

            lastIndex = Mathf.Min(lastIndex, m_DataCount - 1);
        }

        #endregion

        /// <summary>
        /// 强制刷新
        /// </summary>
        public virtual void ForceRefresh()
        {
            m_ForceRefresh = true;
        }

        /// <summary>
        /// 获取渲染器
        /// </summary>
        /// <returns></returns>
        public abstract ListViewItemRender GetItemRenderer();
    }

    /// <summary>
    /// 列表item渲染器
    /// </summary>
    public class ListViewItemRender
    {
        /// <summary>
        /// 下标
        /// </summary>
        private int m_Index;
        public int Index { get { return m_Index; } }

        /// <summary>
        /// 组件注入
        /// </summary>
        private Injection m_Injection;
        public Injection Injection { get { return m_Injection; } }

        /// <summary>
        /// 是否可见
        /// </summary>
        private bool m_IsVisible;
        public bool IsVisible { get { return m_IsVisible; } }

        /// <summary>
        /// 游戏对象
        /// </summary>
        private GameObject m_GameObject;
        public GameObject GameObject { get { return m_GameObject; } }

        /// <summary>
        /// 变换组件
        /// </summary>
        private RectTransform m_RectTransform;
        public RectTransform RectTransform { get { return m_RectTransform; } }

        /// <summary>
        /// 大小
        /// </summary>
        private Vector2 m_Size;
        public Vector2 Size { get { return m_Size; } }

        /// <summary>
        /// 列表
        /// </summary>
        private ListView m_ListView;
        public ListView ListView { get { return m_ListView; } }

        public virtual void SetData(int index)
        {
            m_Index = index;
        }

        public virtual void Create(GameObject gameObject, ListView list)
        {
            m_ListView = list;
            m_GameObject = gameObject;
            m_RectTransform = gameObject.GetComponent<RectTransform>();
            m_Injection = gameObject.GetComponent<Injection>();
            m_Size = m_RectTransform.rect.size;
            m_RectTransform.anchorMin = RectTransform.anchorMax = m_RectTransform.pivot = new Vector2(0, 1);
        }

        public virtual void Refresh()
        {
            m_IsVisible = true;
        }

        public virtual void Release()
        {
            m_IsVisible = false;
        }

        public object GetData()
        {
            return m_ListView.Datas[m_Index];
        }

        public int GetIndex()
        {
            return m_Index;
        }
    }
}
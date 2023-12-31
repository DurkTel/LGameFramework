using UnityEngine;
using UnityEngine.UI;

namespace LGameFramework.GameCore
{
    public class RenderSortingOrder : MonoBehaviour
    {
        /// <summary>
        /// 排序模式
        /// </summary>
        public enum SortingMode
        {
            /// <summary>
            /// 叠加
            /// </summary>
            Additive,
            /// <summary>
            /// 重写
            /// </summary>
            Override,
        }

        /// <summary>
        /// 原本的order
        /// </summary>
        private int[] m_BaseSortingOrder;

        /// <summary>
        /// 根节点order
        /// </summary>
        private int m_RootSortingOrder = -1;

        /// <summary>
        /// 给予的order
        /// </summary>
        [SerializeField]
        private int m_SortingOrder;
        public int SortingOrder
        {
            set
            {
                if (m_SortingOrder == value) return;
                m_SortingOrder = value;
                UpdateSortingOrder();
            }
            get 
            { 
                return m_SortingOrder; 
            } 
        }

        /// <summary>
        /// 排序模式 
        /// 不要动态修改 如果先进行重写再进行叠加 就把原本的order修改掉了
        /// </summary>
        [SerializeField]
        private SortingMode m_SortMode;
        public SortingMode SortMode
        {
            set
            {
                if (m_SortMode == value) return;
                m_SortMode = value;
                UpdateSortingOrder();
            }
            get
            {
                return m_SortMode;
            }
        }

        /// <summary>
        /// 所有渲染器
        /// </summary>
        private Renderer[] m_Renderers;
        public Renderer[] Renderers 
        { 
            get 
            {
                if (m_Renderers == null)
                    m_Renderers = GetComponentsInChildren<Renderer>();

                return m_Renderers; 
            } 
        }

        /// <summary>
        /// 画布
        /// </summary>
        private Canvas m_Canvas;

        private void Start()
        {
            UpdateSortingOrder();
        }

        public void UpdateSortingOrder()
        {
            int order = 0;

            if (m_RootSortingOrder == -1)
            { 
                var rootCanvas = GetRootCanvas();
                if (rootCanvas != null)
                {
                    m_RootSortingOrder = rootCanvas.sortingOrder;
                }
            }

            //没有渲染器 说明是UI
            if (Renderers == null || Renderers.Length == 0)
            {
                m_Canvas = this.TryAddComponent<Canvas>();
                this.TryAddComponent<GraphicRaycaster>();

                bool neverMarkOrder = OnInitBaseSorting(1);
                if (neverMarkOrder)
                    m_BaseSortingOrder[0] = m_Canvas.sortingOrder;

                m_Canvas.overrideSorting = true;
                order = m_SortMode == SortingMode.Additive ? m_BaseSortingOrder[0] : order;
                m_Canvas.sortingOrder = order + m_SortingOrder + m_RootSortingOrder;
            }
            else
            {
                bool neverMarkOrder = OnInitBaseSorting(m_Renderers.Length);
                Renderer renderer;
                for (int i = 0; i < m_Renderers.Length; i++)
                {
                    renderer = m_Renderers[i];
                    if (renderer && !renderer.IsNull())
                    {
                        if (neverMarkOrder)
                            m_BaseSortingOrder[i] = m_Renderers[i].sortingOrder;

                        order = m_SortMode == SortingMode.Additive ? m_BaseSortingOrder[i] : order;
                        renderer.sortingOrder = order + m_SortingOrder + m_RootSortingOrder;
                    }
                }
            }
        }

        private bool OnInitBaseSorting(int count)
        {
            bool neverMarkOrder = m_BaseSortingOrder == null && m_SortMode == SortingMode.Additive;
            //如果是叠加模式 要在原本的order上叠加 所有如果没有记录原本的 就先记录一下
            if (neverMarkOrder)
                m_BaseSortingOrder ??= new int[count];

            return neverMarkOrder;
        }

        private Canvas GetRootCanvas()
        {
            Transform parent = transform.parent;
            Canvas rootCanvas = null;
            while (parent)
            {
                rootCanvas = parent.GetComponent<Canvas>();
                if (null != rootCanvas) return rootCanvas;
                parent = parent.parent;
            }
            return null;
        }
    }
}

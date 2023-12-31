using UnityEngine;
using UnityEngine.UI;

namespace LGameFramework.GameCore
{
    public class RenderSortingOrder : MonoBehaviour
    {
        /// <summary>
        /// ����ģʽ
        /// </summary>
        public enum SortingMode
        {
            /// <summary>
            /// ����
            /// </summary>
            Additive,
            /// <summary>
            /// ��д
            /// </summary>
            Override,
        }

        /// <summary>
        /// ԭ����order
        /// </summary>
        private int[] m_BaseSortingOrder;

        /// <summary>
        /// ���ڵ�order
        /// </summary>
        private int m_RootSortingOrder = -1;

        /// <summary>
        /// �����order
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
        /// ����ģʽ 
        /// ��Ҫ��̬�޸� ����Ƚ�����д�ٽ��е��� �Ͱ�ԭ����order�޸ĵ���
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
        /// ������Ⱦ��
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
        /// ����
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

            //û����Ⱦ�� ˵����UI
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
            //����ǵ���ģʽ Ҫ��ԭ����order�ϵ��� �������û�м�¼ԭ���� ���ȼ�¼һ��
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

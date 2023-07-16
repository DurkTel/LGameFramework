using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    public class GUIViewLayer
    {
        private GameObject m_GameObject;
        public GameObject gameObject { get { return m_GameObject; } }

        private Transform m_Transform;
        public Transform transform { get { return m_Transform; } }

        private Canvas m_Canvas;
        public Canvas canvas { get { return m_Canvas; } }

        private Dictionary<IView, int> m_SortingOrder;

        private List<IView> m_Views;

        private int m_MinSortingOrder;

        private int m_MaxSortingOrder;

        protected int m_ViewOffsetOrder = 50;

        public GUIViewLayer(GameObject go, Canvas canvas)
        {
            m_GameObject = go;
            m_Transform = go.transform;
            m_Canvas = canvas;
        }

        public void SetSortingOrder(int min, int max)
        {
            m_MinSortingOrder = min;
            m_MaxSortingOrder = max;
        }

        public void AddView(IView view)
        {
            view.rectTransform.SetParentZero(m_Transform);
            view.rectTransform.TileRectTransform();

            m_SortingOrder ??= new Dictionary<IView, int>();
            m_SortingOrder.Add(view, 0);
            UpdateSortingOrder(view);

            m_Views ??= new List<IView>();
            m_Views.Add(view);
        }

        public void RemoveView(IView view) 
        { 
            m_Views?.Remove(view);
        }

        public void SetAsTop(IView view)
        {
            if (m_Views != null && m_Views.IndexOf(view) == m_Views.Count - 1) return;
            m_Views?.Remove(view);
            m_Views.Add(view);
        }

        public void UpdateSortingOrder(IView view)
        {
            if (m_Views != null && m_Views.IndexOf(view) == m_Views.Count - 1) return;

            int topOrder = GetTopSortingOrder() + m_ViewOffsetOrder;
            //新界面超出此层最大order
            if (topOrder >= m_MaxSortingOrder)
            {
                IView temp;
                int order = m_MinSortingOrder;
                for (int i = 0; i < m_Views.Count; i++)
                {
                    order = m_MinSortingOrder + i * m_ViewOffsetOrder;
                    temp = m_Views[i];
                    temp.gameObject.UpdateCanvas(order);
                    temp.rectTransform.SetAsLastSibling();
                    m_SortingOrder[view] = order;
                }
                topOrder = order + m_ViewOffsetOrder;
            }

            view.gameObject.UpdateCanvas(topOrder);
            view.rectTransform.SetAsLastSibling();
            m_SortingOrder[view] = topOrder;
        }

        public int GetTopSortingOrder()
        {
            int order = m_MinSortingOrder;
            if (m_Views != null && m_Views.Count > 0)
                order += m_SortingOrder[m_Views[m_Views.Count - 1]];

            return order;
        }
    }
}

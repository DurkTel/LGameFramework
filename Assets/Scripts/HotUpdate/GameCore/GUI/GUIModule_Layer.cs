using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.GUI
{
    public partial class GUIModule
    {
        public enum UILayerLevel
        {
            MainUILayer,
            ViewUILayer,
            TopUILayer,
            LastFlag,
        }

        public class GUIViewLayer
        {
            private GameObject m_GameObject;
            public GameObject gameObject { get { return m_GameObject; } }

            private Transform m_Transform;
            public Transform transform { get { return m_Transform; } }

            private Canvas m_Canvas;
            public Canvas canvas { get { return m_Canvas; } }

            private Dictionary<GUIView, int> m_SortingOrder;

            private List<GUIView> m_Views;

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

            public void AddView(GUIView view)
            {
                view.rectTransform.SetParentZero(m_Transform);
                view.rectTransform.TileRectTransform();

                m_SortingOrder ??= new Dictionary<GUIView, int>();
                m_SortingOrder.Add(view, 0);
                UpdateSortingOrder(view);

                m_Views ??= new List<GUIView>();
                m_Views.Add(view);
            }

            public void RemoveView(GUIView view)
            {
                m_Views?.Remove(view);
            }

            public void SetAsTop(GUIView view)
            {
                if (m_Views != null && m_Views.IndexOf(view) == m_Views.Count - 1) return;
                m_Views?.Remove(view);
                m_Views.Add(view);
            }

            public void UpdateSortingOrder(GUIView view)
            {
                if (m_Views != null && m_Views.IndexOf(view) == m_Views.Count - 1) return;

                int topOrder = GetTopSortingOrder() + m_ViewOffsetOrder;
                //�½��泬���˲����order
                if (topOrder >= m_MaxSortingOrder)
                {
                    IUIBehaviour temp;
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
}
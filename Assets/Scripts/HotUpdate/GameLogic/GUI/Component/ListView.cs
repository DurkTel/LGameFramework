using System;

namespace LGameFramework.GameLogic.GUI
{
    public class ListView : AbstractListView
    {
        /// <summary>
        /// �����б�
        /// </summary>
        private object[] m_Datas;

        public object[] Datas { get { return m_Datas; } }

        /// <summary>
        /// ��Ⱦ��
        /// </summary>
        private Type m_ItemRenderType;

        public override ListViewItemRender GetItemRenderer()
        {
            if (m_ItemRenderType == null)
                return new ListViewItemRender();

            return Activator.CreateInstance(m_ItemRenderType) as ListViewItemRender;
        }

        /// <summary>
        /// ������Ⱦ��
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void SetItemRenderer<T>()
        {
            SetItemRenderer(typeof(T));
        }

        /// <summary>
        /// ������Ⱦ��
        /// </summary>
        /// <param name="type"></param>
        public void SetItemRenderer(Type type)
        {
            m_ItemRenderType = type;
        }

        /// <summary>
        /// ��������
        /// </summary>
        public void SetData(object[] datas)
        {
            if (m_Datas == datas) return;
            m_Datas = datas;
            DataCount = m_Datas.Length;
        }
    }
}

using System;

namespace LGameFramework.GameLogic.GUI
{
    public class ListView : AbstractListView
    {
        /// <summary>
        /// 数据列表
        /// </summary>
        private object[] m_Datas;

        public object[] Datas { get { return m_Datas; } }

        /// <summary>
        /// 渲染器
        /// </summary>
        private Type m_ItemRenderType;

        public override ListViewItemRender GetItemRenderer()
        {
            if (m_ItemRenderType == null)
                return new ListViewItemRender();

            return Activator.CreateInstance(m_ItemRenderType) as ListViewItemRender;
        }

        /// <summary>
        /// 设置渲染器
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void SetItemRenderer<T>()
        {
            SetItemRenderer(typeof(T));
        }

        /// <summary>
        /// 设置渲染器
        /// </summary>
        /// <param name="type"></param>
        public void SetItemRenderer(Type type)
        {
            m_ItemRenderType = type;
        }

        /// <summary>
        /// 设置数据
        /// </summary>
        public void SetData(object[] datas)
        {
            if (m_Datas == datas) return;
            m_Datas = datas;
            DataCount = m_Datas.Length;
        }
    }
}

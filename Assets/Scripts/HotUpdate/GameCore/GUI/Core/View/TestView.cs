using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    public class TestView : GUIView
    {
        protected override string m_PrefabName => "GUI_Default_View.prefab";

        protected override GUIDefine.UILayerLevel m_LayerLevel => GUIDefine.UILayerLevel.MainUILayer;

        public override void OnEnableView()
        {
            base.OnEnableView();
        }
    }
}

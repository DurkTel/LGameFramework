using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    public class TestView2 : GUIView
    {
        protected override string m_PrefabName => "GUI_CreateRole_View.prefab";

        protected override GUIDefine.UILayerLevel m_LayerLevel => GUIDefine.UILayerLevel.MainUILayer;
    }
}

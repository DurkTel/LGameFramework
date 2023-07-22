using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.GUI
{
    public class TestView2 : GUIView
    {
        protected override string m_PrefabName => "GUI_CreateRole_View.prefab";

        protected override GUIModule.UILayerLevel m_LayerLevel => GUIModule.UILayerLevel.MainUILayer;
    }
}

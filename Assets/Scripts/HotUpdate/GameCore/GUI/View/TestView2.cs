using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.GUI
{
    public class TestView2 : GUIView
    {
        protected override string m_PrefabName => "GUI_CreateRole_View.prefab";

        protected override GMGUIManager.UILayerLevel m_LayerLevel => GMGUIManager.UILayerLevel.MainUILayer;
    }
}

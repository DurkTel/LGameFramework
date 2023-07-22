using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace GameCore.GUI
{
    public class TestView : GUIView
    {
        protected override string m_PrefabName => "GUI_Default_View.prefab";

        protected override GUIModule.UILayerLevel m_LayerLevel => GUIModule.UILayerLevel.MainUILayer;

        public override void OnEnable()
        {
            base.OnEnable();
            Text text = m_Injection["Text (Legacy)"] as Text;
            text.text = "1111";
        }
    }
}

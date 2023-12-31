using LGameFramework.GameCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace LGameFramework.GameLogic.GUI
{
    public class MainUIView : GUIView
    {
        protected override string m_PrefabName => "GUI_MainUI_View.prefab";

        public override void OnInit()
        {
            base.OnInit();

            Injection.Get<Button>("JumpBtn").onClick.AddListener(() =>
            {
                InputUtility.DispatchEvent(InputActionArgs.InputAction_Jump, InputMode.Click);
            });

            Injection.Get<Button>("EscapeBtn").onClick.AddListener(() =>
            {
                InputUtility.DispatchEvent(InputActionArgs.InputAction_Escape, InputMode.Click);
            });
        }
    }
}

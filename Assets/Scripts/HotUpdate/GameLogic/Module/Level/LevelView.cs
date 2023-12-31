using LGameFramework.GameCore.GameScene;
using LGameFramework.GameLogic.Level;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace LGameFramework.GameLogic.GUI
{
    public class LevelView : GUIView
    {
        public struct LevelData
        {
            public string Name;

            public GMLevelRegister LevelName;
        }

        public class LevelItemRenderer : ListViewItemRender
        {
            public override void Create(GameObject gameObject, ListView list)
            {
                base.Create(gameObject, list);

                Injection.Get<Button>("Button").onClick.AddListener(() =>
                {
                    LevelData data = (LevelData)GetData();

                    GameLogicEntry.GetModule<GMLevelManager>().EnterCopy(data.LevelName);
                    UIUtility.CloseView<LevelView>();
                    UIUtility.CloseView<LoginView>();
                });

            }

            public override void Refresh()
            {
                base.Refresh();
                LevelData data = (LevelData)GetData();
                
                Injection.Get<TextMeshProUGUI>("Text").text = data.Name;
            }
        }

        protected override string m_PrefabName => "GUI_Levels_View.prefab";

        private ListView m_LevelList;

        public override void OnInit()
        {
            Injection.Get<Button>("BackBtn").onClick.AddListener(() =>
            {
                Close();
            });

            m_LevelList = Injection.Get<ListView>("ListView");
            m_LevelList.SetItemRenderer<LevelItemRenderer>();

            base.OnInit();

        }

        public override void OnEnable()
        {
            base.OnEnable();
            m_LevelList.SetData(new object[]
            {
                new LevelData(){Name = "µôÂäÏÝÚå", LevelName = GMLevelRegister.Level_DropTrap},
                new LevelData(){Name = "¾´ÇëÆÚ´ý", LevelName = GMLevelRegister.Level_DropTrap},
            });
        }
    }
}

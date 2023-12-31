using LGameFramework.GameBase;
using LGameFramework.GameBase.Data;
using LGameFramework.GameBase.RangeDetection;
using LGameFramework.GameCore.Asset;
using LGameFramework.GameCore.Audio;
using LGameFramework.GameCore.Config;
using LGameFramework.GameCore.GameEntity;
using LGameFramework.GameCore.GameScene;
using LGameFramework.GameCore.Input;
using LGameFramework.GameLogic;
using LGameFramework.GameLogic.GUI;
using LGameFramework.GameLogic.Level;
using System;
using System.Diagnostics;
using UnityEngine;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace LGameFramework.GameCore
{
    /// <summary>
    /// 游戏世界层面上的事件
    /// </summary>
    public class GameWorldMessage
    {

        public static void OnInit()
        {
            UIUtility.OpenView<LoginView>();

            //初始化UI
            GameLogicEntry.GetModule<GMGUIManager>();

            //初始化副本管理
            GameLogicEntry.GetModule<GMLevelManager>();

            
        }

        public static void OninitWorldMessage()
        {
            //输入监听
            InputUtility.RegisterListener((InputActionArgs.InputAction_Look, InputMode.Direction), (p)=> 
            {
                GameFrameworkEntry.GetModule<GMOrbitCamera>().GetAxisInput(p.Direction);
            });
            InputUtility.RegisterListener((InputActionArgs.InputAction_ZoomCamera, InputMode.Direction), (p) =>
            {
                Vector2 input = p.Direction;
                float delta = input.y / 960f;
                GameFrameworkEntry.GetModule<GMOrbitCamera>().GetAxisScroll(delta);
            });

            //世界事件
            EventUtility.RegisterEvent(GMEventRegister.SCENE_LOAD_COMPLETE, OnSceneLoadCompele);



        }


        private static void OnSceneLoadCompele(object sender, GameEventArg arg)
        {
            //var first = ((CommonEventArg)arg).GetData<bool>(1);
            //if (first)
            //{
            //    EntityUtility.EnterEntity(new MainPlayerArchetype());
            //}

        }
    }
}

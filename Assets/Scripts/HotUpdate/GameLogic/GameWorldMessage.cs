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
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using static LGameFramework.GameCore.GameWorldMessage;
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
            //初始化UI
            GameLogicEntry.GetModule<GMGUIManager>();

            //初始化副本管理
            GameLogicEntry.GetModule<GMLevelManager>();

            EntityUtility.EnterEntity(GMEntityArchetype.s_TestEntityArchetype);
        }

        public static void OninitWorldMessage()
        {
            
        }


    }
}

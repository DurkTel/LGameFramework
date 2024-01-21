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
    /// ��Ϸ��������ϵ��¼�
    /// </summary>
    public class GameWorldMessage
    {

        public static void OnInit()
        {
            //��ʼ��UI
            GameLogicEntry.GetModule<GMGUIManager>();

            //��ʼ����������
            GameLogicEntry.GetModule<GMLevelManager>();

            EntityUtility.EnterEntity(GMEntityArchetype.s_TestEntityArchetype);
        }

        public static void OninitWorldMessage()
        {
            
        }


    }
}

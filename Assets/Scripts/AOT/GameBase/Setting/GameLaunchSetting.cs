using PlasticGui.WorkspaceWindow;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase
{
    [CreateAssetMenu(fileName = "Launch Setting", menuName = "LGameFramework/Launch Setting")]
    public class GameLaunchSetting : GameSetting<GameLaunchSetting>
    {
        /// <summary>
        /// 游戏帧数
        /// </summary>
        public int frameRate = 60;

        /// <summary>
        /// 游戏倍速
        /// </summary>
        public float gameSpeed = 1f;

        /// <summary>
        /// 后台运行
        /// </summary>
        public bool runInBackground = true;

        /// <summary>
        /// 永不休眠
        /// </summary>
        public bool neverSleep = true;

        /// <summary>
        /// 资源加载模式
        /// </summary>
        public AssetLoadMode assetLoadMode = AssetLoadMode.AssetBundle;

        public enum AssetLoadMode
        { 
            Editor,
            AssetBundle
        }
    }
}

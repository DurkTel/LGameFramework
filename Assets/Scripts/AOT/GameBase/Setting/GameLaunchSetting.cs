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
        /// ��Ϸ֡��
        /// </summary>
        public int frameRate = 60;

        /// <summary>
        /// ��Ϸ����
        /// </summary>
        public float gameSpeed = 1f;

        /// <summary>
        /// ��̨����
        /// </summary>
        public bool runInBackground = true;

        /// <summary>
        /// ��������
        /// </summary>
        public bool neverSleep = true;

        /// <summary>
        /// ��Դ����ģʽ
        /// </summary>
        public AssetLoadMode assetLoadMode = AssetLoadMode.AssetBundle;

        public enum AssetLoadMode
        { 
            Editor,
            AssetBundle
        }
    }
}

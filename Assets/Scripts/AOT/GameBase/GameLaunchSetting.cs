using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase
{
    [CreateAssetMenu(fileName = "Launch Settings", menuName = "LGameFramework/Launch Settings")]
    public class GameLaunchSetting : ScriptableObject
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

using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace LGameFramework.GameCore.GameScene
{
    public class SceneUtility : ModuleUtility<GMSceneManager>
    {
        /// <summary>
        /// 切换场景
        /// </summary>
        /// <param name="name"></param>
        /// <param name="mode"></param>
        public static void SwitchScene(string name = "", LoadSceneMode mode = LoadSceneMode.Single)
        {
            name = string.IsNullOrEmpty(name) ? "testScene" : name;
            Instance.SwitchScene(name, mode);   
        }

        /// <summary>
        /// 获取当前场景
        /// </summary>
        /// <returns></returns>
        public static GameScene GetCurrentScene()
        {
            return Instance.CurrentScene;
        }
    }
}

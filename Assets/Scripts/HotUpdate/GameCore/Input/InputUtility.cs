using LGameFramework.GameBase;
using LGameFramework.GameCore.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.InputSystem;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace LGameFramework.GameCore
{
    public class InputUtility : ModuleUtility<GMInputManager>
    {
        /// <summary>
        /// 注册按键监听
        /// </summary>
        /// <param name="input">输入元组</param>
        /// <param name="action">回调方法</param>
        public static void RegisterListener((string, InputMode) input, UnityAction<InputActionArgs> action)
        {
            Instance.RegisterListener(input, action);
        }

        /// <summary>
        /// 移除按键监听
        /// </summary>
        /// <param name="input">输入元组</param>
        /// <param name="action">回调方法</param>
        /// <returns>是否移除成功</returns>
        public static bool UnRegisterListener((string, InputMode) input, UnityAction<InputActionArgs> action)
        {
            return Instance.UnRegisterListener(input, action);
        }

        /// <summary>
        /// 外部调用按键
        /// </summary>
        /// <param name="name"></param>
        /// <param name="behaviour"></param>
        /// <param name="action"></param>
        public static void DispatchEvent(string name, InputMode behaviour, InputAction action = null)
        {
            Instance.DispatchEvent(name, behaviour, action);
        }
    }
}

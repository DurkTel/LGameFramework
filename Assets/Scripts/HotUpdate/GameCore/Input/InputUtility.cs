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
        /// ע�ᰴ������
        /// </summary>
        /// <param name="input">����Ԫ��</param>
        /// <param name="action">�ص�����</param>
        public static void RegisterListener((string, InputMode) input, UnityAction<InputActionArgs> action)
        {
            Instance.RegisterListener(input, action);
        }

        /// <summary>
        /// �Ƴ���������
        /// </summary>
        /// <param name="input">����Ԫ��</param>
        /// <param name="action">�ص�����</param>
        /// <returns>�Ƿ��Ƴ��ɹ�</returns>
        public static bool UnRegisterListener((string, InputMode) input, UnityAction<InputActionArgs> action)
        {
            return Instance.UnRegisterListener(input, action);
        }

        /// <summary>
        /// �ⲿ���ð���
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

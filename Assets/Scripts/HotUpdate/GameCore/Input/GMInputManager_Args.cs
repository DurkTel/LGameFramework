using LGameFramework.GameBase.Pool;
using UnityEngine;
using UnityEngine.InputSystem;

namespace LGameFramework.GameCore.Input
{
    public partial class GMInputManager 
    {
        /// <summary>
        /// ������Ϊ����
        /// </summary>
        public class InputActionArgs : GameEventArg
        {
            private string m_ActionName;
            public string ActionName { get { return m_ActionName; } }

            private InputAction m_InputAction;
            public InputAction InputAction { get { return m_InputAction; } }

            private InputMode m_InputMode;
            public InputMode InputMode { get { return m_InputMode; } }

            public Vector2 Direction
            {
                get
                {
                    if (m_InputMode == InputMode.Direction)
                        return m_InputAction.ReadValue<Vector2>();

                    return Vector2.zero;
                }
            }

            public static InputActionArgs Get(string actionName, InputMode inputBehaviour, InputAction inputAction)
            {
                InputActionArgs args = Pool<InputActionArgs>.Get();
                args.m_ActionName = actionName;
                args.m_InputAction = inputAction;
                args.m_InputMode = inputBehaviour;
                return args;
            }

            public override string ToString()
            {
                if (m_InputMode == InputMode.Direction)
                    return string.Format("��������{0}��������Ϊ{1}��������ֵ{2}", ActionName, InputMode, Direction);

                return string.Format("��������{0}��������Ϊ{1}", ActionName, InputMode);
            }

            public override void Dispose()
            {
                m_ActionName = null;
                m_InputAction = null;
                Pool<InputActionArgs>.Release(this);
            }
        }
    }
}

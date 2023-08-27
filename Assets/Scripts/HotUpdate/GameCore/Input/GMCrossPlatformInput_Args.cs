using LGameFramework.GameBase.Pool;
using UnityEngine;
using UnityEngine.InputSystem;

namespace LGameFramework.GameCore.Input
{
    public partial class GMCrossPlatformInput 
    {
        public class InputActionArgs : GameEventArg
        {
            private string m_ActionName;
            public string ActionName { get { return m_ActionName; } }

            private InputAction m_InputAction;
            public InputAction InputAction { get { return m_InputAction; } }

            private InputBehaviour m_InputBehaviour;
            public InputBehaviour InputBehaviour { get { return m_InputBehaviour; } }

            public Vector2 Direction
            {
                get
                {
                    if (m_InputBehaviour == InputBehaviour.Direction)
                        return m_InputAction.ReadValue<Vector2>();

                    return Vector2.zero;
                }
            }

            public static InputActionArgs Get(string actionName, InputBehaviour inputBehaviour, InputAction inputAction)
            {
                InputActionArgs args = Pool<InputActionArgs>.Get();
                args.m_ActionName = actionName;
                args.m_InputAction = inputAction;
                args.m_InputBehaviour = inputBehaviour;
                return args;
            }

            public override string ToString()
            {
                if (m_InputBehaviour == InputBehaviour.Direction)
                    return string.Format("按键名称{0}，按键行为{1}，按键数值{2}", ActionName, InputBehaviour, Direction);

                return string.Format("按键名称{0}，按键行为{1}", ActionName, InputBehaviour);
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

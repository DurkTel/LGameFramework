using LGameFramework.GameBase;
using UnityEngine;
using UnityEngine.InputSystem;

namespace LGameFramework.GameCore.Input
{
    public partial class GMInputManager 
    {
        /// <summary>
        /// 输入行为参数
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
                InputActionArgs args = Pool.Get<InputActionArgs>();
                args.m_ActionName = actionName;
                args.m_InputAction = inputAction;
                args.m_InputMode = inputBehaviour;
                return args;
            }

            public override string ToString()
            {
                if (m_InputMode == InputMode.Direction)
                    return string.Format("按键名称{0}，按键行为{1}，按键数值{2}", ActionName, InputMode, Direction);

                return string.Format("按键名称{0}，按键行为{1}", ActionName, InputMode);
            }

            public override void Dispose()
            {
                m_ActionName = null;
                m_InputAction = null;
                Pool.Release(this);
            }

            public const string InputAction_Run         = "Run";
            public const string InputAction_Look        = "Look";
            public const string InputAction_ZoomCamera  = "ZoomCamera";
            public const string InputAction_Walk        = "Walk";
            public const string InputAction_Jump        = "Jump";
            public const string InputAction_Lock        = "Lock";
            public const string InputAction_Escape      = "Escape";
            public const string InputAction_Weapon      = "Weapon";
            public const string InputAction_LightAttack = "LightAttack";
            public const string InputAction_HeavyAttack = "HeavyAttack";
            public const string InputAction_AttackEx    = "AttackEx";
            public const string InputAction_Revenges    = "Revenges";
            public const string InputAction_Move        = "Move";
            public const string InputAction_Interact    = "Interact";
            public const string InputAction_Discard     = "Discard";
        }
    }
}

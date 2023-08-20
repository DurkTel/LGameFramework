using UnityEngine.InputSystem;

namespace LGameFramework.GameCore.Input
{
    /// <summary>
    /// 跨平台输入监听
    /// </summary>
    public partial class GMCrossPlatformInput
    {
        /// <summary>
        /// 按键行为
        /// </summary>
        public class ButtonBehaviour
        {
            private readonly string m_ActionName;
            public string ActionName { get { return m_ActionName; } }

            private readonly InputAction m_InputAction;
            public InputAction inputAction { get { return m_InputAction; } }

            public double startTime;
            public bool OnPressed { get { return inputAction.phase == InputActionPhase.Started; } }
            public bool OnRelease { get { return inputAction.phase == InputActionPhase.Performed; } }
            public bool OnMulti { get; set; }
            public bool OnHold { get; set; }

            public ButtonBehaviour(string actionName, InputAction inputAction)
            {
                m_ActionName = actionName;
                m_InputAction = inputAction;
            }
        }

        public enum InputBehaviour
        {
            None,
            Click,
            DoubleClick,
            Hold,
            Release,
            Direction
        }
    }
}

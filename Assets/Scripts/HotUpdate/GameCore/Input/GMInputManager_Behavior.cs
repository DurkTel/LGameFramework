using System.Linq;
using UnityEditor;
using UnityEngine;
using UnityEngine.InputSystem;

namespace LGameFramework.GameCore.Input
{
    public partial class GMInputManager
    {
        /// <summary>
        /// ������Ϊ
        /// </summary>
        public class InputBehaviour
        {
            /// <summary>
            /// ��Ϊ����
            /// </summary>
            private readonly string m_ActionName;
            public string ActionName { get { return m_ActionName; } }
            /// <summary>
            /// ������Ϊ��
            /// </summary>
            private readonly InputAction m_InputAction;
            public InputAction InputAction { get { return m_InputAction; } }
            /// <summary>
            /// ������Id
            /// </summary>
            private string[] m_BindingOptionValues;
            public string[] BindingOptionValues { get { return m_BindingOptionValues; } }
            /// <summary>
            /// ����������
            /// </summary>
            private int m_BindCount;
            public int BindCount { get { return m_BindCount; } }

            public double startTime;
            public bool OnPressed { get { return InputAction.phase == InputActionPhase.Started; } }
            public bool OnRelease { get { return InputAction.phase == InputActionPhase.Performed; } }
            public bool OnMulti { get; set; }
            public bool OnHold { get; set; }

            public InputBehaviour(string actionName, InputAction inputAction)
            {
                m_ActionName = actionName;
                m_InputAction = inputAction;

                var bindings = m_InputAction.bindings;
                m_BindCount = bindings.Count;
                m_BindingOptionValues = new string[m_BindCount];

                for (var i = 0; i < m_BindCount; ++i)
                {
                    var binding = bindings[i];
                    var bindingId = binding.id.ToString();
                    m_BindingOptionValues[i] = bindingId;
                }
            }
        }

        public enum InputMode
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

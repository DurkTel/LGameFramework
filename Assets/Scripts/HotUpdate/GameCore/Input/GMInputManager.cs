using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Interactions;
using UnityEngine.InputSystem.Utilities;

namespace LGameFramework.GameCore.Input
{
    /// <summary>
    /// 跨平台输入系统
    /// </summary>
    public partial class GMInputManager : FrameworkModule
    {
        private InputControls m_InputActions;
        public InputControls InputActions { get { return m_InputActions; } }
        /// <summary>
        /// 双击的间隔时间
        /// </summary>
        public const double multiTime = 0.2f;
        /// <summary>
        /// 记录按钮行为
        /// </summary>
        public Dictionary<string, InputBehaviour> inputBehaviour;
        /// <summary>
        /// 广播输入行为
        /// </summary>
        public UnityEvent<InputActionArgs> inputActionEvent;
        /// <summary>
        /// 输入方法注册
        /// </summary>
        private Dictionary<(string, InputMode), UnityAction<InputActionArgs>> m_InputRegister;

        public override int Priority => 1;

        public override void OnInit()
        {
            m_InputActions = new InputControls();

            inputBehaviour = new Dictionary<string, InputBehaviour>();
            inputActionEvent = new UnityEvent<InputActionArgs>();
            OnEnable();

            LoadInputRebinds();
            ReadOnlyArray<InputActionMap> actions = InputActions.asset.actionMaps;
            foreach (var actionMap in actions)
            {
                foreach (var action in actionMap)
                {
                    action.started += InputHandle;
                    action.performed += InputHandle;
                    action.canceled += InputHandle;
                    if (!inputBehaviour.ContainsKey(action.name))
                        inputBehaviour.Add(action.name, new InputBehaviour(action.name, action));
                }
            }
        }

        public override void Update(float deltaTime, float unscaledTime)
        {
            
        }

        public override void OnEnable()
        {
            InputActions.Enable();
        }

        public override void OnDisable()
        {
            InputActions.Disable();
        }

        private void InputHandle(InputAction.CallbackContext context)
        {
            if (context.action.type == InputActionType.Value)
            {
                DispatchEvent(context.action.name, InputMode.Direction, context.action);
                return;
            }

            inputBehaviour[context.action.name].OnMulti = false;

            if (context.phase == InputActionPhase.Started)
            {
                DispatchEvent(context.action.name, InputMode.Click, context.action);
                //需求要按下算一次点击，自带的双击判断是松开算一次点击，自己模拟一下
                if (context.startTime - inputBehaviour[context.action.name].startTime <= multiTime)
                {
                    inputBehaviour[context.action.name].OnMulti = true;
                    DispatchEvent(context.action.name, InputMode.DoubleClick, context.action);
                }
                inputBehaviour[context.action.name].startTime = context.startTime;
            }
            else if (context.phase == InputActionPhase.Performed)
            {
                if (context.interaction is HoldInteraction)
                {
                    DispatchEvent(context.action.name, InputMode.Hold, context.action);
                }
            }
            else if (context.phase == InputActionPhase.Canceled)
            {
                DispatchEvent(context.action.name, InputMode.Release, context.action);
            }

        }

        internal void DispatchEvent(string name, InputMode behaviour, InputAction action)
        {
            if (m_InputRegister != null && m_InputRegister.TryGetValue((name, behaviour), out UnityAction<InputActionArgs> @event))
            {
                InputActionArgs args = InputActionArgs.Get(name, behaviour, action);
                @event?.Invoke(args);
            }
        }

        internal void RegisterListener((string, InputMode) input, UnityAction<InputActionArgs> action)
        {
            m_InputRegister ??= new Dictionary<(string, InputMode), UnityAction<InputActionArgs>>();
            m_InputRegister[input] = action;
        }

        internal bool UnRegisterListener((string, InputMode) input, UnityAction<InputActionArgs> action)
        {
            if (m_InputRegister.ContainsKey(input))
            {
                m_InputRegister.Remove(input);
                return true;
            }

            return false;
        }

    }
}
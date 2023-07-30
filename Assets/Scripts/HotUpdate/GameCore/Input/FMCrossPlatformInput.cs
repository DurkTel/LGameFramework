using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Interactions;
using UnityEngine.InputSystem.Utilities;
using UnityEngine.Events;
using GameCore;

namespace LGameFramework.GameCore.Input
{
    /// <summary>
    /// 跨平台输入监听
    /// </summary>
    public partial class FMCrossPlatformInput : FrameworkModule
    {
        private InputControls m_InputActions;
        public InputControls InputActions { get { return m_InputActions; } }

        private FMEventManager m_FMEventManager;
        /// <summary>
        /// 双击的间隔时间
        /// </summary>
        public double multiTime = 0.2f;
        /// <summary>
        /// 记录按钮行为
        /// </summary>
        public Dictionary<string, ButtonBehaviour> buttonBehaviour = new Dictionary<string, ButtonBehaviour>();

        internal override int Priority => 1;

        internal override GameObject GameObject { get; set; }
        internal override Transform Transform { get; set; }

        internal override void OnInit()
        {
            m_InputActions = new InputControls();
            InitGameInput();
            OnEnable();
        }

        internal override void Update(float deltaTime, float unscaledTime)
        {
            
        }

        internal override void OnEnable()
        {
            m_FMEventManager ??= GameEntry.GetModule<FMEventManager>(); 
            InputActions.Enable();
        }

        internal override void OnDisable()
        {
            InputActions.Disable();
        }

        public void InitGameInput()
        {
            ReadOnlyArray<InputActionMap> actions = InputActions.asset.actionMaps;
            foreach (var actionMap in actions)
            {
                foreach (var action in actionMap)
                {
                    action.started += InputHandle;
                    action.performed += InputHandle;
                    action.canceled += InputHandle;
                    if (!buttonBehaviour.ContainsKey(action.name))
                        buttonBehaviour.Add(action.name, new ButtonBehaviour(action.name, action));
                }
            }
        }

        private void InputHandle(InputAction.CallbackContext context)
        {
            if (context.action.type == InputActionType.Value)
            { 
                DispatchEvent(context.action.name, InputBehaviour.Direction, context.action);
                return;
            }

            buttonBehaviour[context.action.name].OnMulti = false;

            if (context.phase == InputActionPhase.Started)
            {
                DispatchEvent(context.action.name, InputBehaviour.Click, context.action);
                //需求要按下算一次点击，自带的双击判断是松开算一次点击，自己模拟一下
                if (context.startTime - buttonBehaviour[context.action.name].startTime <= multiTime)
                {
                    buttonBehaviour[context.action.name].OnMulti = true;
                    DispatchEvent(context.action.name, InputBehaviour.DoubleClick, context.action);
                }
                buttonBehaviour[context.action.name].startTime = context.startTime;
            }
            else if (context.phase == InputActionPhase.Performed)
            {
                if (context.interaction is HoldInteraction)
                {
                    DispatchEvent(context.action.name, InputBehaviour.Hold, context.action);
                }
            }
            else if (context.phase == InputActionPhase.Canceled)
            {
                DispatchEvent(context.action.name, InputBehaviour.Release, context.action);
            }

        }

        private void DispatchEvent(string name, InputBehaviour behaviour, InputAction action)
        {
            InputActionArgs args = InputActionArgs.Get(name, behaviour, action);
            m_FMEventManager.DispatchImmediately(FMEventRegister.INPUT_DISPATCH_HANDLE_BUTTON, this, args);
        }
    }
}
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was auto-generated by com.unity.inputsystem:InputActionCodeGenerator
//     version 1.5.1
//     from Assets/Scripts/HotUpdate/GameCore/Input/InputControls.inputactions
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Utilities;

namespace LGameFramework.GameCore.Input
{
    public partial class @InputControls: IInputActionCollection2, IDisposable
    {
        public InputActionAsset asset { get; }
        public @InputControls()
        {
            asset = InputActionAsset.FromJson(@"{
    ""name"": ""InputControls"",
    ""maps"": [
        {
            ""name"": ""GamePlay"",
            ""id"": ""5c899c63-4842-40ae-a05c-6eb2682b9bf1"",
            ""actions"": [
                {
                    ""name"": ""Run"",
                    ""type"": ""Button"",
                    ""id"": ""b9880d27-3695-4adb-b479-1f59b02e09e5"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": ""Hold"",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""Look"",
                    ""type"": ""Value"",
                    ""id"": ""257e1551-9249-4c6b-b96d-f5b38dd94811"",
                    ""expectedControlType"": ""Vector2"",
                    ""processors"": ""StickDeadzone"",
                    ""interactions"": """",
                    ""initialStateCheck"": true
                },
                {
                    ""name"": ""Walk"",
                    ""type"": ""Button"",
                    ""id"": ""dd78251d-cdec-499d-8c5a-25e92a8acbae"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": ""Hold"",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""Jump"",
                    ""type"": ""Button"",
                    ""id"": ""e52d5f6f-3afd-448d-9d5c-e29b608857ec"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": ""Hold"",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""Lock"",
                    ""type"": ""Button"",
                    ""id"": ""940a6f85-6abf-4274-a3db-5e8dff2b3eb5"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": ""Hold"",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""Escape"",
                    ""type"": ""Button"",
                    ""id"": ""0bb9c9c0-bfd1-4091-a045-353b6ddfdeb3"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": ""Hold"",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""Weapon"",
                    ""type"": ""Button"",
                    ""id"": ""900be26c-70ff-46e2-a08c-faf8477c39d0"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""LightAttack"",
                    ""type"": ""Button"",
                    ""id"": ""4b99525c-bb01-4a70-833c-aee3535d76b8"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": ""Hold"",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""HeavyAttack"",
                    ""type"": ""Button"",
                    ""id"": ""2d2d38d2-539d-497d-829a-c4b2406811be"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": ""Hold"",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""AttackEx"",
                    ""type"": ""Button"",
                    ""id"": ""60b8f3ba-a340-4cce-91ed-b564dc31a363"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""Revenges"",
                    ""type"": ""Button"",
                    ""id"": ""70ba7767-ac93-4a12-9b3b-e65a2ce018eb"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": ""Hold(duration=0.15)"",
                    ""initialStateCheck"": false
                },
                {
                    ""name"": ""Move"",
                    ""type"": ""Value"",
                    ""id"": ""5da8244d-3ec8-4798-a194-035b14a86ba7"",
                    ""expectedControlType"": ""Vector2"",
                    ""processors"": ""StickDeadzone"",
                    ""interactions"": """",
                    ""initialStateCheck"": true
                }
            ],
            ""bindings"": [
                {
                    ""name"": """",
                    ""id"": ""fa3e4364-c2bb-40b4-926a-3eeaca14fcab"",
                    ""path"": ""<Keyboard>/h"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Run"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""354d1f1d-e00e-4a4b-aa7e-e195c4b691ba"",
                    ""path"": ""<Gamepad>/leftTrigger"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Run"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""3f5412a2-278d-43ac-a3a3-31cb80b1f0ce"",
                    ""path"": ""<Mouse>/delta"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Look"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""267021a9-1885-46ba-becc-ebc5ecafbf65"",
                    ""path"": ""<Gamepad>/rightStick"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Look"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""b0a7382b-7057-41d1-8d33-0ebcd87f3e10"",
                    ""path"": ""<Keyboard>/tab"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Walk"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""499214c4-e673-4a4c-bff2-b58488f0f4ec"",
                    ""path"": ""<Keyboard>/space"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Jump"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""dda0d0b3-7565-48d1-a95a-c4eb24f9016a"",
                    ""path"": ""<Gamepad>/buttonSouth"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Jump"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""f96431a8-df15-41b8-8138-792fd053af34"",
                    ""path"": ""<Keyboard>/leftShift"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Lock"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""1afde551-1a58-4370-b65a-2037400ed28e"",
                    ""path"": ""<Keyboard>/x"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Escape"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""73e13ad6-f8b0-4fd6-a887-4c6df176f405"",
                    ""path"": ""<Keyboard>/e"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Weapon"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""9723dcbe-a984-4981-94d6-ad829af1c242"",
                    ""path"": ""<Mouse>/leftButton"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""LightAttack"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""6a16cb86-e4b6-4b57-8191-5ad9503c5183"",
                    ""path"": ""<Mouse>/rightButton"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""HeavyAttack"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""127dd225-9b4a-4394-924a-b13b4822c2ca"",
                    ""path"": ""<Keyboard>/f"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""AttackEx"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""7ec8804f-04fe-449b-92d4-5bbb9e076ad5"",
                    ""path"": ""<Keyboard>/q"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Revenges"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""b697bd3d-5393-48a1-8c1d-b0ea38144ccb"",
                    ""path"": ""<AndroidJoystick>/stick"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""2D Vector"",
                    ""id"": ""0f6633f0-d8ca-4292-a96d-42ce865c7aaa"",
                    ""path"": ""2DVector"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Move"",
                    ""isComposite"": true,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""up"",
                    ""id"": ""058eb549-d964-4cfa-a109-c68bcf59b1b5"",
                    ""path"": ""<Keyboard>/w"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""down"",
                    ""id"": ""a36515f8-f733-4292-9e9d-9cd2b9209766"",
                    ""path"": ""<Keyboard>/s"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""left"",
                    ""id"": ""68903ec1-3e2f-4685-ade8-43e1a52ec8b0"",
                    ""path"": ""<NimbusGamepadHid>/buttonSouth"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""right"",
                    ""id"": ""81385e21-4048-4299-bb92-e03952bc76f9"",
                    ""path"": ""<Keyboard>/d"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                }
            ]
        }
    ],
    ""controlSchemes"": []
}");
            // GamePlay
            m_GamePlay = asset.FindActionMap("GamePlay", throwIfNotFound: true);
            m_GamePlay_Run = m_GamePlay.FindAction("Run", throwIfNotFound: true);
            m_GamePlay_Look = m_GamePlay.FindAction("Look", throwIfNotFound: true);
            m_GamePlay_Walk = m_GamePlay.FindAction("Walk", throwIfNotFound: true);
            m_GamePlay_Jump = m_GamePlay.FindAction("Jump", throwIfNotFound: true);
            m_GamePlay_Lock = m_GamePlay.FindAction("Lock", throwIfNotFound: true);
            m_GamePlay_Escape = m_GamePlay.FindAction("Escape", throwIfNotFound: true);
            m_GamePlay_Weapon = m_GamePlay.FindAction("Weapon", throwIfNotFound: true);
            m_GamePlay_LightAttack = m_GamePlay.FindAction("LightAttack", throwIfNotFound: true);
            m_GamePlay_HeavyAttack = m_GamePlay.FindAction("HeavyAttack", throwIfNotFound: true);
            m_GamePlay_AttackEx = m_GamePlay.FindAction("AttackEx", throwIfNotFound: true);
            m_GamePlay_Revenges = m_GamePlay.FindAction("Revenges", throwIfNotFound: true);
            m_GamePlay_Move = m_GamePlay.FindAction("Move", throwIfNotFound: true);
        }

        public void Dispose()
        {
            UnityEngine.Object.Destroy(asset);
        }

        public InputBinding? bindingMask
        {
            get => asset.bindingMask;
            set => asset.bindingMask = value;
        }

        public ReadOnlyArray<InputDevice>? devices
        {
            get => asset.devices;
            set => asset.devices = value;
        }

        public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;

        public bool Contains(InputAction action)
        {
            return asset.Contains(action);
        }

        public IEnumerator<InputAction> GetEnumerator()
        {
            return asset.GetEnumerator();
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return GetEnumerator();
        }

        public void Enable()
        {
            asset.Enable();
        }

        public void Disable()
        {
            asset.Disable();
        }

        public IEnumerable<InputBinding> bindings => asset.bindings;

        public InputAction FindAction(string actionNameOrId, bool throwIfNotFound = false)
        {
            return asset.FindAction(actionNameOrId, throwIfNotFound);
        }

        public int FindBinding(InputBinding bindingMask, out InputAction action)
        {
            return asset.FindBinding(bindingMask, out action);
        }

        // GamePlay
        private readonly InputActionMap m_GamePlay;
        private List<IGamePlayActions> m_GamePlayActionsCallbackInterfaces = new List<IGamePlayActions>();
        private readonly InputAction m_GamePlay_Run;
        private readonly InputAction m_GamePlay_Look;
        private readonly InputAction m_GamePlay_Walk;
        private readonly InputAction m_GamePlay_Jump;
        private readonly InputAction m_GamePlay_Lock;
        private readonly InputAction m_GamePlay_Escape;
        private readonly InputAction m_GamePlay_Weapon;
        private readonly InputAction m_GamePlay_LightAttack;
        private readonly InputAction m_GamePlay_HeavyAttack;
        private readonly InputAction m_GamePlay_AttackEx;
        private readonly InputAction m_GamePlay_Revenges;
        private readonly InputAction m_GamePlay_Move;
        public struct GamePlayActions
        {
            private @InputControls m_Wrapper;
            public GamePlayActions(@InputControls wrapper) { m_Wrapper = wrapper; }
            public InputAction @Run => m_Wrapper.m_GamePlay_Run;
            public InputAction @Look => m_Wrapper.m_GamePlay_Look;
            public InputAction @Walk => m_Wrapper.m_GamePlay_Walk;
            public InputAction @Jump => m_Wrapper.m_GamePlay_Jump;
            public InputAction @Lock => m_Wrapper.m_GamePlay_Lock;
            public InputAction @Escape => m_Wrapper.m_GamePlay_Escape;
            public InputAction @Weapon => m_Wrapper.m_GamePlay_Weapon;
            public InputAction @LightAttack => m_Wrapper.m_GamePlay_LightAttack;
            public InputAction @HeavyAttack => m_Wrapper.m_GamePlay_HeavyAttack;
            public InputAction @AttackEx => m_Wrapper.m_GamePlay_AttackEx;
            public InputAction @Revenges => m_Wrapper.m_GamePlay_Revenges;
            public InputAction @Move => m_Wrapper.m_GamePlay_Move;
            public InputActionMap Get() { return m_Wrapper.m_GamePlay; }
            public void Enable() { Get().Enable(); }
            public void Disable() { Get().Disable(); }
            public bool enabled => Get().enabled;
            public static implicit operator InputActionMap(GamePlayActions set) { return set.Get(); }
            public void AddCallbacks(IGamePlayActions instance)
            {
                if (instance == null || m_Wrapper.m_GamePlayActionsCallbackInterfaces.Contains(instance)) return;
                m_Wrapper.m_GamePlayActionsCallbackInterfaces.Add(instance);
                @Run.started += instance.OnRun;
                @Run.performed += instance.OnRun;
                @Run.canceled += instance.OnRun;
                @Look.started += instance.OnLook;
                @Look.performed += instance.OnLook;
                @Look.canceled += instance.OnLook;
                @Walk.started += instance.OnWalk;
                @Walk.performed += instance.OnWalk;
                @Walk.canceled += instance.OnWalk;
                @Jump.started += instance.OnJump;
                @Jump.performed += instance.OnJump;
                @Jump.canceled += instance.OnJump;
                @Lock.started += instance.OnLock;
                @Lock.performed += instance.OnLock;
                @Lock.canceled += instance.OnLock;
                @Escape.started += instance.OnEscape;
                @Escape.performed += instance.OnEscape;
                @Escape.canceled += instance.OnEscape;
                @Weapon.started += instance.OnWeapon;
                @Weapon.performed += instance.OnWeapon;
                @Weapon.canceled += instance.OnWeapon;
                @LightAttack.started += instance.OnLightAttack;
                @LightAttack.performed += instance.OnLightAttack;
                @LightAttack.canceled += instance.OnLightAttack;
                @HeavyAttack.started += instance.OnHeavyAttack;
                @HeavyAttack.performed += instance.OnHeavyAttack;
                @HeavyAttack.canceled += instance.OnHeavyAttack;
                @AttackEx.started += instance.OnAttackEx;
                @AttackEx.performed += instance.OnAttackEx;
                @AttackEx.canceled += instance.OnAttackEx;
                @Revenges.started += instance.OnRevenges;
                @Revenges.performed += instance.OnRevenges;
                @Revenges.canceled += instance.OnRevenges;
                @Move.started += instance.OnMove;
                @Move.performed += instance.OnMove;
                @Move.canceled += instance.OnMove;
            }

            private void UnregisterCallbacks(IGamePlayActions instance)
            {
                @Run.started -= instance.OnRun;
                @Run.performed -= instance.OnRun;
                @Run.canceled -= instance.OnRun;
                @Look.started -= instance.OnLook;
                @Look.performed -= instance.OnLook;
                @Look.canceled -= instance.OnLook;
                @Walk.started -= instance.OnWalk;
                @Walk.performed -= instance.OnWalk;
                @Walk.canceled -= instance.OnWalk;
                @Jump.started -= instance.OnJump;
                @Jump.performed -= instance.OnJump;
                @Jump.canceled -= instance.OnJump;
                @Lock.started -= instance.OnLock;
                @Lock.performed -= instance.OnLock;
                @Lock.canceled -= instance.OnLock;
                @Escape.started -= instance.OnEscape;
                @Escape.performed -= instance.OnEscape;
                @Escape.canceled -= instance.OnEscape;
                @Weapon.started -= instance.OnWeapon;
                @Weapon.performed -= instance.OnWeapon;
                @Weapon.canceled -= instance.OnWeapon;
                @LightAttack.started -= instance.OnLightAttack;
                @LightAttack.performed -= instance.OnLightAttack;
                @LightAttack.canceled -= instance.OnLightAttack;
                @HeavyAttack.started -= instance.OnHeavyAttack;
                @HeavyAttack.performed -= instance.OnHeavyAttack;
                @HeavyAttack.canceled -= instance.OnHeavyAttack;
                @AttackEx.started -= instance.OnAttackEx;
                @AttackEx.performed -= instance.OnAttackEx;
                @AttackEx.canceled -= instance.OnAttackEx;
                @Revenges.started -= instance.OnRevenges;
                @Revenges.performed -= instance.OnRevenges;
                @Revenges.canceled -= instance.OnRevenges;
                @Move.started -= instance.OnMove;
                @Move.performed -= instance.OnMove;
                @Move.canceled -= instance.OnMove;
            }

            public void RemoveCallbacks(IGamePlayActions instance)
            {
                if (m_Wrapper.m_GamePlayActionsCallbackInterfaces.Remove(instance))
                    UnregisterCallbacks(instance);
            }

            public void SetCallbacks(IGamePlayActions instance)
            {
                foreach (var item in m_Wrapper.m_GamePlayActionsCallbackInterfaces)
                    UnregisterCallbacks(item);
                m_Wrapper.m_GamePlayActionsCallbackInterfaces.Clear();
                AddCallbacks(instance);
            }
        }
        public GamePlayActions @GamePlay => new GamePlayActions(this);
        public interface IGamePlayActions
        {
            void OnRun(InputAction.CallbackContext context);
            void OnLook(InputAction.CallbackContext context);
            void OnWalk(InputAction.CallbackContext context);
            void OnJump(InputAction.CallbackContext context);
            void OnLock(InputAction.CallbackContext context);
            void OnEscape(InputAction.CallbackContext context);
            void OnWeapon(InputAction.CallbackContext context);
            void OnLightAttack(InputAction.CallbackContext context);
            void OnHeavyAttack(InputAction.CallbackContext context);
            void OnAttackEx(InputAction.CallbackContext context);
            void OnRevenges(InputAction.CallbackContext context);
            void OnMove(InputAction.CallbackContext context);
        }
    }
}
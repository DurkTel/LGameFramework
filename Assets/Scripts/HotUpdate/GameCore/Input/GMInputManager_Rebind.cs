using System;
using UnityEngine;
using UnityEngine.InputSystem;

namespace LGameFramework.GameCore.Input
{
    public partial class GMInputManager
    {
        /// <summary>
        /// ���°󶨲���
        /// </summary>
        private InputActionRebindingExtensions.RebindingOperation m_RebindOperation;

        /// <summary>
        /// ��ʼ������
        /// </summary>
        public void StartInteractiveRebind(InputAction inputAction, string bindingId)
        {
            if (!GetActionAndBinding(inputAction, bindingId, out var bindingIndex))
                return;

            InternalInteractiveRebind(inputAction, bindingIndex);
        }

        /// <summary>
        /// ��ʼ������
        /// </summary>
        public void StartInteractiveRebind(InputAction inputAction, int bindingIndex)
        {
            InternalInteractiveRebind(inputAction, bindingIndex);
        }

        private void InternalInteractiveRebind(InputAction inputAction, int bindingIndex)
        {
            //������Ǹ��ϵģ���Ҫ�������°�ÿ������
            if (inputAction.bindings[bindingIndex].isComposite)
            {
                var firstPartIndex = bindingIndex + 1;
                if (firstPartIndex < inputAction.bindings.Count && inputAction.bindings[firstPartIndex].isPartOfComposite)
                    PerformInteractiveRebind(inputAction, firstPartIndex, allCompositeParts: true);
            }
            else
            {
                PerformInteractiveRebind(inputAction, bindingIndex);
            }
        }


        /// <summary>
        /// ���õ�Ĭ��
        /// </summary>
        /// <param name="action"></param>
        /// <param name="bindIndex"></param>
        public void ResetToDefault(InputAction action, string bindIndex)
        {
            if (!GetActionAndBinding(action, bindIndex, out var bindingIndex))
                return;

            InternalResetToDefault(action, bindingIndex);
        }

        /// <summary>
        /// ���õ�Ĭ��
        /// </summary>
        /// <param name="action"></param>
        /// <param name="bindingIndex"></param>
        public void ResetToDefault(InputAction action, int bindingIndex)
        {
            InternalResetToDefault(action, bindingIndex);
        }

        private void InternalResetToDefault(InputAction action, int bindingIndex)
        {
            if (action.bindings[bindingIndex].isComposite)
            {
                // It's a composite. Remove overrides from part bindings.
                for (var i = bindingIndex + 1; i < action.bindings.Count && action.bindings[i].isPartOfComposite; ++i)
                    action.RemoveBindingOverride(i);
            }
            else
            {
                action.RemoveBindingOverride(bindingIndex);
            }
            SaveInputRebinds();
        }

        /// <summary>
        /// ��ȡ�󶨵���Ϊ�Ͱ�����
        /// </summary>
        /// <param name="action"></param>
        /// <param name="bindingIndex"></param>
        /// <returns></returns>
        public bool GetActionAndBinding(InputAction inputAction, string bindId, out int bindingIndex)
        {
            bindingIndex = -1;

            if (string.IsNullOrEmpty(bindId))
                return false;

            //���Ұ�����
            var bindingId = new Guid(bindId);
            bindingIndex = inputAction.bindings.IndexOf(x => x.id == bindingId);
            if (bindingIndex == -1)
                return false;

            return true;
        }

        private void PerformInteractiveRebind(InputAction action, int bindingIndex, bool allCompositeParts = false)
        {
            m_RebindOperation?.Cancel();

            void CleanUp()
            {
                m_RebindOperation?.Dispose();
                m_RebindOperation = null;
            }

            int nextBindingIndex;

            action.Disable();
            m_RebindOperation = action.PerformInteractiveRebinding(bindingIndex)
                .OnComplete(
                    operation =>
                    {
                        //��ɰ�
                        CleanUp();

                        // �����Ҫ�󶨸���ĸ��ϲ�����Ϊ��һ�������������°�
                        if (allCompositeParts)
                        {
                            nextBindingIndex = bindingIndex + 1;
                            if (nextBindingIndex < action.bindings.Count && action.bindings[nextBindingIndex].isPartOfComposite)
                                PerformInteractiveRebind(action, nextBindingIndex, true);

                        }

                        action.Enable();
                        Debug.Log("�������°󶨳ɹ�");
                        SaveInputRebinds();
                    });

            m_RebindOperation.Start();
        }

        /// <summary>
        /// �����޸ĺ�ļ�λ
        /// </summary>
        private void LoadInputRebinds()
        {
            var rebinds = PlayerPrefs.GetString("GMInputManagerRebinds");
            if (!string.IsNullOrEmpty(rebinds))
                InputActions.LoadBindingOverridesFromJson(rebinds);
        }

        /// <summary>
        /// �����޸ĺ�ļ�λ
        /// </summary>
        private void SaveInputRebinds()
        {
            var rebinds = InputActions.SaveBindingOverridesAsJson();
            PlayerPrefs.SetString("GMInputManagerRebinds", rebinds);
        }
    }
}

using System;
using UnityEngine;
using UnityEngine.InputSystem;

namespace LGameFramework.GameCore.Input
{
    public partial class GMInputManager
    {
        /// <summary>
        /// 重新绑定操作
        /// </summary>
        private InputActionRebindingExtensions.RebindingOperation m_RebindOperation;

        /// <summary>
        /// 开始交互绑定
        /// </summary>
        public void StartInteractiveRebind(InputAction inputAction, string bindingId)
        {
            if (!GetActionAndBinding(inputAction, bindingId, out var bindingIndex))
                return;

            InternalInteractiveRebind(inputAction, bindingIndex);
        }

        /// <summary>
        /// 开始交互绑定
        /// </summary>
        public void StartInteractiveRebind(InputAction inputAction, int bindingIndex)
        {
            InternalInteractiveRebind(inputAction, bindingIndex);
        }

        private void InternalInteractiveRebind(InputAction inputAction, int bindingIndex)
        {
            //如果绑定是复合的，需要依次重新绑定每个部分
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
        /// 重置到默认
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
        /// 重置到默认
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
        /// 获取绑定的行为和绑定索引
        /// </summary>
        /// <param name="action"></param>
        /// <param name="bindingIndex"></param>
        /// <returns></returns>
        public bool GetActionAndBinding(InputAction inputAction, string bindId, out int bindingIndex)
        {
            bindingIndex = -1;

            if (string.IsNullOrEmpty(bindId))
                return false;

            //查找绑定索引
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
                        //完成绑定
                        CleanUp();

                        // 如果需要绑定更多的复合部件，为下一个部件启动重新绑定
                        if (allCompositeParts)
                        {
                            nextBindingIndex = bindingIndex + 1;
                            if (nextBindingIndex < action.bindings.Count && action.bindings[nextBindingIndex].isPartOfComposite)
                                PerformInteractiveRebind(action, nextBindingIndex, true);

                        }

                        action.Enable();
                        Debug.Log("按键重新绑定成功");
                        SaveInputRebinds();
                    });

            m_RebindOperation.Start();
        }

        /// <summary>
        /// 加载修改后的键位
        /// </summary>
        private void LoadInputRebinds()
        {
            var rebinds = PlayerPrefs.GetString("GMInputManagerRebinds");
            if (!string.IsNullOrEmpty(rebinds))
                InputActions.LoadBindingOverridesFromJson(rebinds);
        }

        /// <summary>
        /// 保存修改后的键位
        /// </summary>
        private void SaveInputRebinds()
        {
            var rebinds = InputActions.SaveBindingOverridesAsJson();
            PlayerPrefs.SetString("GMInputManagerRebinds", rebinds);
        }
    }
}

using LGameFramework.GameCore.Input;
using UnityEngine.Events;

namespace LGameFramework.GameCore.Entity
{
    /// <summary>
    /// 输入响应组件 添加此组件以实现对玩家输入的监听
    /// </summary>
    public class InputResponseComponent : AbstractComponent
    {
        public override int Priority => 1;

        private GMInputManager m_GMInputManager;

        private UnityAction<GMInputManager.InputActionArgs> m_OnInputResponse = delegate { };
        public UnityAction<GMInputManager.InputActionArgs> OnInputResponse 
        {
            set 
            {
                if (value != m_OnInputResponse)
                {
                    m_GMInputManager.RemoveListener(m_OnInputResponse);
                    m_OnInputResponse = value;
                    m_GMInputManager.AddListener(m_OnInputResponse);
                }
            } 
        }

        public override void OnInit(Entity entity)
        {
            base.OnInit(entity);
            m_GMInputManager = GameFrameworkEntry.GetModule<GMInputManager>();
            m_GMInputManager.AddListener(m_OnInputResponse);
        }


        public override void Release()
        {
            base.Release();
            m_GMInputManager.RemoveListener(m_OnInputResponse);
        }

        public override void Dispose()
        {
            base.Dispose();
            m_GMInputManager = null;
        }
    }
}

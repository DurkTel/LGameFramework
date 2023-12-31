using LGameFramework.GameCore.GameEntity;
using UnityEngine.UI;
using LGameFramework.GameCore;
using LGameFramework.GameCore.Avatar;
using UnityEngine;
using LGameFramework.GameCore.GameScene;

namespace LGameFramework.GameLogic.GUI
{
    public class LoginView : GUIView
    {
        protected override string m_PrefabName => "GUI_Login_View.prefab";

        private NodeAvatar m_Avatar;

        private int m_Timer;

        public override void OnInit()
        {
            base.OnInit();
            m_Timer = -1;

            var roleCfg = ConfigUtility.GetConfig<GameCore.Config.TB_Role>();
            var cfg = roleCfg.Get(GameCore.Config.RoleCareer.Career1);
            m_Avatar = Injection.Get<NodeAvatar>("Avatar");
            m_Avatar.ControllerName = "SD_UIController.overrideController";
            m_Avatar.SetPlayer(cfg.BaseSkin);

            Injection.Get<Button>("HeadBtn").onClick.AddListener(() =>
            {
                OnPlayAnimation("Action3");
            });

            Injection.Get<Button>("BodyBtn").onClick.AddListener(() =>
            {
                OnPlayAnimation("Action4");
            });

            Injection.Get<Button>("SingleGameBtn").onClick.AddListener(() =>
            {
                UIUtility.OpenView<LevelView>();
                //if (m_Timer != -1) return;
                //OnPlayAnimation("Action1");
                //m_Timer = TimerUtility.AddTimer(OnEnterGame, 0, 3.5f);
            });

            Injection.Get<Button>("LANGameBtn").onClick.AddListener(() =>
            {

            });
        }

        public override void OnDispose()
        {
            base.OnDispose();
            m_Avatar.Dispose();
            m_Avatar = null;
        }

        private void OnPlayAnimation(string name)
        {
            m_Avatar.PlayAnimation(name);
        }

        private void OnEnterGame()
        {
            UIUtility.OpenView<LevelView>();

        }
    }
}

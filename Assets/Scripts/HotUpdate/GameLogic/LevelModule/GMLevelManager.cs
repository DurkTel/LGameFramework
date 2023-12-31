using LGameFramework.GameBase;
using LGameFramework.GameCore;
using LGameFramework.GameCore.GameEntity;
using LGameFramework.GameCore.GameScene;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic.Level
{
    public partial class GMLevelManager : LogicModule
    {
        public override int Priority => 1;
        /// <summary>
        /// �����߼�
        /// </summary>
        private ICopyLogic m_CopyLogic;

        public override void OnInit()
        {
            EventUtility.RegisterEvent(GMEventRegister.SCENE_LOAD_COMPLETE, OnSceneLoadCompele);

        }

        /// <summary>
        /// ���븱��
        /// </summary>
        /// <param name="level"></param>
        /// <returns></returns>
        internal bool EnterCopy(GMLevelRegister level)
        {
            if (!s_LevelCopyType.TryGetValue(level, out var copyInfo))
                return false;

            //�л����������
            SceneUtility.SwitchScene(copyInfo.sceneName);
            if(m_CopyLogic != null)
                m_CopyLogic.OnCopyOut();

            m_CopyLogic = InstanceCreator.Get(copyInfo.copyType) as ICopyLogic;
            m_CopyLogic.OnInit();

            return true;
        }

        /// <summary>
        /// �Գ���ǰ����
        /// </summary>
        /// <param name="level"></param>
        /// <returns></returns>
        internal void ExitCopy()
        {
            if (m_CopyLogic == null) return;

            m_CopyLogic.OnCopyOut();
            m_CopyLogic = null;
            //�˵�Ĭ�ϳ���
            SceneUtility.SwitchScene();

        }

        private void OnSceneLoadCompele(object sender, GameEventArg arg)
        {
            if (m_CopyLogic == null) return;

            m_CopyLogic.OnCopyIn();


        }
    }
}

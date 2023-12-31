using LGameFramework.GameBase;
using System;

namespace LGameFramework.GameCore
{
    public class EventUtility : ModuleUtility<GMEventManager>
    {
        /// <summary>
        /// ע���¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="handler">ί�з���</param>
        public static void RegisterEvent(GMEventRegister id, EventHandler<GameEventArg> handler)
        {
            Instance.RegisterEvent(id, handler);    
        }

        /// <summary>
        /// �Ƴ��¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="handler">ί�з���</param>
        /// <returns>�Ƴ����</returns>
        public static bool UnRegisterEvent(GMEventRegister id, EventHandler<GameEventArg> handler)
        {
            return Instance.UnRegisterEvent(id, handler);
        }

        /// <summary>
        /// �����¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="sender">������</param>
        /// <param name="args">�¼�����</param>
        public static void Dispatch(GMEventRegister id, object sender, GameEventArg args)
        {
            Instance.Dispatch(id, sender, args);    
        }

        /// <summary>
        /// ���������¼�����ǰִ֡�У�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="sender">������</param>
        /// <param name="args">�¼�����</param>
        public static void DispatchImmediately(GMEventRegister id, object sender, GameEventArg args)
        {
            Instance.DispatchImmediately(id, sender, args);
        }

        /// <summary>
        /// �Ƿ��ĸ��¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <returns>�Ƿ����</returns>
        public static bool Exist(GMEventRegister id)
        {
            return Instance.Exist(id);
        }
    }
}

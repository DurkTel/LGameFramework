using LGameFramework.GameBase;
using System;

namespace LGameFramework.GameCore
{
    public class EventUtility : ModuleUtility<GMEventManager>
    {
        /// <summary>
        /// 注册事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="handler">委托方法</param>
        public static void RegisterEvent(GMEventRegister id, EventHandler<GameEventArg> handler)
        {
            Instance.RegisterEvent(id, handler);    
        }

        /// <summary>
        /// 移除事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="handler">委托方法</param>
        /// <returns>移除结果</returns>
        public static bool UnRegisterEvent(GMEventRegister id, EventHandler<GameEventArg> handler)
        {
            return Instance.UnRegisterEvent(id, handler);
        }

        /// <summary>
        /// 发布事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="sender">发布者</param>
        /// <param name="args">事件参数</param>
        public static void Dispatch(GMEventRegister id, object sender, GameEventArg args)
        {
            Instance.Dispatch(id, sender, args);    
        }

        /// <summary>
        /// 立即发布事件（当前帧执行）
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="sender">发布者</param>
        /// <param name="args">事件参数</param>
        public static void DispatchImmediately(GMEventRegister id, object sender, GameEventArg args)
        {
            Instance.DispatchImmediately(id, sender, args);
        }

        /// <summary>
        /// 是否订阅该事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <returns>是否存在</returns>
        public static bool Exist(GMEventRegister id)
        {
            return Instance.Exist(id);
        }
    }
}

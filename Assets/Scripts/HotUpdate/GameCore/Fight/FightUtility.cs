using LGameFramework.GameBase;
using LGameFramework.GameCore.Fight;
using static LGameFramework.GameCore.Fight.GMFightBroadcastManager;

namespace LGameFramework.GameCore
{
    public class FightUtility : ModuleUtility<GMFightBroadcastManager>
    {
        /// <summary>
        /// 发起战报
        /// </summary>
        /// <param name="info">发起信息</param>
        /// <returns>发起者战报队列</returns>
        public static FightBroadcastQueue DispatchFightBroad(FightBroadInfoBegin info)
        {
            return Instance.DispatchFightBroad(info);
        }

        /// <summary>
        /// 战报执行受击
        /// </summary>
        /// <param name="info">受击信息</param>
        public static void OnFightBroadHit(FightBroadInfoHit info)
        {
            Instance.OnFightBroadHit(info);
        }

        /// <summary>
        /// 打断战报
        /// </summary>
        /// <param name="entityId"></param>
        public static void BreakFightBroad(int entityId)
        {
            Instance.BreakFightBroad(entityId);
        }

        /// <summary>
        /// 获取战报队列
        /// </summary>
        /// <param name="entityId">实体id</param>
        /// <returns>战报队列</returns>
        public static FightBroadcastQueue GetFightBroadQueue(int entityId)
        {
            return Instance.GetFightBroadQueue(entityId);
        }
    }
}

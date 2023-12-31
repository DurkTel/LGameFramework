using LGameFramework.GameBase;
using LGameFramework.GameCore.Fight;
using static LGameFramework.GameCore.Fight.GMFightBroadcastManager;

namespace LGameFramework.GameCore
{
    public class FightUtility : ModuleUtility<GMFightBroadcastManager>
    {
        /// <summary>
        /// ����ս��
        /// </summary>
        /// <param name="info">������Ϣ</param>
        /// <returns>������ս������</returns>
        public static FightBroadcastQueue DispatchFightBroad(FightBroadInfoBegin info)
        {
            return Instance.DispatchFightBroad(info);
        }

        /// <summary>
        /// ս��ִ���ܻ�
        /// </summary>
        /// <param name="info">�ܻ���Ϣ</param>
        public static void OnFightBroadHit(FightBroadInfoHit info)
        {
            Instance.OnFightBroadHit(info);
        }

        /// <summary>
        /// ���ս��
        /// </summary>
        /// <param name="entityId"></param>
        public static void BreakFightBroad(int entityId)
        {
            Instance.BreakFightBroad(entityId);
        }

        /// <summary>
        /// ��ȡս������
        /// </summary>
        /// <param name="entityId">ʵ��id</param>
        /// <returns>ս������</returns>
        public static FightBroadcastQueue GetFightBroadQueue(int entityId)
        {
            return Instance.GetFightBroadQueue(entityId);
        }
    }
}

using LGameFramework.GameBase;
using LGameFramework.GameCore.Timer;
using UnityEngine.Events;

namespace LGameFramework.GameCore
{
    public class TimerUtility : ModuleUtility<GMTimerManager>
    {
        /// <summary>
        /// 添加计时器 单位（秒）
        /// </summary>
        /// <param name="callback">回调函数</param>
        /// <param name="delay">延迟开始时间</param>
        /// <param name="interval">单位计时</param>
        /// <param name="duration">次数</param>
        /// <returns>计时器id</returns>
        public static int AddTimer(UnityAction callback, float delay = 0f, float interval = 1f, int duration = 1)
        {
            return Instance.AddTimer(callback, delay, interval, duration);
        }

        /// <summary>
        /// 添加计时器 单位（帧）
        /// </summary>
        /// <param name="callback">回调函数</param>
        /// <param name="delay">延迟开始时间</param>
        /// <param name="interval">单位计时</param>
        /// <param name="duration">次数</param>
        /// <returns>计时器id</returns>
        public static int AddFrame(UnityAction callback, float delay = 0f, float interval = 1f, int duration = 1)
        {
            return Instance.AddFrame(callback, delay, interval, duration);
        }

        /// <summary>
        /// 删除计时器
        /// </summary>
        /// <param name="id">计时器id</param>
        public static void DelTimer(int id)
        {
            Instance.DelTimer(id);
        }
    }
}

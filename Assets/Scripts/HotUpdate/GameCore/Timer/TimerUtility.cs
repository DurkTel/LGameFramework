using LGameFramework.GameBase;
using LGameFramework.GameCore.Timer;
using UnityEngine.Events;

namespace LGameFramework.GameCore
{
    public class TimerUtility : ModuleUtility<GMTimerManager>
    {
        /// <summary>
        /// ��Ӽ�ʱ�� ��λ���룩
        /// </summary>
        /// <param name="callback">�ص�����</param>
        /// <param name="delay">�ӳٿ�ʼʱ��</param>
        /// <param name="interval">��λ��ʱ</param>
        /// <param name="duration">����</param>
        /// <returns>��ʱ��id</returns>
        public static int AddTimer(UnityAction callback, float delay = 0f, float interval = 1f, int duration = 1)
        {
            return Instance.AddTimer(callback, delay, interval, duration);
        }

        /// <summary>
        /// ��Ӽ�ʱ�� ��λ��֡��
        /// </summary>
        /// <param name="callback">�ص�����</param>
        /// <param name="delay">�ӳٿ�ʼʱ��</param>
        /// <param name="interval">��λ��ʱ</param>
        /// <param name="duration">����</param>
        /// <returns>��ʱ��id</returns>
        public static int AddFrame(UnityAction callback, float delay = 0f, float interval = 1f, int duration = 1)
        {
            return Instance.AddFrame(callback, delay, interval, duration);
        }

        /// <summary>
        /// ɾ����ʱ��
        /// </summary>
        /// <param name="id">��ʱ��id</param>
        public static void DelTimer(int id)
        {
            Instance.DelTimer(id);
        }
    }
}

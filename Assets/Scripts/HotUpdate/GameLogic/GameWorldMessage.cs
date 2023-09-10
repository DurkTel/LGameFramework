using LGameFramework.GameCore.Entity;
using LGameFramework.GameCore.Input;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace LGameFramework.GameCore
{
    /// <summary>
    /// ��Ϸ��������ϵ��¼�
    /// </summary>
    public class GameWorldMessage
    {
        private static GMEventManager m_GMEventManager;

        public static void OninitWorld()
        {
            m_GMEventManager = GameFrameworkEntry.GetModule<GMEventManager>();
            //��ʼ������
            GameFrameworkEntry.GetModule<GMInputManager>();
            //��ʼ�����
            GameFrameworkEntry.GetModule<OrbitCamera>();
        }

        public static void OninitWorldMessage()
        {

        }


    }
}

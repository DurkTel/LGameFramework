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
            OrbitCamera.Initialize();
            //��ʼ���������
            OrbitCamera.s_OrbitCamera.focus = GameFrameworkEntry.GetModule<GMEntityManager>().EnterEntity(GMEntityManager.EntityType.LocalPlayer).Transform;

        }

        public static void OninitWorldMessage()
        {

        }


    }
}

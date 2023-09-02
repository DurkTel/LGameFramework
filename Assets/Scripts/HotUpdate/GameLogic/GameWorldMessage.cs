using LGameFramework.GameCore.Entity;
using LGameFramework.GameCore.Input;

namespace LGameFramework.GameCore
{
    /// <summary>
    /// ��Ϸ��������ϵ��¼�
    /// </summary>
    public class GameWorldMessage
    {
        public static void OninitWorld()
        {
            //��ʼ������
            GameFrameworkEntry.GetModule<GMInputManager>();
            //��ʼ�����
            OrbitCamera.Initialize();
            //��ʼ���������
            OrbitCamera.s_OrbitCamera.focus = GameFrameworkEntry.GetModule<GMEntityManager>().AddEntity(GMEntityManager.EntityType.LocalPlayer).Transform;

        }

        public static void OninitWorldMessage()
        {

        }

    }
}

using GameCore.Entity;
using LGameFramework.GameCore.Input;

namespace GameCore
{
    /// <summary>
    /// ��Ϸ��������ϵ��¼�ע��
    /// </summary>
    public class GameWorldMessage
    {
        public static void OninitWorld()
        {
            //��ʼ������
            GameFrameworkEntry.GetModule<GMCrossPlatformInput>().Initialize();
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

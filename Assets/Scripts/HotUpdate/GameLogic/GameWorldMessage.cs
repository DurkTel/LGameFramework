using LGameFramework.GameCore.Entity;
using LGameFramework.GameCore.Input;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace LGameFramework.GameCore
{
    /// <summary>
    /// 游戏世界层面上的事件
    /// </summary>
    public class GameWorldMessage
    {
        private static GMEventManager m_GMEventManager;

        public static void OninitWorld()
        {
            m_GMEventManager = GameFrameworkEntry.GetModule<GMEventManager>();
            //初始化输入
            GameFrameworkEntry.GetModule<GMInputManager>();
            //初始化相机
            OrbitCamera.Initialize();
            //初始化本机玩家
            OrbitCamera.s_OrbitCamera.focus = GameFrameworkEntry.GetModule<GMEntityManager>().EnterEntity(GMEntityManager.EntityType.LocalPlayer).Transform;

        }

        public static void OninitWorldMessage()
        {

        }


    }
}

using GameCore.Entity;
using LGameFramework.GameCore.Input;

namespace GameCore
{
    /// <summary>
    /// 游戏世界层面上的事件注册
    /// </summary>
    public class GameWorldMessage
    {
        public static void OninitWorld()
        {
            //初始化输入
            GameFrameworkEntry.GetModule<GMCrossPlatformInput>().Initialize();
            //初始化相机
            OrbitCamera.Initialize();
            //初始化本机玩家
            OrbitCamera.s_OrbitCamera.focus = GameFrameworkEntry.GetModule<GMEntityManager>().AddEntity(GMEntityManager.EntityType.LocalPlayer).Transform;

        }

        public static void OninitWorldMessage()
        {

        }

    }
}

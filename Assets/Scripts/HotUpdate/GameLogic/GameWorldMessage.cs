using LGameFramework.GameCore.Entity;
using LGameFramework.GameCore.Input;

namespace LGameFramework.GameCore
{
    /// <summary>
    /// 游戏世界层面上的事件
    /// </summary>
    public class GameWorldMessage
    {
        public static void OninitWorld()
        {
            //初始化输入
            GameFrameworkEntry.GetModule<GMInputManager>();
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

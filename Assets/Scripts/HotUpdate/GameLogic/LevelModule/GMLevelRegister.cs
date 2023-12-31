using System;
using System.Collections.Generic;

namespace LGameFramework.GameLogic.Level
{

    public partial class GMLevelManager : LogicModule
    {

        public static Dictionary<GMLevelRegister, LevelCopyStruct> s_LevelCopyType = new Dictionary<GMLevelRegister, LevelCopyStruct>()
        {
            [GMLevelRegister.Level_DropTrap] = new LevelCopyStruct() { copyType = typeof(DropTrapCopyLogic) , sceneName = "Drop_Trap_Scene" } ,
        };
    }

    public struct LevelCopyStruct
    {
        public Type copyType;

        public string sceneName;
    }

    public enum GMLevelRegister
    {
        /// <summary>
        /// µôÂäÏÝÚå¹Ø¿¨
        /// </summary>
        Level_DropTrap,
    }
}

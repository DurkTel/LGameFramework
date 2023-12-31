using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LGameFramework.GameCore.Config;
using LGameFramework.GameBase;

namespace LGameFramework.GameCore
{
    public class ConfigUtility : ModuleUtility<GMConfigManager>
    {
        /// <summary>
        /// ªÒ»°≈‰÷√
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static T GetConfig<T>() where T : ITBConfig, new()
        {
            return Instance.GetConfig<T>();
        }
    }
}

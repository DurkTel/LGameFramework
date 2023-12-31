using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore
{
    public enum GMEventRegister
    {
        NONE,

        #region 输入
        /// <summary>
        /// 输入分发-按钮
        /// </summary>
        INPUT_DISPATCH_HANDLE,

        #endregion


        #region 场景
        /// <summary>
        /// 开始加载场景
        /// </summary>
        SCENE_LOAD_BEGIN,
        /// <summary>
        /// 加载场景完成
        /// </summary>
        SCENE_LOAD_COMPLETE,

        #endregion
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    /// <summary>
    /// 游戏框架模块
    /// </summary>
    public abstract class FrameworkModule
    {
        /// <summary>
        /// 模块优先级
        /// </summary>
        internal abstract int priority { get; }

        /// <summary>
        /// 游戏物体
        /// </summary>
        internal abstract GameObject gameObject { get; set; }

        /// <summary>
        /// 变换组件
        /// </summary>
        internal abstract Transform transform { get; set; }

        /// <summary>
        /// 初始化
        /// </summary>
        internal abstract void OnInit();

        /// <summary>
        /// 帧更新
        /// </summary>
        /// <param name="deltaTime">帧更新间隔</param>
        /// <param name="unscaledTime">帧更新间隔，不受时间缩放比例影响</param>
        internal abstract void Update(float deltaTime, float unscaledTime);

        /// <summary>
        /// 延迟帧更新
        /// </summary>
        /// <param name="deltaTime">帧更新间隔</param>
        /// <param name="unscaledTime">游戏开始后所运行的时间，不受时间缩放比例影响</param>
        internal virtual void LateUpdate(float deltaTime, float unscaleDeltaTime) { }


        /// <summary>
        /// 固定更新
        /// </summary>
        /// <param name="fixedDeltaTime">固定更新间隔</param>
        /// <param name="unscaledTime">游戏开始后所运行的时间，不受时间缩放比例影响</param>
        internal virtual void FixedUpdate(float fixedDeltaTime, float unscaledTime) { }

        /// <summary>
        /// 销毁
        /// </summary>
        internal virtual void OnDestroy() { }
    }
}

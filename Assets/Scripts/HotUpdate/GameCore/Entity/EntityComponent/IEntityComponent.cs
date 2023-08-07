using UnityEngine;

namespace GameCore.Entity
{
    /// <summary>
    /// 实体组件
    /// </summary>
    public interface IEntityComponent
    {
        /// <summary>
        /// 组件优先级
        /// </summary>
        int Priority { get; }

        /// <summary>
        /// 挂载实体
        /// </summary>
        Entity Entity { get; }

        /// <summary>
        /// 游戏物体
        /// </summary>
        GameObject GameObject { get; }

        /// <summary>
        /// 变换组件
        /// </summary>
        Transform Transform { get; }

        /// <summary>
        /// 启用组件
        /// </summary>
        bool Enabled { get; set; }

        /// <summary>
        /// 初始化
        /// </summary>
        void OnInit(Entity entity);

        /// <summary>
        /// 帧更新
        /// </summary>
        /// <param name="deltaTime">帧更新间隔</param>
        /// <param name="unscaledTime">帧更新间隔，不受时间缩放比例影响</param>
        void Update(float deltaTime, float unscaledTime);

        /// <summary>
        /// 固定更新
        /// </summary>
        /// <param name="fixedDeltaTime">固定更新间隔</param>
        /// <param name="unscaledTime">游戏开始后所运行的时间，不受时间缩放比例影响</param>
        void FixedUpdate(float fixedDeltaTime, float unscaledTime);

        /// <summary>
        /// 回收
        /// </summary>
        void Release();
    }
}

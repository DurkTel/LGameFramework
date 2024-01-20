using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// 实体组件 定义一个实体组件必须拥有的属性方法
    /// </summary>
    public interface IComponent
    {
        /// <summary>
        /// 挂载实体
        /// </summary>
        int Entity { get; }

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
        bool Enabled { get; }

        /// <summary>
        /// 初始化
        /// </summary>
        void OnInit(int entity, Dictionary<EEntityAttribute, IProperty> attribute);

        /// <summary>
        /// 回收
        /// </summary>
        void Release();

        /// <summary>
        /// 销毁
        /// </summary>
        void Dispose();
    }

    /// <summary>
    /// 需要帧更新
    /// </summary>
    public interface IUpdateComponent
    {
        /// <summary>
        /// 启用组件
        /// </summary>
        bool Enabled { get; }

        /// <summary>
        /// 帧更新
        /// </summary>
        /// <param name="deltaTime">帧更新间隔</param>
        /// <param name="unscaledTime">帧更新间隔，不受时间缩放比例影响</param>
        void Update(float deltaTime, float unscaledTime);
    }

    /// <summary>
    /// 需要固定更新
    /// </summary>
    public interface IFixedUpdateComponent
    {
        /// <summary>
        /// 启用组件
        /// </summary>
        bool Enabled { get; }

        /// <summary>
        /// 固定更新
        /// </summary>
        /// <param name="fixedDeltaTime">固定更新间隔</param>
        /// <param name="unscaledTime">游戏开始后所运行的时间，不受时间缩放比例影响</param>
        void FixedUpdate(float fixedDeltaTime, float unscaledTime);
    }
}

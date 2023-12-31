using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// 实体模板接口
    /// </summary>
    public interface IArchetype
    {
        /// <summary>
        /// 初始化实体数据
        /// </summary>
        /// <param name="entity"></param>
        void OnInitData(int entity);
        /// <summary>
        /// 自定义操作
        /// </summary>
        /// <param name="entity"></param>
        void OnCustomOperation(int entity);
        /// <summary>
        /// 需要挂载的组件
        /// </summary>
        /// <returns></returns>
        Type[] GetComponents();
        /// <summary>
        /// 实体标签
        /// </summary>
        /// <returns></returns>
        EntityTags GetTags();
    }
}

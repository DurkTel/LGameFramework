using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        /// <summary>
        /// 组件执行优先级
        /// </summary>
        public static Dictionary<Type, int> s_ComponentPriority = new Dictionary<Type, int>()
        {
            //[typeof(AOIComponent)] = 1,
            //[typeof(CullingComponent)] = 2,
            //[typeof(InputResponseComponent)] = 3,
        };

        /// <summary>
        /// 子实体关联骨骼
        /// 手持
        /// </summary>
        public static Dictionary<ChildBindingBone, string> s_SubEntityHandBone = new Dictionary<ChildBindingBone, string>()
        {
            [ChildBindingBone.Normal] = "",
            [ChildBindingBone.WeaponL] = "Prop_R",
            [ChildBindingBone.WeaponR] = "Prop_R",
        };

        /// <summary>
        /// 子实体关联骨骼
        /// 收起后
        /// </summary>
        public static Dictionary<ChildBindingBone, string> s_SubEntityKeepBone = new Dictionary<ChildBindingBone, string>()
        {
            [ChildBindingBone.Normal] = "",
            [ChildBindingBone.WeaponL] = "Prop_R_Keep",
            [ChildBindingBone.WeaponR] = "Prop_R_Keep",
        };
    }

    /// <summary>
    /// 实体标签
    /// </summary>
    public enum EntityTags
    { 
        /// <summary>
        /// 没有标签
        /// </summary>
        Untagged,
        /// <summary>
        /// 主角
        /// </summary>
        MainPlayer,
        /// <summary>
        /// 其他玩家
        /// </summary>
        Player,
        /// <summary>
        /// 怪物
        /// </summary>
        Monster,
        /// <summary>
        /// 武器
        /// </summary>
        Weapon,
        /// <summary>
        /// 道具
        /// </summary>
        Prop,
    }

    /// <summary>
    /// 子实体绑定枚举
    /// </summary>
    public enum ChildBindingBone
    {
        /// <summary>
        /// 普通
        /// </summary>
        Normal,
        /// <summary>
        /// 左手武器
        /// </summary>
        WeaponL,
        /// <summary>
        /// 右手武器
        /// </summary>
        WeaponR,
        /// <summary>
        /// 道具
        /// </summary>
        Prop,
    }

    /// <summary>
    /// 实体状态
    /// 改变实体的动画标识
    /// </summary>
    public enum EntityState
    { 
        /// <summary>
        /// 通常
        /// </summary>
        Normal,
        /// <summary>
        /// 战斗状态
        /// </summary>
        Fight,
        /// <summary>
        /// 手持中
        /// </summary>
        CarryUp,
        Death
    }
}

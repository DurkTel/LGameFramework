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


    }

    public static class GMEntityArchetype
    {
        public static TestEntity s_TestEntityArchetype = new TestEntity();
    }

}

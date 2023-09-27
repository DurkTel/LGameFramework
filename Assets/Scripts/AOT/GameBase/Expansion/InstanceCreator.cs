using System;
using System.Collections.Generic;
using System.Linq.Expressions;

namespace LGameFramework.GameBase
{
    /// <summary>
    /// 实例生成器
    /// 通过Type去进行实例化类 性能比反射好 比直接New差
    /// </summary>
    public class InstanceCreator
    {
        private static Dictionary<Type, Func<object>> m_InstanceCreator;

        public static object Get(Type type)
        {
            if (type.IsValueType)
            {
                GameLogger.ERROR("InstanceCreator生成实例时传入的类型为值类型");
                return null;
            }

            m_InstanceCreator ??= new Dictionary<Type, Func<object>>();
            if (!m_InstanceCreator.TryGetValue(type, out Func<object> creator))
            {
                creator = Expression.Lambda<Func<object>>(Expression.New(type)).Compile();
                m_InstanceCreator.Add(type, creator);
            }
            return creator();
        }
    }
}

using System;
using System.Collections.Generic;

namespace LGameFramework.GameBase
{
    /// <summary>
    /// 对象池
    /// </summary>
    /// <typeparam name="T">主要是C#类和自定义类</typeparam>
    public partial class Pool
    {
        /// <summary>
        /// 是否无效类型
        /// </summary>
        /// <param name="type"></param>
        /// <returns></returns>
        private static bool IsInvalid(Type type)
        {
            return type.IsValueType;
        }

        /// <summary>
        /// 获取对象池
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static SubPool GetSubPool<T>() where T : class, new()
        {
            return GetSubPool(typeof(T));
        }

        /// <summary>
        /// 获取对象池
        /// </summary>
        /// <param name="type"></param>
        /// <returns></returns>
        public static SubPool GetSubPool(Type type)
        {
            if (!SubPools.TryGetValue(type, out IPool subPool))
                subPool = new SubPool(type);

            return (SubPool)subPool;
        }

        /// <summary>
        /// 从对象池获取一个实例
        /// </summary>
        /// <returns></returns>
        public static T Get<T>() where T : class, new()
        {
            return GetSubPool<T>().Get<T>();
        }

        /// <summary>
        /// 从对象池获取一个实例
        /// </summary>
        /// <param name="type"></param>
        /// <returns></returns>
        public static object Get(Type type)
        {
            if (IsInvalid(type)) return null;

            return GetSubPool(type).Get(type);
        }

        /// <summary>
        /// 将实例放回到对象池中
        /// </summary>
        /// <param name="item"></param>
        public static void Release<T>(T item) where T : class, new()
        {
            GetSubPool<T>().Release<T>(item);
        }

        /// <summary>
        /// 移除将对象池中的实例
        /// </summary>
        /// <param name="count">移除数量</param>
        public static void Remove<T>(int count) where T : class, new()
        {
            GetSubPool<T>().Remove(count);
        }

        /// <summary>
        /// 移除将对象池中的实例
        /// </summary>
        /// <param name="type"></param>
        /// <param name="count"></param>
        public static void Remove(Type type, int count)
        {
            GetSubPool(type).Remove(count);
        }
    }


    /// <summary>
    /// 字典池
    /// </summary>
    /// <typeparam name="TKey"></typeparam>
    /// <typeparam name="TValue"></typeparam>
    public class DictionaryPool<TKey, TValue>
    {
        public static Dictionary<TKey, TValue> Get()
        {
            return Pool.Get<Dictionary<TKey, TValue>>();
        }

        public static void Release(Dictionary<TKey, TValue> toRelease)
        {
            Pool.Release(toRelease);
        }
    }

    public class ListPool<TValue>
    {
        public static List<TValue> Get()
        {
            return Pool.Get<List<TValue>>();
        }

        public static void Release(List<TValue> toRelease)
        {
            Pool.Release(toRelease);
        }
    }

    public class QueuePool<TValue>
    {
        public static Queue<TValue> Get()
        {
            return Pool.Get<Queue<TValue>>();
        }

        public static void Release(Queue<TValue> toRelease)
        {
            Pool.Release(toRelease);
        }
    }
}

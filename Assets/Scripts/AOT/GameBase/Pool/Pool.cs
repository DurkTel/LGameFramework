
namespace LGameFramework.GameBase.Pool
{
    /// <summary>
    /// 对象池
    /// </summary>
    /// <typeparam name="T">主要是C#类和自定义类</typeparam>
    public partial class Pool<T> where T : class, new()
    {
        private static readonly Pool.SubPool<T> s_ObjectPool = new Pool.SubPool<T>();

        /// <summary>
        /// 从对象池获取一个实例
        /// </summary>
        /// <returns></returns>
        public static T Get()
        {
            return s_ObjectPool.Get();
        }

        /// <summary>
        /// 将实例放回到对象池中
        /// </summary>
        /// <param name="item"></param>
        public static void Release(T item)
        {
            s_ObjectPool.Release(item);
        }

        /// <summary>
        /// 移除将对象池中的实例
        /// </summary>
        /// <param name="count">移除数量</param>
        public static void Remove(int count)
        {
            s_ObjectPool.Remove(count);
        }
    }
}

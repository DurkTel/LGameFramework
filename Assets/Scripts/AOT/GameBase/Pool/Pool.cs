
namespace LGameFramework.GameBase.Pool
{
    /// <summary>
    /// �����
    /// </summary>
    /// <typeparam name="T">��Ҫ��C#����Զ�����</typeparam>
    public partial class Pool<T> where T : class, new()
    {
        private static readonly Pool.SubPool<T> s_ObjectPool = new Pool.SubPool<T>();

        /// <summary>
        /// �Ӷ���ػ�ȡһ��ʵ��
        /// </summary>
        /// <returns></returns>
        public static T Get()
        {
            return s_ObjectPool.Get();
        }

        /// <summary>
        /// ��ʵ���Żص��������
        /// </summary>
        /// <param name="item"></param>
        public static void Release(T item)
        {
            s_ObjectPool.Release(item);
        }

        /// <summary>
        /// �Ƴ���������е�ʵ��
        /// </summary>
        /// <param name="count">�Ƴ�����</param>
        public static void Remove(int count)
        {
            s_ObjectPool.Remove(count);
        }
    }
}

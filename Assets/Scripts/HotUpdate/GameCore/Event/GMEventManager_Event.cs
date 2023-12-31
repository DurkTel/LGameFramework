using LGameFramework.GameBase;
using System;

namespace LGameFramework.GameCore
{
    public sealed partial class GMEventManager
    {
        /// <summary>
        /// 事件 中转器
        /// </summary>
        private sealed class GameEvent
        {
            private GMEventRegister m_Id;
            public GMEventRegister Id { get { return m_Id; } }

            private object m_Sender;
            public object Sender { get { return m_Sender; } }

            private GameEventArg m_EventArgs;
            public GameEventArg EventArgs { get { return m_EventArgs; } }

            public static GameEvent Get(GMEventRegister id, object sender, GameEventArg e)
            {
                GameEvent eventNode = Pool.Get<GameEvent>();
                eventNode.m_Id = id;
                eventNode.m_Sender = sender;
                eventNode.m_EventArgs = e;
                return eventNode;
            }

            public void Dispose()
            {
                m_Id = GMEventRegister.NONE;
                m_Sender = null;
                m_EventArgs.Dispose();
                m_EventArgs = null;
                Pool.Release(this);
            }
        }

    }

    public abstract class GameEventArg : EventArgs, IDisposable
    {
        public abstract void Dispose();
    }

    /// <summary>
    /// 通用的事件参数
    /// 提供多个变量
    /// </summary>
    public class CommonEventArg : GameEventArg
    {
        private DataVariable[] m_Variables;

        /// <summary>
        /// 是否无效下标
        /// </summary>
        /// <param name="index"></param>
        /// <returns></returns>
        private bool IsInvalid(int index)
        {
            if (m_Variables == null) return true;

            return index < 0 || index >= m_Variables.Length;
        }

        /// <summary>
        /// 根据下标获取一个数据
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="index"></param>
        /// <returns></returns>
        public T GetData<T>(int index)
        {
            if (IsInvalid(index))
                return default(T);

            return m_Variables[index].GetData<T>();
        }

        /// <summary>
        /// 根据下标获取数据类型
        /// </summary>
        /// <param name="index"></param>
        /// <returns></returns>
        public Type GetType(int index)
        {
            if (IsInvalid(index))
                return null;

            return m_Variables[index].GetType();
        }

        public override void Dispose()
        {
            if (m_Variables == null) return;
            foreach (var variable in m_Variables)
            {
                variable.Dispose();
                Pool.Release(variable);
            }

            m_Variables = null;
        }

        public static CommonEventArg Get(params object[] objects)
        {
            CommonEventArg args = Pool.Get<CommonEventArg>();
            int length = objects.Length;
            args.m_Variables = new DataVariable[length];
            for (int i = 0; i < length; i++)
            {
                args.m_Variables[i] = Pool.Get<DataVariable>();
                args.m_Variables[i].SetData(objects[i]);
            }
            return args;
        }
    }

}

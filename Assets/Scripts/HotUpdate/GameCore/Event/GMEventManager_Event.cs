using LGameFramework.GameBase.Pool;
using System;

namespace GameCore
{
    public sealed partial class GMEventManager
    {
        /// <summary>
        /// �¼� ��ת��
        /// </summary>
        private sealed class Event
        {
            private FMEventRegister m_Id;
            public FMEventRegister Id { get { return m_Id; } }

            private object m_Sender;
            public object Sender { get { return m_Sender; } }

            private GameEventArg m_EventArgs;
            public GameEventArg EventArgs { get { return m_EventArgs; } }

            public static Event Get(FMEventRegister id, object sender, GameEventArg e)
            {
                Event eventNode = Pool<Event>.Get();
                eventNode.m_Id = id;
                eventNode.m_Sender = sender;
                eventNode.m_EventArgs = e;
                return eventNode;
            }

            public void Dispose()
            {
                m_Id = FMEventRegister.NONE;
                m_Sender = null;
                m_EventArgs.Dispose();
                m_EventArgs = null;
                Pool<Event>.Release(this);
            }
        }

    }

    public abstract class GameEventArg : EventArgs
    {
        public abstract void Dispose();
    }
}
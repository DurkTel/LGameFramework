using LGameFramework.GameBase.Pool;
using System;

namespace GameCore
{
    public sealed partial class FMEventManager
    {
        /// <summary>
        /// 事件 中转器
        /// </summary>
        private sealed class Event
        {
            private FMEventRegister m_Id;
            public FMEventRegister Id { get { return m_Id; } }

            private object m_Sender;
            public object Sender { get { return m_Sender; } }

            private EventArgs m_EventArgs;
            public EventArgs EventArgs { get { return m_EventArgs; } }

            public static Event Get(FMEventRegister id, object sender, EventArgs e)
            {
                Event eventNode = Pool<Event>.Get();
                eventNode.m_Id = id;
                eventNode.m_Sender = sender;
                eventNode.m_EventArgs = e;
                return eventNode;
            }

            public void Clear()
            {
                m_Id = FMEventRegister.NONE;
                m_Sender = null;
                Pool<EventArgs>.Release(m_EventArgs);
                m_EventArgs = null;
            }
        }

    }
}

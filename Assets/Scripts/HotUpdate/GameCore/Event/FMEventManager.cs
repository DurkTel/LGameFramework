using LGameFramework.GameBase.Pool;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    /// <summary>
    /// 事件派发管理
    /// </summary>
    public sealed partial class FMEventManager : FrameworkModule
    {
        /// <summary>
        /// 所有注册的委托
        /// </summary>
        private Dictionary<int, LinkedList<EventHandler<EventArgs>>> m_EventHandlers;

        /// <summary>
        /// 临时变量
        /// </summary>
        private LinkedList<EventHandler<EventArgs>> m_TempLinked;

        /// <summary>
        /// 当前执行到的委托
        /// </summary>
        private LinkedListNode<EventHandler<EventArgs>> m_CurrentNode;

        /// <summary>
        /// 需要派发的委托队列
        /// </summary>
        private Queue<Event> m_EventQueue;

        /// <summary>
        /// 需要派发的委托
        /// </summary>
        private Event m_Event;

        /// <summary>
        /// 计时器
        /// </summary>
        private System.Diagnostics.Stopwatch m_StopWatch;

        /// <summary>
        /// 派发一个委托的一帧最大耗时ms 超过该值下一委托将在下一帧进行
        /// </summary>
        private long m_AsyncMaxTime;
        internal override int Priority => 1;
        internal override GameObject GameObject { get; set; }
        internal override Transform Transform { get; set; }

        public int AllEventHandlersCout { get { return m_EventHandlers.Count; } }

        internal override void OnInit()
        {
            m_EventHandlers = new Dictionary<int, LinkedList<EventHandler<EventArgs>>>();
            m_EventQueue = new Queue<Event>();
            m_StopWatch = new System.Diagnostics.Stopwatch();
            m_AsyncMaxTime = 30; //30ms 约 30fps/s
        }

        internal override void Update(float deltaTime, float unscaledTime)
        {
            while (m_Event != null || m_EventQueue.Count > 0)
            {
                m_Event ??= m_EventQueue.Dequeue();
                if (HandleEvent(m_Event.Sender, m_Event, true))
                {
                    m_Event.Clear();
                    Pool<Event>.Release(m_Event);
                    m_Event = null;
                }
            }
        }

        private bool HandleEvent(object sender, Event args, bool Async)
        {
            if (m_CurrentNode != null || m_EventHandlers.TryGetValue(args.Id, out m_TempLinked))
            {
                m_CurrentNode ??= m_TempLinked.First;
                m_StopWatch.Start();
                while (m_CurrentNode != null) 
                {
                    m_CurrentNode.Value(sender, args.EventArgs);
                    m_CurrentNode = m_CurrentNode.Next;
                    m_StopWatch.Stop();
                    //注意：分帧将下一个委托分离 单个委托方法耗时过大无用
                    if (Async && m_StopWatch.ElapsedMilliseconds > m_AsyncMaxTime && m_CurrentNode != null)
                        return false;
                }
            }

            return true;
        }

        /// <summary>
        /// 注册事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="handler">委托方法</param>
        public void Register(int id, EventHandler<EventArgs> handler)
        {
            if (handler == null)
            {
                Debug.LogError("订阅事件为空");
                return;
            }

            LinkedList<EventHandler<EventArgs>> linked;
            if (!m_EventHandlers.TryGetValue(id, out linked))
            {
                linked = Pool<LinkedList<EventHandler<EventArgs>>>.Get();
                m_EventHandlers.Add(id, linked);
            }
            linked.AddLast(handler);
        }

        /// <summary>
        /// 移除事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="handler">委托方法</param>
        /// <returns>移除结果</returns>
        public bool UnRegister(int id, EventHandler<EventArgs> handler)
        {
            if (m_EventHandlers.TryGetValue(id, out var linked))
            {
                linked.Remove(handler);
                if (linked.Count <= 0)
                    Pool<LinkedList<EventHandler<EventArgs>>>.Release(linked);
                return true;
            }
            return false;
        }

        /// <summary>
        /// 发布事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="sender">发布者</param>
        /// <param name="args">事件参数</param>
        public void Dispatch(int id, object sender, EventArgs args)
        {
            Event eventNode = Event.Get(id, sender, args);
            m_EventQueue.Enqueue(eventNode);
        }

        /// <summary>
        /// 立即发布事件（当前帧执行）
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="sender">发布者</param>
        /// <param name="args">事件参数</param>
        public void DispatchImmediately(int id, object sender, EventArgs args)
        {
            Event eventNode = Event.Get(id, sender, args);
            HandleEvent(sender, eventNode, false);
        }

        /// <summary>
        /// 是否存在该事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <returns>是否存在</returns>
        public bool Exist(int id)
        {
            return m_EventHandlers.ContainsKey(id); 
        }
    }
}

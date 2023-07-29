using LGameFramework.GameBase.Pool;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    /// <summary>
    /// �¼��ɷ�����
    /// </summary>
    public sealed partial class FMEventManager : FrameworkModule
    {
        /// <summary>
        /// ����ע���ί��
        /// </summary>
        private Dictionary<int, LinkedList<EventHandler<EventArgs>>> m_EventHandlers;

        /// <summary>
        /// ��ʱ����
        /// </summary>
        private LinkedList<EventHandler<EventArgs>> m_TempLinked;

        /// <summary>
        /// ��ǰִ�е���ί��
        /// </summary>
        private LinkedListNode<EventHandler<EventArgs>> m_CurrentNode;

        /// <summary>
        /// ��Ҫ�ɷ���ί�ж���
        /// </summary>
        private Queue<Event> m_EventQueue;

        /// <summary>
        /// ��Ҫ�ɷ���ί��
        /// </summary>
        private Event m_Event;

        /// <summary>
        /// ��ʱ��
        /// </summary>
        private System.Diagnostics.Stopwatch m_StopWatch;

        /// <summary>
        /// �ɷ�һ��ί�е�һ֡����ʱms ������ֵ��һί�н�����һ֡����
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
            m_AsyncMaxTime = 30; //30ms Լ 30fps/s
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
                    //ע�⣺��֡����һ��ί�з��� ����ί�з�����ʱ��������
                    if (Async && m_StopWatch.ElapsedMilliseconds > m_AsyncMaxTime && m_CurrentNode != null)
                        return false;
                }
            }

            return true;
        }

        /// <summary>
        /// ע���¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="handler">ί�з���</param>
        public void Register(int id, EventHandler<EventArgs> handler)
        {
            if (handler == null)
            {
                Debug.LogError("�����¼�Ϊ��");
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
        /// �Ƴ��¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="handler">ί�з���</param>
        /// <returns>�Ƴ����</returns>
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
        /// �����¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="sender">������</param>
        /// <param name="args">�¼�����</param>
        public void Dispatch(int id, object sender, EventArgs args)
        {
            Event eventNode = Event.Get(id, sender, args);
            m_EventQueue.Enqueue(eventNode);
        }

        /// <summary>
        /// ���������¼�����ǰִ֡�У�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="sender">������</param>
        /// <param name="args">�¼�����</param>
        public void DispatchImmediately(int id, object sender, EventArgs args)
        {
            Event eventNode = Event.Get(id, sender, args);
            HandleEvent(sender, eventNode, false);
        }

        /// <summary>
        /// �Ƿ���ڸ��¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <returns>�Ƿ����</returns>
        public bool Exist(int id)
        {
            return m_EventHandlers.ContainsKey(id); 
        }
    }
}

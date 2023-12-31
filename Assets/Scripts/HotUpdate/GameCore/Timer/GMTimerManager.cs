using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using LGameFramework.GameBase;

namespace LGameFramework.GameCore.Timer
{
    public class GMTimerManager : FrameworkModule
    {
        private Dictionary<int, Timer> m_AllTimer;

        private Dictionary<int, Timer> m_WaitAdd;

        private List<int> m_WaitRemove;
        public override int Priority => 3;

        public override void OnInit()
        {
            m_AllTimer = new Dictionary<int, Timer>();
            m_WaitAdd = new Dictionary<int, Timer>();
            m_WaitRemove = new List<int>();
        }

        public override void Update(float deltaTime, float unscaledTime)
        {
            if (m_WaitRemove.Count > 0)
            {
                Timer timer;
                foreach (var key in m_WaitRemove)
                {
                    if (m_AllTimer.TryGetValue(key, out timer))
                    {
                        Pool.Release(timer);
                        m_AllTimer.Remove(key);
                    }
                }
                m_WaitRemove.Clear();
            }

            if (m_WaitAdd.Count > 0)
            {
                foreach (var item in m_WaitAdd)
                {
                    m_AllTimer.Add(item.Key, item.Value);
                }
                m_WaitAdd.Clear();
            }

            if (m_AllTimer.Count > 0)
            {
                foreach (var item in m_AllTimer)
                {
                    if (item.Value.Update())
                        m_WaitRemove.Add(item.Key);
                }
            }

        }

        private Timer SetTimer(TimerType timerType, UnityAction callback, float delay, float interval, int duration)
        {
            Timer timer = Pool.Get<Timer>();
            timer.SetData(timerType, callback, delay, interval, duration);
            return timer;
        }

        internal int AddTimer(UnityAction callback, float delay = 0f, float interval = 1f, int duration = 1)
        {
            Timer timer = SetTimer(TimerType.NOMAL, callback, delay, interval, duration);
            int id = timer.Id;
            m_WaitAdd.Add(id, timer);

            return id;
        }

        internal int AddFrame(UnityAction callback, float delay = 0f, float interval = 1f, int duration = 1)
        {
            Timer timer = SetTimer(TimerType.FRAME, callback, delay, interval, duration);
            int id = timer.Id;
            m_WaitAdd.Add(id, timer);

            return id;
        }

        internal void DelTimer(int id)
        {
            m_WaitRemove.Add(id);
        }


        public enum TimerType
        {
            FRAME,
            NOMAL
        }

        public class Timer : IDisposable
        {
            private static int m_ID = 99;

            public int Id { get { return ++m_ID; } }

            private TimerType m_TimerType;

            private float m_NextTime;

            private float m_NextFrame;

            private UnityAction m_Callback;

            private float m_Delay;

            private float m_Interval;

            private int m_Duration;

            private int m_AllCount;

            public Timer SetData(TimerType timerType, UnityAction callback, float delay, float interval, int duration)
            {
                this.m_TimerType = timerType;
                this.m_Callback = callback;
                this.m_Delay = delay;
                this.m_Interval = interval;
                this.m_Duration = duration;
                this.m_NextFrame = Time.frameCount + this.m_Delay + Mathf.Max(0, this.m_Interval);
                this.m_NextTime = Time.realtimeSinceStartup + this.m_Delay + Mathf.Max(0, this.m_Interval);
                return this;
            }

            public void Dispose()
            {
                this.m_Callback = null;
                this.m_Delay = 0f;
                this.m_Interval = 0f;
                this.m_Duration = 0;
                this.m_NextFrame = 0f;
                this.m_NextTime = 0f;
                this.m_AllCount = 0;
            }

            public bool Update()
            {
                if (m_TimerType == TimerType.FRAME)
                {
                    if (Time.frameCount >= m_NextFrame)
                    {
                        m_Callback.Invoke();
                        m_AllCount++;
                        m_NextFrame = Time.frameCount + Mathf.Max(0, m_Interval);
                    }
                }
                else
                {
                    if (Time.realtimeSinceStartup >= m_NextTime)
                    {
                        m_Callback.Invoke();
                        m_AllCount++;
                        m_NextTime = Time.realtimeSinceStartup + Mathf.Max(0, m_Interval);
                    }
                }

                if (m_Duration > 0 && m_AllCount >= m_Duration)
                {
                    Dispose();
                    return true;
                }

                return false;
            }

        }
    }
}
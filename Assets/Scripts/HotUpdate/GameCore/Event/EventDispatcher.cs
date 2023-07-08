using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;


public class EventDispatcher : SingletonBase<EventDispatcher>
{
    public interface IEventInfo
    {

    }

    /// <summary>
    /// 对事件信息进行封装
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class EventInfo<T> : IEventInfo
    {
        public UnityAction<T> actions;

        public EventInfo(UnityAction<T> action)
        {
            actions += action;
        }
    }

    public class EventInfo : IEventInfo
    {
        public UnityAction actions;

        public EventInfo(UnityAction action)
        {
            actions += action;
        }
    }

    private Dictionary<EventDefine, IEventInfo> m_EventDic = new Dictionary<EventDefine, IEventInfo>();

    /// <summary>
    /// 添加需要传递参数的事件监听
    /// </summary>
    /// <param name="eventName">事件的名字</param>
    /// <param name="action">准备用来处理事件 的委托函数</param>
    public void AddEventListener<T>(EventDefine eventName, UnityAction<T> action)
    {
        if (m_EventDic.ContainsKey(eventName))
        {
            (m_EventDic[eventName] as EventInfo<T>).actions += action;
        }
        else
        {
            m_EventDic.Add(eventName, new EventInfo<T>(action));
        }
    }

    /// <summary>
    /// 监听不需要参数传递的事件
    /// </summary>
    /// <param name="eventName"></param>
    /// <param name="action"></param>
    public void AddEventListener(EventDefine eventName, UnityAction action)
    {
        if (m_EventDic.ContainsKey(eventName))
        {
            (m_EventDic[eventName] as EventInfo).actions += action;
        }
        else
        {
            m_EventDic.Add(eventName, new EventInfo(action));
        }
    }


    /// <summary>
    /// 移除对应的事件监听
    /// </summary>
    /// <param name="eventName">事件的名字</param>
    /// <param name="action">对应之前添加的委托函数</param>
    public void RemoveEventListener<T>(EventDefine eventName, UnityAction<T> action)
    {
        if (m_EventDic.ContainsKey(eventName))
            (m_EventDic[eventName] as EventInfo<T>).actions -= action;
    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="eventName"></param>
    /// <param name="action"></param>
    public void RemoveEventListener(EventDefine eventName, UnityAction action)
    {
        if (m_EventDic.ContainsKey(eventName))
            (m_EventDic[eventName] as EventInfo).actions -= action;
    }

    /// <summary>
    /// 
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="eventName"></param>
    /// <param name="info"></param>
    public void DispatchEvent<T>(EventDefine eventName, T info)
    {
        if (m_EventDic.ContainsKey(eventName))
        {
            if ((m_EventDic[eventName] as EventInfo<T>).actions != null)
                (m_EventDic[eventName] as EventInfo<T>).actions.Invoke(info);
        }
    }

    /// <summary>
    /// 事件触发（不需要参数的）
    /// </summary>
    /// <param name="name"></param>
    public void DispatchEvent(EventDefine eventName)
    {
        if (m_EventDic.ContainsKey(eventName))
        {
            if ((m_EventDic[eventName] as EventInfo).actions != null)
                (m_EventDic[eventName] as EventInfo).actions.Invoke();
        }
    }

    /// <summary>
    /// 清空事件中心
    /// 主要用在 场景切换时
    /// </summary>
    public void Clear()
    {
        m_EventDic.Clear();
    }
}

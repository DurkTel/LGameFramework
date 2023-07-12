using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.Events;

public abstract class AssetLoader : IEnumerator
{

    protected string m_AssetName;
    public string assetName { get { return m_AssetName; } }

    protected System.Type m_AssetType;
    public System.Type assetType { get { return m_AssetType; } }

    protected bool m_IsDone;
    public bool isDone { get { return m_IsDone; } }

    protected float m_Progress; 
    public float progress { get { return m_Progress; } }

    protected int m_Priority;
    public int priority { get { return m_Priority; } }

    protected bool m_Async;
    public bool async { get { return m_Async; } }

    protected bool m_Error;
    public bool error { get { return m_Error; } }

    protected Object m_RawObject;

    protected AssetCache.RawObjectInfo m_RawObjectInfo;
    public AssetCache.RawObjectInfo rawObjectInfo { get { return m_RawObjectInfo; } }

    public object Current { get; }

    public UnityAction<float> onProgress;

    public UnityAction<AssetLoader> onComplete;

    public AssetLoader(string assetName)
    {
        this.m_AssetName = assetName;
        this.m_AssetType = typeof(Object);
    }
    public AssetLoader(string assetName, System.Type assetType, bool async)
    {
        this.m_AssetName = assetName;
        this.m_AssetType = assetType;
        this.m_Async = async;
    }

    public abstract void Update();

    public abstract string GetAssetPath(string assetName);

    public abstract void Dispose();

    public virtual T GetRawObject<T>() where T : Object
    {
        if (!m_IsDone)
        {
            Debug.LogError("资源未加载完成，就尝试获取源对象");
            return null;    
        }
        
        AssetCache.RawObjectInfo rawObject = AssetCache.GetRawObject(m_AssetName);
        return rawObject as T;
    }

    public virtual T GetInstantiate<T>() where T : Object
    {
        if (!m_IsDone)
        {
            Debug.LogError("资源未加载完成，就尝试获取源对象");
            return null;
        }

        AssetCache.RawObjectInfo rawObject = AssetCache.GetRawObject(m_AssetName);
        Object instance = Object.Instantiate(rawObject.rawObject);
        AssetCache.AddInstanceObject(instance.GetInstanceID(), instance, rawObject);

        return instance as T;
    }

    public bool MoveNext()
    {
        return !m_IsDone;
    }

    public void Reset()
    {
        
    }
}

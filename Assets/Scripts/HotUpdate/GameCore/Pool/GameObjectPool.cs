using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class GameObjectPool : MonoBehaviour
{
    public class GameObjectInfo
    {
        public GameObject gameObject;

        public float releaseTime;
    }

    private Dictionary<string, Queue<GameObjectInfo>> m_PoolMap = new Dictionary<string, Queue<GameObjectInfo>>();

    private List<string> m_ReleaseKeyList = new List<string>();

    private int m_FrameCount;
    
    private float m_LifeDuration = 300;

    private Vector3 m_ReleasePos = new Vector3(9999, 9999, 9999);

    public UnityAction<GameObject> constructor;

    public UnityAction<GameObject> destructor;

    public void Get(string assetName, UnityAction<GameObject> callBack)
    {
        if (m_PoolMap.TryGetValue(assetName, out Queue<GameObjectInfo> queue) && queue.Count > 0)
        {
            GameObjectInfo info = queue.Dequeue();
            if (queue.Count < 1)
            {
                QueuePool<GameObjectInfo>.Release(m_PoolMap[assetName]);
                m_PoolMap.Remove(assetName);
            }
            callBack?.Invoke(info.gameObject);
            constructor?.Invoke(info.gameObject);
        }
        else
        {
            AssetLoader loader = AssetUtility.LoadAssetAsync<GameObject>(assetName);
            loader.onComplete = (p) =>
            {
                GameObject go = p.GetInstantiate<GameObject>();
                callBack?.Invoke(go);
                constructor?.Invoke(go);
            };
        }
    }

    public void Release(string assetName, GameObject item)
    {
        item.transform.SetParent(transform);
        item.transform.position = m_ReleasePos;
        if (m_PoolMap.ContainsKey(assetName))
        {
            GameObjectInfo info = Pool<GameObjectInfo>.Get();
            info.gameObject = item;
            info.releaseTime = Time.realtimeSinceStartup;
            destructor?.Invoke(item);
            m_PoolMap[assetName].Enqueue(info);
        }
        else
        {
            Queue<GameObjectInfo> queue = QueuePool<GameObjectInfo>.Get();
            GameObjectInfo info = Pool<GameObjectInfo>.Get();
            info.gameObject = item;
            info.releaseTime = Time.realtimeSinceStartup;
            destructor?.Invoke(item);
            queue.Enqueue(info);
            m_PoolMap.Add(assetName, queue);
        }
    }


    void Update()
    {
        if (++m_FrameCount % 60 == 0 && m_PoolMap.Count > 0)
        {
            float nowTime = Time.realtimeSinceStartup;

            foreach (var pool in m_PoolMap)
            {
                if (pool.Value.Count > 0)
                {
                    GameObjectInfo info = pool.Value.Peek();
                    while (nowTime - info.releaseTime >= m_LifeDuration)
                    {
                        pool.Value.Dequeue();

                        Destroy(info.gameObject);
                        info.gameObject = null;
                        info.releaseTime = -1;
                        Pool<GameObjectInfo>.Release(info);

                        if (pool.Value.Count > 0)
                            info = pool.Value.Peek();
                        else
                            break;

                        if (pool.Value.Count < 1)
                            m_ReleaseKeyList.Add(pool.Key);
                    }

                }
            }

            if (m_ReleaseKeyList.Count > 0)
            {
                foreach (string key in m_ReleaseKeyList)
                {
                    QueuePool<GameObjectInfo>.Release(m_PoolMap[key]);
                    m_PoolMap.Remove(key);
                }
                m_ReleaseKeyList.Clear();
            }
        }
    }
}

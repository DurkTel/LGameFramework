using LGameFramework.GameBase;
using LGameFramework.GameCore.Asset;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore
{
    /// <summary>
    /// 游戏实例化物体的对象池
    /// </summary>
    public class GameObjectPool : MonoBehaviour
    {
        public class GameObjectInfo
        {
            public GameObject GameObject;

            public float ReleaseTime;
        }

        private static Dictionary<string, Queue<GameObjectInfo>> m_PoolMap = new Dictionary<string, Queue<GameObjectInfo>>();

        private List<string> m_ReleaseKeyList = new List<string>();

        private int m_FrameCount;

        private readonly float m_LifeDuration = 10f;

        private static Vector3 m_ReleasePos = new Vector3(9999, 9999, 9999);

        private static Transform m_Transform;

        public static void OnInit()
        {
            GameObject pool = new GameObject("GameObjectPool");
            pool.AddComponent<GameObjectPool>();
            m_Transform = pool.transform;
            DontDestroyOnLoad(pool);
        }

        public static void GetAsset(string assetName, UnityAction<GameObject> callBack)
        {
            if (m_PoolMap.TryGetValue(assetName, out Queue<GameObjectInfo> queue) && queue.Count > 0)
            {
                GameObjectInfo info = queue.Dequeue();
                if (queue.Count < 1)
                {
                    QueuePool<GameObjectInfo>.Release(m_PoolMap[assetName]);
                    m_PoolMap.Remove(assetName);
                }
                callBack?.Invoke(info.GameObject);
            }
            else
            {
                Loader loader = AssetUtility.LoadAssetAsync<GameObject>(assetName);
                loader.onComplete = (p) =>
                {
                    GameObject go = p.GetInstantiate<GameObject>();
                    callBack?.Invoke(go);
                };
            }
        }

        public static GameObject GetGameObject(string assetName)
        {
            if (m_PoolMap.TryGetValue(assetName, out Queue<GameObjectInfo> queue) && queue.Count > 0)
            {
                GameObjectInfo info = queue.Dequeue();
                if (queue.Count < 1)
                {
                    QueuePool<GameObjectInfo>.Release(m_PoolMap[assetName]);
                    m_PoolMap.Remove(assetName);
                }

                return info.GameObject;
            }
            else
            {
                GameObject go = new GameObject();
                return go;
            }
        }

        public static void Release(string assetName, GameObject item)
        {
            item.transform.SetParent(m_Transform);
            item.transform.localPosition = m_ReleasePos;
            if (m_PoolMap.ContainsKey(assetName))
            {
                GameObjectInfo info = Pool.Get<GameObjectInfo>();
                info.GameObject = item;
                info.ReleaseTime = Time.realtimeSinceStartup;
                m_PoolMap[assetName].Enqueue(info);
            }
            else
            {
                Queue<GameObjectInfo> queue = QueuePool<GameObjectInfo>.Get();
                GameObjectInfo info = Pool.Get<GameObjectInfo>();
                info.GameObject = item;
                info.ReleaseTime = Time.realtimeSinceStartup;
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
                        while (nowTime - info.ReleaseTime >= m_LifeDuration)
                        {
                            pool.Value.Dequeue();

                            AssetUtility.Destroy(info.GameObject);
                            info.GameObject = null;
                            info.ReleaseTime = -1;
                            Pool.Release(info);

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
}

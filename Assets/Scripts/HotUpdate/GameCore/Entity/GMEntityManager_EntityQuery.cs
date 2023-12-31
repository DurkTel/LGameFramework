using System;
using System.Collections;
using System.Collections.Generic;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        /// <summary>
        /// 实体查询
        /// </summary>
        public class EntityQuery
        {
            /// <summary>
            /// 缓存查询语句
            /// </summary>
            private static readonly Dictionary<Guid, IQueryEnumerable> m_QueryDict = new Dictionary<Guid, IQueryEnumerable>();

            public interface IQueryEnumerable
            {
                public void UpdateEnumerable();
            }

            public static QueryEnumerable<T1> Query<T1>() where T1 : class, IComponent, new()
            {
                Guid uid = typeof(T1).GUID;
                if (!m_QueryDict.TryGetValue(uid, out IQueryEnumerable query))
                {
                    query = new QueryEnumerable<T1>();
                    query.UpdateEnumerable();
                    m_QueryDict.Add(uid, query);
                }

                return (QueryEnumerable<T1>)query;
            }

            public struct QueryEnumerable<T1> : IEnumerable<T1>, IQueryEnumerable where T1 : class, IComponent, new()
            {
                private List<T1> m_LinkedList;
                public IEnumerator<T1> GetEnumerator()
                {
                    foreach (var item in m_LinkedList)
                        yield return item;
                }

                IEnumerator IEnumerable.GetEnumerator()
                {
                    foreach (var item in m_LinkedList)
                        yield return item;
                }

                public void UpdateEnumerable()
                {
                    var group = EntityUtility.GetComponentGroup<T1>();
                    m_LinkedList ??= new List<T1>();
                    m_LinkedList.Clear();

                    foreach (var com in group.AllComponents.Values)
                        m_LinkedList.Add((T1)com);
                }
            }

            public static QueryEnumerable<T1, T2> Query<T1, T2>() where T2 : class, IComponent, new() where T1 : class, IComponent, new()
            {
                Guid uid = typeof((T1, T2)).GUID;
                if (!m_QueryDict.TryGetValue(uid, out IQueryEnumerable query))
                {
                    query = new QueryEnumerable<T1, T2>();
                    query.UpdateEnumerable();
                    m_QueryDict.Add(uid, query);
                }

                return (QueryEnumerable<T1, T2>)query;
            }

            public struct QueryEnumerable<T1, T2> : IEnumerable<(T1, T2)>, IQueryEnumerable where T1 : class, IComponent, new() where T2 : class, IComponent, new()
            {
                private List<(T1, T2)> m_LinkedList;
                public IEnumerator<(T1, T2)> GetEnumerator()
                {
                    foreach (var item in m_LinkedList)
                        yield return item;
                }

                IEnumerator IEnumerable.GetEnumerator()
                {
                    foreach (var item in m_LinkedList)
                        yield return item;
                }

                public void UpdateEnumerable()
                {
                    var group1 = EntityUtility.GetComponentGroup<T1>();
                    var group2 = EntityUtility.GetComponentGroup<T2>();

                    m_LinkedList ??= new List<(T1, T2)>();
                    m_LinkedList.Clear();

                    foreach (var pair in group1.AllComponents)
                    {
                        if (group2.TryGetComponent<T2>(pair.Key, out var com))
                            m_LinkedList.Add((pair.Value as T1, com as T2));
                    }
                }
            }

        }

    }
}

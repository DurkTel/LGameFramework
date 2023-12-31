using LGameFramework.GameBase;
using System;
using System.Collections;
using System.Collections.Generic;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        public interface IComponentGroup
        { 
            Type Type { get; }

            int Count { get; }

        }

        public sealed class ComponentGroup : IComponentGroup
        {
            /// <summary>
            /// �ȴ�����ʱ��
            /// </summary>
            private const float c_DestroyTime = 5f;
            /// <summary>
            /// �����б�
            /// </summary>
            private readonly Queue m_ReleaseQueue;
            /// <summary>
            /// �ȴ�����
            /// </summary>
            private readonly List<int> m_WaitToRelease;
            /// <summary>
            /// �´����ٵ�ʱ��
            /// </summary>
            private float m_NextDestroyTime;
            /// <summary>
            /// ����ӵ�и������ʵ��
            /// </summary>
            private readonly Dictionary<int, IComponent> m_AllComponents;
            public Dictionary<int, IComponent> AllComponents { get { return m_AllComponents; } }
            /// <summary>
            /// ��Ҫ֡���µ����
            /// </summary>
            private readonly Dictionary<int, IUpdateComponent> m_UpdateComponents;
            /// <summary>
            /// ��Ҫ�̶����µ����
            /// </summary>
            private readonly Dictionary<int, IFixedUpdateComponent> m_FixedUpdateComponents;
            /// <summary>
            /// ���������
            /// </summary>
            private readonly Type m_Type;
            public Type Type { get { return m_Type; } }
            /// <summary>
            /// �ж���ʵ��ӵ�и����
            /// </summary>
            public int Count { get { return m_AllComponents.Count; } }

            public ComponentGroup(Type type)
            {
                m_NextDestroyTime = c_DestroyTime;
                m_Type = type;
                m_AllComponents = new Dictionary<int, IComponent>();
                m_UpdateComponents = new Dictionary<int, IUpdateComponent>();
                m_FixedUpdateComponents = new Dictionary<int, IFixedUpdateComponent>();
                m_ReleaseQueue = new Queue();
                m_WaitToRelease = new List<int>();
            }

            public void Update(float deltaTime, float unscaledTime)
            {
                foreach (var component in m_UpdateComponents.Values)
                {
                    if (!component.Enabled) continue;
                    component.Update(deltaTime, unscaledTime);
                }
            }

            public void FixedUpdate(float fixedDeltaTime, float unscaledTime)
            {
                foreach (var component in m_FixedUpdateComponents.Values)
                {
                    if (!component.Enabled) continue;
                    component.FixedUpdate(fixedDeltaTime, unscaledTime);
                }
            }

            public void LateUpdate(float deltaTime, float unscaleDeltaTime)
            {
                if (m_WaitToRelease.Count > 0)
                {
                    foreach (var id in m_WaitToRelease)
                    { 
                        m_AllComponents.Remove(id);

                        if (m_UpdateComponents.ContainsKey(id))
                            m_UpdateComponents.Remove(id);

                        if (m_FixedUpdateComponents.ContainsKey(id))
                            m_FixedUpdateComponents.Remove(id);
                    }

                    m_WaitToRelease.Clear();
                }

                if (m_ReleaseQueue.Count <= 0) return;

                m_NextDestroyTime -= unscaleDeltaTime;

                if (m_NextDestroyTime <= 0)
                {
                    m_NextDestroyTime = c_DestroyTime;
                    var component = m_ReleaseQueue.Dequeue() as IComponent;
                    component.Dispose();
                }
            }

            /// <summary>
            /// ���Ի�ȡʵ�����
            /// </summary>
            /// <param name="entity">ʵ��</param>
            /// <param name="component">���</param>
            /// <returns>�Ƿ����</returns>
            internal bool TryGetComponent<T>(int entity, out T component) where T : class, IComponent, new()
            {
                component = null;
                if (!m_AllComponents.TryGetValue(entity, out var Icomponent))
                    return false;
                component = Icomponent as T;

                return true;
            }

            /// <summary>
            /// ���ʵ����� ���ͨ�����ʽ������ʵ�� �������õ���������ܵ��ڷ��ʹ���
            /// </summary>
            /// <param name="id">ʵ��Id</param>
            /// <returns></returns>
            internal IComponent AddComponent(int entity)
            {
                if (!m_AllComponents.TryGetValue(entity, out var component))
                {
                    if (m_ReleaseQueue.Count > 0)
                    {
                        m_NextDestroyTime = c_DestroyTime;
                        component = m_ReleaseQueue.Dequeue() as IComponent;
                    }
                    else
                        component = Pool.Get(m_Type) as IComponent;

                    m_AllComponents.Add(entity, component);

                    if (component is IUpdateComponent update)
                        m_UpdateComponents.Add(entity, update);

                    if (component is IFixedUpdateComponent fixedUpdate)
                        m_FixedUpdateComponents.Add(entity, fixedUpdate);
                }

                return component;
            }

            /// <summary>
            /// ���ʵ�����
            /// </summary>
            /// <param name="entity">ʵ��</param>
            internal T AddComponent<T>(int entity) where T : class, IComponent, new()
            {
                if (!TryGetComponent(entity, out T component))
                {
                    if (m_ReleaseQueue.Count > 0)
                    {
                        m_NextDestroyTime = c_DestroyTime;
                        component = m_ReleaseQueue.Dequeue() as T;
                    }
                    else
                        component = Pool.Get<T>();

                    m_AllComponents.Add(entity, component);

                    if (component is IUpdateComponent update)
                        m_UpdateComponents.Add(entity, update);

                    if (component is IFixedUpdateComponent fixedUpdate)
                        m_FixedUpdateComponents.Add(entity, fixedUpdate);
                }

                return component;
            }

            /// <summary>
            /// �Ƴ�ʵ�����
            /// </summary>
            /// <param name="entity">ʵ��</param>
            /// <returns>�Ƿ��Ƴ��ɹ�</returns>
            internal bool RemoveComponent(int entity)
            {
                if (!m_AllComponents.TryGetValue(entity, out var Icomponent) && !m_WaitToRelease.Contains(entity))
                    return false;

                //�Ƴ����
                m_WaitToRelease.Add(entity);
                //������ն��� ��������ʱ�� ��ֹ��AOI�߽����غ�����ɵķ��� ���ٺʹ���
                m_ReleaseQueue.Enqueue(Icomponent);
                Icomponent.Release();

                return true;
            }
        }
    }
}

using LGameFramework.GameBase;
using System;
using System.Collections.Generic;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {

        #region √¸¡Ó

        internal void SendCommand<T>(int entity, bool usePool) where T : Command, new()
        {
            T command = usePool ? Pool.Get<T>() : new T();
            command.OnInit(entity, m_EntityAttributes[entity]);
            command.Execute();
            command.Dispose();

            if (usePool)
                Pool.Release(command);
        }

        internal void SendCommand<T, V>(int entity, V value, bool usePool) where T : Command<V>, new() where V : struct
        {
            T command = usePool ? Pool.Get<T>() : new T();
            command.OnInit(entity, m_EntityAttributes[entity]);
            command.Execute(value);
            command.Dispose();

            if (usePool)
                Pool.Release(command);
        }

        #endregion
    }

    /// <summary>
    /// ≥ÈœÛ√¸¡Ó
    /// </summary>
    public abstract class Command : ISetAttribute, IDisposable
    {
        private Dictionary<EEntityAttribute, IProperty> m_AttributeProperty;
        public Dictionary<EEntityAttribute, IProperty> AttributeProperty { get { return m_AttributeProperty; } }

        private int m_Entity;
        public int Entity { get { return m_Entity; } }

        public virtual void OnInit(int entity, Dictionary<EEntityAttribute, IProperty> attributes)
        {
            m_Entity = entity;
            m_AttributeProperty = attributes;
        }

        public abstract void Execute();

        public void Dispose()
        {
            m_Entity = -1;
            m_AttributeProperty = null;
        }
    }

    /// <summary>
    /// ≥ÈœÛ√¸¡Ó
    /// </summary>
    public abstract class Command<T> : Command where T : struct
    {
        public abstract void Execute(T value);

        public override void Execute()
        {

        }
    }
}

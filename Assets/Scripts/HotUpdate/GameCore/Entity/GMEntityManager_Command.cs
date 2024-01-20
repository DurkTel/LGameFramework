using LGameFramework.GameBase;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {

        private void HandleCommand(int entity, Command command)
        {
            command.OnInit(entity, m_EntityAttributes[entity]);
            command.Execute();
            command.Dispose();
        }

        internal void SendCommandImmediately<T>(int entity, bool usePool) where T : Command, new()
        {
            T command = usePool ? Pool.Get<T>() : new T();
            HandleCommand(entity, command);

            if (usePool)
                Pool.Release(command);
        }

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
            m_AttributeProperty = null;
        }
    }

}

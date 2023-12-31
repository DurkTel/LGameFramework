using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        internal bool SendCommand<T>(int entity) where T : ICommand, new() 
        {
            T command = new T();
            command.Entity = entity;
            return command.Execute();
        }
    }

    /// <summary>
    /// ����ӿ�
    /// </summary>
    public interface ICommand
    {
        public int Entity { get; set; }
        public bool Execute();
    }

    /// <summary>
    /// ������������ӿ�
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public interface ICommand<T>
    {
        public int Entity { get; set; }
        public bool Execute(T param);
    }

    /// <summary>
    /// ��������
    /// �������޸�ʵ�����Ե�Ψһ;��
    /// </summary>
    public abstract class AbstractCommand : ICommand
    {
        public abstract int Entity { get; set; }
        public abstract bool Execute();
        public bool Modify<T, V>(string propertyName, V value) where T : class, IDataModel, new()
        {
            T model = EntityUtility.GetDataModel<T>(Entity);
            if (model.TryGetProperty(propertyName, out var property))
            {
                (property as IModifyBindableProperty<V>).Modify(value);
                return true;
            }

            return false;
        }
    }

    /// <summary>
    /// ��������������
    /// �������޸�ʵ�����Ե�Ψһ;��
    /// </summary>
    public abstract class AbstractCommand<P> : ICommand<P>
    {
        public abstract int Entity { get; set; }
        public abstract bool Execute(P param);

        public bool Modify<T, V>(string propertyName, V value) where T : class, IDataModel, new()
        {
            T model = EntityUtility.GetDataModel<T>(Entity);
            if (model.TryGetProperty(propertyName, out var property))
            {
                (property as IModifyBindableProperty<V>).Modify(value);
                return true;
            }

            return false;
        }
    }
}

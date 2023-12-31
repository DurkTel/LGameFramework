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
    /// 命令接口
    /// </summary>
    public interface ICommand
    {
        public int Entity { get; set; }
        public bool Execute();
    }

    /// <summary>
    /// 带参数的命令接口
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public interface ICommand<T>
    {
        public int Entity { get; set; }
        public bool Execute(T param);
    }

    /// <summary>
    /// 抽象命令
    /// 命令是修改实体属性的唯一途径
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
    /// 带参数抽象命令
    /// 命令是修改实体属性的唯一途径
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

using System.Collections.Generic;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// 拥有设置数据的能力
    /// </summary>
    public interface ISetAttribute
    {
        public Dictionary<EEntityAttribute, IProperty> AttributeProperty { get; }
    }

    /// <summary>
    /// 拥有注册数据的能力
    /// </summary>
    public interface IRegisterAttribute
    {
        public Dictionary<EEntityAttribute, IProperty> AttributeProperty { get; }
    }

    public enum EEntityAttribute
    { 
        End,
    }
}

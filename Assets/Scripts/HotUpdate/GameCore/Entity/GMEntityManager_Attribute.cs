using System.Collections.Generic;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// ӵ���������ݵ�����
    /// </summary>
    public interface ISetAttribute
    {
        public Dictionary<EEntityAttribute, IProperty> AttributeProperty { get; }
    }

    /// <summary>
    /// ӵ��ע�����ݵ�����
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

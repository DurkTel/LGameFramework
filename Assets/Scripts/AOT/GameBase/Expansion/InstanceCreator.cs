using System;
using System.Collections.Generic;
using System.Linq.Expressions;

namespace LGameFramework.GameBase
{
    /// <summary>
    /// ʵ��������
    /// ͨ��Typeȥ����ʵ������ ���ܱȷ���� ��ֱ��New��
    /// </summary>
    public class InstanceCreator
    {
        private static Dictionary<Type, Func<object>> m_InstanceCreator;

        public static object Get(Type type)
        {
            if (type.IsValueType)
            {
                GameLogger.ERROR("InstanceCreator����ʵ��ʱ���������Ϊֵ����");
                return null;
            }

            m_InstanceCreator ??= new Dictionary<Type, Func<object>>();
            if (!m_InstanceCreator.TryGetValue(type, out Func<object> creator))
            {
                creator = Expression.Lambda<Func<object>>(Expression.New(type)).Compile();
                m_InstanceCreator.Add(type, creator);
            }
            return creator();
        }
    }
}

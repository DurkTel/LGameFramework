using LGameFramework.GameBase;

namespace LGameFramework.GameCore.GameEntity
{
    public static class GMEntityExtension
    {
        /// <summary>
        /// ����ʵ����������
        /// </summary>
        /// <typeparam name="T">��������</typeparam>
        /// <param name="setAttribute"></param>
        /// <param name="attribute">����ö��</param>
        /// <param name="value">����</param>
        /// <returns>�Ƿ����óɹ�</returns>
        public static bool SetProperty<T>(this ISetAttribute setAttribute, EEntityAttribute attribute, T value)
        {
            try
            {
                if (!setAttribute.AttributeProperty.TryGetValue(attribute, out IProperty property))
                {
                    GameLogger.WARNING_FORMAT("����ʵ������ʧ�ܣ�û��ע������ԣ���������{0}", attribute);
                    return false;
                }
                IPropertySet<T> setProperty = property as IPropertySet<T>;
                setProperty.Value = value;
            }
            catch (System.Exception)
            {
                //�����쳣һ�㶼������ǿתΪnull
                GameLogger.ERROR_FORMAT("����ʵ������ʧ�ܣ���������ת���쳣����������{0}��������������ͣ�{1}", attribute, typeof(T));
                throw;
            }

            return true;
        }

        /// <summary>
        /// ע��ʵ����������
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="register"></param>
        /// <param name="attribute"></param>
        public static void RegisterProperty<T>(this IRegisterAttribute register, EEntityAttribute attribute)
        {
            register.RegisterProperty<T>(attribute, default(T));
        }

        /// <summary>
        /// ע��ʵ����������
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="register"></param>
        /// <param name="attribute"></param>
        /// <param name="defaultValue"></param>
        public static void RegisterProperty<T>(this IRegisterAttribute register, EEntityAttribute attribute, T defaultValue)
        {
            if (!register.AttributeProperty.TryGetValue(attribute, out IProperty property))
            {
                property = Pool.Get<BindableProperty<T>>();
                register.AttributeProperty.Add(attribute, property);
            }

            property.DependentCount++;
        }

        /// <summary>
        /// �Ƴ�ʵ����������
        /// </summary>
        /// <param name="register"></param>
        /// <param name="attribute"></param>
        /// <returns></returns>
        public static bool UnRegisterProperty(this IRegisterAttribute register, EEntityAttribute attribute)
        {
            if (register.AttributeProperty.TryGetValue(attribute, out IProperty property))
            {
                if (--property.DependentCount <= 0)
                {
                    property.Dispose();
                    Pool.Release(property);
                    register.AttributeProperty.Remove(attribute);
                    return true;
                }
            }

            return false;
        }
    }
}

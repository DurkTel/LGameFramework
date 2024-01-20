using LGameFramework.GameBase;

namespace LGameFramework.GameCore.GameEntity
{
    public static class GMEntityExtension
    {
        /// <summary>
        /// 设置实体属性数据
        /// </summary>
        /// <typeparam name="T">数据类型</typeparam>
        /// <param name="setAttribute"></param>
        /// <param name="attribute">属性枚举</param>
        /// <param name="value">数据</param>
        /// <returns>是否设置成功</returns>
        public static bool SetProperty<T>(this ISetAttribute setAttribute, EEntityAttribute attribute, T value)
        {
            try
            {
                if (!setAttribute.AttributeProperty.TryGetValue(attribute, out IProperty property))
                {
                    GameLogger.WARNING_FORMAT("设置实体属性失败！没有注册该属性！属性名：{0}", attribute);
                    return false;
                }
                IPropertySet<T> setProperty = property as IPropertySet<T>;
                setProperty.Value = value;
            }
            catch (System.Exception)
            {
                //这里异常一般都是上面强转为null
                GameLogger.ERROR_FORMAT("设置实体属性失败！属性类型转换异常！属性名：{0}，传入的属性类型：{1}", attribute, typeof(T));
                throw;
            }

            return true;
        }

        /// <summary>
        /// 注册实体属性数据
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="register"></param>
        /// <param name="attribute"></param>
        public static void RegisterProperty<T>(this IRegisterAttribute register, EEntityAttribute attribute)
        {
            register.RegisterProperty<T>(attribute, default(T));
        }

        /// <summary>
        /// 注册实体属性数据
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
        /// 移除实体属性数据
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

namespace LGameFramework.GameBase
{
    public interface IModuleEditorHelper<T>
    {
        /// <summary>
        /// 模块源数据
        /// </summary>
        T DataSource { get; }

        /// <summary>
        /// 附加到模块
        /// </summary>
        /// <param name="source">模块</param>
        void Attach(T source);
    }
}

namespace LGameFramework.GameBase
{
    public interface IModuleEditorHelper<T>
    {
        /// <summary>
        /// ģ��Դ����
        /// </summary>
        T DataSource { get; }

        /// <summary>
        /// ���ӵ�ģ��
        /// </summary>
        /// <param name="source">ģ��</param>
        void Attach(T source);
    }
}

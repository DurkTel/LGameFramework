using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// ʵ����� ����һ��ʵ���������ӵ�е����Է���
    /// </summary>
    public interface IComponent
    {
        /// <summary>
        /// ����ʵ��
        /// </summary>
        int Entity { get; }

        /// <summary>
        /// ��Ϸ����
        /// </summary>
        GameObject GameObject { get; }

        /// <summary>
        /// �任���
        /// </summary>
        Transform Transform { get; }

        /// <summary>
        /// �������
        /// </summary>
        bool Enabled { get; }

        /// <summary>
        /// ��ʼ��
        /// </summary>
        void OnInit(int entity);

        /// <summary>
        /// ע������ģ��
        /// </summary>
        IDataModel RegisterModel<T>() where T : class, IDataModel, new();

        /// <summary>
        /// ��ȡ����
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <typeparam name="V"></typeparam>
        /// <param name="property"></param>
        /// <returns></returns>
        V GetPropertyValue<T, V>(string property) where T : class, IDataModel, new();

        /// <summary>
        /// ����
        /// </summary>
        void Release();

        /// <summary>
        /// ����
        /// </summary>
        void Dispose();
    }

    /// <summary>
    /// ��Ҫ֡����
    /// </summary>
    public interface IUpdateComponent
    {
        /// <summary>
        /// �������
        /// </summary>
        bool Enabled { get; }

        /// <summary>
        /// ֡����
        /// </summary>
        /// <param name="deltaTime">֡���¼��</param>
        /// <param name="unscaledTime">֡���¼��������ʱ�����ű���Ӱ��</param>
        void Update(float deltaTime, float unscaledTime);
    }

    /// <summary>
    /// ��Ҫ�̶�����
    /// </summary>
    public interface IFixedUpdateComponent
    {
        /// <summary>
        /// �������
        /// </summary>
        bool Enabled { get; }

        /// <summary>
        /// �̶�����
        /// </summary>
        /// <param name="fixedDeltaTime">�̶����¼��</param>
        /// <param name="unscaledTime">��Ϸ��ʼ�������е�ʱ�䣬����ʱ�����ű���Ӱ��</param>
        void FixedUpdate(float fixedDeltaTime, float unscaledTime);
    }
}

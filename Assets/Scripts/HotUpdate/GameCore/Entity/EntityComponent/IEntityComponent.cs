using UnityEngine;

namespace GameCore.Entity
{
    /// <summary>
    /// ʵ�����
    /// </summary>
    public interface IEntityComponent
    {
        /// <summary>
        /// ������ȼ�
        /// </summary>
        int Priority { get; }

        /// <summary>
        /// ����ʵ��
        /// </summary>
        Entity Entity { get; }

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
        bool Enabled { get; set; }

        /// <summary>
        /// ��ʼ��
        /// </summary>
        void OnInit(Entity entity);

        /// <summary>
        /// ֡����
        /// </summary>
        /// <param name="deltaTime">֡���¼��</param>
        /// <param name="unscaledTime">֡���¼��������ʱ�����ű���Ӱ��</param>
        void Update(float deltaTime, float unscaledTime);

        /// <summary>
        /// �̶�����
        /// </summary>
        /// <param name="fixedDeltaTime">�̶����¼��</param>
        /// <param name="unscaledTime">��Ϸ��ʼ�������е�ʱ�䣬����ʱ�����ű���Ӱ��</param>
        void FixedUpdate(float fixedDeltaTime, float unscaledTime);

        /// <summary>
        /// ����
        /// </summary>
        void Release();
    }
}

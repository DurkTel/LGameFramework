using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    /// <summary>
    /// ��Ϸ���ģ��
    /// </summary>
    public abstract class FrameworkModule
    {
        /// <summary>
        /// ģ�����ȼ�
        /// </summary>
        internal abstract int priority { get; }

        /// <summary>
        /// ��Ϸ����
        /// </summary>
        internal abstract GameObject gameObject { get; set; }

        /// <summary>
        /// �任���
        /// </summary>
        internal abstract Transform transform { get; set; }

        /// <summary>
        /// ��ʼ��
        /// </summary>
        internal abstract void OnInit();

        /// <summary>
        /// ֡����
        /// </summary>
        /// <param name="deltaTime">֡���¼��</param>
        /// <param name="unscaledTime">֡���¼��������ʱ�����ű���Ӱ��</param>
        internal abstract void Update(float deltaTime, float unscaledTime);

        /// <summary>
        /// �ӳ�֡����
        /// </summary>
        /// <param name="deltaTime">֡���¼��</param>
        /// <param name="unscaledTime">��Ϸ��ʼ�������е�ʱ�䣬����ʱ�����ű���Ӱ��</param>
        internal virtual void LateUpdate(float deltaTime, float unscaleDeltaTime) { }


        /// <summary>
        /// �̶�����
        /// </summary>
        /// <param name="fixedDeltaTime">�̶����¼��</param>
        /// <param name="unscaledTime">��Ϸ��ʼ�������е�ʱ�䣬����ʱ�����ű���Ӱ��</param>
        internal virtual void FixedUpdate(float fixedDeltaTime, float unscaledTime) { }

        /// <summary>
        /// ����
        /// </summary>
        internal virtual void OnDestroy() { }
    }
}

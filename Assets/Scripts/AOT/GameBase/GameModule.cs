using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase
{
    public abstract class GameModule 
    {
        /// <summary>
        /// ģ�����ȼ�
        /// </summary>
        public abstract int Priority { get; }

        /// <summary>
        /// ��Ϸ����
        /// </summary>
        public GameObject GameObject { get; set; }

        /// <summary>
        /// �任���
        /// </summary>
        public Transform Transform { get; set; }

        /// <summary>
        /// mono
        /// </summary>
        public MonoBehaviour MonoBehaviour { get; set; }

        /// <summary>
        /// ��ʼ��
        /// </summary>
        public abstract void OnInit();

        /// <summary>
        /// ֡����
        /// </summary>
        /// <param name="deltaTime">֡���¼��</param>
        /// <param name="unscaledTime">֡���¼��������ʱ�����ű���Ӱ��</param>
        public virtual void Update(float deltaTime, float unscaledTime) { }

        /// <summary>
        /// �ӳ�֡����
        /// </summary>
        /// <param name="deltaTime">֡���¼��</param>
        /// <param name="unscaleDeltaTime">��Ϸ��ʼ�������е�ʱ�䣬����ʱ�����ű���Ӱ��</param>
        public virtual void LateUpdate(float deltaTime, float unscaleDeltaTime) { }


        /// <summary>
        /// �̶�����
        /// </summary>
        /// <param name="fixedDeltaTime">�̶����¼��</param>
        /// <param name="unscaledTime">��Ϸ��ʼ�������е�ʱ�䣬����ʱ�����ű���Ӱ��</param>
        public virtual void FixedUpdate(float fixedDeltaTime, float unscaledTime) { }

        /// <summary>
        /// �����ű�ʱ
        /// </summary>
        public virtual void OnEnable() { }

        /// <summary>
        /// �رսű�ʱ
        /// </summary>
        public virtual void OnDisable() { }

        /// <summary>
        /// ����
        /// </summary>
        public virtual void OnDestroy() { }

        /// <summary>
        /// ����Я��
        /// </summary>
        /// <param name="methodName"></param>
        /// <returns></returns>
        public Coroutine StartCoroutine(string methodName)
        {
            return MonoBehaviour.StartCoroutine(methodName);
        }

        /// <summary>
        /// ����Я��
        /// </summary>
        /// <param name="methodName"></param>
        /// <param name="value"></param>
        /// <returns></returns>
        public Coroutine StartCoroutine(string methodName, object value)
        {
            return MonoBehaviour.StartCoroutine(methodName, value);
        }

        /// <summary>
        /// ����Я��
        /// </summary>
        /// <param name="routine"></param>
        /// <returns></returns>
        public Coroutine StartCoroutine(IEnumerator routine)
        {
            return MonoBehaviour.StartCoroutine(routine);
        }

        /// <summary>
        /// ֹͣЯ��
        /// </summary>
        /// <param name="routine"></param>
        public void StopCoroutine(IEnumerator routine)
        {
            MonoBehaviour.StopCoroutine(routine);
        }

        /// <summary>
        /// ֹͣЯ��
        /// </summary>
        /// <param name="routine"></param>
        public void StopCoroutine(Coroutine routine)
        {
            MonoBehaviour.StopCoroutine(routine);
        }

        /// <summary>
        /// ֹͣЯ��
        /// </summary>
        /// <param name="methodName"></param>
        public void StopCoroutine(string methodName)
        {
            MonoBehaviour.StopCoroutine(methodName);
        }

        /// <summary>
        /// ֹͣ����Я��
        /// </summary>
        public void StopAllCoroutines()
        {
            MonoBehaviour.StopAllCoroutines();
        }
    }
}

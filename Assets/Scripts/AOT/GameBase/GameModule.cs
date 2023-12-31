using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase
{
    public abstract class GameModule 
    {
        /// <summary>
        /// 模块优先级
        /// </summary>
        public abstract int Priority { get; }

        /// <summary>
        /// 游戏物体
        /// </summary>
        public GameObject GameObject { get; set; }

        /// <summary>
        /// 变换组件
        /// </summary>
        public Transform Transform { get; set; }

        /// <summary>
        /// mono
        /// </summary>
        public MonoBehaviour MonoBehaviour { get; set; }

        /// <summary>
        /// 初始化
        /// </summary>
        public abstract void OnInit();

        /// <summary>
        /// 帧更新
        /// </summary>
        /// <param name="deltaTime">帧更新间隔</param>
        /// <param name="unscaledTime">帧更新间隔，不受时间缩放比例影响</param>
        public virtual void Update(float deltaTime, float unscaledTime) { }

        /// <summary>
        /// 延迟帧更新
        /// </summary>
        /// <param name="deltaTime">帧更新间隔</param>
        /// <param name="unscaleDeltaTime">游戏开始后所运行的时间，不受时间缩放比例影响</param>
        public virtual void LateUpdate(float deltaTime, float unscaleDeltaTime) { }


        /// <summary>
        /// 固定更新
        /// </summary>
        /// <param name="fixedDeltaTime">固定更新间隔</param>
        /// <param name="unscaledTime">游戏开始后所运行的时间，不受时间缩放比例影响</param>
        public virtual void FixedUpdate(float fixedDeltaTime, float unscaledTime) { }

        /// <summary>
        /// 启动脚本时
        /// </summary>
        public virtual void OnEnable() { }

        /// <summary>
        /// 关闭脚本时
        /// </summary>
        public virtual void OnDisable() { }

        /// <summary>
        /// 销毁
        /// </summary>
        public virtual void OnDestroy() { }

        /// <summary>
        /// 开启携程
        /// </summary>
        /// <param name="methodName"></param>
        /// <returns></returns>
        public Coroutine StartCoroutine(string methodName)
        {
            return MonoBehaviour.StartCoroutine(methodName);
        }

        /// <summary>
        /// 开启携程
        /// </summary>
        /// <param name="methodName"></param>
        /// <param name="value"></param>
        /// <returns></returns>
        public Coroutine StartCoroutine(string methodName, object value)
        {
            return MonoBehaviour.StartCoroutine(methodName, value);
        }

        /// <summary>
        /// 开启携程
        /// </summary>
        /// <param name="routine"></param>
        /// <returns></returns>
        public Coroutine StartCoroutine(IEnumerator routine)
        {
            return MonoBehaviour.StartCoroutine(routine);
        }

        /// <summary>
        /// 停止携程
        /// </summary>
        /// <param name="routine"></param>
        public void StopCoroutine(IEnumerator routine)
        {
            MonoBehaviour.StopCoroutine(routine);
        }

        /// <summary>
        /// 停止携程
        /// </summary>
        /// <param name="routine"></param>
        public void StopCoroutine(Coroutine routine)
        {
            MonoBehaviour.StopCoroutine(routine);
        }

        /// <summary>
        /// 停止携程
        /// </summary>
        /// <param name="methodName"></param>
        public void StopCoroutine(string methodName)
        {
            MonoBehaviour.StopCoroutine(methodName);
        }

        /// <summary>
        /// 停止所有携程
        /// </summary>
        public void StopAllCoroutines()
        {
            MonoBehaviour.StopAllCoroutines();
        }
    }
}

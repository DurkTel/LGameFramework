using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// ʵ��ģ��ӿ�
    /// </summary>
    public interface IArchetype
    {
        /// <summary>
        /// ��ʼ��ʵ������
        /// </summary>
        /// <param name="entity"></param>
        void OnInitData(int entity);
        /// <summary>
        /// �Զ������
        /// </summary>
        /// <param name="entity"></param>
        void OnCustomOperation(int entity);
        /// <summary>
        /// ��Ҫ���ص����
        /// </summary>
        /// <returns></returns>
        Type[] GetComponents();
        /// <summary>
        /// ʵ���ǩ
        /// </summary>
        /// <returns></returns>
        EntityTags GetTags();
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    public interface IFrameworkEditorHelper<T>
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

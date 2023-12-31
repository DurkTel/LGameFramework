using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore
{
    public enum GMEventRegister
    {
        NONE,

        #region ����
        /// <summary>
        /// ����ַ�-��ť
        /// </summary>
        INPUT_DISPATCH_HANDLE,

        #endregion


        #region ����
        /// <summary>
        /// ��ʼ���س���
        /// </summary>
        SCENE_LOAD_BEGIN,
        /// <summary>
        /// ���س������
        /// </summary>
        SCENE_LOAD_COMPLETE,

        #endregion
    }
}

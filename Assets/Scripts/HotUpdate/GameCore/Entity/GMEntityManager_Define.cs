using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        /// <summary>
        /// ���ִ�����ȼ�
        /// </summary>
        public static Dictionary<Type, int> s_ComponentPriority = new Dictionary<Type, int>()
        {
            //[typeof(AOIComponent)] = 1,
            //[typeof(CullingComponent)] = 2,
            //[typeof(InputResponseComponent)] = 3,
        };

        /// <summary>
        /// ��ʵ���������
        /// �ֳ�
        /// </summary>
        public static Dictionary<ChildBindingBone, string> s_SubEntityHandBone = new Dictionary<ChildBindingBone, string>()
        {
            [ChildBindingBone.Normal] = "",
            [ChildBindingBone.WeaponL] = "Prop_R",
            [ChildBindingBone.WeaponR] = "Prop_R",
        };

        /// <summary>
        /// ��ʵ���������
        /// �����
        /// </summary>
        public static Dictionary<ChildBindingBone, string> s_SubEntityKeepBone = new Dictionary<ChildBindingBone, string>()
        {
            [ChildBindingBone.Normal] = "",
            [ChildBindingBone.WeaponL] = "Prop_R_Keep",
            [ChildBindingBone.WeaponR] = "Prop_R_Keep",
        };
    }

    /// <summary>
    /// ʵ���ǩ
    /// </summary>
    public enum EntityTags
    { 
        /// <summary>
        /// û�б�ǩ
        /// </summary>
        Untagged,
        /// <summary>
        /// ����
        /// </summary>
        MainPlayer,
        /// <summary>
        /// �������
        /// </summary>
        Player,
        /// <summary>
        /// ����
        /// </summary>
        Monster,
        /// <summary>
        /// ����
        /// </summary>
        Weapon,
        /// <summary>
        /// ����
        /// </summary>
        Prop,
    }

    /// <summary>
    /// ��ʵ���ö��
    /// </summary>
    public enum ChildBindingBone
    {
        /// <summary>
        /// ��ͨ
        /// </summary>
        Normal,
        /// <summary>
        /// ��������
        /// </summary>
        WeaponL,
        /// <summary>
        /// ��������
        /// </summary>
        WeaponR,
        /// <summary>
        /// ����
        /// </summary>
        Prop,
    }

    /// <summary>
    /// ʵ��״̬
    /// �ı�ʵ��Ķ�����ʶ
    /// </summary>
    public enum EntityState
    { 
        /// <summary>
        /// ͨ��
        /// </summary>
        Normal,
        /// <summary>
        /// ս��״̬
        /// </summary>
        Fight,
        /// <summary>
        /// �ֳ���
        /// </summary>
        CarryUp,
        Death
    }
}

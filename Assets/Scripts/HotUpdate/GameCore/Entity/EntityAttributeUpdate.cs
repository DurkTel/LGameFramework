using LGameFramework.GameBase;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// 注册需要更新的属性方法
    /// </summary>
    public class EntityAttributeUpdate
    {
        private Dictionary<string, UnityAction<int, object>> m_UpdateFunc;

        public void OnRegister()
        {
            m_UpdateFunc = new Dictionary<string, UnityAction<int, object>>();
            m_UpdateFunc[EntityAttribute.c_ControllerName] = OnUpdateController;
        }

        public void OnUpdate(string attr, int id, object arg)
        {
            if (m_UpdateFunc.TryGetValue(attr, out var action))
                action.Invoke(id, arg);
        }

        private void OnUpdateController(int id, object arg)
        {
            //var anicom = EntityUtility.GetComponent<AnimationComponent>(id);
            //if (anicom == null) return;
            //anicom.AnimatorControllerName = (string)arg;
        }
    }
}

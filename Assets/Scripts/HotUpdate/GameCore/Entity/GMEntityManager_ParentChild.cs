using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {

        #region 父子实体

        /// <summary>
        /// 附加子实体
        /// </summary>
        /// <param name="parentID">父实体ID</param>
        /// <param name="childID">子实体ID</param>
        internal void AttachChild(int parentID, int childID)
        {
            if (!m_ChildEntitys.TryGetValue(parentID, out var tree))
            {
                tree = TreePool<int>.Get();
                tree.SetData(parentID);
                m_ChildEntitys.Add(parentID, tree);
            }

            if (!tree.Contains(childID))
            {
                var child = TreePool<int>.Get();
                child.SetData(childID);
                tree.Add(child);
                m_ChildEntitys.Add(childID, child);
            }
        }

        /// <summary>
        /// 解除子实体
        /// </summary>
        /// <param name="parentID">父实体ID</param>
        /// <param name="childID">子实体ID</param>
        /// <returns></returns>
        internal bool RelieveChild(int parentID, int childID)
        {
            if (!m_ChildEntitys.TryGetValue(parentID, out var tree))
                return false;

            if (!tree.Contains(childID))
                return false;

            tree.Remove(childID);

            //检查一下父子是否都需要回收
            IsNeedRelease(parentID);
            IsNeedRelease(childID);

            return true;
        }

        /// <summary>
        /// 父子实体对象是否需要回收
        /// </summary>
        /// <param name="id"></param>
        private bool IsNeedRelease(int id)
        {
            if (!m_ChildEntitys.TryGetValue(id, out var tree))
                return false;

            //叶子节点为0 且没有父节点 直接回收
            if (tree.Count < 0 && tree.Parent == null)
            {
                TreePool<int>.Release(tree);
                m_ChildEntitys.Remove(id);
                return true;
            }

            return false;
        }

        #endregion
    }
}

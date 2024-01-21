using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {

        #region ����ʵ��

        /// <summary>
        /// ������ʵ��
        /// </summary>
        /// <param name="parentID">��ʵ��ID</param>
        /// <param name="childID">��ʵ��ID</param>
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
        /// �����ʵ��
        /// </summary>
        /// <param name="parentID">��ʵ��ID</param>
        /// <param name="childID">��ʵ��ID</param>
        /// <returns></returns>
        internal bool RelieveChild(int parentID, int childID)
        {
            if (!m_ChildEntitys.TryGetValue(parentID, out var tree))
                return false;

            if (!tree.Contains(childID))
                return false;

            tree.Remove(childID);

            //���һ�¸����Ƿ���Ҫ����
            IsNeedRelease(parentID);
            IsNeedRelease(childID);

            return true;
        }

        /// <summary>
        /// ����ʵ������Ƿ���Ҫ����
        /// </summary>
        /// <param name="id"></param>
        private bool IsNeedRelease(int id)
        {
            if (!m_ChildEntitys.TryGetValue(id, out var tree))
                return false;

            //Ҷ�ӽڵ�Ϊ0 ��û�и��ڵ� ֱ�ӻ���
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

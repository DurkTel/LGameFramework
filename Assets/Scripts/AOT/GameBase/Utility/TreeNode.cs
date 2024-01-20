using System;
using System.Collections;
using System.Collections.Generic;

namespace LGameFramework.GameBase
{
    public class TreeNode<T> : ICollection<TreeNode<T>>
    {
        public T Data { get; set; }
        public TreeNode<T> Parent { get; set; }

        private List<TreeNode<T>> m_Children;
        public List<TreeNode<T>> Children { get { return m_Children; } }
        public int Count { get { return Children.Count; } }
        public bool IsReadOnly { get { return false; } }

        public TreeNode(T data) 
        {
            Data = data;
            m_Children = new List<TreeNode<T>>(0);
        }

        public void Add(TreeNode<T> item)
        {
            if (Contains(item))
                return;

            item.Parent = this;
            Children.Add(item); 
        }

        public bool Remove(TreeNode<T> item)
        {
            if (!Contains(item))
                return false;

            item.Parent = null;
            Children.Remove(item);
            return true;
        }

        public void Clear()
        {
            Children.Clear();
        }

        public bool Contains(TreeNode<T> item)
        {
            return Children.Contains(item);
        }

        public void CopyTo(TreeNode<T>[] array, int arrayIndex)
        {
            Children.CopyTo(array, arrayIndex);
        }

        public IEnumerator<TreeNode<T>> GetEnumerator()
        {
            return new Enumerator(this);
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return new Enumerator(this);
        }


        public struct Enumerator : IEnumerator<TreeNode<T>>, IDisposable, IEnumerator
        {
            private TreeNode<T> m_Node;

            private int m_Index;
            public TreeNode<T> Current { get { return m_Node.Children[m_Index]; } }
            object IEnumerator.Current { get { return Current; } }

            public Enumerator(TreeNode<T> node)
            {
                m_Node = node;
                m_Index = -1;
            }


            public void Dispose()
            {
                m_Node = null;
            }

            public bool MoveNext()
            {
                m_Index++;
                return m_Index < m_Node.Count;
            }

            public void Reset()
            {
                m_Index = -1;
            }
        }
    }

}

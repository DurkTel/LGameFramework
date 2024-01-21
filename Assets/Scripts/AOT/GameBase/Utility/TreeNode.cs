using System;
using System.Collections;
using System.Collections.Generic;

namespace LGameFramework.GameBase
{
    public class TreeNode<T> : ICollection<TreeNode<T>>, IList<TreeNode<T>>
    {
        public T Data { get; set; }
        public TreeNode<T> Parent { get; set; }

        private List<TreeNode<T>> m_Children;
        public int Count { get { return m_Children.Count; } }
        public bool IsReadOnly { get { return false; } }

        public TreeNode<T> this[int index] { get { return m_Children[index]; } set { m_Children[index] = value; } }

        public TreeNode(T data) 
        {
            Data = data;
            m_Children = new List<TreeNode<T>>(0);
        }

        public TreeNode()
        { 
            
        }

        public void SetData(T data)
        {
            Data = data;
            m_Children = new List<TreeNode<T>>(0);
        }

        public void Add(TreeNode<T> item)
        {
            if (Contains(item))
                return;

            item.Parent = this;
            m_Children.Add(item); 
        }

        public bool Remove(TreeNode<T> item)
        {
            if (!Contains(item))
                return false;

            item.Parent = null;
            m_Children.Remove(item);
            return true;
        }

        public bool Remove(T item)
        {
            int index = IndexOf(item);
            if (index == -1)
                return false;

            var child = m_Children[index];

            child.Parent = null;
            m_Children.Remove(child);
            return true;
        }

        public void Clear()
        {
            Data = default(T);
            m_Children.Clear();
        }

        public bool Contains(TreeNode<T> item)
        {
            return m_Children.Contains(item);
        }

        public bool Contains(T item)
        {
            foreach (var value in this)
            {
                if (value.Equals(item))
                    return true;
            }

            return false;
        }

        public void CopyTo(TreeNode<T>[] array, int arrayIndex)
        {
            m_Children.CopyTo(array, arrayIndex);
        }

        public int IndexOf(TreeNode<T> item)
        {
            return m_Children.IndexOf(item);
        }

        public int IndexOf(T item)
        {
            for (int i = 0; i < m_Children.Count; i++)
            {
                if (item.Equals(m_Children[i].Data))
                    return i;
            }

            return -1;
        }

        public void Insert(int index, TreeNode<T> item)
        {
            m_Children.Insert(index, item);
        }

        public void RemoveAt(int index)
        {
            if (index < 0 || index >= m_Children.Count)
                return;

            m_Children.RemoveAt(index);
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
            public TreeNode<T> Current { get { return m_Node.m_Children[m_Index]; } }
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

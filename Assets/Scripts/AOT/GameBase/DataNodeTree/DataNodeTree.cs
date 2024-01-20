using Codice.CM.Common.Tree;
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace LGameFramework.GameBase.Data
{
    public partial class DataNodeTree
    {
        /// <summary>
        /// �ָ��ʶ
        /// </summary>
        private const char c_SplitSeparator = '.';

        /// <summary>
        /// ���ڵ�
        /// </summary>
        private readonly DataNode m_RootNode;

        public DataNodeTree()
        {
            m_RootNode = DataNode.Create("/Root", null);
        }

        /// <summary>
        /// ƴ��·��
        /// </summary>
        /// <param name="path"></param>
        /// <param name="paths"></param>
        /// <returns></returns>
        public static string GetPathCombine(string path, params string[] paths)
        { 
            foreach (string path2 in paths)
                path = path + c_SplitSeparator + path2;

            return path;
        }

        /// <summary>
        /// ·���Ƿ���Ч
        /// </summary>
        /// <param name="fullPath"></param>
        /// <returns></returns>
        public bool IsInvalid(string fullPath)
        {
            if (string.IsNullOrEmpty(fullPath))
                return true;

            return false;
        }

        /// <summary>
        /// ��ȡ�ӽڵ�
        /// </summary>
        /// <param name="fullPath"></param>
        /// <returns></returns>
        public DataNode TryGetNode(string fullPath)
        {
            if (IsInvalid(fullPath))
                return null;

            string[] spltPath = fullPath.Split(c_SplitSeparator, StringSplitOptions.RemoveEmptyEntries);

            DataNode parent = m_RootNode;
            DataNode child = null;
            foreach (string name in spltPath)
            {
                child = parent.GetChildNode(name);
                child ??= DataNode.Create(name, parent);

                parent = child;
            }

            return child;
        }

        /// <summary>
        /// ��ȡ����
        /// </summary>
        /// <typeparam name="T">��������</typeparam>
        /// <returns>����ֵ</returns>
        public T GetData<T>(string fullPath)
        {
            DataNode node = TryGetNode(fullPath);
            if (node == null)
            {
                GameLogger.DEBUG_FORMAT("{0}������·����Ϊ�����ݽڵ㣬��ȷ��·���Ƿ���ȷ���Ѿ�������ֵ��", fullPath);
                return default(T);
            }

            return node.GetData<T>();
        }

        /// <summary>
        /// ��������
        /// </summary>
        /// <typeparam name="T">��������</typeparam>
        /// <param name="value">����ֵ</param>
        public void SetData<T>(string fullPath, T value)
        {
            DataNode node = TryGetNode(fullPath);
            if (node == null)
            {
                GameLogger.DEBUG_FORMAT("������Ч·����", fullPath);
                return;
            }
            TryGetNode(fullPath).SetData<T>(value);
        }

        /// <summary>
        /// �������
        /// </summary>
        /// <param name="fullPath"></param>
        public void Clear(string fullPath)
        {
            DataNode node = TryGetNode(fullPath);
            if (node == null)
            {
                GameLogger.DEBUG_FORMAT("������Ч·����", fullPath);
                return;
            }
            if (node.Parent != null)
                node.Parent.Childs.Remove(node.Name);
            
            node.Clear();
        }

    }
}

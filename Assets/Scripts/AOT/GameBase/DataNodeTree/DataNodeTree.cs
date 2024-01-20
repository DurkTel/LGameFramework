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
        /// 分割标识
        /// </summary>
        private const char c_SplitSeparator = '.';

        /// <summary>
        /// 根节点
        /// </summary>
        private readonly DataNode m_RootNode;

        public DataNodeTree()
        {
            m_RootNode = DataNode.Create("/Root", null);
        }

        /// <summary>
        /// 拼接路径
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
        /// 路径是否无效
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
        /// 获取子节点
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
        /// 获取数据
        /// </summary>
        /// <typeparam name="T">数据类型</typeparam>
        /// <returns>数据值</returns>
        public T GetData<T>(string fullPath)
        {
            DataNode node = TryGetNode(fullPath);
            if (node == null)
            {
                GameLogger.DEBUG_FORMAT("{0}该数据路径下为空数据节点，请确认路径是否正确或已经正常赋值！", fullPath);
                return default(T);
            }

            return node.GetData<T>();
        }

        /// <summary>
        /// 设置数据
        /// </summary>
        /// <typeparam name="T">数据类型</typeparam>
        /// <param name="value">数据值</param>
        public void SetData<T>(string fullPath, T value)
        {
            DataNode node = TryGetNode(fullPath);
            if (node == null)
            {
                GameLogger.DEBUG_FORMAT("输入无效路径！", fullPath);
                return;
            }
            TryGetNode(fullPath).SetData<T>(value);
        }

        /// <summary>
        /// 清除数据
        /// </summary>
        /// <param name="fullPath"></param>
        public void Clear(string fullPath)
        {
            DataNode node = TryGetNode(fullPath);
            if (node == null)
            {
                GameLogger.DEBUG_FORMAT("输入无效路径！", fullPath);
                return;
            }
            if (node.Parent != null)
                node.Parent.Childs.Remove(node.Name);
            
            node.Clear();
        }

    }
}

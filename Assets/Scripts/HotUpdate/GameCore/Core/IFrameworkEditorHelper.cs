using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    public interface IFrameworkEditorHelper<T>
    {
        /// <summary>
        /// 模块源数据
        /// </summary>
        T DataSource { get; }

        /// <summary>
        /// 附加到模块
        /// </summary>
        /// <param name="source">模块</param>
        void Attach(T source);
    }
}

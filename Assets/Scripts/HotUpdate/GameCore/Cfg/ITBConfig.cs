using Luban;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.Config
{
    public interface ITBConfig
    {
        public void OnInit(ByteBuf _buf);
    }
}

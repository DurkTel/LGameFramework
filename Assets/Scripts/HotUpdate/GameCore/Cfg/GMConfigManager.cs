using Luban;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.Config
{
    public class GMConfigManager : FrameworkModule
    {
        private Dictionary<Type, ITBConfig> m_AllConfigCache;

        public override int Priority => 0;

        public override void OnInit()
        {
            m_AllConfigCache = new Dictionary<Type, ITBConfig>();
        }

        private ByteBuf LoadByteBuf(string file)
        {
            TextAsset asset = AssetUtility.LoadAsset<TextAsset>(file);
            return new ByteBuf(asset.bytes);
        }

        public T GetConfig<T>() where T : ITBConfig, new()
        {
            ITBConfig cache = null;
            Type type = typeof(T);
            if (!m_AllConfigCache.TryGetValue(type, out cache))
            {
                string cfgName = type.Name.ToLower() + ".bytes";
                cache = new T();
                cache.OnInit(LoadByteBuf(cfgName));
                m_AllConfigCache.Add(type, cache);
            }

            return (T)cache;
        }
    }
}

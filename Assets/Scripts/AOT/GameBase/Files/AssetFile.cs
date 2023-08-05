using System;
using System.Collections.Generic;
using System.IO;

namespace LGameFramework.GameBase
{
    [System.Serializable]
    public class AssetFileInfo
    {
        /// <summary>
        /// 资源名称
        /// </summary>
        public string assetName;

        /// <summary>
        /// 所属AB包名
        /// </summary>
        public string bundleName;

        public static AssetFileInfo GetAssetFile(string assetName, string bundleName)
        {
            AssetFileInfo file = new AssetFileInfo();
            file.assetName = Path.GetFileName(assetName);
            file.bundleName = Path.GetFileName(bundleName) ;
            return file;
        }
    }


    [System.Serializable]
    public class AssetBundleInfo
    {
        /// <summary>
        /// 首包资源表示初始包体自带的资源
        /// 启动更新资源表示在游戏启动时检测更新的资源
        /// 扩展资源表示用到的时候再去下载
        /// </summary>
        [Flags]
        public enum AssetFileFlag : int
        {
            /// <summary>
            /// 首包资源
            /// </summary>
            Build = 1,
            /// <summary>
            /// 代码资源
            /// </summary>
            Dll = 2,
            /// <summary>
            /// 启动更新资源
            /// </summary>
            LaunchDownload = 4,
            /// <summary>
            /// 扩展资源
            /// </summary>
            ExtendDLC = 8,
        }

        /// <summary>
        /// 所属AB包名
        /// </summary>
        public string bundleName;

        /// <summary>
        /// 资源路径
        /// </summary>
        public string assetPath;

        /// <summary>
        /// 资源MD5码记录
        /// </summary>
        public string md5Code;

        /// <summary>
        /// 资源大小
        /// </summary>
        public int size;

        /// <summary>
        /// 加载优先级
        /// </summary>
        public int priority;

        /// <summary>
        /// Crc校验值
        /// </summary>
        public uint crc;

        /// <summary>
        /// 该AB包依赖的其他AB包名
        /// </summary>
        public string[] dependencieBundleNames;

        /// <summary>
        /// 该AB包包含的资源
        /// </summary>
        public string[] allFiles;

        /// <summary>
        /// 资源标识
        /// </summary>
        public AssetFileFlag fileFlag = AssetFileFlag.Build;

        public static AssetBundleInfo GetAssetBundleInfo(string bundleName, string assetPath, string fullPath)
        {
            assetPath = assetPath.Replace("\\", "/");
            fullPath = fullPath.Replace("\\", "/");
            AssetBundleInfo file = new AssetBundleInfo();
            file.bundleName = Path.GetFileName(bundleName);
            file.assetPath = assetPath;
            file.md5Code = Utility.GetMD5(fullPath);
            file.size = Utility.GetFileSize(fullPath);
            return file;
        }
    }
}

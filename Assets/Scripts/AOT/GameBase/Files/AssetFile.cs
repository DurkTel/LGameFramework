using System.Collections.Generic;
using System.IO;

namespace LGameFramework.GameBase
{
    [System.Serializable]
    public class AssetFile
    {
        /// <summary>
        /// 首包资源表示初始包体自带的资源
        /// 启动更新资源表示在游戏启动时检测更新的资源
        /// 扩展资源表示用到的时候再去下载
        /// </summary>
        public enum AssetFileFlag : int
        {
            /// <summary>
            /// 首包资源
            /// </summary>
            Build = 0,
            /// <summary>
            /// 代码资源
            /// </summary>
            Dll = 1,
            /// <summary>
            /// 启动更新资源
            /// </summary>
            LaunchDownload = 2,
            /// <summary>
            /// 扩展资源
            /// </summary>
            ExtendDLC = 4,
        }

        /// <summary>
        /// 资源名称
        /// </summary>
        public string assetName;

        /// <summary>
        /// 资源路径
        /// </summary>
        public string assetPath;

        /// <summary>
        /// 所属AB包名
        /// </summary>
        public string bundleName;

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
        /// 该资源依赖的其他AB包名
        /// </summary>
        public List<string> dependencieBundleNames;

        /// <summary>
        /// 资源标识
        /// </summary>
        public AssetFileFlag fileFlag = AssetFileFlag.Build;

        public static AssetFile GetAssetFile(string assetName, string assetPath)
        {
            assetPath = assetPath.Replace("\\", "/");
            AssetFile file = new AssetFile();
            file.assetName = Path.GetFileName(assetName);
            file.assetPath = assetPath;
            file.md5Code = Utility.GetMD5(assetPath);
            file.size = Utility.GetFileSize(assetPath);
            return file;
        }
    }

}

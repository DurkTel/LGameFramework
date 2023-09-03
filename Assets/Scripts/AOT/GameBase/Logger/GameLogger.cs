using System;
using System.IO;
using System.Text;
using System.Threading;
using UnityEngine;

namespace LGameFramework.GameBase
{
    public class GameLogger
    {
        public enum GameLoggerLevel : byte
        {
            /// <summary>
            /// ����
            /// </summary>
            Debug,
            /// <summary>
            /// ��Ϣ
            /// </summary>
            Info,
            /// <summary>
            /// ����
            /// </summary>
            Warning,
            /// <summary>
            /// ����
            /// </summary>
            Error,
            /// <summary>
            /// ���ش���
            /// </summary>
            Fatal,
            /// <summary>
            /// ��¼
            /// </summary>
            Record,
            /// <summary>
            /// �ر�
            /// </summary>
            None,
        }

        private static GameLoggerLevel s_LoggerLevel = GameLoggerLevel.Debug;

        private static int s_MainThreadId;

        private static int s_FrameCount;

        private static StringBuilder s_StringBuilder = new StringBuilder();

        /// <summary>
        /// ���ش���ɫ�ַ���
        /// </summary>
        /// <param name="message"></param>
        /// <param name="color"></param>
        /// <returns></returns>
        public static string GetColorStr(object message, Color color)
        {
            if (color == default) //Ĭ����ɫ���ÿ�
                color = Color.white;

            return string.Format("<color=#{0}>{1}</color>", ColorUtility.ToHtmlStringRGB(color), message);
        }

        /// <summary>
        /// ��ȡ��ӡͷ��Ϣ
        /// </summary>
        /// <returns></returns>
        public static string GetLogggerHead(GameLoggerLevel loggerLevel)
        {
            s_StringBuilder.Length = 0;

            if (s_MainThreadId == Thread.CurrentThread.ManagedThreadId)
                s_FrameCount = Time.frameCount;

            s_StringBuilder.Append("[");
            s_StringBuilder.Append(DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss fff ��"));
            s_StringBuilder.Append(s_FrameCount);
            s_StringBuilder.Append("��] ");
            s_StringBuilder.Append(loggerLevel.ToString() + "��");
            return s_StringBuilder.ToString();
        }

        /// <summary>
        /// ����̨��ӡ
        /// </summary>
        /// <param name="loggerLevel"></param>
        /// <param name="message"></param>
        /// <param name="color"></param>
        private static void PRINT(GameLoggerLevel loggerLevel, object message, Color color = default)
        {
            if (s_LoggerLevel <= loggerLevel)
                Debug.Log(GetLogggerHead(loggerLevel) + GetColorStr(message, color));
        }

        /// <summary>
        /// ���Դ�ӡ
        /// </summary>
        /// <param name="message"></param>
        public static void DEBUG(object message, Color color = default)
        {
            PRINT(GameLoggerLevel.Debug, message, color);
        }

        /// <summary>
        /// ���Դ�ӡ
        /// </summary>
        /// <param name="format"></param>
        /// <param name="args"></param>
        public static void DEBUG_FORMAT(string format, params object[] args)
        {
            DEBUG(string.Format(format, args));
        }

        /// <summary>
        /// ���Դ�ӡ
        /// </summary>
        /// <param name="format"></param>
        /// <param name="color"></param>
        /// <param name="args"></param>
        public static void DEBUG_FORMAT(string format, Color color, params object[] args)
        {
            DEBUG(string.Format(format, args), color);
        }

        /// <summary>
        /// ��Ϣ��ӡ
        /// </summary>
        /// <param name="message"></param>
        public static void INFO(object message, Color color = default)
        {
            PRINT(GameLoggerLevel.Info, message, color);
        }

        /// <summary>
        /// ��Ϣ��ӡ
        /// </summary>
        /// <param name="format"></param>
        /// <param name="args"></param>
        public static void INFO_FORMAT(string format, params object[] args)
        {
            INFO(string.Format(format, args));
        }

        /// <summary>
        /// ��Ϣ��ӡ
        /// </summary>
        /// <param name="format"></param>
        /// <param name="color"></param>
        /// <param name="args"></param>
        public static void INFO_FORMAT(string format, Color color, params object[] args)
        {
            INFO(string.Format(format, args), color);
        }

        /// <summary>
        /// �����ӡ
        /// </summary>
        /// <param name="message"></param>
        public static void WARNING(object message)
        {
            if (s_LoggerLevel <= GameLoggerLevel.Warning)
                Debug.LogWarning(GetLogggerHead(GameLoggerLevel.Warning) + message);
        }

        /// <summary>
        /// �����ӡ
        /// </summary>
        /// <param name="format"></param>
        /// <param name="args"></param>
        public static void WARNING_FORMAT(string format, params object[] args)
        {
            WARNING(string.Format(format, args));
        }

        /// <summary>
        /// �����ӡ
        /// </summary>
        /// <param name="message"></param>
        public static void ERROR(object message)
        {
            if (s_LoggerLevel <= GameLoggerLevel.Error)
                Debug.LogError(GetLogggerHead(GameLoggerLevel.Error) + message);
        }

        /// <summary>
        /// �����ӡ
        /// </summary>
        /// <param name="format"></param>
        /// <param name="args"></param>
        public static void ERROR_FORMAT(string format, params object[] args)
        {
            ERROR(string.Format(format, args));
        }

        /// <summary>
        /// ���ش����ӡ
        /// </summary>
        /// <param name="message"></param>
        public static void FATAL(object message)
        {
            if (s_LoggerLevel <= GameLoggerLevel.Fatal)
                Debug.LogError(GetLogggerHead(GameLoggerLevel.Fatal) + message);

            //�������ش��� ��¼��Ϣ
            string str = string.Format("������Ϣ��{0}, ���ö�ջ��[{1}]", message.ToString(), new System.Diagnostics.StackTrace().ToString());
            RECORD_LOG(GamePathSetting.Get().CurrentPlatform().downloadDataPath.AssetPath + "fatalError.log", str, GameLoggerLevel.Fatal);
        }

        /// <summary>
        /// ���ش����ӡ
        /// </summary>
        /// <param name="format"></param>
        /// <param name="args"></param>
        public static void FATAL_FORMAT(string format, params object[] args)
        {
            FATAL(string.Format(format, args));
        }

        /// <summary>
        /// ��¼��ӡ
        /// </summary>
        /// <param name="filePath"></param>
        /// <param name="content"></param>
        /// <param name="tag"></param>
        public static void RECORD_LOG(string filePath, string content, GameLoggerLevel loggerLevel = GameLoggerLevel.Record)
        {
            string dir = Path.GetDirectoryName(filePath);
            if (!Directory.Exists(dir))
                Directory.CreateDirectory(dir);

            if (string.IsNullOrEmpty(content))
                File.AppendAllText(filePath, "\n");
            else
                File.AppendAllText(filePath, GetLogggerHead(loggerLevel) + content + "\n");
        }
    }
}

using System.Collections.Generic;
using UnityEngine;
using System.Security.Cryptography;
using System.Text;
using System;
using System.IO;

namespace LGameFramework.GameBase
{
    public static class JsonHelper
    {
        public static string ToJason<T>(List<T> list, bool encrypt = false)
        {
            string json = JsonUtility.ToJson(new Serialization<T>(list));
            return encrypt ? AESEncryptor.Encrypt(json) : json;
        }

        public static string ToJason<T, V>(Dictionary<T, V> dictionary, bool encrypt = false)
        {
            string json = JsonUtility.ToJson(new Serialization<T, V>(dictionary));
            return encrypt ? AESEncryptor.Encrypt(json) : json;
        }

        public static string ToJason(object obj, bool encrypt = false)
        {
            string json = JsonUtility.ToJson(obj);
            return encrypt ? AESEncryptor.Encrypt(json) : json;
        }

        public static List<T> FromJsonToList<T>(string json, bool decrypt = false)
        {
            string str = decrypt ? AESEncryptor.Decrypt(json) : json;
            return JsonUtility.FromJson<Serialization<T>>(str).Reduction();
        }

        public static Dictionary<T, V> FromJsonToDictionary<T, V>(string json, bool decrypt = false)
        {
            string str = decrypt ? AESEncryptor.Decrypt(json) : json;
            return JsonUtility.FromJson<Serialization<T, V>>(str).Reduction();
        }

        public static T FromJson<T>(string json, bool decrypt = false)
        {
            string str = decrypt ? AESEncryptor.Decrypt(json) : json;
            return JsonUtility.FromJson<T>(str);
        }

        public static object FromJson(string json, System.Type type, bool decrypt = false)
        {
            string str = decrypt ? AESEncryptor.Decrypt(json) : json;
            return JsonUtility.FromJson(str, type);
        }

        public static void FromJsonOverwrite(string json, object objectToOverwrite, bool decrypt = false)
        {
            string str = decrypt ? AESEncryptor.Decrypt(json) : json;
            JsonUtility.FromJsonOverwrite(str, objectToOverwrite);
        }

        [System.Serializable]
        public class Serialization<T>
        {
            [SerializeField]
            private List<T> m_Target;

            public Serialization(List<T> target)
            {
                m_Target = target;
            }

            public List<T> Reduction()
            {
                return m_Target;
            }
        }

        [System.Serializable]
        public class Serialization<T, V> : ISerializationCallbackReceiver
        {
            [SerializeField]
            private List<T> m_Keys;

            [SerializeField]
            private List<V> m_Values;

            private Dictionary<T, V> m_Target;

            public Serialization(Dictionary<T, V> target)
            {
                m_Target = target;
            }

            public Dictionary<T, V> Reduction()
            {
                return m_Target;
            }

            public void OnAfterDeserialize()
            {
                int count = Mathf.Min(m_Keys.Count, m_Values.Count);
                m_Target = new Dictionary<T, V>(count);
                for (int i = 0; i < count; i++)
                {
                    m_Target.Add(m_Keys[i], m_Values[i]);
                }
            }

            public void OnBeforeSerialize()
            {
                m_Keys = new List<T>(m_Target.Keys);
                m_Values = new List<V>(m_Target.Values);
            }

        }

    }

    public class AESEncryptor
    {
        public const string Key = "abcdefghijklmnop";
        public const string IV = "bcdefghijklmnopa";
        public static string Encrypt(string plainText)
        {
            if (plainText == null || plainText.Length <= 0)
                throw new ArgumentNullException("plainText");
            if (Key == null || Key.Length <= 0)
                throw new ArgumentNullException("Key");
            if (IV == null || IV.Length <= 0)
                throw new ArgumentNullException("IV");

            byte[] encrypted;
            using (Aes aesAlg = Aes.Create())
            {
                aesAlg.Key = Encoding.ASCII.GetBytes(Key);
                aesAlg.IV = Encoding.ASCII.GetBytes(IV);
                ICryptoTransform encryptor = aesAlg.CreateEncryptor(aesAlg.Key, aesAlg.IV);
                using (MemoryStream msEncrypt = new MemoryStream())
                {
                    using (CryptoStream csEncrypt = new CryptoStream(msEncrypt, encryptor, CryptoStreamMode.Write))
                    {
                        using (StreamWriter swEncrypt = new StreamWriter(csEncrypt, Encoding.UTF8))
                        {
                            swEncrypt.Write(plainText);
                        }
                        encrypted = msEncrypt.ToArray();
                    }
                }
            }
            return Convert.ToBase64String(encrypted);
        }

        public static string Decrypt(string cipherStr)
        {
            var cipherText = Convert.FromBase64String(cipherStr);
            if (cipherText == null || cipherText.Length <= 0)
                throw new ArgumentNullException("cipherText");
            if (Key == null || Key.Length <= 0)
                throw new ArgumentNullException("Key");
            if (IV == null || IV.Length <= 0)
                throw new ArgumentNullException("IV");

            string plaintext = null;
            using (Aes aesAlg = Aes.Create())
            {
                aesAlg.Key = Encoding.ASCII.GetBytes(Key);
                aesAlg.IV = Encoding.ASCII.GetBytes(IV);
                ICryptoTransform decryptor = aesAlg.CreateDecryptor(aesAlg.Key, aesAlg.IV);
                using (MemoryStream msDecrypt = new MemoryStream(cipherText))
                {
                    using (CryptoStream csDecrypt = new CryptoStream(msDecrypt, decryptor, CryptoStreamMode.Read))
                    {
                        using (StreamReader srDecrypt = new StreamReader(csDecrypt, Encoding.UTF8))
                        {
                            plaintext = srDecrypt.ReadToEnd();
                        }
                    }
                }
            }
            return plaintext;
        }
    }

}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase
{
    public class CSharpUtility
    {

        /// <summary>
        /// ��Ч��������List�ﲻͬ��Ԫ��
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="list1"></param>
        /// <param name="list2"></param>
        /// <returns></returns>
        public static List<T> GetDiffrentFormList<T>(List<T> list1, List<T> list2)
        { 
            List<T> result = new List<T>();
            Dictionary<T, int> flagMap = new Dictionary<T, int>();
            List<T> maxList = list1;
            List<T> minList = list2;
            if (list2.Count > list1.Count)
            {
                maxList = list2;
                minList = list1;
            }

            foreach (T item in maxList)
                flagMap.Add(item, 1);

            foreach (var item in minList)
            {
                if (flagMap.TryGetValue(item, out int count))
                {
                    flagMap[item] = ++count;
                    continue;
                }
                flagMap[item] = 1;
            }

            foreach(var item in flagMap)
            {
                if (item.Value == 1)
                    result.Add(item.Key);
            }    

            return result;
        }
    }
}
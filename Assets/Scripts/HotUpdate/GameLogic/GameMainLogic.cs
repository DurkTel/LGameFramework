using LGameFramework.GameBase;
using LGameFramework.GameCore;
using LGameFramework.GameCore.Entity;
using System;
using System.Diagnostics;
using System.Linq.Expressions;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class Test
    {
        int ss = 0;
        string aaa = "sss";
    }

    /// <summary>
    /// ÓÎÏ·Ö÷Âß¼­
    /// </summary>
    public class GameMainLogic : MonoBehaviour
    {
        private void Awake()
        {
            //GameWorldMessage.OninitWorld();
            //GameWorldMessage.OninitWorldMessage();

            //var ex = Expression.New(typeof(Test));
            //var lambda = Expression.Lambda<Func<Test>>(ex);
            //var myclass = lambda.Compile();
            //int count = 10;

            //Stopwatch stopwatch = new Stopwatch();
            //stopwatch.Start();
            //for (int i = 0; i < count; i++)
            //{
            //    new Test();
            //}
            //stopwatch.Stop();
            //GameLogger.DEBUG(stopwatch.ElapsedMilliseconds);

            //stopwatch.Start();
            //for (int i = 0; i < count; i++)
            //{
            //    myclass();
            //}
            //stopwatch.Stop();
            //GameLogger.DEBUG(stopwatch.ElapsedMilliseconds);

            //stopwatch.Start();
            //for (int i = 0; i < count; i++)
            //{
            //    Activator.CreateInstance(typeof(Test));
            //}
            //stopwatch.Stop();
            //GameLogger.DEBUG(stopwatch.ElapsedMilliseconds);

        }

        void Update()
        {
            //GameWorldDrives.Update();
        }

    }
}
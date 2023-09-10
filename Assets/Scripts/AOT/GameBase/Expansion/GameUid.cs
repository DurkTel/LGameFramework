using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase
{
    public class GameUid
    {
        private int m_Uid = 0;
        public int Uid { get { return ++m_Uid; } }
    }
}

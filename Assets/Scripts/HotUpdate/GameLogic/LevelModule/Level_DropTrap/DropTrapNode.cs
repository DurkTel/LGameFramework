using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic.Level
{
    public class DropTrapNode : MonoBehaviour
    {
        [HideInInspector]
        public int index;

        public DropTrapNode[] linkNode;
    }
}

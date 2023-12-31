using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic.Level
{
    public interface ICopyLogic
    {
        public float StartCountdown { get; }

        public float EndCountdown { get; }

        public void OnInit();

        public void OnCopyIn();

        public void OnCopyOut();

        public void OnCopyLogicBegin();
    }
}

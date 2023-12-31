using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.Fight
{
    public class FightSkillCfg
    {
        /// <summary>
        /// 技能code
        /// </summary>
        public int Code;
        /// <summary>
        /// 技能名称
        /// </summary>
        public string Name;
        /// <summary>
        /// 冷却时间
        /// </summary>
        public float CoolTime;
        /// <summary>
        /// 允许打断
        /// </summary>
        public bool AllowBreak;
    }
}

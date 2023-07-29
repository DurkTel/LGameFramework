using System.Collections;
using System.Collections.Generic;

namespace GameBase.FSM
{
    public interface IFSM_Condition
    {
        string DataName { get; set; }
        bool Tick(FSM_DataBase dataBase);
    }

    /// <summary>
    /// 通用条件判断
    /// </summary>
    /// <typeparam name="T">条件判断类型</typeparam>
    public class FSM_Condition<T> : IFSM_Condition
    {
        /// <summary>
        /// 判断该条件所需数据名称
        /// </summary>
        public string DataName { get; set; }
        /// <summary>
        /// 条件数据的预期值
        /// </summary>
        public T Target { get; set; }
        /// <summary>
        /// 当前条件数据的值
        /// </summary>
        public T CurData { get; set; }

        public FSM_Condition() { }

        public FSM_Condition(string dataName, T target)
        {
            this.DataName = dataName;
            this.Target = target;
        }
        /// <summary>
        /// 返回条件是否满足
        /// </summary>
        /// <returns></returns>
        public virtual bool Tick(FSM_DataBase dataBase)
        {
            CurData = dataBase.GetData<T>(DataName);

            return false;
        }
    }

    /// <summary>
    /// 浮点类型的限制
    /// </summary>
    public class FSM_Condition_Float : FSM_Condition<float>
    {
        public enum FloatCondition
        {
            Greater,
            Less
        }
        public FloatCondition Condition { get; set; }
        public FSM_Condition_Float() { }
        public FSM_Condition_Float(string dataName, float target, FloatCondition condition) : base(dataName, target) { this.Condition = condition; }

        public override bool Tick(FSM_DataBase dataBase)
        {
            base.Tick(dataBase);
            switch (Condition)
            {
                case FloatCondition.Greater:
                    return CurData > Target;
                case FloatCondition.Less:
                    return CurData < Target;
            }

            return false;
        }
    }

    /// <summary>
    /// 整型的限制
    /// </summary>
    public class FSM_Condition_Int : FSM_Condition<int>
    {
        public enum IntCondition
        {
            Greater,
            Less,
            Equals,
            NotEquals
        }
        public IntCondition Condition { get; set; }
        public FSM_Condition_Int() { }
        public FSM_Condition_Int(string dataName, int target, IntCondition condition) : base(dataName, target) { this.Condition = condition; }

        public override bool Tick(FSM_DataBase dataBase)
        {
            base.Tick(dataBase);
            switch (Condition)
            {
                case IntCondition.Greater:
                    return CurData > Target;
                case IntCondition.Less:
                    return CurData < Target;
                case IntCondition.Equals:
                    return CurData == Target;
                case IntCondition.NotEquals:
                    return CurData != Target;
            }

            return false;
        }
    }


    /// <summary>
    /// 布尔的限制
    /// </summary>
    public class FSM_Condition_Booler : FSM_Condition<bool>
    {
        public enum BoolerCondition
        {
            True,
            False
        }
        public BoolerCondition Condition { get; set; }
        public FSM_Condition_Booler() { }
        public FSM_Condition_Booler(string dataName, BoolerCondition condition)
        {
            this.DataName = dataName;
            this.Condition = condition;
        }

        public override bool Tick(FSM_DataBase dataBase)
        {
            base.Tick(dataBase);
            switch (Condition)
            {
                case BoolerCondition.True:
                    return CurData == true;
                case BoolerCondition.False:
                    return CurData == false;
            }

            return false;
        }
    }


    /// <summary>
    /// 触发器的限制
    /// </summary>
    public class FSM_Condition_Trigger : FSM_Condition<bool>
    {
        public FSM_Condition_Trigger() { }
        public FSM_Condition_Trigger(string dataName)
        {
            this.DataName = dataName;
        }

        public override bool Tick(FSM_DataBase dataBase)
        {
            base.Tick(dataBase);
            dataBase.SetData<bool>(DataName, false);
            return CurData;
        }
    }
}
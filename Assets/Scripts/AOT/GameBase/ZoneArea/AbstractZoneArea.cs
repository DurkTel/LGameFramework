using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.ZoneArea
{

    [System.Serializable]
    public class AbstractZoneArea
    {
        /// <summary>
        /// ����Id
        /// </summary>
        public virtual int Id { get; }

        /// <summary>
        /// ��״
        /// </summary>
        public virtual ZoneShape Shape { get; }

        /// <summary>
        /// ��Χ����
        /// </summary>
        public virtual int ZoneType { get; }

        /// <summary>
        /// ��ʼ��
        /// </summary>
        /// <param name="data"></param>
        public virtual void OnInit(int zoneType, int uid, ZoneAreaData data)
        { 
            
        }

        /// <summary>
        /// �ڷ�Χ��
        /// </summary>
        /// <param name="point"></param>
        /// <returns></returns>
        public virtual bool InZone(Vector3 point)
        {
            return false;
        }

        /// <summary>
        /// ���Ƹ�����
        /// </summary>
        public virtual void DrawGizmos()
        { 
            
        }
    }
}

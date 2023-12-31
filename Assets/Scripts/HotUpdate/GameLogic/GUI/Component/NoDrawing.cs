using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace LGameFramework.GameLogic.GUI
{
    [RequireComponent(typeof(CanvasRenderer))]
    public class NoDrawing : Graphic
    {
        public override void SetMaterialDirty()
        {

        }
        public override void SetVerticesDirty()
        {

        }
        protected override void OnPopulateMesh(VertexHelper vh)
        {
            vh.Clear();
        }
    }
}

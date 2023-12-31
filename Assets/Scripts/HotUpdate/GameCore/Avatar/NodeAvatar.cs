using LGameFramework.GameBase;
using LGameFramework.GameCore.Asset;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.Avatar
{
    public class NodeAvatar : GameAvatar
    {
        [SerializeField]
        private Vector3 m_UIPos;
        public Vector3 UIPos { get { return m_UIPos; } }

        [SerializeField]
        private Vector3 m_UIScale;
        public Vector3 UIScale { get { return m_UIScale; } }

        [SerializeField]
        private Vector3 m_UIRotation;
        public Vector3 UIRotation { get {  return m_UIRotation; } }

        private Canvas m_Canvas;
        public Canvas Canvas
        {
            get
            {
                if (m_Canvas == null)
                {
                    m_Canvas = transform.GetComponentInParent<Canvas>();
                }
                return m_Canvas;
            }
        }

        private string m_ControllerName;
        public string ControllerName 
        { 
            get { return m_ControllerName; } 
            set 
            { 
                if (m_ControllerName == value) return; 
                m_ControllerName = value; 
                OnUpdateAnimatorController(); 
            } 
        }

        private void Start()
        {
            OnInit();

            m_Root.localPosition = m_UIPos;
            m_Root.localEulerAngles = m_UIRotation;
            m_Root.localScale = m_UIScale;
        }

        protected override void OnPartLoadComplete(AvatarPartType part)
        {
            base.OnPartLoadComplete(part);
            if (part == AvatarPartType.Skeleton)
            {
                m_Animator = transform.GetComponentInChildren<Animator>();
                OnUpdateAnimatorController();
            }

            if (IsComplete)
                UpdateSortingOrder();
        }

        private void OnUpdateAnimatorController()
        {
            if (m_Animator == null && !string.IsNullOrEmpty(m_ControllerName)) return;

            AssetUtility.LoadAssetAsync<AnimatorOverrideController>(m_ControllerName, OnAnimatorControllerComplete);
        }

        /// <summary>
        /// 动画机加载完成
        /// </summary>
        /// <param name="loader"></param>
        private void OnAnimatorControllerComplete(Loader loader)
        {
            //初始化动画机
            m_Animator.runtimeAnimatorController = loader.GetRawObject<AnimatorOverrideController>();
            m_Animator.cullingMode = AnimatorCullingMode.AlwaysAnimate;
            m_Animator.updateMode = AnimatorUpdateMode.AnimatePhysics;
        }

        private void UpdateSortingOrder()
        {
            List<Renderer> renderers = ListPool<Renderer>.Get();

            transform.GetComponentsInChildren(true, renderers);
            foreach (var render in renderers)
            {
                foreach (var mat in render.sharedMaterials)
                {
                    if (mat != null)
                    {
                        if (mat.renderQueue < 3000)
                        {
                            mat.renderQueue = 3000;
                        }
                        else if (mat.renderQueue == 3000)
                        {
                            mat.renderQueue = 3001;
                        }
                    }
                }
            }

            ListPool<Renderer>.Release(renderers);

            this.TryAddComponent<RenderSortingOrder>();
        }

        public void PlayAnimation(string name)
        {
            if(m_Animator == null) return;  
            m_Animator.CrossFade(name, 0.15f, -1, 0f);
        }

        public void SetPlayer(Dictionary<AvatarPartType, string> models)
        {
            if (models == null || models.Count == 0) return;

            foreach (var item in models)
            {
                SetData(item.Key, item.Value);
            }
        }

        public void SetPlayer(Dictionary<int, string> models)
        {
            if (models == null || models.Count == 0) return;

            foreach (var item in models)
            {
                SetData((AvatarPartType)item.Key, item.Value);
            }
        }

        public void SetData(AvatarPartType partType, string assetName = null)
        {
            var part = GetPart(partType);
            if (part == null)
                AddPart(partType, assetName);
            else
            {
                part.OnInit(this, partType);
                UpdatePartAsset(partType, assetName);
            }
        }
    }
}

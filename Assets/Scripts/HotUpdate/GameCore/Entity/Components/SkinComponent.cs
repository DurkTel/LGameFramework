using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    public class SkinComponent : AbstractComponent
    {
        public override void OnInit(int entity)
        {
            base.OnInit(entity);

            RegisterModel<SkinDataModel>().GetProperty(SkinDataModel.SkinIsInit).AddEvent(OnSkinNumChange);
            RegisterModel<SkinAnDataModel>();
        }


        public override void Dispose()
        {
            base.Dispose();
            Pool.Release(this);
        }

        private void OnSkinNumChange()
        {
            var sfs = GetPropertyValue<SkinDataModel, int>(SkinDataModel.SkinIsInit);
        }
    }

    public class SkinDataModel : AbstractDataModel
    {
        public const string SkinIsInit = "SkinIsInit";
        public const string SkinNum = "SkinNum";
        public override void Dispose()
        {
            base.Dispose();
            Pool.Release(this);
        }

        public override void OnInit()
        {
            AddProperty<int>(SkinDataModel.SkinIsInit, 1);
        }
    }

    public class SkinAnDataModel : AbstractDataModel
    { 
        public const string AnName = "AnName";

        public override void Dispose()
        {
            base.Dispose();
            Pool.Release(this);
        }

        public override void OnInit()
        {
            throw new System.NotImplementedException();
        }
    }
}

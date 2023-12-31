using LGameFramework.GameBase;
using LGameFramework.GameCore;
using LGameFramework.GameCore.Avatar;
using LGameFramework.GameCore.Config;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

public class SkillPreview : MonoBehaviour
{
    private PlayableDirector m_PlayableDirector;
    /// <summary>
    /// 启动设置
    /// </summary>
    [SerializeField]
    private GameLaunchSetting m_GameLaunchSetting;

    /// <summary>
    /// 路径设置
    /// </summary>
    [SerializeField]
    private GamePathSetting m_GamePathSetting;

    public RoleCareer RoleCareer;

    private void Awake()
    {
        GameLaunchSetting.Init(m_GameLaunchSetting);
        GamePathSetting.Init(m_GamePathSetting);

        GameFrameworkEntry.Instantiate(false);
    }

    private IEnumerator Start()
    {
        m_PlayableDirector = GetComponent<PlayableDirector>();
        GameObject actor = new GameObject("Actor");
        GameAvatar avatar = actor.TryAddComponent<GameAvatar>();
        avatar.OnInit();

        var roleCfg = ConfigUtility.GetConfig<TB_Role>();
        var cfg = roleCfg.Get(RoleCareer);

        for (int i = 0; i < (int)GameAvatar.AvatarPartType.End; i++)
            avatar.AddPart((GameAvatar.AvatarPartType)i, cfg.BaseSkin[i]);

        yield return new WaitWhile(()=> { return avatar.IsComplete; });
        
        GameObject weapon = new GameObject("Weapon");
        GameAvatar avatar2 = weapon.TryAddComponent<GameAvatar>();
        avatar2.OnInit();
        avatar2.AddPart(GameAvatar.AvatarPartType.Body, "SD_Sword.prefab");

        ParentConstraint constraint = weapon.TryAddComponent<ParentConstraint>();
        ConstraintSource cs = new ConstraintSource();
        cs.sourceTransform = avatar.AllSkeletonBones["Prop_R"];
        cs.weight = 1.0f;
        constraint.SetSources(new List<ConstraintSource>() { cs });
        constraint.constraintActive = true;
    }

    private void OnGUI()
    {
        GUIStyle style = GUI.skin.button;
        style.fontSize = 30;
        if (GUILayout.Button("播放", style, GUILayout.Width(200), GUILayout.Height(100)))
        {
            m_PlayableDirector.Play();
        }
    }
}

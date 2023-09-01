#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.ReloadFinish
	 */
	struct UHUD_Bullet_Simple_C_ReloadFinish_Params
	{
	public:
		int32_t                                                    InReservedAmmo;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxAmmo;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.SetBulletLightEffect
	 */
	struct UHUD_Bullet_Simple_C_SetBulletLightEffect_Params
	{
	public:
		float                                                      InProgress;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.GetBulletGaugeWidget
	 */
	struct UHUD_Bullet_Simple_C_GetBulletGaugeWidget_Params
	{
	public:
		class UUserWidget*                                         OutBulletGaugeWidget;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.BP_OnEntryReleased
	 */
	struct UHUD_Bullet_Simple_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.BP_OnItemExpansionChanged
	 */
	struct UHUD_Bullet_Simple_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.BP_OnItemSelectionChanged
	 */
	struct UHUD_Bullet_Simple_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.OnListItemObjectSet
	 */
	struct UHUD_Bullet_Simple_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.PreConstruct
	 */
	struct UHUD_Bullet_Simple_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.ExecuteUbergraph_HUD_Bullet_Simple
	 */
	struct UHUD_Bullet_Simple_C_ExecuteUbergraph_HUD_Bullet_Simple_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

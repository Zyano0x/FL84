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
	 * Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.BP_OnEntryReleased
	 */
	struct UHUD_Bullet_Simple_Light_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.BP_OnItemExpansionChanged
	 */
	struct UHUD_Bullet_Simple_Light_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.BP_OnItemSelectionChanged
	 */
	struct UHUD_Bullet_Simple_Light_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.OnListItemObjectSet
	 */
	struct UHUD_Bullet_Simple_Light_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.ExecuteUbergraph_HUD_Bullet_Simple_Light
	 */
	struct UHUD_Bullet_Simple_Light_C_ExecuteUbergraph_HUD_Bullet_Simple_Light_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M7VJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

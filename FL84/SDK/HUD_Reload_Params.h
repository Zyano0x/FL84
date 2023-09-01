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
	 * Function HUD_Reload.HUD_Reload_C.SetSpeedUpBuff
	 */
	struct UHUD_Reload_C_SetSpeedUpBuff_Params
	{
	public:
		bool                                                       bHaveBuff;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Reload.HUD_Reload_C.SetPassive
	 */
	struct UHUD_Reload_C_SetPassive_Params
	{
	public:
		E_PassiveBuff                                              Passive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Reload.HUD_Reload_C.GetReloadAnimation
	 */
	struct UHUD_Reload_C_GetReloadAnimation_Params
	{
	public:
		class UWidgetAnimation*                                    OutReloadAnimation;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Reload.HUD_Reload_C.PreConstruct
	 */
	struct UHUD_Reload_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Reload.HUD_Reload_C.ExecuteUbergraph_HUD_Reload
	 */
	struct UHUD_Reload_C_ExecuteUbergraph_HUD_Reload_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

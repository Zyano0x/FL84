#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
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
	 * Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.Construct
	 */
	struct UCrosshair_CarWeapon_Trans_Flame_C_Construct_Params
	{	};

	/**
	 * Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnTransformerWeaponChanged
	 */
	struct UCrosshair_CarWeapon_Trans_Flame_C_OnTransformerWeaponChanged_Params
	{
	public:
		ETransformerType                                           InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnOverloadStateChanged
	 */
	struct UCrosshair_CarWeapon_Trans_Flame_C_OnOverloadStateChanged_Params
	{
	public:
		bool                                                       bEnter;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnCrosshairInNormalState
	 */
	struct UCrosshair_CarWeapon_Trans_Flame_C_OnCrosshairInNormalState_Params
	{	};

	/**
	 * Function Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.ExecuteUbergraph_Crosshair_CarWeapon_Trans_Flame
	 */
	struct UCrosshair_CarWeapon_Trans_Flame_C_ExecuteUbergraph_Crosshair_CarWeapon_Trans_Flame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

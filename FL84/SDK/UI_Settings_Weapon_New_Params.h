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
	 * Function UI_Settings_Weapon_New.UI_Settings_Weapon_New_C.GetModuleName
	 */
	struct UUI_Settings_Weapon_New_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Weapon_New.UI_Settings_Weapon_New_C.SetGunInit
	 */
	struct UUI_Settings_Weapon_New_C_SetGunInit_Params
	{
	public:
		bool                                                       SwitchGunState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_Weapon_New.UI_Settings_Weapon_New_C.PreConstruct
	 */
	struct UUI_Settings_Weapon_New_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_Weapon_New.UI_Settings_Weapon_New_C.ExecuteUbergraph_UI_Settings_Weapon_New
	 */
	struct UUI_Settings_Weapon_New_C_ExecuteUbergraph_UI_Settings_Weapon_New_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.GetModuleName
	 */
	struct UUI_Settings_GamepadSlot_Desktop_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.SetMaxOptionsNumDisplay
	 */
	struct UUI_Settings_GamepadSlot_Desktop_C_SetMaxOptionsNumDisplay_Params
	{	};

	/**
	 * Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.SetOptionDisplay
	 */
	struct UUI_Settings_GamepadSlot_Desktop_C_SetOptionDisplay_Params
	{	};

	/**
	 * Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.BP_OnEntryReleased
	 */
	struct UUI_Settings_GamepadSlot_Desktop_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.BP_OnItemExpansionChanged
	 */
	struct UUI_Settings_GamepadSlot_Desktop_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.BP_OnItemSelectionChanged
	 */
	struct UUI_Settings_GamepadSlot_Desktop_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.OnListItemObjectSet
	 */
	struct UUI_Settings_GamepadSlot_Desktop_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.PreConstruct
	 */
	struct UUI_Settings_GamepadSlot_Desktop_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_GamepadSlot_Desktop.UI_Settings_GamepadSlot_Desktop_C.ExecuteUbergraph_UI_Settings_GamepadSlot_Desktop
	 */
	struct UUI_Settings_GamepadSlot_Desktop_C_ExecuteUbergraph_UI_Settings_GamepadSlot_Desktop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

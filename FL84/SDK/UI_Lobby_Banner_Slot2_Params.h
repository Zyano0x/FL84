#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.GetModuleName
	 */
	struct UUI_Lobby_Banner_Slot2_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.BP_OnEntryReleased
	 */
	struct UUI_Lobby_Banner_Slot2_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.BP_OnItemExpansionChanged
	 */
	struct UUI_Lobby_Banner_Slot2_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.BP_OnItemSelectionChanged
	 */
	struct UUI_Lobby_Banner_Slot2_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.OnListItemObjectSet
	 */
	struct UUI_Lobby_Banner_Slot2_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.ChangeShowPanelView
	 */
	struct UUI_Lobby_Banner_Slot2_C_ChangeShowPanelView_Params
	{	};

	/**
	 * Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.Construct
	 */
	struct UUI_Lobby_Banner_Slot2_C_Construct_Params
	{	};

	/**
	 * Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.ExecuteUbergraph_UI_Lobby_Banner_Slot2
	 */
	struct UUI_Lobby_Banner_Slot2_C_ExecuteUbergraph_UI_Lobby_Banner_Slot2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.GetModuleName
	 */
	struct UUI_Lobby_DownLoad_Slot_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.SetLineState
	 */
	struct UUI_Lobby_DownLoad_Slot_C_SetLineState_Params
	{
	public:
		bool                                                       IsHide;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.DownStatusChanged
	 */
	struct UUI_Lobby_DownLoad_Slot_C_DownStatusChanged_Params
	{
	public:
		ESolarItemDownloadType                                     NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.BP_OnEntryReleased
	 */
	struct UUI_Lobby_DownLoad_Slot_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.BP_OnItemExpansionChanged
	 */
	struct UUI_Lobby_DownLoad_Slot_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.BP_OnItemSelectionChanged
	 */
	struct UUI_Lobby_DownLoad_Slot_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.OnListItemObjectSet
	 */
	struct UUI_Lobby_DownLoad_Slot_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.PreConstruct
	 */
	struct UUI_Lobby_DownLoad_Slot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.Construct
	 */
	struct UUI_Lobby_DownLoad_Slot_C_Construct_Params
	{	};

	/**
	 * Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.BndEvt__Btn_Downing_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Lobby_DownLoad_Slot_C_BndEvt__Btn_Downing_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.ExecuteUbergraph_UI_Lobby_DownLoad_Slot
	 */
	struct UUI_Lobby_DownLoad_Slot_C_ExecuteUbergraph_UI_Lobby_DownLoad_Slot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

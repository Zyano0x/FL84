#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * Function UI_Component_ComboBox_Slot.UI_Component_ComboBox_Slot_C.Set Text Alignment
	 */
	struct UUI_Component_ComboBox_Slot_C_SetTextAlignment_Params
	{
	public:
		EHorizontalAlignment                                       TextAlignment;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G3XH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Component_ComboBox_Slot.UI_Component_ComboBox_Slot_C.SetRank
	 */
	struct UUI_Component_ComboBox_Slot_C_SetRank_Params
	{
	public:
		bool                                                       HasRank;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_ComboBox_Slot.UI_Component_ComboBox_Slot_C.SetSelected
	 */
	struct UUI_Component_ComboBox_Slot_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_ComboBox_Slot.UI_Component_ComboBox_Slot_C.UpdateInfo
	 */
	struct UUI_Component_ComboBox_Slot_C_UpdateInfo_Params
	{	};

	/**
	 * Function UI_Component_ComboBox_Slot.UI_Component_ComboBox_Slot_C.BP_OnEntryReleased
	 */
	struct UUI_Component_ComboBox_Slot_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_Component_ComboBox_Slot.UI_Component_ComboBox_Slot_C.BP_OnItemExpansionChanged
	 */
	struct UUI_Component_ComboBox_Slot_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_ComboBox_Slot.UI_Component_ComboBox_Slot_C.PreConstruct
	 */
	struct UUI_Component_ComboBox_Slot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_ComboBox_Slot.UI_Component_ComboBox_Slot_C.OnListItemObjectSet
	 */
	struct UUI_Component_ComboBox_Slot_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_ComboBox_Slot.UI_Component_ComboBox_Slot_C.BP_OnItemSelectionChanged
	 */
	struct UUI_Component_ComboBox_Slot_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_ComboBox_Slot.UI_Component_ComboBox_Slot_C.ExecuteUbergraph_UI_Component_ComboBox_Slot
	 */
	struct UUI_Component_ComboBox_Slot_C_ExecuteUbergraph_UI_Component_ComboBox_Slot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

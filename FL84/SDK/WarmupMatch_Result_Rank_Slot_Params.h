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
	 * Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.SetData
	 */
	struct UWarmupMatch_Result_Rank_Slot_C_SetData_Params
	{
	public:
		class UUI_WarmUp_RankItemOBJ_C*                            Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.UpdateDisplay
	 */
	struct UWarmupMatch_Result_Rank_Slot_C_UpdateDisplay_Params
	{
	public:
		E_Type_Rank                                                NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.BP_OnEntryReleased
	 */
	struct UWarmupMatch_Result_Rank_Slot_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.BP_OnItemExpansionChanged
	 */
	struct UWarmupMatch_Result_Rank_Slot_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.BP_OnItemSelectionChanged
	 */
	struct UWarmupMatch_Result_Rank_Slot_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.PreConstruct
	 */
	struct UWarmupMatch_Result_Rank_Slot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.InputData
	 */
	struct UWarmupMatch_Result_Rank_Slot_C_InputData_Params
	{
	public:
		class UUI_WarmUp_RankItemOBJ_C*                            Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.Init
	 */
	struct UWarmupMatch_Result_Rank_Slot_C_Init_Params
	{
	public:
		class UObject*                                             Ref;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.OnListItemObjectSet
	 */
	struct UWarmupMatch_Result_Rank_Slot_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WarmupMatch_Result_Rank_Slot.WarmupMatch_Result_Rank_Slot_C.ExecuteUbergraph_WarmupMatch_Result_Rank_Slot
	 */
	struct UWarmupMatch_Result_Rank_Slot_C_ExecuteUbergraph_WarmupMatch_Result_Rank_Slot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

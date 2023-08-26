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
	 * Function UI_Sensitivity_Slot.UI_Sensitivity_Slot_C.GetModuleName
	 */
	struct UUI_Sensitivity_Slot_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Sensitivity_Slot.UI_Sensitivity_Slot_C.SetState
	 */
	struct UUI_Sensitivity_Slot_C_SetState_Params
	{
	public:
		bool                                                       Unavailable;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Sensitivity_Slot.UI_Sensitivity_Slot_C.SetPosition
	 */
	struct UUI_Sensitivity_Slot_C_SetPosition_Params
	{
	public:
		bool                                                       _2;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_15VJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Sensitivity_Slot.UI_Sensitivity_Slot_C.SetBtnUI
	 */
	struct UUI_Sensitivity_Slot_C_SetBtnUI_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Sensitivity_Slot.UI_Sensitivity_Slot_C.BP_OnEntryReleased
	 */
	struct UUI_Sensitivity_Slot_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_Sensitivity_Slot.UI_Sensitivity_Slot_C.BP_OnItemExpansionChanged
	 */
	struct UUI_Sensitivity_Slot_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Sensitivity_Slot.UI_Sensitivity_Slot_C.BP_OnItemSelectionChanged
	 */
	struct UUI_Sensitivity_Slot_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Sensitivity_Slot.UI_Sensitivity_Slot_C.OnListItemObjectSet
	 */
	struct UUI_Sensitivity_Slot_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Sensitivity_Slot.UI_Sensitivity_Slot_C.PreConstruct
	 */
	struct UUI_Sensitivity_Slot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Sensitivity_Slot.UI_Sensitivity_Slot_C.Construct
	 */
	struct UUI_Sensitivity_Slot_C_Construct_Params
	{	};

	/**
	 * Function UI_Sensitivity_Slot.UI_Sensitivity_Slot_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_Sensitivity_Slot_C_BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Sensitivity_Slot.UI_Sensitivity_Slot_C.ExecuteUbergraph_UI_Sensitivity_Slot
	 */
	struct UUI_Sensitivity_Slot_C_ExecuteUbergraph_UI_Sensitivity_Slot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.GetModuleName
	 */
	struct UUI_Settings_Item_Slot_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.UpdateCheckGroupList
	 */
	struct UUI_Settings_Item_Slot_C_UpdateCheckGroupList_Params
	{	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.AddItemToCheckGroupListData
	 */
	struct UUI_Settings_Item_Slot_C_AddItemToCheckGroupListData_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.ClearCheckGroupListData
	 */
	struct UUI_Settings_Item_Slot_C_ClearCheckGroupListData_Params
	{	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.SetSwitchInitValue
	 */
	struct UUI_Settings_Item_Slot_C_SetSwitchInitValue_Params
	{
	public:
		bool                                                       IsInitValue;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.SetSwitch
	 */
	struct UUI_Settings_Item_Slot_C_SetSwitch_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.IsSwitchOnVisible
	 */
	struct UUI_Settings_Item_Slot_C_IsSwitchOnVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.PreConstruct
	 */
	struct UUI_Settings_Item_Slot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.BndEvt__CheckBoxGroup_Gryo_K2Node_ComponentBoundEvent_1_OnCheckBoxGroupStateChangedEvent__DelegateSignature
	 */
	struct UUI_Settings_Item_Slot_C_BndEvt__CheckBoxGroup_Gryo_K2Node_ComponentBoundEvent_1_OnCheckBoxGroupStateChangedEvent__DelegateSignature_Params
	{
	public:
		TArray<class UCheckBox*>                                   ChildChangedArray;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    CheckedChildIndex;                                       // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.BndEvt__CheckBoxGroup_Gryo_K2Node_ComponentBoundEvent_2_OnCheckBoxGroupStateChangedEventEx__DelegateSignature
	 */
	struct UUI_Settings_Item_Slot_C_BndEvt__CheckBoxGroup_Gryo_K2Node_ComponentBoundEvent_2_OnCheckBoxGroupStateChangedEventEx__DelegateSignature_Params
	{
	public:
		TArray<class UCheckBox*>                                   ChildChangedArray;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    CheckedChildIndex;                                       // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6Q64[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCheckBox*                                           PrevCheckedChild;                                        // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.BndEvt__UI_Component_Switch_K2Node_ComponentBoundEvent_0_OnSwitchClicked__DelegateSignature
	 */
	struct UUI_Settings_Item_Slot_C_BndEvt__UI_Component_Switch_K2Node_ComponentBoundEvent_0_OnSwitchClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.BndEvt__UI_Component_Switch_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature
	 */
	struct UUI_Settings_Item_Slot_C_BndEvt__UI_Component_Switch_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.SetCheckGroupTextList
	 */
	struct UUI_Settings_Item_Slot_C_SetCheckGroupTextList_Params
	{
	public:
		TArray<class FString>                                      NewParam;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.ExecuteUbergraph_UI_Settings_Item_Slot
	 */
	struct UUI_Settings_Item_Slot_C_ExecuteUbergraph_UI_Settings_Item_Slot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_04H3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.OnSwitchStateChanged__DelegateSignature
	 */
	struct UUI_Settings_Item_Slot_C_OnSwitchStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.OnSwitchClicked__DelegateSignature
	 */
	struct UUI_Settings_Item_Slot_C_OnSwitchClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.OnCheckBoxStateChangedEventEx__DelegateSignature
	 */
	struct UUI_Settings_Item_Slot_C_OnCheckBoxStateChangedEventEx__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Settings_Item_Slot.UI_Settings_Item_Slot_C.OnCheckBoxStateChangedEvent__DelegateSignature
	 */
	struct UUI_Settings_Item_Slot_C_OnCheckBoxStateChangedEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function UI_Component_Option.UI_Component_Option_C.OnInitialized
	 */
	struct UUI_Component_Option_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.OnListItemObjectSetCopy
	 */
	struct UUI_Component_Option_C_OnListItemObjectSetCopy_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.GetModuleName
	 */
	struct UUI_Component_Option_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.SetTextID
	 */
	struct UUI_Component_Option_C_SetTextID_Params
	{
	public:
		int32_t                                                    LocTextID;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.SetText
	 */
	struct UUI_Component_Option_C_SetText_Params
	{
	public:
		class FString                                              NewParam;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.SetEnabled
	 */
	struct UUI_Component_Option_C_SetEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.SetOptionType
	 */
	struct UUI_Component_Option_C_SetOptionType_Params
	{
	public:
		int32_t                                                    OptionType;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.ManualOptionSetIsChecked
	 */
	struct UUI_Component_Option_C_ManualOptionSetIsChecked_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.BP_OnEntryReleased
	 */
	struct UUI_Component_Option_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.BP_OnItemExpansionChanged
	 */
	struct UUI_Component_Option_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.BP_OnItemSelectionChanged
	 */
	struct UUI_Component_Option_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.OnListItemObjectSet
	 */
	struct UUI_Component_Option_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.PreConstruct
	 */
	struct UUI_Component_Option_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.BndEvt__SolarCheckBox_Option_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_Component_Option_C_BndEvt__SolarCheckBox_Option_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.OnSelected
	 */
	struct UUI_Component_Option_C_OnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.SetDisbaled
	 */
	struct UUI_Component_Option_C_SetDisbaled_Params
	{
	public:
		bool                                                       Disabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.RefreshOptionTxtUI
	 */
	struct UUI_Component_Option_C_RefreshOptionTxtUI_Params
	{	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.ExecuteUbergraph_UI_Component_Option
	 */
	struct UUI_Component_Option_C_ExecuteUbergraph_UI_Component_Option_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Option.UI_Component_Option_C.OnOptionCheckStateChanged__DelegateSignature
	 */
	struct UUI_Component_Option_C_OnOptionCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

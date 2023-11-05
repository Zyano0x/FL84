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
	 * Function UI_Component_Tips.UI_Component_Tips_C.OnInitialized
	 */
	struct UUI_Component_Tips_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_Component_Tips.UI_Component_Tips_C.GetModuleName
	 */
	struct UUI_Component_Tips_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Tips.UI_Component_Tips_C.SetBtnVideo
	 */
	struct UUI_Component_Tips_C_SetBtnVideo_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Tips.UI_Component_Tips_C.BP_OnEntryReleased
	 */
	struct UUI_Component_Tips_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function UI_Component_Tips.UI_Component_Tips_C.BP_OnItemExpansionChanged
	 */
	struct UUI_Component_Tips_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Tips.UI_Component_Tips_C.BP_OnItemSelectionChanged
	 */
	struct UUI_Component_Tips_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Tips.UI_Component_Tips_C.PreConstruct
	 */
	struct UUI_Component_Tips_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Tips.UI_Component_Tips_C.Construct
	 */
	struct UUI_Component_Tips_C_Construct_Params
	{	};

	/**
	 * Function UI_Component_Tips.UI_Component_Tips_C.ChangeTipStatus
	 */
	struct UUI_Component_Tips_C_ChangeTipStatus_Params
	{	};

	/**
	 * Function UI_Component_Tips.UI_Component_Tips_C.BndEvt__UI_Shop_Tips_Video_K2Node_ComponentBoundEvent_0_OnBtnPlayVideoClicked__DelegateSignature
	 */
	struct UUI_Component_Tips_C_BndEvt__UI_Shop_Tips_Video_K2Node_ComponentBoundEvent_0_OnBtnPlayVideoClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Component_Tips.UI_Component_Tips_C.ExecuteUbergraph_UI_Component_Tips
	 */
	struct UUI_Component_Tips_C_ExecuteUbergraph_UI_Component_Tips_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

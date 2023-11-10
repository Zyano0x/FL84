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
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_CBB3DEEC4FA7D6FCA74AFD882B213469
	 */
	struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_CBB3DEEC4FA7D6FCA74AFD882B213469_Params
	{
	public:
		struct FInputDeviceProxy                                   InputDeviceProxy;                                        // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_14DFE7CE46A0FF846392BE8C80544D5C
	 */
	struct UUI_KeyMappingPrompt_C_OnInputMappingUpdate_14DFE7CE46A0FF846392BE8C80544D5C_Params
	{	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_C0AA05C74DF00E543BDF05B239EB3425
	 */
	struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_C0AA05C74DF00E543BDF05B239EB3425_Params
	{
	public:
		struct FInputDeviceProxy                                   InputDeviceProxy;                                        // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_7713DBDE4DFBF0C345507BA2F606BD8A
	 */
	struct UUI_KeyMappingPrompt_C_OnInputMappingUpdate_7713DBDE4DFBF0C345507BA2F606BD8A_Params
	{	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_F354A8CA4142A920E29EF59F61DB9475
	 */
	struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_F354A8CA4142A920E29EF59F61DB9475_Params
	{
	public:
		struct FInputDeviceProxy                                   InputDeviceProxy;                                        // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_CC54D54449B858CAA22B6C8C1F94DFB7
	 */
	struct UUI_KeyMappingPrompt_C_OnInputMappingUpdate_CC54D54449B858CAA22B6C8C1F94DFB7_Params
	{	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnChangeAdapterSlotWidgetParametersCopy
	 */
	struct UUI_KeyMappingPrompt_C_OnChangeAdapterSlotWidgetParametersCopy_Params
	{
	public:
		TArray<struct FWidgetOverrideParam>                        Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.Construct
	 */
	struct UUI_KeyMappingPrompt_C_Construct_Params
	{	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.Destruct
	 */
	struct UUI_KeyMappingPrompt_C_Destruct_Params
	{	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInitialized
	 */
	struct UUI_KeyMappingPrompt_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.GetModuleName
	 */
	struct UUI_KeyMappingPrompt_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetEnableInputSettingHide
	 */
	struct UUI_KeyMappingPrompt_C_SetEnableInputSettingHide_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetOperationTypeImpl
	 */
	struct UUI_KeyMappingPrompt_C_SetOperationTypeImpl_Params
	{
	public:
		E_InputOperationType                                       InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.RefreshEmptyDisplay
	 */
	struct UUI_KeyMappingPrompt_C_RefreshEmptyDisplay_Params
	{
	public:
		bool                                                       bInEmpty;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1B2E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetEnableEmptyDispaly
	 */
	struct UUI_KeyMappingPrompt_C_SetEnableEmptyDispaly_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetStyle
	 */
	struct UUI_KeyMappingPrompt_C_SetStyle_Params
	{
	public:
		E_KeyPromptStyle                                           Style;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RR9H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnChangeAdapterSlotWidgetGameplayTag
	 */
	struct UUI_KeyMappingPrompt_C_OnChangeAdapterSlotWidgetGameplayTag_Params
	{
	public:
		struct FGameplayTag                                        InGameplayTag;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      MetaData;                                                // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnChangeAdapterSlotWidgetParameters
	 */
	struct UUI_KeyMappingPrompt_C_OnChangeAdapterSlotWidgetParameters_Params
	{
	public:
		TArray<struct FWidgetOverrideParam>                        Params;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnLoadAdapterSlotWidgetFinished
	 */
	struct UUI_KeyMappingPrompt_C_OnLoadAdapterSlotWidgetFinished_Params
	{	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.PreConstruct
	 */
	struct UUI_KeyMappingPrompt_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.ExecuteUbergraph_UI_KeyMappingPrompt
	 */
	struct UUI_KeyMappingPrompt_C_ExecuteUbergraph_UI_KeyMappingPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

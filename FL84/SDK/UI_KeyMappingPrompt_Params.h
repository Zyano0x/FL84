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
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_3B18AEA748D0BC94A55A7C95C3E725FE
	 */
	struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_3B18AEA748D0BC94A55A7C95C3E725FE_Params
	{
	public:
		struct FInputDeviceProxy                                   InputDeviceProxy;                                        // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_EAC59A254B6BD9DC6A2AB2841E4E5C89
	 */
	struct UUI_KeyMappingPrompt_C_OnInputMappingUpdate_EAC59A254B6BD9DC6A2AB2841E4E5C89_Params
	{	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_618569A04EDE70942E0FB8BFE9A9B961
	 */
	struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_618569A04EDE70942E0FB8BFE9A9B961_Params
	{
	public:
		struct FInputDeviceProxy                                   InputDeviceProxy;                                        // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_949B0B0D47016B1ECAA162AFEAB51540
	 */
	struct UUI_KeyMappingPrompt_C_OnInputMappingUpdate_949B0B0D47016B1ECAA162AFEAB51540_Params
	{	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_AA9B2C7B4F9171E250C6C18CEE7E5124
	 */
	struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_AA9B2C7B4F9171E250C6C18CEE7E5124_Params
	{
	public:
		struct FInputDeviceProxy                                   InputDeviceProxy;                                        // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_AE28FA464D84D9F3062135AD18B99769
	 */
	struct UUI_KeyMappingPrompt_C_OnInputMappingUpdate_AE28FA464D84D9F3062135AD18B99769_Params
	{	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.Destruct
	 */
	struct UUI_KeyMappingPrompt_C_Destruct_Params
	{	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.Construct
	 */
	struct UUI_KeyMappingPrompt_C_Construct_Params
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
		unsigned char                                              UnknownData_C115[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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
		unsigned char                                              UnknownData_3GZM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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

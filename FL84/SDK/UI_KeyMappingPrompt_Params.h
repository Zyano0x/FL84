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
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_71104B48402A5174295A30A0BD998009
	 */
	struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_71104B48402A5174295A30A0BD998009_Params
	{
	public:
		struct FInputDeviceProxy                                   InputDeviceProxy;                                        // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_F0ADB69E4A52D8F1AAD39FA7864CF651
	 */
	struct UUI_KeyMappingPrompt_C_OnInputMappingUpdate_F0ADB69E4A52D8F1AAD39FA7864CF651_Params
	{	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_23D0EEE2478C271BB092E0BC26B59110
	 */
	struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_23D0EEE2478C271BB092E0BC26B59110_Params
	{
	public:
		struct FInputDeviceProxy                                   InputDeviceProxy;                                        // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_53780F934B14141E2CCD80B67ECFB519
	 */
	struct UUI_KeyMappingPrompt_C_OnInputMappingUpdate_53780F934B14141E2CCD80B67ECFB519_Params
	{	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_3D665858443378BD32370B92AE7193AD
	 */
	struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_3D665858443378BD32370B92AE7193AD_Params
	{
	public:
		struct FInputDeviceProxy                                   InputDeviceProxy;                                        // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_A1C256A94842C3EA536AB982F5AF54E7
	 */
	struct UUI_KeyMappingPrompt_C_OnInputMappingUpdate_A1C256A94842C3EA536AB982F5AF54E7_Params
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
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInitialized
	 */
	struct UUI_KeyMappingPrompt_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.Destruct
	 */
	struct UUI_KeyMappingPrompt_C_Destruct_Params
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
		unsigned char                                              UnknownData_NSZ6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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
		unsigned char                                              UnknownData_VUK3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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

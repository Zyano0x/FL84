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
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_0F6C92144F870E3E4F56858A7FCCF46C
	 */
	struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_0F6C92144F870E3E4F56858A7FCCF46C_Params
	{
	public:
		struct FInputDeviceProxy                                   InputDeviceProxy;                                        // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_17C85B91478BCFD6205F60BDFC2DD0FD
	 */
	struct UUI_KeyMappingPrompt_C_OnInputMappingUpdate_17C85B91478BCFD6205F60BDFC2DD0FD_Params
	{	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_FFD76035401DCA3110A96A890641B01C
	 */
	struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_FFD76035401DCA3110A96A890641B01C_Params
	{
	public:
		struct FInputDeviceProxy                                   InputDeviceProxy;                                        // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_AADA585B45BD0201195463961CF27848
	 */
	struct UUI_KeyMappingPrompt_C_OnInputMappingUpdate_AADA585B45BD0201195463961CF27848_Params
	{	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_8E2579504242415EBEF7EFA277C27E28
	 */
	struct UUI_KeyMappingPrompt_C_OnInputDeviceChanged_8E2579504242415EBEF7EFA277C27E28_Params
	{
	public:
		struct FInputDeviceProxy                                   InputDeviceProxy;                                        // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_D27E20B44C5E37D2D68ADA972BA868FD
	 */
	struct UUI_KeyMappingPrompt_C_OnInputMappingUpdate_D27E20B44C5E37D2D68ADA972BA868FD_Params
	{	};

	/**
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.Destruct
	 */
	struct UUI_KeyMappingPrompt_C_Destruct_Params
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
	 * Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.Construct
	 */
	struct UUI_KeyMappingPrompt_C_Construct_Params
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
		unsigned char                                              UnknownData_W84O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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
		unsigned char                                              UnknownData_JAEH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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

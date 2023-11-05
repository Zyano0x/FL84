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
	 * Function UI_KeyPrompt.UI_KeyPrompt_C.SetActionName
	 */
	struct UUI_KeyPrompt_C_SetActionName_Params
	{
	public:
		class FString                                              InActionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyPrompt.UI_KeyPrompt_C.RefreshKeyPromptUI
	 */
	struct UUI_KeyPrompt_C_RefreshKeyPromptUI_Params
	{	};

	/**
	 * Function UI_KeyPrompt.UI_KeyPrompt_C.GetSplitActionName
	 */
	struct UUI_KeyPrompt_C_GetSplitActionName_Params
	{
	public:
		class FString                                              SourceString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              NewParam;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyPrompt.UI_KeyPrompt_C.BuildOverrideActionDescParam
	 */
	struct UUI_KeyPrompt_C_BuildOverrideActionDescParam_Params
	{
	public:
		int32_t                                                    LocTextID;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RN1J[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWidgetOverrideParam                                WidgetOverrideParam;                                     // 0x0010(0x0140)  (Parm, OutParm)
	};

	/**
	 * Function UI_KeyPrompt.UI_KeyPrompt_C.BuildOverrideParams
	 */
	struct UUI_KeyPrompt_C_BuildOverrideParams_Params
	{
	public:
		TArray<struct FWidgetOverrideParam>                        Array;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyPrompt.UI_KeyPrompt_C.SetOperationType
	 */
	struct UUI_KeyPrompt_C_SetOperationType_Params
	{
	public:
		E_InputOperationType                                       Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MNNH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_KeyPrompt.UI_KeyPrompt_C.PreConstruct
	 */
	struct UUI_KeyPrompt_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_KeyPrompt.UI_KeyPrompt_C.BndEvt__BtnKey_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_KeyPrompt_C_BndEvt__BtnKey_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_KeyPrompt.UI_KeyPrompt_C.ExecuteUbergraph_UI_KeyPrompt
	 */
	struct UUI_KeyPrompt_C_ExecuteUbergraph_UI_KeyPrompt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_KeyPrompt.UI_KeyPrompt_C.OnClicked__DelegateSignature
	 */
	struct UUI_KeyPrompt_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

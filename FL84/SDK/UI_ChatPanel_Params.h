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
	 * DelegateFunction UI_ChatPanel.UI_ChatPanel_C.OnClicked_23E705E846F8D02FAE67ACAF9141D27F
	 */
	struct UUI_ChatPanel_C_OnClicked_23E705E846F8D02FAE67ACAF9141D27F_Params
	{	};

	/**
	 * Function UI_ChatPanel.UI_ChatPanel_C.OnSolarUIOpened
	 */
	struct UUI_ChatPanel_C_OnSolarUIOpened_Params
	{	};

	/**
	 * Function UI_ChatPanel.UI_ChatPanel_C.OnInitialized
	 */
	struct UUI_ChatPanel_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_ChatPanel.UI_ChatPanel_C.OnSolarUIClosed
	 */
	struct UUI_ChatPanel_C_OnSolarUIClosed_Params
	{	};

	/**
	 * Function UI_ChatPanel.UI_ChatPanel_C.Destruct
	 */
	struct UUI_ChatPanel_C_Destruct_Params
	{	};

	/**
	 * Function UI_ChatPanel.UI_ChatPanel_C.Construct
	 */
	struct UUI_ChatPanel_C_Construct_Params
	{	};

	/**
	 * Function UI_ChatPanel.UI_ChatPanel_C.GetModuleName
	 */
	struct UUI_ChatPanel_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ChatPanel.UI_ChatPanel_C.SetStateDesktop
	 */
	struct UUI_ChatPanel_C_SetStateDesktop_Params
	{
	public:
		E_Type_State_Desktop                                       StateHD;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ChatPanel.UI_ChatPanel_C.SetMsgText
	 */
	struct UUI_ChatPanel_C_SetMsgText_Params
	{
	public:
		unsigned char                                              ChatType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E4QG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              playerName;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Msg;                                                     // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              OutputText;                                              // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_ChatPanel.UI_ChatPanel_C.PreConstruct
	 */
	struct UUI_ChatPanel_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_ChatPanel.UI_ChatPanel_C.ExecuteUbergraph_UI_ChatPanel
	 */
	struct UUI_ChatPanel_C_ExecuteUbergraph_UI_ChatPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function UI_Update.UI_Update_C.GetModuleName
	 */
	struct UUI_Update_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Update.UI_Update_C.OnVideoReady
	 */
	struct UUI_Update_C_OnVideoReady_Params
	{	};

	/**
	 * Function UI_Update.UI_Update_C.InitMedia
	 */
	struct UUI_Update_C_InitMedia_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Update.UI_Update_C.FinishLoadLobby
	 */
	struct UUI_Update_C_FinishLoadLobby_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Update.UI_Update_C.PreConstruct
	 */
	struct UUI_Update_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Update.UI_Update_C.Tick
	 */
	struct UUI_Update_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Update.UI_Update_C.ReceiveShow
	 */
	struct UUI_Update_C_ReceiveShow_Params
	{	};

	/**
	 * Function UI_Update.UI_Update_C.ConnectGateExec
	 */
	struct UUI_Update_C_ConnectGateExec_Params
	{	};

	/**
	 * Function UI_Update.UI_Update_C.ReceiveHide
	 */
	struct UUI_Update_C_ReceiveHide_Params
	{	};

	/**
	 * Function UI_Update.UI_Update_C.BndEvt__btn_link_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Update_C_BndEvt__btn_link_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Update.UI_Update_C.BndEvt__btn_link_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Update_C_BndEvt__btn_link_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Update.UI_Update_C.ExecuteUbergraph_UI_Update
	 */
	struct UUI_Update_C_ExecuteUbergraph_UI_Update_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

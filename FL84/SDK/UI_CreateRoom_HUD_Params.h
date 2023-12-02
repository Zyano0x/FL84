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
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.GetModuleName
	 */
	struct UUI_CreateRoom_HUD_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.SetOnwerMode
	 */
	struct UUI_CreateRoom_HUD_C_SetOnwerMode_Params
	{
	public:
		bool                                                       IsOwner;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O9EY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.ShowSpectator
	 */
	struct UUI_CreateRoom_HUD_C_ShowSpectator_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Construct
	 */
	struct UUI_CreateRoom_HUD_C_Construct_Params
	{	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Start Ticking
	 */
	struct UUI_CreateRoom_HUD_C_StartTicking_Params
	{	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.TikTok
	 */
	struct UUI_CreateRoom_HUD_C_TikTok_Params
	{	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.BndEvt__UI_Component_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UUI_CreateRoom_HUD_C_BndEvt__UI_Component_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.BndEvt__UI_Component_Btn_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UUI_CreateRoom_HUD_C_BndEvt__UI_Component_Btn_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Update Button State
	 */
	struct UUI_CreateRoom_HUD_C_UpdateButtonState_Params
	{
	public:
		bool                                                       CanStart;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.OnRoomInfoSwitch
	 */
	struct UUI_CreateRoom_HUD_C_OnRoomInfoSwitch_Params
	{	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.OnStartGame
	 */
	struct UUI_CreateRoom_HUD_C_OnStartGame_Params
	{	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Event_RoomInfoSwitch
	 */
	struct UUI_CreateRoom_HUD_C_Event_RoomInfoSwitch_Params
	{	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Event_GameStart
	 */
	struct UUI_CreateRoom_HUD_C_Event_GameStart_Params
	{	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.OnShow
	 */
	struct UUI_CreateRoom_HUD_C_OnShow_Params
	{	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.OnHide
	 */
	struct UUI_CreateRoom_HUD_C_OnHide_Params
	{	};

	/**
	 * Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.ExecuteUbergraph_UI_CreateRoom_HUD
	 */
	struct UUI_CreateRoom_HUD_C_ExecuteUbergraph_UI_CreateRoom_HUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

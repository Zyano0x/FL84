#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.GetModuleName
	 */
	struct UUI_Component_PlayerHead_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetDefaultSteamAvatar
	 */
	struct UUI_Component_PlayerHead_C_SetDefaultSteamAvatar_Params
	{	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetVipType
	 */
	struct UUI_Component_PlayerHead_C_SetVipType_Params
	{
	public:
		unsigned char                                              VipType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2J39[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnTouchMoved
	 */
	struct UUI_Component_PlayerHead_C_OnTouchMoved_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InTouchEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarState
	 */
	struct UUI_Component_PlayerHead_C_SetAvatarState_Params
	{
	public:
		bool                                                       IsCollapsed;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarIcon
	 */
	struct UUI_Component_PlayerHead_C_SetAvatarIcon_Params
	{
	public:
		int32_t                                                    InAvatarID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DQR2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetEmptyState
	 */
	struct UUI_Component_PlayerHead_C_SetEmptyState_Params
	{
	public:
		bool                                                       IsEmpty;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetPlayerGender
	 */
	struct UUI_Component_PlayerHead_C_SetPlayerGender_Params
	{
	public:
		E_Type_Gender                                              Gender;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetSocialIcon
	 */
	struct UUI_Component_PlayerHead_C_SetSocialIcon_Params
	{
	public:
		E_Type_Social                                              Social;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Component_PlayerHead_C_BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.Update
	 */
	struct UUI_Component_PlayerHead_C_Update_Params
	{	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.Construct
	 */
	struct UUI_Component_PlayerHead_C_Construct_Params
	{	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.PreConstruct
	 */
	struct UUI_Component_PlayerHead_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Component_PlayerHead_C_BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.ExecuteUbergraph_UI_Component_PlayerHead
	 */
	struct UUI_Component_PlayerHead_C_ExecuteUbergraph_UI_Component_PlayerHead_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnReleased__DelegateSignature
	 */
	struct UUI_Component_PlayerHead_C_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked__DelegateSignature
	 */
	struct UUI_Component_PlayerHead_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

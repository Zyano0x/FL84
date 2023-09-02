﻿#pragma once

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
	 * Function UI_Component_Btn.UI_Component_Btn_C.IsAvailable
	 */
	struct UUI_Component_Btn_C_IsAvailable_Params
	{
	public:
		bool                                                       Availble;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.SetBtnTxt
	 */
	struct UUI_Component_Btn_C_SetBtnTxt_Params
	{
	public:
		class FString                                              NewParam;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.SetBtnState
	 */
	struct UUI_Component_Btn_C_SetBtnState_Params
	{
	public:
		E_State_Btn                                                State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.GetLocalText
	 */
	struct UUI_Component_Btn_C_GetLocalText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.PreConstruct
	 */
	struct UUI_Component_Btn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.Construct
	 */
	struct UUI_Component_Btn_C_Construct_Params
	{	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.Update
	 */
	struct UUI_Component_Btn_C_Update_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.SetBtnText
	 */
	struct UUI_Component_Btn_C_SetBtnText_Params
	{
	public:
		E_State_Btn                                                ____;                                                       // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Component_Btn_C_BndEvt__OperateArea_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 */
	struct UUI_Component_Btn_C_BndEvt__OperateArea_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_Component_Btn_C_BndEvt__OperateArea_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.OnLocLangChanged
	 */
	struct UUI_Component_Btn_C_OnLocLangChanged_Params
	{
	public:
		class UObject*                                             Publisher;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      MetaData;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.ExecuteUbergraph_UI_Component_Btn
	 */
	struct UUI_Component_Btn_C_ExecuteUbergraph_UI_Component_Btn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.OnReleased__DelegateSignature
	 */
	struct UUI_Component_Btn_C_OnReleased__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.OnClicked__DelegateSignature
	 */
	struct UUI_Component_Btn_C_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Component_Btn.UI_Component_Btn_C.OnPressed__DelegateSignature
	 */
	struct UUI_Component_Btn_C_OnPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
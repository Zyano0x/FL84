/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_CreateRoom_HUD_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.GetModuleName"));
		
		UUI_CreateRoom_HUD_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.SetOnwerMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsOwner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_HUD_C::SetOnwerMode(bool IsOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.SetOnwerMode"));
		
		UUI_CreateRoom_HUD_C_SetOnwerMode_Params params {};
		params.IsOwner = IsOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.ShowSpectator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_HUD_C::ShowSpectator(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.ShowSpectator"));
		
		UUI_CreateRoom_HUD_C_ShowSpectator_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CreateRoom_HUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Construct"));
		
		UUI_CreateRoom_HUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Start Ticking
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_HUD_C::StartTicking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Start Ticking"));
		
		UUI_CreateRoom_HUD_C_StartTicking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.TikTok
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_HUD_C::TikTok()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.TikTok"));
		
		UUI_CreateRoom_HUD_C_TikTok_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.BndEvt__UI_Component_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CreateRoom_HUD_C::BndEvt__UI_Component_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.BndEvt__UI_Component_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature"));
		
		UUI_CreateRoom_HUD_C_BndEvt__UI_Component_Btn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.BndEvt__UI_Component_Btn_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UUI_CreateRoom_HUD_C::BndEvt__UI_Component_Btn_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.BndEvt__UI_Component_Btn_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature"));
		
		UUI_CreateRoom_HUD_C_BndEvt__UI_Component_Btn_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Update Button State
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanStart                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_HUD_C::UpdateButtonState(bool CanStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Update Button State"));
		
		UUI_CreateRoom_HUD_C_UpdateButtonState_Params params {};
		params.CanStart = CanStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.OnRoomInfoSwitch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_HUD_C::OnRoomInfoSwitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.OnRoomInfoSwitch"));
		
		UUI_CreateRoom_HUD_C_OnRoomInfoSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.OnStartGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_HUD_C::OnStartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.OnStartGame"));
		
		UUI_CreateRoom_HUD_C_OnStartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Event_RoomInfoSwitch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_HUD_C::Event_RoomInfoSwitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Event_RoomInfoSwitch"));
		
		UUI_CreateRoom_HUD_C_Event_RoomInfoSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Event_GameStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_HUD_C::Event_GameStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.Event_GameStart"));
		
		UUI_CreateRoom_HUD_C_Event_GameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.OnShow
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_CreateRoom_HUD_C::OnShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.OnShow"));
		
		UUI_CreateRoom_HUD_C_OnShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.OnHide
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_CreateRoom_HUD_C::OnHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.OnHide"));
		
		UUI_CreateRoom_HUD_C_OnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.ExecuteUbergraph_UI_CreateRoom_HUD
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_HUD_C::ExecuteUbergraph_UI_CreateRoom_HUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_HUD.UI_CreateRoom_HUD_C.ExecuteUbergraph_UI_CreateRoom_HUD"));
		
		UUI_CreateRoom_HUD_C_ExecuteUbergraph_UI_CreateRoom_HUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CreateRoom_HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CreateRoom_HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_CreateRoom_HUD.UI_CreateRoom_HUD_C"));
		return ptr;
	}

}



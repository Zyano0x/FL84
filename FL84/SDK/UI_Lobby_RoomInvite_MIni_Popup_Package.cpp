/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Lobby_RoomInvite_MIni_Popup_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.GetModuleName");
		
		UUI_Lobby_RoomInvite_MIni_Popup_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.Update_Btn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ET_Type_Button                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Lobby_RoomInvite_MIni_Popup_C::Update_Btn(ET_Type_Button NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.Update_Btn");
		
		UUI_Lobby_RoomInvite_MIni_Popup_C_Update_Btn_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.SetType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ET_Type_System_Push                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Lobby_RoomInvite_MIni_Popup_C::SetType(ET_Type_System_Push Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.SetType");
		
		UUI_Lobby_RoomInvite_MIni_Popup_C_SetType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Lobby_RoomInvite_MIni_Popup_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.PreConstruct");
		
		UUI_Lobby_RoomInvite_MIni_Popup_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.ExecuteUbergraph_UI_Lobby_RoomInvite_MIni_Popup
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Lobby_RoomInvite_MIni_Popup_C::ExecuteUbergraph_UI_Lobby_RoomInvite_MIni_Popup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C.ExecuteUbergraph_UI_Lobby_RoomInvite_MIni_Popup");
		
		UUI_Lobby_RoomInvite_MIni_Popup_C_ExecuteUbergraph_UI_Lobby_RoomInvite_MIni_Popup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Lobby_RoomInvite_MIni_Popup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Lobby_RoomInvite_MIni_Popup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Lobby_RoomInvite_MIni_Popup.UI_Lobby_RoomInvite_MIni_Popup_C");
		return ptr;
	}

}



/**
 * Name: FL84
 * Version: 15.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.OnClicked_D57F39144AAA4E1704B809A3EB91C266
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Lobby_TeamInvite_Popup_C::OnClicked_D57F39144AAA4E1704B809A3EB91C266()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.OnClicked_D57F39144AAA4E1704B809A3EB91C266"));
		
		UUI_Lobby_TeamInvite_Popup_C_OnClicked_D57F39144AAA4E1704B809A3EB91C266_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.OnClicked_42ED2B6A446312FF451BA4905C19ACEE
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Lobby_TeamInvite_Popup_C::OnClicked_42ED2B6A446312FF451BA4905C19ACEE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.OnClicked_42ED2B6A446312FF451BA4905C19ACEE"));
		
		UUI_Lobby_TeamInvite_Popup_C_OnClicked_42ED2B6A446312FF451BA4905C19ACEE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Lobby_TeamInvite_Popup_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.Destruct"));
		
		UUI_Lobby_TeamInvite_Popup_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Lobby_TeamInvite_Popup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.Construct"));
		
		UUI_Lobby_TeamInvite_Popup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Lobby_TeamInvite_Popup_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.GetModuleName"));
		
		UUI_Lobby_TeamInvite_Popup_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.SetType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ET_Type_Invitation                                 Pop_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Lobby_TeamInvite_Popup_C::SetType(ET_Type_Invitation Pop_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.SetType"));
		
		UUI_Lobby_TeamInvite_Popup_C_SetType_Params params {};
		params.Pop_Type = Pop_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Lobby_TeamInvite_Popup_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.PreConstruct"));
		
		UUI_Lobby_TeamInvite_Popup_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.ExecuteUbergraph_UI_Lobby_TeamInvite_Popup
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Lobby_TeamInvite_Popup_C::ExecuteUbergraph_UI_Lobby_TeamInvite_Popup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.ExecuteUbergraph_UI_Lobby_TeamInvite_Popup"));
		
		UUI_Lobby_TeamInvite_Popup_C_ExecuteUbergraph_UI_Lobby_TeamInvite_Popup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Lobby_TeamInvite_Popup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Lobby_TeamInvite_Popup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C"));
		return ptr;
	}

}



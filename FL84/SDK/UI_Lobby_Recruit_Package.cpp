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
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnClicked_DA0FFAFD4DE80F1986F3A58946724480
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Lobby_Recruit_C::OnClicked_DA0FFAFD4DE80F1986F3A58946724480()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnClicked_DA0FFAFD4DE80F1986F3A58946724480"));
		
		UUI_Lobby_Recruit_C_OnClicked_DA0FFAFD4DE80F1986F3A58946724480_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnClicked_B65D6933465FC9953CB8A3A276CB7BBC
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Lobby_Recruit_C::OnClicked_B65D6933465FC9953CB8A3A276CB7BBC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnClicked_B65D6933465FC9953CB8A3A276CB7BBC"));
		
		UUI_Lobby_Recruit_C_OnClicked_B65D6933465FC9953CB8A3A276CB7BBC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Lobby_Recruit_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.Destruct"));
		
		UUI_Lobby_Recruit_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnSolarUIClosed
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_Lobby_Recruit_C::OnSolarUIClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnSolarUIClosed"));
		
		UUI_Lobby_Recruit_C_OnSolarUIClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnSolarUIOpened
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_Lobby_Recruit_C::OnSolarUIOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnSolarUIOpened"));
		
		UUI_Lobby_Recruit_C_OnSolarUIOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.ConstructCopy
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Lobby_Recruit_C::ConstructCopy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.ConstructCopy"));
		
		UUI_Lobby_Recruit_C_ConstructCopy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Lobby_Recruit_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.GetModuleName"));
		
		UUI_Lobby_Recruit_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.SetSize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SizeH                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SizeW                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Lobby_Recruit_C::SetSize(int32_t SizeH, int32_t SizeW)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.SetSize"));
		
		UUI_Lobby_Recruit_C_SetSize_Params params {};
		params.SizeH = SizeH;
		params.SizeW = SizeW;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.SetStateDesktop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_Type_State_Desktop                               StateDesktopInvite                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_Type_State_Desktop                               StateDesktopRecruit                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Lobby_Recruit_C::SetStateDesktop(E_Type_State_Desktop StateDesktopInvite, E_Type_State_Desktop StateDesktopRecruit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.SetStateDesktop"));
		
		UUI_Lobby_Recruit_C_SetStateDesktop_Params params {};
		params.StateDesktopInvite = StateDesktopInvite;
		params.StateDesktopRecruit = StateDesktopRecruit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Lobby_Recruit_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.PreConstruct"));
		
		UUI_Lobby_Recruit_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Lobby_Recruit_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.Construct"));
		
		UUI_Lobby_Recruit_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.ExecuteUbergraph_UI_Lobby_Recruit
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Lobby_Recruit_C::ExecuteUbergraph_UI_Lobby_Recruit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.ExecuteUbergraph_UI_Lobby_Recruit"));
		
		UUI_Lobby_Recruit_C_ExecuteUbergraph_UI_Lobby_Recruit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Lobby_Recruit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Lobby_Recruit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Lobby_Recruit.UI_Lobby_Recruit_C"));
		return ptr;
	}

}



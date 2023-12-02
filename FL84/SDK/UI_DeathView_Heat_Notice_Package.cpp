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
	 * 		Name   -> DelegateFunction UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C.Delegate_8E1A0ED84927353BB5A9D3BBA5AFB009
	 * 		Flags  -> (Public, Delegate)
	 */
	void UUI_DeathView_Heat_Notice_C::Delegate_8E1A0ED84927353BB5A9D3BBA5AFB009()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C.Delegate_8E1A0ED84927353BB5A9D3BBA5AFB009"));
		
		UUI_DeathView_Heat_Notice_C_Delegate_8E1A0ED84927353BB5A9D3BBA5AFB009_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_DeathView_Heat_Notice_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C.Destruct"));
		
		UUI_DeathView_Heat_Notice_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_DeathView_Heat_Notice_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C.Construct"));
		
		UUI_DeathView_Heat_Notice_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_DeathView_Heat_Notice_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C.GetModuleName"));
		
		UUI_DeathView_Heat_Notice_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C.SetFriends
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFriends                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_DeathView_Heat_Notice_C::SetFriends(bool IsFriends)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C.SetFriends"));
		
		UUI_DeathView_Heat_Notice_C_SetFriends_Params params {};
		params.IsFriends = IsFriends;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_DeathView_Heat_Notice_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C.PreConstruct"));
		
		UUI_DeathView_Heat_Notice_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C.ExecuteUbergraph_UI_DeathView_Heat_Notice
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DeathView_Heat_Notice_C::ExecuteUbergraph_UI_DeathView_Heat_Notice(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C.ExecuteUbergraph_UI_DeathView_Heat_Notice"));
		
		UUI_DeathView_Heat_Notice_C_ExecuteUbergraph_UI_DeathView_Heat_Notice_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DeathView_Heat_Notice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DeathView_Heat_Notice_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_DeathView_Heat_Notice.UI_DeathView_Heat_Notice_C"));
		return ptr;
	}

}



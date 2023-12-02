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
	 * 		Name   -> DelegateFunction UI_Lobby_Tournament.UI_Lobby_Tournament_C.OnClicked_DD64CEC24BCAC5A772A8D1A68655D70F
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Lobby_Tournament_C::OnClicked_DD64CEC24BCAC5A772A8D1A68655D70F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Lobby_Tournament.UI_Lobby_Tournament_C.OnClicked_DD64CEC24BCAC5A772A8D1A68655D70F"));
		
		UUI_Lobby_Tournament_C_OnClicked_DD64CEC24BCAC5A772A8D1A68655D70F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Lobby_Tournament_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.Destruct"));
		
		UUI_Lobby_Tournament_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Lobby_Tournament_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.Construct"));
		
		UUI_Lobby_Tournament_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Lobby_Tournament_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.OnInitialized"));
		
		UUI_Lobby_Tournament_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Lobby_Tournament_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.GetModuleName"));
		
		UUI_Lobby_Tournament_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Lobby_Tournament_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.PreConstruct"));
		
		UUI_Lobby_Tournament_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.ExecuteUbergraph_UI_Lobby_Tournament
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Lobby_Tournament_C::ExecuteUbergraph_UI_Lobby_Tournament(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.ExecuteUbergraph_UI_Lobby_Tournament"));
		
		UUI_Lobby_Tournament_C_ExecuteUbergraph_UI_Lobby_Tournament_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Lobby_Tournament_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Lobby_Tournament_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Lobby_Tournament.UI_Lobby_Tournament_C"));
		return ptr;
	}

}



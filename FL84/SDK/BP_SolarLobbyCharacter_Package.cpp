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
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.IsCanOpenMirror
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	bool ABP_SolarLobbyCharacter_C::IsCanOpenMirror()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.IsCanOpenMirror"));
		
		ABP_SolarLobbyCharacter_C_IsCanOpenMirror_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.InitCharacterByLua
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_SolarLobbyCharacter_C::InitCharacterByLua()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.InitCharacterByLua"));
		
		ABP_SolarLobbyCharacter_C_InitCharacterByLua_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.IsCanOpenChangeAnim
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	bool ABP_SolarLobbyCharacter_C::IsCanOpenChangeAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.IsCanOpenChangeAnim"));
		
		ABP_SolarLobbyCharacter_C_IsCanOpenChangeAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ClearCharacterByLua
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_SolarLobbyCharacter_C::ClearCharacterByLua()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ClearCharacterByLua"));
		
		ABP_SolarLobbyCharacter_C_ClearCharacterByLua_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString ABP_SolarLobbyCharacter_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.GetModuleName"));
		
		ABP_SolarLobbyCharacter_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_SolarLobbyCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ReceiveBeginPlay"));
		
		ABP_SolarLobbyCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ExecuteUbergraph_BP_SolarLobbyCharacter
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SolarLobbyCharacter_C::ExecuteUbergraph_BP_SolarLobbyCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ExecuteUbergraph_BP_SolarLobbyCharacter"));
		
		ABP_SolarLobbyCharacter_C_ExecuteUbergraph_BP_SolarLobbyCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SolarLobbyCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SolarLobbyCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C"));
		return ptr;
	}

}



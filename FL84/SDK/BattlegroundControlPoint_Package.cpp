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
	 * 		Name   -> Function BattlegroundControlPoint.BattlegroundControlPoint_C.GetOccupying
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               NewOccupying                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABattlegroundControlPoint_C::GetOccupying(bool* NewOccupying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattlegroundControlPoint.BattlegroundControlPoint_C.GetOccupying"));
		
		ABattlegroundControlPoint_C_GetOccupying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewOccupying != nullptr)
			*NewOccupying = params.NewOccupying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattlegroundControlPoint.BattlegroundControlPoint_C.GetStatus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EFactionType                                       InFaction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EControlPointStatus                                OutStatus                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABattlegroundControlPoint_C::GetStatus(EFactionType InFaction, EControlPointStatus* OutStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattlegroundControlPoint.BattlegroundControlPoint_C.GetStatus"));
		
		ABattlegroundControlPoint_C_GetStatus_Params params {};
		params.InFaction = InFaction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStatus != nullptr)
			*OutStatus = params.OutStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattlegroundControlPoint.BattlegroundControlPoint_C.OnOccupiedChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABattlegroundControlPoint_C::OnOccupiedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattlegroundControlPoint.BattlegroundControlPoint_C.OnOccupiedChanged"));
		
		ABattlegroundControlPoint_C_OnOccupiedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattlegroundControlPoint.BattlegroundControlPoint_C.OnOccupyingChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABattlegroundControlPoint_C::OnOccupyingChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattlegroundControlPoint.BattlegroundControlPoint_C.OnOccupyingChanged"));
		
		ABattlegroundControlPoint_C_OnOccupyingChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattlegroundControlPoint.BattlegroundControlPoint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABattlegroundControlPoint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattlegroundControlPoint.BattlegroundControlPoint_C.ReceiveBeginPlay"));
		
		ABattlegroundControlPoint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattlegroundControlPoint.BattlegroundControlPoint_C.K2_OnOccupiedFactionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABattlegroundControlPoint_C::K2_OnOccupiedFactionChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattlegroundControlPoint.BattlegroundControlPoint_C.K2_OnOccupiedFactionChanged"));
		
		ABattlegroundControlPoint_C_K2_OnOccupiedFactionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattlegroundControlPoint.BattlegroundControlPoint_C.K2_OnCharactersInsideChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABattlegroundControlPoint_C::K2_OnCharactersInsideChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattlegroundControlPoint.BattlegroundControlPoint_C.K2_OnCharactersInsideChanged"));
		
		ABattlegroundControlPoint_C_K2_OnCharactersInsideChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattlegroundControlPoint.BattlegroundControlPoint_C.K2_OnProgressOwnerFactionChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABattlegroundControlPoint_C::K2_OnProgressOwnerFactionChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattlegroundControlPoint.BattlegroundControlPoint_C.K2_OnProgressOwnerFactionChanged"));
		
		ABattlegroundControlPoint_C_K2_OnProgressOwnerFactionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattlegroundControlPoint.BattlegroundControlPoint_C.K2_OnProgressStatusChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABattlegroundControlPoint_C::K2_OnProgressStatusChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattlegroundControlPoint.BattlegroundControlPoint_C.K2_OnProgressStatusChanged"));
		
		ABattlegroundControlPoint_C_K2_OnProgressStatusChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattlegroundControlPoint.BattlegroundControlPoint_C.ExecuteUbergraph_BattlegroundControlPoint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABattlegroundControlPoint_C::ExecuteUbergraph_BattlegroundControlPoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattlegroundControlPoint.BattlegroundControlPoint_C.ExecuteUbergraph_BattlegroundControlPoint"));
		
		ABattlegroundControlPoint_C_ExecuteUbergraph_BattlegroundControlPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABattlegroundControlPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABattlegroundControlPoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BattlegroundControlPoint.BattlegroundControlPoint_C"));
		return ptr;
	}

}



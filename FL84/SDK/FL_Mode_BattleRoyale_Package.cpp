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
	 * 		Name   -> Function FL_Mode_BattleRoyale.FL_Mode_BattleRoyale_C.[s]UpdateTeamCountMax
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UFL_Mode_BattleRoyale_C::STATIC_sUpdateTeamCountMax(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_BattleRoyale.FL_Mode_BattleRoyale_C.[s]UpdateTeamCountMax"));
		
		UFL_Mode_BattleRoyale_C_sUpdateTeamCountMax_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_BattleRoyale.FL_Mode_BattleRoyale_C.OutputLog
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_BattleLog_BattleRoyale                           LogType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FString, class FString>                 InputPin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Mode_BattleRoyale_C::STATIC_OutputLog(E_BattleLog_BattleRoyale LogType, TMap<class FString, class FString> InputPin, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_BattleRoyale.FL_Mode_BattleRoyale_C.OutputLog"));
		
		UFL_Mode_BattleRoyale_C_OutputLog_Params params {};
		params.LogType = LogType;
		params.InputPin = InputPin;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_Mode_BattleRoyale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_Mode_BattleRoyale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass FL_Mode_BattleRoyale.FL_Mode_BattleRoyale_C"));
		return ptr;
	}

}



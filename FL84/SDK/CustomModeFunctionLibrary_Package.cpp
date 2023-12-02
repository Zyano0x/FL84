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
	 * 		Name   -> Function CustomModeFunctionLibrary.CustomModeFunctionLibrary_C.LetPlayerOut
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomModeFunctionLibrary_C::STATIC_LetPlayerOut(class ASCMPlayerState* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CustomModeFunctionLibrary.CustomModeFunctionLibrary_C.LetPlayerOut"));
		
		UCustomModeFunctionLibrary_C_LetPlayerOut_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CustomModeFunctionLibrary.CustomModeFunctionLibrary_C.[ A]Bind On Basic System Ready
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bReady                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomModeFunctionLibrary_C::STATIC_ABindOnBasicSystemReady(const class FScriptDelegate& Event, class UObject* __WorldContext, bool* bReady)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CustomModeFunctionLibrary.CustomModeFunctionLibrary_C.[ A]Bind On Basic System Ready"));
		
		UCustomModeFunctionLibrary_C_ABindOnBasicSystemReady_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bReady != nullptr)
			*bReady = params.bReady;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function CustomModeFunctionLibrary.CustomModeFunctionLibrary_C.[s]GetPlayerManager
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UBPC_PlayerManager_C* UCustomModeFunctionLibrary_C::STATIC_sGetPlayerManager(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function CustomModeFunctionLibrary.CustomModeFunctionLibrary_C.[s]GetPlayerManager"));
		
		UCustomModeFunctionLibrary_C_sGetPlayerManager_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomModeFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomModeFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass CustomModeFunctionLibrary.CustomModeFunctionLibrary_C"));
		return ptr;
	}

}



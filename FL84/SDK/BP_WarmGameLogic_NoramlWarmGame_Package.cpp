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
	 * 		Name   -> Function BP_WarmGameLogic_NoramlWarmGame.BP_WarmGameLogic_NoramlWarmGame_C.Event_ExecLogic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_WarmGameLogic_NoramlWarmGame_C::Event_ExecLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_WarmGameLogic_NoramlWarmGame.BP_WarmGameLogic_NoramlWarmGame_C.Event_ExecLogic"));
		
		ABP_WarmGameLogic_NoramlWarmGame_C_Event_ExecLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_WarmGameLogic_NoramlWarmGame.BP_WarmGameLogic_NoramlWarmGame_C.ExecuteUbergraph_BP_WarmGameLogic_NoramlWarmGame
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WarmGameLogic_NoramlWarmGame_C::ExecuteUbergraph_BP_WarmGameLogic_NoramlWarmGame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_WarmGameLogic_NoramlWarmGame.BP_WarmGameLogic_NoramlWarmGame_C.ExecuteUbergraph_BP_WarmGameLogic_NoramlWarmGame"));
		
		ABP_WarmGameLogic_NoramlWarmGame_C_ExecuteUbergraph_BP_WarmGameLogic_NoramlWarmGame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WarmGameLogic_NoramlWarmGame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WarmGameLogic_NoramlWarmGame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_WarmGameLogic_NoramlWarmGame.BP_WarmGameLogic_NoramlWarmGame_C"));
		return ptr;
	}

}



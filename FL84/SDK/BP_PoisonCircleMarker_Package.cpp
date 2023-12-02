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
	 * 		Name   -> Function BP_PoisonCircleMarker.BP_PoisonCircleMarker_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PoisonCircleMarker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PoisonCircleMarker.BP_PoisonCircleMarker_C.ReceiveBeginPlay"));
		
		ABP_PoisonCircleMarker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PoisonCircleMarker.BP_PoisonCircleMarker_C.ExecuteUbergraph_BP_PoisonCircleMarker
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PoisonCircleMarker_C::ExecuteUbergraph_BP_PoisonCircleMarker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PoisonCircleMarker.BP_PoisonCircleMarker_C.ExecuteUbergraph_BP_PoisonCircleMarker"));
		
		ABP_PoisonCircleMarker_C_ExecuteUbergraph_BP_PoisonCircleMarker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PoisonCircleMarker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PoisonCircleMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_PoisonCircleMarker.BP_PoisonCircleMarker_C"));
		return ptr;
	}

}



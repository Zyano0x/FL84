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
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function ChaGCBP_HighAlert.ChaGCBP_HighAlert_C.ReceiveAlertEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EAlertDirection                                    InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChaGCBP_HighAlert_C::ReceiveAlertEvent(EAlertDirection InDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ChaGCBP_HighAlert.ChaGCBP_HighAlert_C.ReceiveAlertEvent"));
		
		AChaGCBP_HighAlert_C_ReceiveAlertEvent_Params params {};
		params.InDirection = InDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function ChaGCBP_HighAlert.ChaGCBP_HighAlert_C.ExecuteUbergraph_ChaGCBP_HighAlert
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChaGCBP_HighAlert_C::ExecuteUbergraph_ChaGCBP_HighAlert(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ChaGCBP_HighAlert.ChaGCBP_HighAlert_C.ExecuteUbergraph_ChaGCBP_HighAlert"));
		
		AChaGCBP_HighAlert_C_ExecuteUbergraph_ChaGCBP_HighAlert_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChaGCBP_HighAlert_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChaGCBP_HighAlert_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass ChaGCBP_HighAlert.ChaGCBP_HighAlert_C"));
		return ptr;
	}

}



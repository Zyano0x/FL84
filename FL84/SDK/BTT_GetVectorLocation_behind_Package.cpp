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
	 * 		Name   -> Function BTT_GetVectorLocation_behind.BTT_GetVectorLocation_behind_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_GetVectorLocation_behind_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BTT_GetVectorLocation_behind.BTT_GetVectorLocation_behind_C.ReceiveExecuteAI"));
		
		UBTT_GetVectorLocation_behind_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BTT_GetVectorLocation_behind.BTT_GetVectorLocation_behind_C.ExecuteUbergraph_BTT_GetVectorLocation_behind
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_GetVectorLocation_behind_C::ExecuteUbergraph_BTT_GetVectorLocation_behind(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BTT_GetVectorLocation_behind.BTT_GetVectorLocation_behind_C.ExecuteUbergraph_BTT_GetVectorLocation_behind"));
		
		UBTT_GetVectorLocation_behind_C_ExecuteUbergraph_BTT_GetVectorLocation_behind_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_GetVectorLocation_behind_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_GetVectorLocation_behind_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BTT_GetVectorLocation_behind.BTT_GetVectorLocation_behind_C"));
		return ptr;
	}

}



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
	 * 		Name   -> Function BP_BTT_SetPlayerToWarmTarget.BP_BTT_SetPlayerToWarmTarget_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BTT_SetPlayerToWarmTarget_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BTT_SetPlayerToWarmTarget.BP_BTT_SetPlayerToWarmTarget_C.ReceiveExecuteAI"));
		
		UBP_BTT_SetPlayerToWarmTarget_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BTT_SetPlayerToWarmTarget.BP_BTT_SetPlayerToWarmTarget_C.ExecuteUbergraph_BP_BTT_SetPlayerToWarmTarget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BTT_SetPlayerToWarmTarget_C::ExecuteUbergraph_BP_BTT_SetPlayerToWarmTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BTT_SetPlayerToWarmTarget.BP_BTT_SetPlayerToWarmTarget_C.ExecuteUbergraph_BP_BTT_SetPlayerToWarmTarget"));
		
		UBP_BTT_SetPlayerToWarmTarget_C_ExecuteUbergraph_BP_BTT_SetPlayerToWarmTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BTT_SetPlayerToWarmTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BTT_SetPlayerToWarmTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_BTT_SetPlayerToWarmTarget.BP_BTT_SetPlayerToWarmTarget_C"));
		return ptr;
	}

}



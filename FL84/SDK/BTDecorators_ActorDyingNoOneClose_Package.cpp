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
	 * 		Name   -> Function BTDecorators_ActorDyingNoOneClose.BTDecorators_ActorDyingNoOneClose_C.PerformConditionCheckAI
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBTDecorators_ActorDyingNoOneClose_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BTDecorators_ActorDyingNoOneClose.BTDecorators_ActorDyingNoOneClose_C.PerformConditionCheckAI"));
		
		UBTDecorators_ActorDyingNoOneClose_C_PerformConditionCheckAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorators_ActorDyingNoOneClose_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorators_ActorDyingNoOneClose_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BTDecorators_ActorDyingNoOneClose.BTDecorators_ActorDyingNoOneClose_C"));
		return ptr;
	}

}



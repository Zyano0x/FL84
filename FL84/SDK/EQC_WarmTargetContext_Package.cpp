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
	 * 		Name   -> Function EQC_WarmTargetContext.EQC_WarmTargetContext_C.ProvideSingleActor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     QuerierObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      QuerierActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ResultingActor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEQC_WarmTargetContext_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function EQC_WarmTargetContext.EQC_WarmTargetContext_C.ProvideSingleActor"));
		
		UEQC_WarmTargetContext_C_ProvideSingleActor_Params params {};
		params.QuerierObject = QuerierObject;
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingActor != nullptr)
			*ResultingActor = params.ResultingActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEQC_WarmTargetContext_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQC_WarmTargetContext_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass EQC_WarmTargetContext.EQC_WarmTargetContext_C"));
		return ptr;
	}

}



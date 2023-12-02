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
	 * 		Name   -> Function EQC_Teammates.EQC_Teammates_C.ProvideSingleLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UObject*                                     QuerierObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      QuerierActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ResultingLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEQC_Teammates_C::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function EQC_Teammates.EQC_Teammates_C.ProvideSingleLocation"));
		
		UEQC_Teammates_C_ProvideSingleLocation_Params params {};
		params.QuerierObject = QuerierObject;
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingLocation != nullptr)
			*ResultingLocation = params.ResultingLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEQC_Teammates_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQC_Teammates_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass EQC_Teammates.EQC_Teammates_C"));
		return ptr;
	}

}



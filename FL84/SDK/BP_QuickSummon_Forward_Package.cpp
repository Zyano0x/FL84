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
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function BP_QuickSummon_Forward.BP_QuickSummon_Forward_C.TryGetSummonHitResult
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  OutHitResult                                               (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		class AActor*                                      InSummoner                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USolarSummonDetectionConfig*                 InSummonConfig                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_QuickSummon_Forward_C::TryGetSummonHitResult(struct FHitResult* OutHitResult, class AActor* InSummoner, class USolarSummonDetectionConfig* InSummonConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_QuickSummon_Forward.BP_QuickSummon_Forward_C.TryGetSummonHitResult"));
		
		UBP_QuickSummon_Forward_C_TryGetSummonHitResult_Params params {};
		params.InSummoner = InSummoner;
		params.InSummonConfig = InSummonConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHitResult != nullptr)
			*OutHitResult = params.OutHitResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_QuickSummon_Forward_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_QuickSummon_Forward_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_QuickSummon_Forward.BP_QuickSummon_Forward_C"));
		return ptr;
	}

}



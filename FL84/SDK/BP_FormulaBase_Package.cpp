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
	 * 		Name   -> Function BP_FormulaBase.BP_FormulaBase_C.GetCollectionItemRewards
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TMap<int32_t, int32_t> ABP_FormulaBase_C::GetCollectionItemRewards(class ASolarPlayerState* InPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_FormulaBase.BP_FormulaBase_C.GetCollectionItemRewards"));
		
		ABP_FormulaBase_C_GetCollectionItemRewards_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_FormulaBase.BP_FormulaBase_C.GetFixedLevelExp
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Origin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASolarPlayerState*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t ABP_FormulaBase_C::GetFixedLevelExp(int32_t Origin, class ASolarPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_FormulaBase.BP_FormulaBase_C.GetFixedLevelExp"));
		
		ABP_FormulaBase_C_GetFixedLevelExp_Params params {};
		params.Origin = Origin;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_FormulaBase.BP_FormulaBase_C.GetStrategyGuideConditions
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    OutResult                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void ABP_FormulaBase_C::GetStrategyGuideConditions(class ASolarPlayerState* InPS, TArray<int32_t>* OutResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_FormulaBase.BP_FormulaBase_C.GetStrategyGuideConditions"));
		
		ABP_FormulaBase_C_GetStrategyGuideConditions_Params params {};
		params.InPS = InPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResult != nullptr)
			*OutResult = params.OutResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FormulaBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FormulaBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_FormulaBase.BP_FormulaBase_C"));
		return ptr;
	}

}



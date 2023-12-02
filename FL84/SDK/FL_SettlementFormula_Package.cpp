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
	 * 		Name   -> Function FL_SettlementFormula.FL_SettlementFormula_C.IntCompareReward
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, int32_t>                             ItemCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Weight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Desc                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ItemList                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFL_SettlementFormula_C::STATIC_IntCompareReward(int32_t Source, int32_t Condition, TMap<int32_t, int32_t> ItemCount, float Weight, class UObject* __WorldContext, class FString* Desc, class FString* ItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_SettlementFormula.FL_SettlementFormula_C.IntCompareReward"));
		
		UFL_SettlementFormula_C_IntCompareReward_Params params {};
		params.Source = Source;
		params.Condition = Condition;
		params.ItemCount = ItemCount;
		params.Weight = Weight;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Desc != nullptr)
			*Desc = params.Desc;
		if (ItemList != nullptr)
			*ItemList = params.ItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_SettlementFormula.FL_SettlementFormula_C.GetCommonExtraRewards
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            SaveNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            KillNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AssitNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSettlementParam_ExtraRewardInfo>    NewParam                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFL_SettlementFormula_C::STATIC_GetCommonExtraRewards(int32_t SaveNum, int32_t KillNum, int32_t AssitNum, float DamageValue, class UObject* __WorldContext, TArray<struct FSettlementParam_ExtraRewardInfo>* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_SettlementFormula.FL_SettlementFormula_C.GetCommonExtraRewards"));
		
		UFL_SettlementFormula_C_GetCommonExtraRewards_Params params {};
		params.SaveNum = SaveNum;
		params.KillNum = KillNum;
		params.AssitNum = AssitNum;
		params.DamageValue = DamageValue;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_SettlementFormula.FL_SettlementFormula_C.Combine Reward Item
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              RewardList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      RewardString                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFL_SettlementFormula_C::STATIC_CombineRewardItem(TArray<class FString>* RewardList, class UObject* __WorldContext, class FString* RewardString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_SettlementFormula.FL_SettlementFormula_C.Combine Reward Item"));
		
		UFL_SettlementFormula_C_CombineRewardItem_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RewardList != nullptr)
			*RewardList = params.RewardList;
		if (RewardString != nullptr)
			*RewardString = params.RewardString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_SettlementFormula.FL_SettlementFormula_C.FormatRewardItem
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Weight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ItemString                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFL_SettlementFormula_C::STATIC_FormatRewardItem(float Weight, int32_t ItemID, int32_t ItemCount, class UObject* __WorldContext, class FString* ItemString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_SettlementFormula.FL_SettlementFormula_C.FormatRewardItem"));
		
		UFL_SettlementFormula_C_FormatRewardItem_Params params {};
		params.Weight = Weight;
		params.ItemID = ItemID;
		params.ItemCount = ItemCount;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemString != nullptr)
			*ItemString = params.ItemString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_SettlementFormula_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_SettlementFormula_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass FL_SettlementFormula.FL_SettlementFormula_C"));
		return ptr;
	}

}



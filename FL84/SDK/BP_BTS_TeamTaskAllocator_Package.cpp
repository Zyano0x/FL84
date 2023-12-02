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
	 * 		Name   -> Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.DebugEachTaskScoreItem
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSolarScoringItemStruct                     TaskScore                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		ESolarTaskScoringItemType                          ItemType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Score                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BTS_TeamTaskAllocator_C::DebugEachTaskScoreItem(const struct FSolarScoringItemStruct& TaskScore, ESolarTaskScoringItemType ItemType, float Score, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.DebugEachTaskScoreItem"));
		
		UBP_BTS_TeamTaskAllocator_C_DebugEachTaskScoreItem_Params params {};
		params.TaskScore = TaskScore;
		params.ItemType = ItemType;
		params.Score = Score;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.DebugAllTaskScore
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FSolarScoringItemStruct>             TaskScoresList                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_BTS_TeamTaskAllocator_C::DebugAllTaskScore(TArray<struct FSolarScoringItemStruct> TaskScoresList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.DebugAllTaskScore"));
		
		UBP_BTS_TeamTaskAllocator_C_DebugAllTaskScore_Params params {};
		params.TaskScoresList = TaskScoresList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.CheckIfRescueBot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ASolarBotAIController*                       InController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      InState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_BTS_TeamTaskAllocator_C::CheckIfRescueBot(class ASolarBotAIController* InController, unsigned char InState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.CheckIfRescueBot"));
		
		UBP_BTS_TeamTaskAllocator_C_CheckIfRescueBot_Params params {};
		params.InController = InController;
		params.InState = InState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.GetSuitableRescueBot
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ASolarCharacter*                             TeammateInDanger                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USolarBotAITeamManager*                      TeamManager                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class ASolarBotAIController* UBP_BTS_TeamTaskAllocator_C::GetSuitableRescueBot(class ASolarCharacter* TeammateInDanger, class USolarBotAITeamManager* TeamManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.GetSuitableRescueBot"));
		
		UBP_BTS_TeamTaskAllocator_C_GetSuitableRescueBot_Params params {};
		params.TeammateInDanger = TeammateInDanger;
		params.TeamManager = TeamManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.SelfUpdateTaskState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 */
	void UBP_BTS_TeamTaskAllocator_C::SelfUpdateTaskState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C.SelfUpdateTaskState"));
		
		UBP_BTS_TeamTaskAllocator_C_SelfUpdateTaskState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BTS_TeamTaskAllocator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BTS_TeamTaskAllocator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_BTS_TeamTaskAllocator.BP_BTS_TeamTaskAllocator_C"));
		return ptr;
	}

}



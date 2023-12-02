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
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.OnRep_BattleStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DefenderManager_C::OnRep_BattleStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.OnRep_BattleStarted"));
		
		ABP_DefenderManager_C_OnRep_BattleStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.DataTraceDefender
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Data                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_DefenderManager_C::DataTraceDefender(class ASolarPlayerState* Target, class FString* Name, class FString* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.DataTraceDefender"));
		
		ABP_DefenderManager_C_DataTraceDefender_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.GetExtraReward
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Reward                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DefenderManager_C::GetExtraReward(int32_t* Reward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.GetExtraReward"));
		
		ABP_DefenderManager_C_GetExtraReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reward != nullptr)
			*Reward = params.Reward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.SetShowTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ShowTimeSelf                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ShowTimeDefender                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DefenderManager_C::SetShowTime(float ShowTimeSelf, float ShowTimeDefender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.SetShowTime"));
		
		ABP_DefenderManager_C_SetShowTime_Params params {};
		params.ShowTimeSelf = ShowTimeSelf;
		params.ShowTimeDefender = ShowTimeDefender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.GetTotalTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              TotalTime                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DefenderManager_C::GetTotalTime(float* TotalTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.GetTotalTime"));
		
		ABP_DefenderManager_C_GetTotalTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalTime != nullptr)
			*TotalTime = params.TotalTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.GetUI
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_OpeningShow_C*                           Output_Get                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DefenderManager_C::GetUI(class UUI_OpeningShow_C** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.GetUI"));
		
		ABP_DefenderManager_C_GetUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.OnRep_UIState
	 * 		Flags  -> (HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DefenderManager_C::OnRep_UIState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.OnRep_UIState"));
		
		ABP_DefenderManager_C_OnRep_UIState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_DefenderManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.ReceiveBeginPlay"));
		
		ABP_DefenderManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.[S]ShowDefenderUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DefenderManager_C::SShowDefenderUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.[S]ShowDefenderUI"));
		
		ABP_DefenderManager_C_SShowDefenderUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.OnUIStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_State_DefenderManager                            UiState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DefenderManager_C::OnUIStateChanged(E_State_DefenderManager UiState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.OnUIStateChanged"));
		
		ABP_DefenderManager_C_OnUIStateChanged_Params params {};
		params.UiState = UiState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.OnDefenderDataReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DefenderManager_C::OnDefenderDataReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.OnDefenderDataReady"));
		
		ABP_DefenderManager_C_OnDefenderDataReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.ShowDefenderUIForReplay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_DefenderManager_C::ShowDefenderUIForReplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.ShowDefenderUIForReplay"));
		
		ABP_DefenderManager_C_ShowDefenderUIForReplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.OnSideHeroPickEnd_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Side                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_DefenderManager_C::OnSideHeroPickEnd_Event_1(const class FString& Side)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.OnSideHeroPickEnd_Event_1"));
		
		ABP_DefenderManager_C_OnSideHeroPickEnd_Event_1_Params params {};
		params.Side = Side;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESCMInGameState                                    NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DefenderManager_C::CustomEvent_1(ESCMInGameState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.CustomEvent_1"));
		
		ABP_DefenderManager_C_CustomEvent_1_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DefenderManager.BP_DefenderManager_C.ExecuteUbergraph_BP_DefenderManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DefenderManager_C::ExecuteUbergraph_BP_DefenderManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DefenderManager.BP_DefenderManager_C.ExecuteUbergraph_BP_DefenderManager"));
		
		ABP_DefenderManager_C_ExecuteUbergraph_BP_DefenderManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DefenderManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DefenderManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_DefenderManager.BP_DefenderManager_C"));
		return ptr;
	}

}



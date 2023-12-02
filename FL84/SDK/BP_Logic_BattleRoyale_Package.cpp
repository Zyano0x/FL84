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
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetWeaponIDByCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASolarCharacter*                             InCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutWeaponID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::GetWeaponIDByCharacter(class ASolarCharacter* InCharacter, int32_t InSlot, int32_t* OutWeaponID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetWeaponIDByCharacter"));
		
		UBP_Logic_BattleRoyale_C_GetWeaponIDByCharacter_Params params {};
		params.InCharacter = InCharacter;
		params.InSlot = InSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWeaponID != nullptr)
			*OutWeaponID = params.OutWeaponID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetPlayerDataTraceByPlayer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_PlayerState_BattleRoyale_C*              InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FString, class FString>                 Map                                                        (Parm, OutParm)
	 */
	void UBP_Logic_BattleRoyale_C::GetPlayerDataTraceByPlayer(class ABP_PlayerState_BattleRoyale_C* InPlayerState, TMap<class FString, class FString>* Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetPlayerDataTraceByPlayer"));
		
		UBP_Logic_BattleRoyale_C_GetPlayerDataTraceByPlayer_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Map != nullptr)
			*Map = params.Map;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.HandleWinnerTeamPostSlomo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarTeamInfo*                              WinnerTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::HandleWinnerTeamPostSlomo(class ASolarTeamInfo* WinnerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.HandleWinnerTeamPostSlomo"));
		
		UBP_Logic_BattleRoyale_C_HandleWinnerTeamPostSlomo_Params params {};
		params.WinnerTeam = WinnerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.HandleWinnerTeamPreSlomo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarTeamInfo*                              WinnerTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::HandleWinnerTeamPreSlomo(class ASolarTeamInfo* WinnerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.HandleWinnerTeamPreSlomo"));
		
		UBP_Logic_BattleRoyale_C_HandleWinnerTeamPreSlomo_Params params {};
		params.WinnerTeam = WinnerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.PresettleAll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::PresettleAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.PresettleAll"));
		
		UBP_Logic_BattleRoyale_C_PresettleAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.DealTeammateAISettle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::DealTeammateAISettle(class ASolarPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.DealTeammateAISettle"));
		
		UBP_Logic_BattleRoyale_C_DealTeammateAISettle_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Custom Room Start
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::CustomRoomStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Custom Room Start"));
		
		UBP_Logic_BattleRoyale_C_CustomRoomStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.SendItemToPlayer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<int32_t, int32_t>                             ItemMap                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Logic_BattleRoyale_C::SendItemToPlayer(class ASolarPlayerState* Player, TMap<int32_t, int32_t> ItemMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.SendItemToPlayer"));
		
		UBP_Logic_BattleRoyale_C_SendItemToPlayer_Params params {};
		params.Player = Player;
		params.ItemMap = ItemMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetVehicleDataTrace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TMap<class FString, class FString>                 Map                                                        (ConstParm, Parm, OutParm)
	 */
	void UBP_Logic_BattleRoyale_C::GetVehicleDataTrace(TMap<class FString, class FString> Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetVehicleDataTrace"));
		
		UBP_Logic_BattleRoyale_C_GetVehicleDataTrace_Params params {};
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Init Poison Circle
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_MapInfoComponent_C*                      MapInfo                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::InitPoisonCircle(class UBP_MapInfoComponent_C** MapInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Init Poison Circle"));
		
		UBP_Logic_BattleRoyale_C_InitPoisonCircle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapInfo != nullptr)
			*MapInfo = params.MapInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetAiManager
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UBPC_AiManagerBattleRoyale_C*                Output_Get                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::GetAiManager(class UBPC_AiManagerBattleRoyale_C** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetAiManager"));
		
		UBP_Logic_BattleRoyale_C_GetAiManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.SetSkillStateByBattleState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::SetSkillStateByBattleState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.SetSkillStateByBattleState"));
		
		UBP_Logic_BattleRoyale_C_SetSkillStateByBattleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Get Shrink Index
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	int32_t UBP_Logic_BattleRoyale_C::GetShrinkIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Get Shrink Index"));
		
		UBP_Logic_BattleRoyale_C_GetShrinkIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.TryPushBattleState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_BattleState_BattleRoyale                         TargetState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ForcePush                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Logic_BattleRoyale_C::TryPushBattleState(E_BattleState_BattleRoyale TargetState, bool ForcePush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.TryPushBattleState"));
		
		UBP_Logic_BattleRoyale_C_TryPushBattleState_Params params {};
		params.TargetState = TargetState;
		params.ForcePush = ForcePush;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetWeaponID
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            weaponid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::GetWeaponID(int32_t ItemID, int32_t* weaponid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetWeaponID"));
		
		UBP_Logic_BattleRoyale_C_GetWeaponID_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (weaponid != nullptr)
			*weaponid = params.weaponid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.VehicleDataTrace
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::VehicleDataTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.VehicleDataTrace"));
		
		UBP_Logic_BattleRoyale_C_VehicleDataTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetPlayerDataTrace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_PlayerState_BattleRoyale_C*              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FString, class FString>                 Map                                                        (Parm, OutParm)
	 */
	void UBP_Logic_BattleRoyale_C::GetPlayerDataTrace(class ABP_PlayerState_BattleRoyale_C* Player, TMap<class FString, class FString>* Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetPlayerDataTrace"));
		
		UBP_Logic_BattleRoyale_C_GetPlayerDataTrace_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Map != nullptr)
			*Map = params.Map;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.KickOutExcessAI
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::KickOutExcessAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.KickOutExcessAI"));
		
		UBP_Logic_BattleRoyale_C_KickOutExcessAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ReceivePlayerReJoinRequest
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ErrorMsg                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool UBP_Logic_BattleRoyale_C::ReceivePlayerReJoinRequest(const class FString& PlayerId, class FString* ErrorMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ReceivePlayerReJoinRequest"));
		
		UBP_Logic_BattleRoyale_C_ReceivePlayerReJoinRequest_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorMsg != nullptr)
			*ErrorMsg = params.ErrorMsg;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetAiLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DefaultDifficultyLevel                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::GetAiLevel(class ASolarPlayerState* Target, int32_t* DefaultDifficultyLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetAiLevel"));
		
		UBP_Logic_BattleRoyale_C_GetAiLevel_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DefaultDifficultyLevel != nullptr)
			*DefaultDifficultyLevel = params.DefaultDifficultyLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Get Config
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UCFG_BattleRoyale_C*                         CFG                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::GetConfig(class UCFG_BattleRoyale_C** CFG)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Get Config"));
		
		UBP_Logic_BattleRoyale_C_GetConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CFG != nullptr)
			*CFG = params.CFG;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.DataTrace
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::DataTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.DataTrace"));
		
		UBP_Logic_BattleRoyale_C_DataTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdatePlayerData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::UpdatePlayerData(class ASolarPlayerState* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdatePlayerData"));
		
		UBP_Logic_BattleRoyale_C_UpdatePlayerData_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.PreSettleDeal
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESCMPlayerOutType                                  OutType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::PreSettleDeal(class ASCMPlayerState* Player, ESCMPlayerOutType OutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.PreSettleDeal"));
		
		UBP_Logic_BattleRoyale_C_PreSettleDeal_Params params {};
		params.Player = Player;
		params.OutType = OutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Will Master Leaving Disband Room
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Logic_BattleRoyale_C::WillMasterLeavingDisbandRoom(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Will Master Leaving Disband Room"));
		
		UBP_Logic_BattleRoyale_C_WillMasterLeavingDisbandRoom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Is Master Disbanding Legal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Logic_BattleRoyale_C::IsMasterDisbandingLegal(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Is Master Disbanding Legal"));
		
		UBP_Logic_BattleRoyale_C_IsMasterDisbandingLegal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Is Kick Out Legal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Logic_BattleRoyale_C::IsKickOutLegal(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Is Kick Out Legal"));
		
		UBP_Logic_BattleRoyale_C_IsKickOutLegal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Is Side Switch Legal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Logic_BattleRoyale_C::IsSideSwitchLegal(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Is Side Switch Legal"));
		
		UBP_Logic_BattleRoyale_C_IsSideSwitchLegal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.BuyResurrectionDeal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::BuyResurrectionDeal(class APlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.BuyResurrectionDeal"));
		
		UBP_Logic_BattleRoyale_C_BuyResurrectionDeal_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdateWinnerData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::UpdateWinnerData(const class FString& Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdateWinnerData"));
		
		UBP_Logic_BattleRoyale_C_UpdateWinnerData_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.IsLamster
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESCMPlayerOutType                                  Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Logic_BattleRoyale_C::IsLamster(class ASCMPlayerState* Player, ESCMPlayerOutType Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.IsLamster"));
		
		UBP_Logic_BattleRoyale_C_IsLamster_Params params {};
		params.Player = Player;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.CanPlayerBattle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Logic_BattleRoyale_C::CanPlayerBattle(class ASCMPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.CanPlayerBattle"));
		
		UBP_Logic_BattleRoyale_C_CanPlayerBattle_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdateTeamData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bAced                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Logic_BattleRoyale_C::UpdateTeamData(const class FString& Team, bool* bAced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdateTeamData"));
		
		UBP_Logic_BattleRoyale_C_UpdateTeamData_Params params {};
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAced != nullptr)
			*bAced = params.bAced;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetConiReviveManager
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_ReviveItemManger_BattleRoyale_C*         Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::GetConiReviveManager(class ABP_ReviveItemManger_BattleRoyale_C** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetConiReviveManager"));
		
		UBP_Logic_BattleRoyale_C_GetConiReviveManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.IsAllowReconnectGame
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             InPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Logic_BattleRoyale_C::IsAllowReconnectGame(class ASCMPlayerState* InPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.IsAllowReconnectGame"));
		
		UBP_Logic_BattleRoyale_C_IsAllowReconnectGame_Params params {};
		params.InPC = InPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.QuitImmediately
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESCMPlayerOutType                                  Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASCMPlayerState*                             InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SendToSettle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Logic_BattleRoyale_C::QuitImmediately(ESCMPlayerOutType Index, class ASCMPlayerState* InputPin, bool* SendToSettle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.QuitImmediately"));
		
		UBP_Logic_BattleRoyale_C_QuitImmediately_Params params {};
		params.Index = Index;
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SendToSettle != nullptr)
			*SendToSettle = params.SendToSettle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Update Player Data Trace
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::UpdatePlayerDataTrace(class ASCMPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Update Player Data Trace"));
		
		UBP_Logic_BattleRoyale_C_UpdatePlayerDataTrace_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Create Airdrop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ChestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::CreateAirdrop(int32_t ChestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Create Airdrop"));
		
		UBP_Logic_BattleRoyale_C_CreateAirdrop_Params params {};
		params.ChestID = ChestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.StartCruising
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::StartCruising()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.StartCruising"));
		
		UBP_Logic_BattleRoyale_C_StartCruising_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.InitElements
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::InitElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.InitElements"));
		
		UBP_Logic_BattleRoyale_C_InitElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Get Map Info
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UBP_MapInfoComponent_C*                      MapInfo                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::GetMapInfo(class UBP_MapInfoComponent_C** MapInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Get Map Info"));
		
		UBP_Logic_BattleRoyale_C_GetMapInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapInfo != nullptr)
			*MapInfo = params.MapInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Init Timeline Event
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDataTable*                                  BattleTimeline                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::InitTimelineEvent(class UDataTable** BattleTimeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Init Timeline Event"));
		
		UBP_Logic_BattleRoyale_C_InitTimelineEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BattleTimeline != nullptr)
			*BattleTimeline = params.BattleTimeline;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ExecuteBattleEvent
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FS_Event_BattleRoyale                       S_Event_BattleRoyale                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::ExecuteBattleEvent(const struct FS_Event_BattleRoyale& S_Event_BattleRoyale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ExecuteBattleEvent"));
		
		UBP_Logic_BattleRoyale_C_ExecuteBattleEvent_Params params {};
		params.S_Event_BattleRoyale = S_Event_BattleRoyale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdateBattleState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_BattleState_BattleRoyale                         NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::UpdateBattleState(E_BattleState_BattleRoyale NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdateBattleState"));
		
		UBP_Logic_BattleRoyale_C_UpdateBattleState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetGameState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_GameState_BattleRoyale_C*                Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::GetGameState(class ABP_GameState_BattleRoyale_C** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetGameState"));
		
		UBP_Logic_BattleRoyale_C_GetGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetPlayerStartOnWaitingland
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class APlayerStart*>                        PlayerStarts                                               (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::GetPlayerStartOnWaitingland(TArray<class APlayerStart*>* PlayerStarts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetPlayerStartOnWaitingland"));
		
		UBP_Logic_BattleRoyale_C_GetPlayerStartOnWaitingland_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerStarts != nullptr)
			*PlayerStarts = params.PlayerStarts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetBattleRoyaleMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_Mode_BattleRoyale_C*                     AsBPSCMBattleRoyale                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::GetBattleRoyaleMode(class ABP_Mode_BattleRoyale_C** AsBPSCMBattleRoyale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GetBattleRoyaleMode"));
		
		UBP_Logic_BattleRoyale_C_GetBattleRoyaleMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsBPSCMBattleRoyale != nullptr)
			*AsBPSCMBattleRoyale = params.AsBPSCMBattleRoyale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.InitModeSetting
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::InitModeSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.InitModeSetting"));
		
		UBP_Logic_BattleRoyale_C_InitModeSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GMSpawnAI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::GMSpawnAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.GMSpawnAI"));
		
		UBP_Logic_BattleRoyale_C_GMSpawnAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnMatchEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RPCID                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::OnMatchEnd(int32_t RPCID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnMatchEnd"));
		
		UBP_Logic_BattleRoyale_C_OnMatchEnd_Params params {};
		params.RPCID = RPCID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnBattleStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_BattleState_BattleRoyale                         OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_BattleState_BattleRoyale                         NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::OnBattleStateChanged(E_BattleState_BattleRoyale OldState, E_BattleState_BattleRoyale NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnBattleStateChanged"));
		
		UBP_Logic_BattleRoyale_C_OnBattleStateChanged_Params params {};
		params.OldState = OldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ReceiveBattleTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BattleTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::ReceiveBattleTick(float BattleTime, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ReceiveBattleTick"));
		
		UBP_Logic_BattleRoyale_C_ReceiveBattleTick_Params params {};
		params.BattleTime = BattleTime;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.PreSettle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESCMPlayerOutType                                  OutType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::PreSettle(class ASCMPlayerState* Player, ESCMPlayerOutType OutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.PreSettle"));
		
		UBP_Logic_BattleRoyale_C_PreSettle_Params params {};
		params.Player = Player;
		params.OutType = OutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.BattleInitFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::BattleInitFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.BattleInitFinished"));
		
		UBP_Logic_BattleRoyale_C_BattleInitFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnDSClose
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::OnDSClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnDSClose"));
		
		UBP_Logic_BattleRoyale_C_OnDSClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ReceivePlayerJoinBattle
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAI                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Logic_BattleRoyale_C::ReceivePlayerJoinBattle(class ASCMPlayerState* NewPlayer, bool IsAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ReceivePlayerJoinBattle"));
		
		UBP_Logic_BattleRoyale_C_ReceivePlayerJoinBattle_Params params {};
		params.NewPlayer = NewPlayer;
		params.IsAI = IsAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ReceivePlayerBattleEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESCMPlayerOutType                                  OutType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::ReceivePlayerBattleEnd(class ASCMPlayerState* Player, ESCMPlayerOutType OutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ReceivePlayerBattleEnd"));
		
		UBP_Logic_BattleRoyale_C_ReceivePlayerBattleEnd_Params params {};
		params.Player = Player;
		params.OutType = OutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdateAliveTeamsAndPlayers
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::UpdateAliveTeamsAndPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.UpdateAliveTeamsAndPlayers"));
		
		UBP_Logic_BattleRoyale_C_UpdateAliveTeamsAndPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.MatchEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::MatchEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.MatchEnd"));
		
		UBP_Logic_BattleRoyale_C_MatchEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.VehicleSnapshot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::VehicleSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.VehicleSnapshot"));
		
		UBP_Logic_BattleRoyale_C_VehicleSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Snapshot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::Snapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.Snapshot"));
		
		UBP_Logic_BattleRoyale_C_Snapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.CustomEvent_1"));
		
		UBP_Logic_BattleRoyale_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnCountDownFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::OnCountDownFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnCountDownFinished"));
		
		UBP_Logic_BattleRoyale_C_OnCountDownFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ExecuteUbergraph_BP_Logic_BattleRoyale
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::ExecuteUbergraph_BP_Logic_BattleRoyale(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.ExecuteUbergraph_BP_Logic_BattleRoyale"));
		
		UBP_Logic_BattleRoyale_C_ExecuteUbergraph_BP_Logic_BattleRoyale_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.BattleStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_BattleState_BattleRoyale                         NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_BattleRoyale_C::BattleStateChanged__DelegateSignature(E_BattleState_BattleRoyale NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.BattleStateChanged__DelegateSignature"));
		
		UBP_Logic_BattleRoyale_C_BattleStateChanged__DelegateSignature_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnGoInToBattleState__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_BattleRoyale_C::OnGoInToBattleState__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C.OnGoInToBattleState__DelegateSignature"));
		
		UBP_Logic_BattleRoyale_C_OnGoInToBattleState__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Logic_BattleRoyale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Logic_BattleRoyale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_Logic_BattleRoyale.BP_Logic_BattleRoyale_C"));
		return ptr;
	}

}



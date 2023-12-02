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
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.Custom Room Start
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_Framework_C::CustomRoomStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.Custom Room Start"));
		
		UBP_Logic_Framework_C_CustomRoomStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerQuit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_Framework_C::OnPlayerQuit(class ASCMPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerQuit"));
		
		UBP_Logic_Framework_C_OnPlayerQuit_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.PresettleAll
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_Framework_C::PresettleAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.PresettleAll"));
		
		UBP_Logic_Framework_C_PresettleAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.FinishConfigInitiate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_Framework_C::FinishConfigInitiate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.FinishConfigInitiate"));
		
		UBP_Logic_Framework_C_FinishConfigInitiate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.Update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_Framework_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.Update"));
		
		UBP_Logic_Framework_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.Get Current Player Count
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_Framework_C::GetCurrentPlayerCount(int32_t* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.Get Current Player Count"));
		
		UBP_Logic_Framework_C_GetCurrentPlayerCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_Logic_Framework_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.ReceiveBeginPlay"));
		
		UBP_Logic_Framework_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerOfflineTimeOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             OfflineTimeoutPlayer                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_Framework_C::OnPlayerOfflineTimeOut(class ASCMPlayerState* OfflineTimeoutPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerOfflineTimeOut"));
		
		UBP_Logic_Framework_C_OnPlayerOfflineTimeOut_Params params {};
		params.OfflineTimeoutPlayer = OfflineTimeoutPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerGiveUp
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             OfflineTimeoutPlayer                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_Framework_C::OnPlayerGiveUp(class ASCMPlayerState* OfflineTimeoutPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerGiveUp"));
		
		UBP_Logic_Framework_C_OnPlayerGiveUp_Params params {};
		params.OfflineTimeoutPlayer = OfflineTimeoutPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.PreSettle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESCMPlayerOutType                                  OutType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_Framework_C::PreSettle(class ASCMPlayerState* Player, ESCMPlayerOutType OutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.PreSettle"));
		
		UBP_Logic_Framework_C_PreSettle_Params params {};
		params.Player = Player;
		params.OutType = OutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.ReceivePlayerBattleEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESCMPlayerOutType                                  OutType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_Framework_C::ReceivePlayerBattleEnd(class ASCMPlayerState* Player, ESCMPlayerOutType OutType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.ReceivePlayerBattleEnd"));
		
		UBP_Logic_Framework_C_ReceivePlayerBattleEnd_Params params {};
		params.Player = Player;
		params.OutType = OutType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.BattleInitFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_Framework_C::BattleInitFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.BattleInitFinished"));
		
		UBP_Logic_Framework_C_BattleInitFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.ReceiveServerLevelLoaded
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_Framework_C::ReceiveServerLevelLoaded(const class FString& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.ReceiveServerLevelLoaded"));
		
		UBP_Logic_Framework_C_ReceiveServerLevelLoaded_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.ReceiveBattleBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_Logic_Framework_C::ReceiveBattleBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.ReceiveBattleBegin"));
		
		UBP_Logic_Framework_C_ReceiveBattleBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerDisconnect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             OfflinePlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_Framework_C::OnPlayerDisconnect(class ASCMPlayerState* OfflinePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerDisconnect"));
		
		UBP_Logic_Framework_C_OnPlayerDisconnect_Params params {};
		params.OfflinePlayer = OfflinePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.OnMatchEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            RPCID                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_Framework_C::OnMatchEnd(int32_t RPCID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.OnMatchEnd"));
		
		UBP_Logic_Framework_C_OnMatchEnd_Params params {};
		params.RPCID = RPCID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.ReceivePlayerJoinBattle
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAI                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Logic_Framework_C::ReceivePlayerJoinBattle(class ASCMPlayerState* NewPlayer, bool IsAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.ReceivePlayerJoinBattle"));
		
		UBP_Logic_Framework_C_ReceivePlayerJoinBattle_Params params {};
		params.NewPlayer = NewPlayer;
		params.IsAI = IsAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.OnDSClose
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_Logic_Framework_C::OnDSClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.OnDSClose"));
		
		UBP_Logic_Framework_C_OnDSClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerCheat
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             CheatPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_Framework_C::OnPlayerCheat(class ASCMPlayerState* CheatPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerCheat"));
		
		UBP_Logic_Framework_C_OnPlayerCheat_Params params {};
		params.CheatPlayer = CheatPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerReconnect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_Framework_C::OnPlayerReconnect(class ASCMPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerReconnect"));
		
		UBP_Logic_Framework_C_OnPlayerReconnect_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerAbnormal
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             CheatPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_Framework_C::OnPlayerAbnormal(class ASCMPlayerState* CheatPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerAbnormal"));
		
		UBP_Logic_Framework_C_OnPlayerAbnormal_Params params {};
		params.CheatPlayer = CheatPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.ExecuteUbergraph_BP_Logic_Framework
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Logic_Framework_C::ExecuteUbergraph_BP_Logic_Framework(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.ExecuteUbergraph_BP_Logic_Framework"));
		
		UBP_Logic_Framework_C_ExecuteUbergraph_BP_Logic_Framework_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.OnZeroMatchFinished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_Logic_Framework_C::OnZeroMatchFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.OnZeroMatchFinished__DelegateSignature"));
		
		UBP_Logic_Framework_C_OnZeroMatchFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerJoin__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsAi                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Logic_Framework_C::OnPlayerJoin__DelegateSignature(class ASCMPlayerState* NewPlayer, bool bIsAi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Logic_Framework.BP_Logic_Framework_C.OnPlayerJoin__DelegateSignature"));
		
		UBP_Logic_Framework_C_OnPlayerJoin__DelegateSignature_Params params {};
		params.NewPlayer = NewPlayer;
		params.bIsAi = bIsAi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Logic_Framework_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Logic_Framework_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_Logic_Framework.BP_Logic_Framework_C"));
		return ptr;
	}

}



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
	 * 		Name   -> Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.Out Put Kill Log
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InBool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Death_BattleRoyale_C::OutPutKillLog(bool InBool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.Out Put Kill Log"));
		
		UBPC_Death_BattleRoyale_C_OutPutKillLog_Params params {};
		params.InBool = InBool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.TryRevivePlayerbyCoin
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_PlayerState_BattleRoyale_C*              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Succeed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Death_BattleRoyale_C::TryRevivePlayerbyCoin(class ABP_PlayerState_BattleRoyale_C* Player, bool* Succeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.TryRevivePlayerbyCoin"));
		
		UBPC_Death_BattleRoyale_C_TryRevivePlayerbyCoin_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Succeed != nullptr)
			*Succeed = params.Succeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.CanPlayerBattle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_Death_BattleRoyale_C::CanPlayerBattle(class ASCMPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.CanPlayerBattle"));
		
		UBPC_Death_BattleRoyale_C_CanPlayerBattle_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.GetMainLogic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UBP_Logic_BattleRoyale_C* UBPC_Death_BattleRoyale_C::GetMainLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.GetMainLogic"));
		
		UBPC_Death_BattleRoyale_C_GetMainLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.GetConiReviveManager
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_ReviveItemManger_BattleRoyale_C*         Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Death_BattleRoyale_C::GetConiReviveManager(class ABP_ReviveItemManger_BattleRoyale_C** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.GetConiReviveManager"));
		
		UBPC_Death_BattleRoyale_C_GetConiReviveManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_Death_BattleRoyale_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ReceiveBeginPlay"));
		
		UBPC_Death_BattleRoyale_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ReceivePlayerKill
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASCMPlayerState*                             Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ASCMPlayerState*>                     Assists                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FSolarPointDamageEvent                      InDamageEvent                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class AActor*                                      InDamageCauser                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Death_BattleRoyale_C::ReceivePlayerKill(class ASCMPlayerState* Killer, class ASCMPlayerState* Killed, TArray<class ASCMPlayerState*> Assists, const struct FSolarPointDamageEvent& InDamageEvent, class AActor* InDamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ReceivePlayerKill"));
		
		UBPC_Death_BattleRoyale_C_ReceivePlayerKill_Params params {};
		params.Killer = Killer;
		params.Killed = Killed;
		params.Assists = Assists;
		params.InDamageEvent = InDamageEvent;
		params.InDamageCauser = InDamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.OnBattleStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESCMDataChangeType                                 ChangeType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      OldValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Death_BattleRoyale_C::OnBattleStateChanged(ESCMDataChangeType ChangeType, unsigned char OldValue, unsigned char NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.OnBattleStateChanged"));
		
		UBPC_Death_BattleRoyale_C_OnBattleStateChanged_Params params {};
		params.ChangeType = ChangeType;
		params.OldValue = OldValue;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ReceivePlayerDeathVerge
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             InAttacker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASCMPlayerState*                             InDeathVergePlayer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSolarPointDamageEvent                      InDamageEvent                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class AActor*                                      InDamageCauser                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Death_BattleRoyale_C::ReceivePlayerDeathVerge(class ASCMPlayerState* InAttacker, class ASCMPlayerState* InDeathVergePlayer, const struct FSolarPointDamageEvent& InDamageEvent, class AActor* InDamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ReceivePlayerDeathVerge"));
		
		UBPC_Death_BattleRoyale_C_ReceivePlayerDeathVerge_Params params {};
		params.InAttacker = InAttacker;
		params.InDeathVergePlayer = InDeathVergePlayer;
		params.InDamageEvent = InDamageEvent;
		params.InDamageCauser = InDamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ReceivePlayerResurrect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarCharacter*                             ResurrectCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASCMPlayerState*                             ResurrectPlayer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Death_BattleRoyale_C::ReceivePlayerResurrect(class ASolarCharacter* ResurrectCharacter, class ASCMPlayerState* ResurrectPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ReceivePlayerResurrect"));
		
		UBPC_Death_BattleRoyale_C_ReceivePlayerResurrect_Params params {};
		params.ResurrectCharacter = ResurrectCharacter;
		params.ResurrectPlayer = ResurrectPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ExecuteUbergraph_BPC_Death_BattleRoyale
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Death_BattleRoyale_C::ExecuteUbergraph_BPC_Death_BattleRoyale(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C.ExecuteUbergraph_BPC_Death_BattleRoyale"));
		
		UBPC_Death_BattleRoyale_C_ExecuteUbergraph_BPC_Death_BattleRoyale_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Death_BattleRoyale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Death_BattleRoyale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BPC_Death_BattleRoyale.BPC_Death_BattleRoyale_C"));
		return ptr;
	}

}



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
	 * 		Name   -> Function BPC_Death_Framework.BPC_Death_Framework_C.GMRevive
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             InKilled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AutoRevive                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Death_Framework_C::GMRevive(class ASCMPlayerState* InKilled, bool* AutoRevive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_Framework.BPC_Death_Framework_C.GMRevive"));
		
		UBPC_Death_Framework_C_GMRevive_Params params {};
		params.InKilled = InKilled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AutoRevive != nullptr)
			*AutoRevive = params.AutoRevive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_Framework.BPC_Death_Framework_C.Try Buy Resurrect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSolarPointDamageEvent                      DamageEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		bool                                               Succeed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Death_Framework_C::TryBuyResurrect(class ASCMPlayerState* Player, const struct FSolarPointDamageEvent& DamageEvent, bool* Succeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_Framework.BPC_Death_Framework_C.Try Buy Resurrect"));
		
		UBPC_Death_Framework_C_TryBuyResurrect_Params params {};
		params.Player = Player;
		params.DamageEvent = DamageEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Succeed != nullptr)
			*Succeed = params.Succeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_Framework.BPC_Death_Framework_C.CheckTerminator
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             InKiller                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASCMPlayerState*                             InKilled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_Death_Framework_C::CheckTerminator(class ASCMPlayerState* InKiller, class ASCMPlayerState* InKilled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_Framework.BPC_Death_Framework_C.CheckTerminator"));
		
		UBPC_Death_Framework_C_CheckTerminator_Params params {};
		params.InKiller = InKiller;
		params.InKilled = InKilled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_Framework.BPC_Death_Framework_C.GetDefenderManager
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_DefenderManager_C*                       AsBPDefenderManager                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Death_Framework_C::GetDefenderManager(class ABP_DefenderManager_C** AsBPDefenderManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_Framework.BPC_Death_Framework_C.GetDefenderManager"));
		
		UBPC_Death_Framework_C_GetDefenderManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsBPDefenderManager != nullptr)
			*AsBPDefenderManager = params.AsBPDefenderManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_Framework.BPC_Death_Framework_C.UpdateDataTrace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_DeathType                                        Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASCMPlayerState*                             Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASCMPlayerState*                             Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSolarPointDamageEvent                      DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FString, class FString>                 AdditionalData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPC_Death_Framework_C::UpdateDataTrace(E_DeathType Type, class ASCMPlayerState* Killer, class ASCMPlayerState* Killed, const struct FSolarPointDamageEvent& DamageEvent, class AActor* DamageCauser, TMap<class FString, class FString> AdditionalData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_Framework.BPC_Death_Framework_C.UpdateDataTrace"));
		
		UBPC_Death_Framework_C_UpdateDataTrace_Params params {};
		params.Type = Type;
		params.Killer = Killer;
		params.Killed = Killed;
		params.DamageEvent = DamageEvent;
		params.DamageCauser = DamageCauser;
		params.AdditionalData = AdditionalData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_Framework.BPC_Death_Framework_C.ReceivePlayerKill
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASCMPlayerState*                             Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ASCMPlayerState*>                     Assists                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FSolarPointDamageEvent                      InDamageEvent                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class AActor*                                      InDamageCauser                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Death_Framework_C::ReceivePlayerKill(class ASCMPlayerState* Killer, class ASCMPlayerState* Killed, TArray<class ASCMPlayerState*> Assists, const struct FSolarPointDamageEvent& InDamageEvent, class AActor* InDamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_Framework.BPC_Death_Framework_C.ReceivePlayerKill"));
		
		UBPC_Death_Framework_C_ReceivePlayerKill_Params params {};
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
	 * 		Name   -> Function BPC_Death_Framework.BPC_Death_Framework_C.ReceivePlayerDeathVerge
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             InAttacker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASCMPlayerState*                             InDeathVergePlayer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSolarPointDamageEvent                      InDamageEvent                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class AActor*                                      InDamageCauser                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Death_Framework_C::ReceivePlayerDeathVerge(class ASCMPlayerState* InAttacker, class ASCMPlayerState* InDeathVergePlayer, const struct FSolarPointDamageEvent& InDamageEvent, class AActor* InDamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_Framework.BPC_Death_Framework_C.ReceivePlayerDeathVerge"));
		
		UBPC_Death_Framework_C_ReceivePlayerDeathVerge_Params params {};
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
	 * 		Name   -> Function BPC_Death_Framework.BPC_Death_Framework_C.ReceivePlayerResurrect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarCharacter*                             ResurrectCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASCMPlayerState*                             ResurrectPlayer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Death_Framework_C::ReceivePlayerResurrect(class ASolarCharacter* ResurrectCharacter, class ASCMPlayerState* ResurrectPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_Framework.BPC_Death_Framework_C.ReceivePlayerResurrect"));
		
		UBPC_Death_Framework_C_ReceivePlayerResurrect_Params params {};
		params.ResurrectCharacter = ResurrectCharacter;
		params.ResurrectPlayer = ResurrectPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_Framework.BPC_Death_Framework_C.ExecuteUbergraph_BPC_Death_Framework
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Death_Framework_C::ExecuteUbergraph_BPC_Death_Framework(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_Framework.BPC_Death_Framework_C.ExecuteUbergraph_BPC_Death_Framework"));
		
		UBPC_Death_Framework_C_ExecuteUbergraph_BPC_Death_Framework_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_Framework.BPC_Death_Framework_C.OnPlayerKill__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_PlayerState_Framework_C*                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Death_Framework_C::OnPlayerKill__DelegateSignature(class ABP_PlayerState_Framework_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_Framework.BPC_Death_Framework_C.OnPlayerKill__DelegateSignature"));
		
		UBPC_Death_Framework_C_OnPlayerKill__DelegateSignature_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_Framework.BPC_Death_Framework_C.OnPlayerResurrect__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_PlayerState_Framework_C*                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Death_Framework_C::OnPlayerResurrect__DelegateSignature(class ABP_PlayerState_Framework_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_Framework.BPC_Death_Framework_C.OnPlayerResurrect__DelegateSignature"));
		
		UBPC_Death_Framework_C_OnPlayerResurrect__DelegateSignature_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_Death_Framework.BPC_Death_Framework_C.OnPlayerDie__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_PlayerState_Framework_C*                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Death_Framework_C::OnPlayerDie__DelegateSignature(class ABP_PlayerState_Framework_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_Death_Framework.BPC_Death_Framework_C.OnPlayerDie__DelegateSignature"));
		
		UBPC_Death_Framework_C_OnPlayerDie__DelegateSignature_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Death_Framework_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Death_Framework_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BPC_Death_Framework.BPC_Death_Framework_C"));
		return ptr;
	}

}



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
	 * 		Name   -> Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.GetWeaponLevelDamageBonus
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_BattleRoyale_C::GetWeaponLevelDamageBonus(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.GetWeaponLevelDamageBonus"));
		
		ABP_Character_BattleRoyale_C_GetWeaponLevelDamageBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.Death Cleanup UI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Character_BattleRoyale_C::DeathCleanupUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.Death Cleanup UI"));
		
		ABP_Character_BattleRoyale_C_DeathCleanupUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.TakeDamageResolve
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSolarPointDamageEvent                      DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class ASCMPlayerState*                             EventInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_Character_BattleRoyale_C::TakeDamageResolve(float Damage, const struct FSolarPointDamageEvent& DamageEvent, class ASCMPlayerState* EventInstigator, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.TakeDamageResolve"));
		
		ABP_Character_BattleRoyale_C_TakeDamageResolve_Params params {};
		params.Damage = Damage;
		params.DamageEvent = DamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.OnShouldTakeDamage
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSolarPointDamageEvent                      DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class ASCMPlayerState*                             EventInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Character_BattleRoyale_C::OnShouldTakeDamage(float Damage, const struct FSolarPointDamageEvent& DamageEvent, class ASCMPlayerState* EventInstigator, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.OnShouldTakeDamage"));
		
		ABP_Character_BattleRoyale_C_OnShouldTakeDamage_Params params {};
		params.Damage = Damage;
		params.DamageEvent = DamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.SetReviveCameraFade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_BattleRoyale_C::SetReviveCameraFade(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.SetReviveCameraFade"));
		
		ABP_Character_BattleRoyale_C_SetReviveCameraFade_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Character_BattleRoyale_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.ReceiveBeginPlay"));
		
		ABP_Character_BattleRoyale_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.Debug Set DayAndNightTime
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_BattleRoyale_C::DebugSetDayAndNightTime(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.Debug Set DayAndNightTime"));
		
		ABP_Character_BattleRoyale_C_DebugSetDayAndNightTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.SetMapID
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            MapID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_BattleRoyale_C::SetMapID(int32_t MapID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.SetMapID"));
		
		ABP_Character_BattleRoyale_C_SetMapID_Params params {};
		params.MapID = MapID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.Event_OnResBegin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_ResurrectType                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_ResurrectInfo                            options                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_BattleRoyale_C::Event_OnResBegin(int32_t Time, E_ResurrectType Type, const struct FVector& Location, const struct FS_ResurrectInfo& options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.Event_OnResBegin"));
		
		ABP_Character_BattleRoyale_C_Event_OnResBegin_Params params {};
		params.Time = Time;
		params.Type = Type;
		params.Location = Location;
		params.options = options;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.BeginPlayBlueprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Character_BattleRoyale_C::BeginPlayBlueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.BeginPlayBlueprint"));
		
		ABP_Character_BattleRoyale_C_BeginPlayBlueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.OnCharacterEjectStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_CharacterEjectState                              State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_BattleRoyale_C::OnCharacterEjectStateChanged(E_CharacterEjectState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.OnCharacterEjectStateChanged"));
		
		ABP_Character_BattleRoyale_C_OnCharacterEjectStateChanged_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.ExecuteUbergraph_BP_Character_BattleRoyale
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_BattleRoyale_C::ExecuteUbergraph_BP_Character_BattleRoyale(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.ExecuteUbergraph_BP_Character_BattleRoyale"));
		
		ABP_Character_BattleRoyale_C_ExecuteUbergraph_BP_Character_BattleRoyale_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.OnPlayerRevive__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarCharacter*                             TargetCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_BattleRoyale_C::OnPlayerRevive__DelegateSignature(class ASolarCharacter* TargetCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.OnPlayerRevive__DelegateSignature"));
		
		ABP_Character_BattleRoyale_C_OnPlayerRevive__DelegateSignature_Params params {};
		params.TargetCharacter = TargetCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Character_BattleRoyale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Character_BattleRoyale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_Character_BattleRoyale.BP_Character_BattleRoyale_C"));
		return ptr;
	}

}



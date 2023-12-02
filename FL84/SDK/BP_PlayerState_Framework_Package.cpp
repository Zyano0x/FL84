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
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_TeammatesState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::OnRep_TeammatesState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_TeammatesState"));
		
		ABP_PlayerState_Framework_C_OnRep_TeammatesState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.CalculateAccountExp
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	float ABP_PlayerState_Framework_C::CalculateAccountExp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.CalculateAccountExp"));
		
		ABP_PlayerState_Framework_C_CalculateAccountExp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_BattleVoiceId
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::OnRep_BattleVoiceId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_BattleVoiceId"));
		
		ABP_PlayerState_Framework_C_OnRep_BattleVoiceId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_PlayerState_Framework_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveEndPlay"));
		
		ABP_PlayerState_Framework_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.CalculateZomborg
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	int32_t ABP_PlayerState_Framework_C::CalculateZomborg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.CalculateZomborg"));
		
		ABP_PlayerState_Framework_C_CalculateZomborg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.NotifyUpdateTeamMateLevelUI
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::NotifyUpdateTeamMateLevelUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.NotifyUpdateTeamMateLevelUI"));
		
		ABP_PlayerState_Framework_C_NotifyUpdateTeamMateLevelUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectTimeChangedCopy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ResurrectTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Cfg_ResurrectTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::OnResurrectTimeChangedCopy(int32_t ResurrectTime, int32_t Cfg_ResurrectTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectTimeChangedCopy"));
		
		ABP_PlayerState_Framework_C_OnResurrectTimeChangedCopy_Params params {};
		params.ResurrectTime = ResurrectTime;
		params.Cfg_ResurrectTime = Cfg_ResurrectTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_RTCType
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::OnRep_RTCType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_RTCType"));
		
		ABP_PlayerState_Framework_C_OnRep_RTCType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_UserId
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::OnRep_UserId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_UserId"));
		
		ABP_PlayerState_Framework_C_OnRep_UserId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnReceiveExposedLocation
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           OtherPS                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_PlayerState_Framework_C::OnReceiveExposedLocation(class ASolarPlayerState* OtherPS, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnReceiveExposedLocation"));
		
		ABP_PlayerState_Framework_C_OnReceiveExposedLocation_Params params {};
		params.OtherPS = OtherPS;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetWeaponSettlmentExp
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            weaponid                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ABP_PlayerState_Framework_C::GetWeaponSettlmentExp(int32_t weaponid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetWeaponSettlmentExp"));
		
		ABP_PlayerState_Framework_C_GetWeaponSettlmentExp_Params params {};
		params.weaponid = weaponid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveClientInitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 C                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_PlayerState_Framework_C::ReceiveClientInitialize(class AController* C)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveClientInitialize"));
		
		ABP_PlayerState_Framework_C_ReceiveClientInitialize_Params params {};
		params.C = C;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceivePostInitializeComponents
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::ReceivePostInitializeComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceivePostInitializeComponents"));
		
		ABP_PlayerState_Framework_C_ReceivePostInitializeComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveTalentStateSet
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		ETalentState                                       InState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_PlayerState_Framework_C::ReceiveTalentStateSet(ETalentState InState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveTalentStateSet"));
		
		ABP_PlayerState_Framework_C_ReceiveTalentStateSet_Params params {};
		params.InState = InState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveSideReplicatedAfter
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::ReceiveSideReplicatedAfter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveSideReplicatedAfter"));
		
		ABP_PlayerState_Framework_C_ReceiveSideReplicatedAfter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetExpAddValueFromItem
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ABP_PlayerState_Framework_C::GetExpAddValueFromItem(int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetExpAddValueFromItem"));
		
		ABP_PlayerState_Framework_C_GetExpAddValueFromItem_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnStopReceiveExposedLocation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           OtherPS                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_PlayerState_Framework_C::OnStopReceiveExposedLocation(class ASolarPlayerState* OtherPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnStopReceiveExposedLocation"));
		
		ABP_PlayerState_Framework_C_OnStopReceiveExposedLocation_Params params {};
		params.OtherPS = OtherPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetExpSettleModePunishRatio
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	float ABP_PlayerState_Framework_C::GetExpSettleModePunishRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetExpSettleModePunishRatio"));
		
		ABP_PlayerState_Framework_C_GetExpSettleModePunishRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveTeamIdReplicated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bRelatedToSelf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ABP_PlayerState_Framework_C::ReceiveTeamIdReplicated(bool bRelatedToSelf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveTeamIdReplicated"));
		
		ABP_PlayerState_Framework_C_ReceiveTeamIdReplicated_Params params {};
		params.bRelatedToSelf = bRelatedToSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.LuaGetExpFromWeaponImplementation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EExpBehaviorType                                   InBehaviorType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InParamOne                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InParamTwo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InDamage                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ABP_PlayerState_Framework_C::LuaGetExpFromWeaponImplementation(EExpBehaviorType InBehaviorType, int32_t InParamOne, int32_t InParamTwo, float InDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.LuaGetExpFromWeaponImplementation"));
		
		ABP_PlayerState_Framework_C_LuaGetExpFromWeaponImplementation_Params params {};
		params.InBehaviorType = InBehaviorType;
		params.InParamOne = InParamOne;
		params.InParamTwo = InParamTwo;
		params.InDamage = InDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.CalculateCharacterExp
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	float ABP_PlayerState_Framework_C::CalculateCharacterExp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.CalculateCharacterExp"));
		
		ABP_PlayerState_Framework_C_CalculateCharacterExp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString ABP_PlayerState_Framework_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetModuleName"));
		
		ABP_PlayerState_Framework_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectTimeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ResurrectTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Cfg_ResurrectTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::OnResurrectTimeChanged(int32_t ResurrectTime, int32_t Cfg_ResurrectTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectTimeChanged"));
		
		ABP_PlayerState_Framework_C_OnResurrectTimeChanged_Params params {};
		params.ResurrectTime = ResurrectTime;
		params.Cfg_ResurrectTime = Cfg_ResurrectTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetResurrectLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::GetResurrectLocation(struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetResurrectLocation"));
		
		ABP_PlayerState_Framework_C_GetResurrectLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Remove All Revive Mark
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::RemoveAllReviveMark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Remove All Revive Mark"));
		
		ABP_PlayerState_Framework_C_RemoveAllReviveMark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetDeathBoxLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FVector ABP_PlayerState_Framework_C::GetDeathBoxLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetDeathBoxLocation"));
		
		ABP_PlayerState_Framework_C_GetDeathBoxLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.PlayerCanRebirthBlueprint
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_PlayerState_Framework_C::PlayerCanRebirthBlueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.PlayerCanRebirthBlueprint"));
		
		ABP_PlayerState_Framework_C_PlayerCanRebirthBlueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_CharacterHealthState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::OnRep_CharacterHealthState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_CharacterHealthState"));
		
		ABP_PlayerState_Framework_C_OnRep_CharacterHealthState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Handling Is Resurrecting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::HandlingIsResurrecting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Handling Is Resurrecting"));
		
		ABP_PlayerState_Framework_C_HandlingIsResurrecting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetSpecialHitTypeArray
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<int32_t>                                    NewParam                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::GetSpecialHitTypeArray(TArray<int32_t>* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetSpecialHitTypeArray"));
		
		ABP_PlayerState_Framework_C_GetSpecialHitTypeArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Set Death Box Ref
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_DBox_Default_C*                          InDeathBox                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::SetDeathBoxRef(class ABP_DBox_Default_C* InDeathBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Set Death Box Ref"));
		
		ABP_PlayerState_Framework_C_SetDeathBoxRef_Params params {};
		params.InDeathBox = InDeathBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_bIsReviveSkydiving
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::OnRep_bIsReviveSkydiving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_bIsReviveSkydiving"));
		
		ABP_PlayerState_Framework_C_OnRep_bIsReviveSkydiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Remove Punctuation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bKeepRebornLine                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerState_Framework_C::RemovePunctuation(bool bKeepRebornLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Remove Punctuation"));
		
		ABP_PlayerState_Framework_C_RemovePunctuation_Params params {};
		params.bKeepRebornLine = bKeepRebornLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetExpByBehavior
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EExpBehaviorType                                   InBehaviorType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InParamOne                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InParamTwo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InDamage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t ABP_PlayerState_Framework_C::GetExpByBehavior(EExpBehaviorType InBehaviorType, int32_t InParamOne, int32_t InParamTwo, float InDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetExpByBehavior"));
		
		ABP_PlayerState_Framework_C_GetExpByBehavior_Params params {};
		params.InBehaviorType = InBehaviorType;
		params.InParamOne = InParamOne;
		params.InParamTwo = InParamTwo;
		params.InDamage = InDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.IsAiCompCdClear
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerState_Framework_C::IsAiCompCdClear(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.IsAiCompCdClear"));
		
		ABP_PlayerState_Framework_C_IsAiCompCdClear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_bIsResurrecting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::OnRep_bIsResurrecting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_bIsResurrecting"));
		
		ABP_PlayerState_Framework_C_OnRep_bIsResurrecting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Create Punctuation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::CreatePunctuation(const struct FVector& InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Create Punctuation"));
		
		ABP_PlayerState_Framework_C_CreatePunctuation_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetLogicBase
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UBP_Logic_Framework_C*                       Output_Get                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::GetLogicBase(class UBP_Logic_Framework_C** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetLogicBase"));
		
		ABP_PlayerState_Framework_C_GetLogicBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_ResurrectTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::OnRep_ResurrectTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_ResurrectTime"));
		
		ABP_PlayerState_Framework_C_OnRep_ResurrectTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Death Cleanup UI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::DeathCleanupUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Death Cleanup UI"));
		
		ABP_PlayerState_Framework_C_DeathCleanupUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Get Resurrect UI
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UUI_Resurrect_C*                             Output_Get                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::GetResurrectUI(class UUI_Resurrect_C** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Get Resurrect UI"));
		
		ABP_PlayerState_Framework_C_GetResurrectUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetLastDeathLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::GetLastDeathLocation(struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetLastDeathLocation"));
		
		ABP_PlayerState_Framework_C_GetLastDeathLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnCharacterLanded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::OnCharacterLanded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnCharacterLanded"));
		
		ABP_PlayerState_Framework_C_OnCharacterLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnPlayerInteract
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_Interact_Type                                    InteractType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::OnPlayerInteract(E_Interact_Type InteractType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnPlayerInteract"));
		
		ABP_PlayerState_Framework_C_OnPlayerInteract_Params params {};
		params.InteractType = InteractType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveBeginPlay"));
		
		ABP_PlayerState_Framework_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnCharacterEjectStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_CharacterEjectState                              State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASolarCharacter*                             TargetCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::OnCharacterEjectStateChanged(E_CharacterEjectState State, class ASolarCharacter* TargetCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnCharacterEjectStateChanged"));
		
		ABP_PlayerState_Framework_C_OnCharacterEjectStateChanged_Params params {};
		params.State = State;
		params.TargetCharacter = TargetCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnTimeCut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::OnTimeCut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnTimeCut"));
		
		ABP_PlayerState_Framework_C_OnTimeCut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.[s]RequestResurrectInTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_ResurrectType                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_ResurrectInfo                            options                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUseParamZ                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PlayerState_Framework_C::sRequestResurrectInTime(int32_t Time, E_ResurrectType Type, const struct FVector& Location, const struct FS_ResurrectInfo& options, bool bUseParamZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.[s]RequestResurrectInTime"));
		
		ABP_PlayerState_Framework_C_sRequestResurrectInTime_Params params {};
		params.Time = Time;
		params.Type = Type;
		params.Location = Location;
		params.options = options;
		params.bUseParamZ = bUseParamZ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.[c]ShowResurrectUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_ResurrectType                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::cShowResurrectUI(int32_t Time, E_ResurrectType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.[c]ShowResurrectUI"));
		
		ABP_PlayerState_Framework_C_cShowResurrectUI_Params params {};
		params.Time = Time;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.DropPickableItem
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::DropPickableItem(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.DropPickableItem"));
		
		ABP_PlayerState_Framework_C_DropPickableItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.PickupPickableItem
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::PickupPickableItem(class UObject* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.PickupPickableItem"));
		
		ABP_PlayerState_Framework_C_PickupPickableItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Event_CreateDeathBoxMark
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::Event_CreateDeathBoxMark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Event_CreateDeathBoxMark"));
		
		ABP_PlayerState_Framework_C_Event_CreateDeathBoxMark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Event_OnResEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ResurrectType                                    ResurrectType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_PlayerState_Framework_C*                 TargetPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::Event_OnResEnd(E_ResurrectType ResurrectType, class ABP_PlayerState_Framework_C* TargetPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Event_OnResEnd"));
		
		ABP_PlayerState_Framework_C_Event_OnResEnd_Params params {};
		params.ResurrectType = ResurrectType;
		params.TargetPlayer = TargetPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.AiCompCountDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::AiCompCountDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.AiCompCountDown"));
		
		ABP_PlayerState_Framework_C_AiCompCountDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ResetAiCompTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::ResetAiCompTimer(int32_t Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ResetAiCompTimer"));
		
		ABP_PlayerState_Framework_C_ResetAiCompTimer_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnPlayerGainExperience
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            GainedExp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalExp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EExpBehaviorType                                   BehaviorType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::OnPlayerGainExperience(int32_t GainedExp, int32_t CurrentExp, int32_t TotalExp, EExpBehaviorType BehaviorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnPlayerGainExperience"));
		
		ABP_PlayerState_Framework_C_OnPlayerGainExperience_Params params {};
		params.GainedExp = GainedExp;
		params.CurrentExp = CurrentExp;
		params.TotalExp = TotalExp;
		params.BehaviorType = BehaviorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.[C]OnPlayerGainExperience
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            GainedExp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalExp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EExpBehaviorType                                   Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::COnPlayerGainExperience(int32_t GainedExp, int32_t CurrentExp, int32_t TotalExp, EExpBehaviorType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.[C]OnPlayerGainExperience"));
		
		ABP_PlayerState_Framework_C_COnPlayerGainExperience_Params params {};
		params.GainedExp = GainedExp;
		params.CurrentExp = CurrentExp;
		params.TotalExp = TotalExp;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Event_EnterSkydiveFly
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerState_Framework_C::Event_EnterSkydiveFly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Event_EnterSkydiveFly"));
		
		ABP_PlayerState_Framework_C_Event_EnterSkydiveFly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnInteractBtnHit
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Publisher                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              MetaData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::OnInteractBtnHit(class UObject* Publisher, class UObject* Payload, TArray<class FString> MetaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnInteractBtnHit"));
		
		ABP_PlayerState_Framework_C_OnInteractBtnHit_Params params {};
		params.Publisher = Publisher;
		params.Payload = Payload;
		params.MetaData = MetaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.[S] Request Actor Removal
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::SRequestActorRemoval(class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.[S] Request Actor Removal"));
		
		ABP_PlayerState_Framework_C_SRequestActorRemoval_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnOtherPlayerStopSpectateMyTeam
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarSpectateInfo*                          InSpectateInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::OnOtherPlayerStopSpectateMyTeam(class ASolarSpectateInfo* InSpectateInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnOtherPlayerStopSpectateMyTeam"));
		
		ABP_PlayerState_Framework_C_OnOtherPlayerStopSpectateMyTeam_Params params {};
		params.InSpectateInfo = InSpectateInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ExecuteUbergraph_BP_PlayerState_Framework
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::ExecuteUbergraph_BP_PlayerState_Framework(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ExecuteUbergraph_BP_PlayerState_Framework"));
		
		ABP_PlayerState_Framework_C_ExecuteUbergraph_BP_PlayerState_Framework_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectTimeChange__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::OnResurrectTimeChange__DelegateSignature(int32_t Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectTimeChange__DelegateSignature"));
		
		ABP_PlayerState_Framework_C_OnResurrectTimeChange__DelegateSignature_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectionFinished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_ResurrectType                                    ResurrectType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_PlayerState_Framework_C*                 TargetPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::OnResurrectionFinished__DelegateSignature(E_ResurrectType ResurrectType, class ABP_PlayerState_Framework_C* TargetPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectionFinished__DelegateSignature"));
		
		ABP_PlayerState_Framework_C_OnResurrectionFinished__DelegateSignature_Params params {};
		params.ResurrectType = ResurrectType;
		params.TargetPlayer = TargetPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectionBegin__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_ResurrectType                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_ResurrectInfo                            options                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerState_Framework_C::OnResurrectionBegin__DelegateSignature(int32_t Time, E_ResurrectType Type, const struct FVector& Location, const struct FS_ResurrectInfo& options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectionBegin__DelegateSignature"));
		
		ABP_PlayerState_Framework_C_OnResurrectionBegin__DelegateSignature_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerState_Framework_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerState_Framework_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_PlayerState_Framework.BP_PlayerState_Framework_C"));
		return ptr;
	}

}



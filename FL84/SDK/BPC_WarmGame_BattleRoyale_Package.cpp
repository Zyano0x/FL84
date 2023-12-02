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
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.IsWarmGame
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UBPC_WarmGame_BattleRoyale_C::IsWarmGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.IsWarmGame"));
		
		UBPC_WarmGame_BattleRoyale_C_IsWarmGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.GetAIPickResult
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    InCharactetIDs                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		int32_t                                            OutCharacterID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutSkinId                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::GetAIPickResult(TArray<int32_t> InCharactetIDs, int32_t* OutCharacterID, int32_t* OutSkinId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.GetAIPickResult"));
		
		UBPC_WarmGame_BattleRoyale_C_GetAIPickResult_Params params {};
		params.InCharactetIDs = InCharactetIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCharacterID != nullptr)
			*OutCharacterID = params.OutCharacterID;
		if (OutSkinId != nullptr)
			*OutSkinId = params.OutSkinId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.Create Warm Logic Actor And Exec
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_WarmGame_BattleRoyale_C::CreateWarmLogicActorAndExec(bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.Create Warm Logic Actor And Exec"));
		
		UBPC_WarmGame_BattleRoyale_C_CreateWarmLogicActorAndExec_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.CheckSpAIForWarmGame
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SpecialAI                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_WarmGame_BattleRoyale_C::CheckSpAIForWarmGame(bool* SpecialAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.CheckSpAIForWarmGame"));
		
		UBPC_WarmGame_BattleRoyale_C_CheckSpAIForWarmGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpecialAI != nullptr)
			*SpecialAI = params.SpecialAI;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[s]SetBotBT
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBehaviorTree*                               BotBehaviorTree                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::sSetBotBT(class UBehaviorTree* BotBehaviorTree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[s]SetBotBT"));
		
		UBPC_WarmGame_BattleRoyale_C_sSetBotBT_Params params {};
		params.BotBehaviorTree = BotBehaviorTree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]ShowNotice
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::cShowNotice(bool Visible, const class FString& Text, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]ShowNotice"));
		
		UBPC_WarmGame_BattleRoyale_C_cShowNotice_Params params {};
		params.Visible = Visible;
		params.Text = Text;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]RequestNearestPosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_GuidTargetType                                   Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::cRequestNearestPosition(E_GuidTargetType Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]RequestNearestPosition"));
		
		UBPC_WarmGame_BattleRoyale_C_cRequestNearestPosition_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnRep_WeaponPos
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_WarmGame_BattleRoyale_C::OnRep_WeaponPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnRep_WeaponPos"));
		
		UBPC_WarmGame_BattleRoyale_C_OnRep_WeaponPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdatePos
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_WarmGame_BattleRoyale_C::UpdatePos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdatePos"));
		
		UBPC_WarmGame_BattleRoyale_C_UpdatePos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]CreateWorldMark
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                                                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_WorldMark_Common_C*                      AsUIWorldMarkCommon                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::cCreateWorldMark(const struct FVector& Pos, int32_t , class UUI_WorldMark_Common_C** AsUIWorldMarkCommon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]CreateWorldMark"));
		
		UBPC_WarmGame_BattleRoyale_C_cCreateWorldMark_Params params {};
		params.Pos = Pos;
		params. = ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsUIWorldMarkCommon != nullptr)
			*AsUIWorldMarkCommon = params.AsUIWorldMarkCommon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]LocalCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class ASolarCharacter* UBPC_WarmGame_BattleRoyale_C::cLocalCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]LocalCharacter"));
		
		UBPC_WarmGame_BattleRoyale_C_cLocalCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]PlayerHasWeapon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasWeapon                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasVehicleWeapon                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_WarmGame_BattleRoyale_C::cPlayerHasWeapon(bool* HasWeapon, bool* HasVehicleWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[c]PlayerHasWeapon"));
		
		UBPC_WarmGame_BattleRoyale_C_cPlayerHasWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasWeapon != nullptr)
			*HasWeapon = params.HasWeapon;
		if (HasVehicleWeapon != nullptr)
			*HasVehicleWeapon = params.HasVehicleWeapon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdateArrowDirection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_WarmGame_BattleRoyale_C::UpdateArrowDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdateArrowDirection"));
		
		UBPC_WarmGame_BattleRoyale_C_UpdateArrowDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdateItemPos
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_WarmGame_BattleRoyale_C::UpdateItemPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdateItemPos"));
		
		UBPC_WarmGame_BattleRoyale_C_UpdateItemPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdateWeaponPos
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_WarmGame_BattleRoyale_C::UpdateWeaponPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdateWeaponPos"));
		
		UBPC_WarmGame_BattleRoyale_C_UpdateWeaponPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.GetGuidArrow
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_DirectionArrow_C*                        Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::GetGuidArrow(class ABP_DirectionArrow_C** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.GetGuidArrow"));
		
		UBPC_WarmGame_BattleRoyale_C_GetGuidArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[C]ShowArrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_WarmGame_BattleRoyale_C::CShowArrow(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[C]ShowArrow"));
		
		UBPC_WarmGame_BattleRoyale_C_CShowArrow_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdateVehiclePos
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_WarmGame_BattleRoyale_C::UpdateVehiclePos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.UpdateVehiclePos"));
		
		UBPC_WarmGame_BattleRoyale_C_UpdateVehiclePos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.GetNearestPosition
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_GuidTargetType                                   Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::GetNearestPosition(E_GuidTargetType Target, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.GetNearestPosition"));
		
		UBPC_WarmGame_BattleRoyale_C_GetNearestPosition_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[A]GetPlayBattleCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::AGetPlayBattleCount(int32_t* count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[A]GetPlayBattleCount"));
		
		UBPC_WarmGame_BattleRoyale_C_AGetPlayBattleCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (count != nullptr)
			*count = params.count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[ S]Game Mode Special Config
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               SpecialConfig                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Order                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isB                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_WarmGame_BattleRoyale_C::SGameModeSpecialConfig(bool* SpecialConfig, int32_t* Order, bool* isB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[ S]Game Mode Special Config"));
		
		UBPC_WarmGame_BattleRoyale_C_SGameModeSpecialConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpecialConfig != nullptr)
			*SpecialConfig = params.SpecialConfig;
		if (Order != nullptr)
			*Order = params.Order;
		if (isB != nullptr)
			*isB = params.isB;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[C]PlayerABTest
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SpecialConfig                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_WarmGame_BattleRoyale_C::CPlayerABTest(bool* SpecialConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.[C]PlayerABTest"));
		
		UBPC_WarmGame_BattleRoyale_C_CPlayerABTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpecialConfig != nullptr)
			*SpecialConfig = params.SpecialConfig;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.GetMainLogic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UBP_Logic_BattleRoyale_C*                    Output_Get                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::GetMainLogic(class UBP_Logic_BattleRoyale_C** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.GetMainLogic"));
		
		UBPC_WarmGame_BattleRoyale_C_GetMainLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPC_WarmGame_BattleRoyale_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.ReceiveBeginPlay"));
		
		UBPC_WarmGame_BattleRoyale_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.ReceiveTick"));
		
		UBPC_WarmGame_BattleRoyale_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnSystemReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_WarmGame_BattleRoyale_C::OnSystemReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnSystemReady"));
		
		UBPC_WarmGame_BattleRoyale_C_OnSystemReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.PlanyerEnterSafeArea
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::PlanyerEnterSafeArea(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.PlanyerEnterSafeArea"));
		
		UBPC_WarmGame_BattleRoyale_C_PlanyerEnterSafeArea_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.PlayerLeaveSafeArea
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::PlayerLeaveSafeArea(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.PlayerLeaveSafeArea"));
		
		UBPC_WarmGame_BattleRoyale_C_PlayerLeaveSafeArea_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnNextSafeAreaSetted
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Center                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WaitTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::OnNextSafeAreaSetted(const struct FVector& Center, float Radius, float WaitTime, float MoveTime, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnNextSafeAreaSetted"));
		
		UBPC_WarmGame_BattleRoyale_C_OnNextSafeAreaSetted_Params params {};
		params.Center = Center;
		params.Radius = Radius;
		params.WaitTime = WaitTime;
		params.MoveTime = MoveTime;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnRequestReceived
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_GuidTargetType                                   Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::OnRequestReceived(E_GuidTargetType Type, const struct FVector& Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnRequestReceived"));
		
		UBPC_WarmGame_BattleRoyale_C_OnRequestReceived_Params params {};
		params.Type = Type;
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnEjectStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_CharacterEjectState                              State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASolarCharacter*                             TargetCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::OnEjectStateChanged(E_CharacterEjectState State, class ASolarCharacter* TargetCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.OnEjectStateChanged"));
		
		UBPC_WarmGame_BattleRoyale_C_OnEjectStateChanged_Params params {};
		params.State = State;
		params.TargetCharacter = TargetCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.ConfigFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_WarmGame_BattleRoyale_C::ConfigFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.ConfigFinished"));
		
		UBPC_WarmGame_BattleRoyale_C_ConfigFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPC_WarmGame_BattleRoyale_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.CustomEvent_1"));
		
		UBPC_WarmGame_BattleRoyale_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.ExecuteUbergraph_BPC_WarmGame_BattleRoyale
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_WarmGame_BattleRoyale_C::ExecuteUbergraph_BPC_WarmGame_BattleRoyale(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C.ExecuteUbergraph_BPC_WarmGame_BattleRoyale"));
		
		UBPC_WarmGame_BattleRoyale_C_ExecuteUbergraph_BPC_WarmGame_BattleRoyale_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_WarmGame_BattleRoyale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_WarmGame_BattleRoyale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BPC_WarmGame_BattleRoyale.BPC_WarmGame_BattleRoyale_C"));
		return ptr;
	}

}



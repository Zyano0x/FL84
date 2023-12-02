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
	 * 		Name   -> Function BP_BotWarmSysRegular.BP_BotWarmSysRegular_C.GetActivePlayerNumBP
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            PlayerNum                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PlayerTeamNum                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UBP_BotWarmSysRegular_C::GetActivePlayerNumBP(int32_t PlayerNum, int32_t PlayerTeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotWarmSysRegular.BP_BotWarmSysRegular_C.GetActivePlayerNumBP"));
		
		UBP_BotWarmSysRegular_C_GetActivePlayerNumBP_Params params {};
		params.PlayerNum = PlayerNum;
		params.PlayerTeamNum = PlayerTeamNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BotWarmSysRegular.BP_BotWarmSysRegular_C.GetWarmScoreByEvent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUpdateWarmServiceEventType                        InEventType                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBP_BotWarmSysRegular_C::GetWarmScoreByEvent(class ASolarPlayerState* InPS, EUpdateWarmServiceEventType InEventType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotWarmSysRegular.BP_BotWarmSysRegular_C.GetWarmScoreByEvent"));
		
		UBP_BotWarmSysRegular_C_GetWarmScoreByEvent_Params params {};
		params.InPS = InPS;
		params.InEventType = InEventType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BotWarmSysRegular.BP_BotWarmSysRegular_C.GetTargetTickValue
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           InPS                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWarmTargetState                            InState                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	float UBP_BotWarmSysRegular_C::GetTargetTickValue(class ASolarPlayerState* InPS, const struct FWarmTargetState& InState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotWarmSysRegular.BP_BotWarmSysRegular_C.GetTargetTickValue"));
		
		UBP_BotWarmSysRegular_C_GetTargetTickValue_Params params {};
		params.InPS = InPS;
		params.InState = InState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BotWarmSysRegular_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BotWarmSysRegular_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_BotWarmSysRegular.BP_BotWarmSysRegular_C"));
		return ptr;
	}

}



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
	 * 		Name   -> Function BP_BotTeamManager.BP_BotTeamManager_C.ShouldTeamActivate
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FSolarBotTeamInfo                           BotInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UBP_BotTeamManager_C::ShouldTeamActivate(const struct FSolarBotTeamInfo& BotInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotTeamManager.BP_BotTeamManager_C.ShouldTeamActivate"));
		
		UBP_BotTeamManager_C_ShouldTeamActivate_Params params {};
		params.BotInfo = BotInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BotTeamManager.BP_BotTeamManager_C.OnTeamDeactive
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FSolarBotTeamInfo                           TeamInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_BotTeamManager_C::OnTeamDeactive(const struct FSolarBotTeamInfo& TeamInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotTeamManager.BP_BotTeamManager_C.OnTeamDeactive"));
		
		UBP_BotTeamManager_C_OnTeamDeactive_Params params {};
		params.TeamInfo = TeamInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BotTeamManager.BP_BotTeamManager_C.OnBotUnRegister
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FSolarBotMemberInfo                         BotInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_BotTeamManager_C::OnBotUnRegister(const struct FSolarBotMemberInfo& BotInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotTeamManager.BP_BotTeamManager_C.OnBotUnRegister"));
		
		UBP_BotTeamManager_C_OnBotUnRegister_Params params {};
		params.BotInfo = BotInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BotTeamManager.BP_BotTeamManager_C.OnBotStateChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FSolarBotMemberInfo                         BotInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ESolarBotMemberState                               OldState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BotTeamManager_C::OnBotStateChanged(const struct FSolarBotMemberInfo& BotInfo, ESolarBotMemberState OldState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotTeamManager.BP_BotTeamManager_C.OnBotStateChanged"));
		
		UBP_BotTeamManager_C_OnBotStateChanged_Params params {};
		params.BotInfo = BotInfo;
		params.OldState = OldState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BotTeamManager.BP_BotTeamManager_C.OnTeamActivate
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FSolarBotTeamInfo                           TeamInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_BotTeamManager_C::OnTeamActivate(const struct FSolarBotTeamInfo& TeamInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotTeamManager.BP_BotTeamManager_C.OnTeamActivate"));
		
		UBP_BotTeamManager_C_OnTeamActivate_Params params {};
		params.TeamInfo = TeamInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BotTeamManager.BP_BotTeamManager_C.OnBotRegister
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FSolarBotMemberInfo                         BotInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_BotTeamManager_C::OnBotRegister(const struct FSolarBotMemberInfo& BotInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotTeamManager.BP_BotTeamManager_C.OnBotRegister"));
		
		UBP_BotTeamManager_C_OnBotRegister_Params params {};
		params.BotInfo = BotInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BotTeamManager.BP_BotTeamManager_C.ExecuteUbergraph_BP_BotTeamManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BotTeamManager_C::ExecuteUbergraph_BP_BotTeamManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BotTeamManager.BP_BotTeamManager_C.ExecuteUbergraph_BP_BotTeamManager"));
		
		UBP_BotTeamManager_C_ExecuteUbergraph_BP_BotTeamManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_BotTeamManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BotTeamManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_BotTeamManager.BP_BotTeamManager_C"));
		return ptr;
	}

}



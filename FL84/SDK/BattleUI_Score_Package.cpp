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
	 * 		Name   -> Function BattleUI_Score.BattleUI_Score_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UBattleUI_Score_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleUI_Score.BattleUI_Score_C.GetModuleName"));
		
		UBattleUI_Score_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattleUI_Score.BattleUI_Score_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBattleUI_Score_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleUI_Score.BattleUI_Score_C.CustomEvent_1"));
		
		UBattleUI_Score_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattleUI_Score.BattleUI_Score_C.CustomEvent_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESCMDataChangeType                                 ChangeType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OldValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleUI_Score_C::CustomEvent_2(ESCMDataChangeType ChangeType, int32_t OldValue, int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleUI_Score.BattleUI_Score_C.CustomEvent_2"));
		
		UBattleUI_Score_C_CustomEvent_2_Params params {};
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
	 * 		Name   -> Function BattleUI_Score.BattleUI_Score_C.CustomEvent_3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESCMDataChangeType                                 ChangeType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OldValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleUI_Score_C::CustomEvent_3(ESCMDataChangeType ChangeType, int32_t OldValue, int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleUI_Score.BattleUI_Score_C.CustomEvent_3"));
		
		UBattleUI_Score_C_CustomEvent_3_Params params {};
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
	 * 		Name   -> Function BattleUI_Score.BattleUI_Score_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBattleUI_Score_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleUI_Score.BattleUI_Score_C.Construct"));
		
		UBattleUI_Score_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattleUI_Score.BattleUI_Score_C.OnSpectateInfoRep_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarSpectateInfo*                          SpectateInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleUI_Score_C::OnSpectateInfoRep_Event(class ASolarSpectateInfo* SpectateInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleUI_Score.BattleUI_Score_C.OnSpectateInfoRep_Event"));
		
		UBattleUI_Score_C_OnSpectateInfoRep_Event_Params params {};
		params.SpectateInfo = SpectateInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattleUI_Score.BattleUI_Score_C.OnSpectateTargetChanged_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           OldTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASolarSpectateInfo*                          SpectateInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleUI_Score_C::OnSpectateTargetChanged_Event(class ASolarPlayerState* OldTarget, class ASolarSpectateInfo* SpectateInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleUI_Score.BattleUI_Score_C.OnSpectateTargetChanged_Event"));
		
		UBattleUI_Score_C_OnSpectateTargetChanged_Event_Params params {};
		params.OldTarget = OldTarget;
		params.SpectateInfo = SpectateInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BattleUI_Score.BattleUI_Score_C.OnSpectateTargetKillNumChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESCMDataChangeType                                 ChangeType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OldValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleUI_Score_C::OnSpectateTargetKillNumChanged(ESCMDataChangeType ChangeType, int32_t OldValue, int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleUI_Score.BattleUI_Score_C.OnSpectateTargetKillNumChanged"));
		
		UBattleUI_Score_C_OnSpectateTargetKillNumChanged_Params params {};
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
	 * 		Name   -> Function BattleUI_Score.BattleUI_Score_C.ExecuteUbergraph_BattleUI_Score
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleUI_Score_C::ExecuteUbergraph_BattleUI_Score(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BattleUI_Score.BattleUI_Score_C.ExecuteUbergraph_BattleUI_Score"));
		
		UBattleUI_Score_C_ExecuteUbergraph_BattleUI_Score_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBattleUI_Score_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBattleUI_Score_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass BattleUI_Score.BattleUI_Score_C"));
		return ptr;
	}

}



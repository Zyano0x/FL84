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
	 * 		Name   -> Function BP_Controller_Framework.BP_Controller_Framework_C.MeerkatTriggerReport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_Framework_C::MeerkatTriggerReport(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Controller_Framework.BP_Controller_Framework_C.MeerkatTriggerReport"));
		
		ABP_Controller_Framework_C_MeerkatTriggerReport_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Controller_Framework.BP_Controller_Framework_C.UpdateAiPalRate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_Framework_C::UpdateAiPalRate(int32_t Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Controller_Framework.BP_Controller_Framework_C.UpdateAiPalRate"));
		
		ABP_Controller_Framework_C_UpdateAiPalRate_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Controller_Framework.BP_Controller_Framework_C.OnRep_EnableAiPalRate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Controller_Framework_C::OnRep_EnableAiPalRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Controller_Framework.BP_Controller_Framework_C.OnRep_EnableAiPalRate"));
		
		ABP_Controller_Framework_C_OnRep_EnableAiPalRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Controller_Framework.BP_Controller_Framework_C.OnNotifyLockPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_Framework_C::OnNotifyLockPlayer(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Controller_Framework.BP_Controller_Framework_C.OnNotifyLockPlayer"));
		
		ABP_Controller_Framework_C_OnNotifyLockPlayer_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Controller_Framework.BP_Controller_Framework_C.RequestNotifyLockPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_Framework_C::RequestNotifyLockPlayer(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Controller_Framework.BP_Controller_Framework_C.RequestNotifyLockPlayer"));
		
		ABP_Controller_Framework_C_RequestNotifyLockPlayer_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Controller_Framework.BP_Controller_Framework_C.InpActEvt_GMT_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controller_Framework_C::InpActEvt_GMT_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Controller_Framework.BP_Controller_Framework_C.InpActEvt_GMT_K2Node_InputActionEvent_1"));
		
		ABP_Controller_Framework_C_InpActEvt_GMT_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Controller_Framework.BP_Controller_Framework_C.InputReviveSelfReleased
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Controller_Framework_C::InputReviveSelfReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Controller_Framework.BP_Controller_Framework_C.InputReviveSelfReleased"));
		
		ABP_Controller_Framework_C_InputReviveSelfReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Controller_Framework.BP_Controller_Framework_C.AssembleCustomAntiCheatData
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarWeapon*                                ActiveWeapon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASolarVehiclePawn*                           BoardedVehicle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_Framework_C::AssembleCustomAntiCheatData(class ASolarWeapon* ActiveWeapon, class ASolarVehiclePawn* BoardedVehicle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Controller_Framework.BP_Controller_Framework_C.AssembleCustomAntiCheatData"));
		
		ABP_Controller_Framework_C_AssembleCustomAntiCheatData_Params params {};
		params.ActiveWeapon = ActiveWeapon;
		params.BoardedVehicle = BoardedVehicle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Controller_Framework.BP_Controller_Framework_C.CustomAntiCheatDataExport
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              DataName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TArray<class FString>                              DataContent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void ABP_Controller_Framework_C::CustomAntiCheatDataExport(TArray<class FString> DataName, TArray<class FString> DataContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Controller_Framework.BP_Controller_Framework_C.CustomAntiCheatDataExport"));
		
		ABP_Controller_Framework_C_CustomAntiCheatDataExport_Params params {};
		params.DataName = DataName;
		params.DataContent = DataContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Controller_Framework.BP_Controller_Framework_C.ClientNotifyLockPlayer
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_Framework_C::ClientNotifyLockPlayer(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Controller_Framework.BP_Controller_Framework_C.ClientNotifyLockPlayer"));
		
		ABP_Controller_Framework_C_ClientNotifyLockPlayer_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Controller_Framework.BP_Controller_Framework_C.RpcClientRepAceStatusToServer
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_Framework_C::RpcClientRepAceStatusToServer(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Controller_Framework.BP_Controller_Framework_C.RpcClientRepAceStatusToServer"));
		
		ABP_Controller_Framework_C_RpcClientRepAceStatusToServer_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Controller_Framework.BP_Controller_Framework_C.ExecuteUbergraph_BP_Controller_Framework
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controller_Framework_C::ExecuteUbergraph_BP_Controller_Framework(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Controller_Framework.BP_Controller_Framework_C.ExecuteUbergraph_BP_Controller_Framework"));
		
		ABP_Controller_Framework_C_ExecuteUbergraph_BP_Controller_Framework_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Controller_Framework_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Controller_Framework_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_Controller_Framework.BP_Controller_Framework_C"));
		return ptr;
	}

}



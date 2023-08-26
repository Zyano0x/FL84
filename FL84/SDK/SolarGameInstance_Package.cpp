/**
 * Name: FL84
 * Version: 1.14.4.5.503427
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.LuaOnBroadcastModeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USolarGameInstance_C::LuaOnBroadcastModeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarGameInstance.SolarGameInstance_C.LuaOnBroadcastModeChanged");
		
		USolarGameInstance_C_LuaOnBroadcastModeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B2C150
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SolarPlayerID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      BroadcastPlayerName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USolarGameInstance_C::LuaGetBroadcastPlayerName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerName");
		
		USolarGameInstance_C_LuaGetBroadcastPlayerName_Params params {};
		params.SolarPlayerID = SolarPlayerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BroadcastPlayerName != nullptr)
			*BroadcastPlayerName = params.BroadcastPlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B2C150
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SolarPlayerID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      BroadcastPlayerName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USolarGameInstance_C::LuaGetBroadcastHeroName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroName");
		
		USolarGameInstance_C_LuaGetBroadcastHeroName_Params params {};
		params.SolarPlayerID = SolarPlayerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BroadcastPlayerName != nullptr)
			*BroadcastPlayerName = params.BroadcastPlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestCrashWithBP
	 * 		Flags  -> (Exec, Event, Public, BlueprintEvent)
	 */
	void USolarGameInstance_C::SolarGM_TestCrashWithBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestCrashWithBP");
		
		USolarGameInstance_C_SolarGM_TestCrashWithBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestEnsureMsgWithBP
	 * 		Flags  -> (Exec, Event, Public, BlueprintEvent)
	 */
	void USolarGameInstance_C::SolarGM_TestEnsureMsgWithBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestEnsureMsgWithBP");
		
		USolarGameInstance_C_SolarGM_TestEnsureMsgWithBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.ExecuteUbergraph_SolarGameInstance
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USolarGameInstance_C::ExecuteUbergraph_SolarGameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarGameInstance.SolarGameInstance_C.ExecuteUbergraph_SolarGameInstance");
		
		USolarGameInstance_C_ExecuteUbergraph_SolarGameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.OnBroadcastModeChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void USolarGameInstance_C::OnBroadcastModeChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarGameInstance.SolarGameInstance_C.OnBroadcastModeChanged__DelegateSignature");
		
		USolarGameInstance_C_OnBroadcastModeChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USolarGameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USolarGameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SolarGameInstance.SolarGameInstance_C");
		return ptr;
	}

}



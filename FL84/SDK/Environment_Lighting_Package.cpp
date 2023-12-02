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
	 * 		Name   -> Function Environment_Lighting.Environment_Lighting_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AEnvironment_Lighting_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Environment_Lighting.Environment_Lighting_C.ReceiveEndPlay"));
		
		AEnvironment_Lighting_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function Environment_Lighting.Environment_Lighting_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEnvironment_Lighting_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Environment_Lighting.Environment_Lighting_C.ReceiveBeginPlay"));
		
		AEnvironment_Lighting_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Environment_Lighting.Environment_Lighting_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString AEnvironment_Lighting_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Environment_Lighting.Environment_Lighting_C.GetModuleName"));
		
		AEnvironment_Lighting_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Environment_Lighting.Environment_Lighting_C.SetLight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SceneName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AEnvironment_Lighting_C::SetLight(const class FString& SceneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Environment_Lighting.Environment_Lighting_C.SetLight"));
		
		AEnvironment_Lighting_C_SetLight_Params params {};
		params.SceneName = SceneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Environment_Lighting.Environment_Lighting_C.SetCardSkyLightData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Indensity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEnvironment_Lighting_C::SetCardSkyLightData(float Indensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Environment_Lighting.Environment_Lighting_C.SetCardSkyLightData"));
		
		AEnvironment_Lighting_C_SetCardSkyLightData_Params params {};
		params.Indensity = Indensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function Environment_Lighting.Environment_Lighting_C.ExecuteUbergraph_Environment_Lighting
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEnvironment_Lighting_C::ExecuteUbergraph_Environment_Lighting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Environment_Lighting.Environment_Lighting_C.ExecuteUbergraph_Environment_Lighting"));
		
		AEnvironment_Lighting_C_ExecuteUbergraph_Environment_Lighting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEnvironment_Lighting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEnvironment_Lighting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass Environment_Lighting.Environment_Lighting_C"));
		return ptr;
	}

}



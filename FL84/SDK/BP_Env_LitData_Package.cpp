/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Env_LitData.BP_Env_LitData_C.Toggle Env Lighting
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUseDefaultLight                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Env_LitData_C::ToggleEnvLighting(bool bUseDefaultLight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Env_LitData.BP_Env_LitData_C.Toggle Env Lighting");
		
		ABP_Env_LitData_C_ToggleEnvLighting_Params params {};
		params.bUseDefaultLight = bUseDefaultLight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Env_LitData.BP_Env_LitData_C.SetEdgeLightSetting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStr_EdgeLightSetting                       EdgeLightSetting                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Env_LitData_C::SetEdgeLightSetting(const struct FStr_EdgeLightSetting& EdgeLightSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Env_LitData.BP_Env_LitData_C.SetEdgeLightSetting");
		
		ABP_Env_LitData_C_SetEdgeLightSetting_Params params {};
		params.EdgeLightSetting = EdgeLightSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Env_LitData.BP_Env_LitData_C.Add or Set Light Data Element
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	void ABP_Env_LitData_C::AddorSetLightDataElement(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Env_LitData.BP_Env_LitData_C.Add or Set Light Data Element");
		
		ABP_Env_LitData_C_AddorSetLightDataElement_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Env_LitData.BP_Env_LitData_C.LoadSceneLightData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	void ABP_Env_LitData_C::LoadSceneLightData(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Env_LitData.BP_Env_LitData_C.LoadSceneLightData");
		
		ABP_Env_LitData_C_LoadSceneLightData_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Env_LitData.BP_Env_LitData_C.MakeLightData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Env_LitData_C::MakeLightData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Env_LitData.BP_Env_LitData_C.MakeLightData");
		
		ABP_Env_LitData_C_MakeLightData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Env_LitData.BP_Env_LitData_C.SaveLightData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Env_LitData_C::SaveLightData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Env_LitData.BP_Env_LitData_C.SaveLightData");
		
		ABP_Env_LitData_C_SaveLightData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Env_LitData.BP_Env_LitData_C.LoadLightData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Env_LitData_C::LoadLightData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Env_LitData.BP_Env_LitData_C.LoadLightData");
		
		ABP_Env_LitData_C_LoadLightData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Env_LitData.BP_Env_LitData_C.SetDirectionalLightSetting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADirectionalLight*                           DirectionalLight                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStr_DirectionalLightSetting                Str_DirectionalLightSetting                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_Env_LitData_C::SetDirectionalLightSetting(class ADirectionalLight* DirectionalLight, const struct FStr_DirectionalLightSetting& Str_DirectionalLightSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Env_LitData.BP_Env_LitData_C.SetDirectionalLightSetting");
		
		ABP_Env_LitData_C_SetDirectionalLightSetting_Params params {};
		params.DirectionalLight = DirectionalLight;
		params.Str_DirectionalLightSetting = Str_DirectionalLightSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Env_LitData.BP_Env_LitData_C.SetSkyLightSetting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASkyLight*                                   SkyLight                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStr_SkyLightSetting                        Str_SkyLightSetting                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Env_LitData_C::SetSkyLightSetting(class ASkyLight* SkyLight, const struct FStr_SkyLightSetting& Str_SkyLightSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Env_LitData.BP_Env_LitData_C.SetSkyLightSetting");
		
		ABP_Env_LitData_C_SetSkyLightSetting_Params params {};
		params.SkyLight = SkyLight;
		params.Str_SkyLightSetting = Str_SkyLightSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Env_LitData.BP_Env_LitData_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Env_LitData_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Env_LitData.BP_Env_LitData_C.ReceiveBeginPlay");
		
		ABP_Env_LitData_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function BP_Env_LitData.BP_Env_LitData_C.ExecuteUbergraph_BP_Env_LitData
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Env_LitData_C::ExecuteUbergraph_BP_Env_LitData(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Env_LitData.BP_Env_LitData_C.ExecuteUbergraph_BP_Env_LitData");
		
		ABP_Env_LitData_C_ExecuteUbergraph_BP_Env_LitData_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Env_LitData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Env_LitData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Env_LitData.BP_Env_LitData_C");
		return ptr;
	}

}



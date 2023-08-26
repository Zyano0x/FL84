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
	 * 		Name   -> Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.TryCreateDynamicMaterialInstance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ElementIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          SourceMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        OptionlName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UMaterialInstanceDynamic* ABP_SolarBackpackActor_C::TryCreateDynamicMaterialInstance(class UPrimitiveComponent* Component, int32_t ElementIndex, class UMaterialInterface* SourceMaterial, const class FName& OptionlName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.TryCreateDynamicMaterialInstance");
		
		ABP_SolarBackpackActor_C_TryCreateDynamicMaterialInstance_Params params {};
		params.Component = Component;
		params.ElementIndex = ElementIndex;
		params.SourceMaterial = SourceMaterial;
		params.OptionlName = OptionlName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Idle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SolarBackpackActor_C::FX_Idle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Idle");
		
		ABP_SolarBackpackActor_C_FX_Idle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Flying
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SolarBackpackActor_C::FX_Flying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Flying");
		
		ABP_SolarBackpackActor_C_FX_Flying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Charging
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SolarBackpackActor_C::FX_Charging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Charging");
		
		ABP_SolarBackpackActor_C_FX_Charging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_LowPower
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SolarBackpackActor_C::FX_LowPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_LowPower");
		
		ABP_SolarBackpackActor_C_FX_LowPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Default
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SolarBackpackActor_C::FX_Default()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Default");
		
		ABP_SolarBackpackActor_C_FX_Default_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SolarBackpackActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SolarBackpackActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SolarBackpackActor.BP_SolarBackpackActor_C");
		return ptr;
	}

}



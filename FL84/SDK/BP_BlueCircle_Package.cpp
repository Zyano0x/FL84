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
	 * 		Name   -> Function BP_BlueCircle.BP_BlueCircle_C.GetGlowStaticMeshComponent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UStaticMeshComponent* ABP_BlueCircle_C::GetGlowStaticMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BlueCircle.BP_BlueCircle_C.GetGlowStaticMeshComponent"));
		
		ABP_BlueCircle_C_GetGlowStaticMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BlueCircle.BP_BlueCircle_C.GetCenterStaticMeshComponent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UStaticMeshComponent* ABP_BlueCircle_C::GetCenterStaticMeshComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BlueCircle.BP_BlueCircle_C.GetCenterStaticMeshComponent"));
		
		ABP_BlueCircle_C_GetCenterStaticMeshComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_BlueCircle.BP_BlueCircle_C.GetModuleName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString ABP_BlueCircle_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_BlueCircle.BP_BlueCircle_C.GetModuleName"));
		
		ABP_BlueCircle_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BlueCircle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BlueCircle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_BlueCircle.BP_BlueCircle_C"));
		return ptr;
	}

}



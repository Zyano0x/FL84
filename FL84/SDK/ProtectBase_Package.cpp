/**
 * Name: FL84
 * Version: 15.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00CBD270
	 * 		Name   -> Function ProtectBase.ProtectBaseComponent.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UProtectBaseComponent* UProtectBaseComponent::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ProtectBase.ProtectBaseComponent.GetInstance"));
		
		UProtectBaseComponent_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProtectBaseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProtectBaseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ProtectBase.ProtectBaseComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProtectBaseManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProtectBaseManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ProtectBase.ProtectBaseManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CBD2A0
	 * 		Name   -> Function ProtectBase.SecDSComponent.GetInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class USecDSComponent* USecDSComponent::STATIC_GetInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ProtectBase.SecDSComponent.GetInstance"));
		
		USecDSComponent_GetInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USecDSComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecDSComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ProtectBase.SecDSComponent"));
		return ptr;
	}

}



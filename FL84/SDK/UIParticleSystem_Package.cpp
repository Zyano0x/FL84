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
	 * 		RVA    -> 0x0082DBC0
	 * 		Name   -> Function UIParticleSystem.ParticleSystemWidget.SetReactivate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bActivateAndReset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UParticleSystemWidget::SetReactivate(bool bActivateAndReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UIParticleSystem.ParticleSystemWidget.SetReactivate"));
		
		UParticleSystemWidget_SetReactivate_Params params {};
		params.bActivateAndReset = bActivateAndReset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0082DAF0
	 * 		Name   -> Function UIParticleSystem.ParticleSystemWidget.ActivateParticles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UParticleSystemWidget::ActivateParticles(bool bActive, bool bReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UIParticleSystem.ParticleSystemWidget.ActivateParticles"));
		
		UParticleSystemWidget_ActivateParticles_Params params {};
		params.bActive = bActive;
		params.bReset = bReset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleSystemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleSystemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UIParticleSystem.ParticleSystemWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUIParticleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIParticleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UIParticleSystem.UIParticleComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUIParticleActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUIParticleActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UIParticleSystem.UIParticleActor"));
		return ptr;
	}

}



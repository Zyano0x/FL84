#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UIParticleSystem.ParticleSystemWidget
// (None)

class UClass* UParticleSystemWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleSystemWidget");

	return Clss;
}


// ParticleSystemWidget UIParticleSystem.Default__ParticleSystemWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleSystemWidget* UParticleSystemWidget::GetDefaultObj()
{
	static class UParticleSystemWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleSystemWidget*>(UParticleSystemWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function UIParticleSystem.ParticleSystemWidget.SetReactivate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bActivateAndReset                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UParticleSystemWidget::SetReactivate(bool bActivateAndReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParticleSystemWidget", "SetReactivate");

	Params::UParticleSystemWidget_SetReactivate_Params Parms{};

	Parms.bActivateAndReset = bActivateAndReset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UIParticleSystem.ParticleSystemWidget.ActivateParticles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UParticleSystemWidget::ActivateParticles(bool bActive, bool bReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParticleSystemWidget", "ActivateParticles");

	Params::UParticleSystemWidget_ActivateParticles_Params Parms{};

	Parms.bActive = bActive;
	Parms.bReset = bReset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UIParticleSystem.UIParticleComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UUIParticleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIParticleComponent");

	return Clss;
}


// UIParticleComponent UIParticleSystem.Default__UIParticleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UUIParticleComponent* UUIParticleComponent::GetDefaultObj()
{
	static class UUIParticleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIParticleComponent*>(UUIParticleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class UIParticleSystem.UIParticleActor
// (Actor)

class UClass* AUIParticleActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIParticleActor");

	return Clss;
}


// UIParticleActor UIParticleSystem.Default__UIParticleActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AUIParticleActor* AUIParticleActor::GetDefaultObj()
{
	static class AUIParticleActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AUIParticleActor*>(AUIParticleActor::StaticClass()->DefaultObject);

	return Default;
}

}



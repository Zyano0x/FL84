#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_VH_TransTL_WL07_Machinegun_Secondary.Projectile_VH_TransTL_WL07_Machinegun_Secondary_C
// (Actor)

class UClass* AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_VH_TransTL_WL07_Machinegun_Secondary_C");

	return Clss;
}


// Projectile_VH_TransTL_WL07_Machinegun_Secondary_C Projectile_VH_TransTL_WL07_Machinegun_Secondary.Default__Projectile_VH_TransTL_WL07_Machinegun_Secondary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C* AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C::GetDefaultObj()
{
	static class AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C*>(AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_VH_TransTL_WL07_Machinegun_Secondary.Projectile_VH_TransTL_WL07_Machinegun_Secondary_C.K2_OnExplode
// (Event, Protected, BlueprintEvent)
// Parameters:

void AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C::K2_OnExplode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_VH_TransTL_WL07_Machinegun_Secondary_C", "K2_OnExplode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Projectile_VH_TransTL_WL07_Machinegun_Secondary.Projectile_VH_TransTL_WL07_Machinegun_Secondary_C.ExecuteUbergraph_Projectile_VH_TransTL_WL07_Machinegun_Secondary
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C::ExecuteUbergraph_Projectile_VH_TransTL_WL07_Machinegun_Secondary(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_VH_TransTL_WL07_Machinegun_Secondary_C", "ExecuteUbergraph_Projectile_VH_TransTL_WL07_Machinegun_Secondary");

	Params::AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C_ExecuteUbergraph_Projectile_VH_TransTL_WL07_Machinegun_Secondary_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



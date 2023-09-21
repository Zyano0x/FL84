#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_Anti-vehicle_Weapon01.Projectile_Anti-vehicle_Weapon01_C
// (Actor)

class UClass* AProjectile_AntiMinusvehicle_Weapon01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_Anti-vehicle_Weapon01_C");

	return Clss;
}


// Projectile_Anti-vehicle_Weapon01_C Projectile_Anti-vehicle_Weapon01.Default__Projectile_Anti-vehicle_Weapon01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_AntiMinusvehicle_Weapon01_C* AProjectile_AntiMinusvehicle_Weapon01_C::GetDefaultObj()
{
	static class AProjectile_AntiMinusvehicle_Weapon01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_AntiMinusvehicle_Weapon01_C*>(AProjectile_AntiMinusvehicle_Weapon01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_Anti-vehicle_Weapon01.Projectile_Anti-vehicle_Weapon01_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  ImpactResult                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProjectile_AntiMinusvehicle_Weapon01_C::BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Anti-vehicle_Weapon01_C", "BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");

	Params::AProjectile_AntiMinusvehicle_Weapon01_C_BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params Parms{};

	Parms.ImpactResult = ImpactResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_Anti-vehicle_Weapon01.Projectile_Anti-vehicle_Weapon01_C.ExecuteUbergraph_Projectile_Anti-vehicle_Weapon01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_ImpactResult                          (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProjectile_AntiMinusvehicle_Weapon01_C::ExecuteUbergraph_Projectile_AntiMinusvehicle_Weapon01(int32 EntryPoint, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_Anti-vehicle_Weapon01_C", "ExecuteUbergraph_Projectile_Anti-vehicle_Weapon01");

	Params::AProjectile_AntiMinusvehicle_Weapon01_C_ExecuteUbergraph_Projectile_AntiMinusvehicle_Weapon01_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ImpactResult = K2Node_ComponentBoundEvent_ImpactResult;

	UObject::ProcessEvent(Func, &Parms);

}

}



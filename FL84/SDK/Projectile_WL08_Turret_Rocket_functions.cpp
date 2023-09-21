#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_WL08_Turret_Rocket.Projectile_WL08_Turret_Rocket_C
// (Actor)

class UClass* AProjectile_WL08_Turret_Rocket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_WL08_Turret_Rocket_C");

	return Clss;
}


// Projectile_WL08_Turret_Rocket_C Projectile_WL08_Turret_Rocket.Default__Projectile_WL08_Turret_Rocket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_WL08_Turret_Rocket_C* AProjectile_WL08_Turret_Rocket_C::GetDefaultObj()
{
	static class AProjectile_WL08_Turret_Rocket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_WL08_Turret_Rocket_C*>(AProjectile_WL08_Turret_Rocket_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_WL08_Turret_Rocket.Projectile_WL08_Turret_Rocket_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  ImpactResult                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProjectile_WL08_Turret_Rocket_C::BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_WL08_Turret_Rocket_C", "BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");

	Params::AProjectile_WL08_Turret_Rocket_C_BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params Parms{};

	Parms.ImpactResult = ImpactResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_WL08_Turret_Rocket.Projectile_WL08_Turret_Rocket_C.ExecuteUbergraph_Projectile_WL08_Turret_Rocket
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_ImpactResult                          (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProjectile_WL08_Turret_Rocket_C::ExecuteUbergraph_Projectile_WL08_Turret_Rocket(int32 EntryPoint, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_WL08_Turret_Rocket_C", "ExecuteUbergraph_Projectile_WL08_Turret_Rocket");

	Params::AProjectile_WL08_Turret_Rocket_C_ExecuteUbergraph_Projectile_WL08_Turret_Rocket_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ImpactResult = K2Node_ComponentBoundEvent_ImpactResult;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Projectile_BMphy0_Primary.Projectile_BMphy0_Primary_C
// (Actor)

class UClass* AProjectile_BMphy0_Primary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Projectile_BMphy0_Primary_C");

	return Clss;
}


// Projectile_BMphy0_Primary_C Projectile_BMphy0_Primary.Default__Projectile_BMphy0_Primary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AProjectile_BMphy0_Primary_C* AProjectile_BMphy0_Primary_C::GetDefaultObj()
{
	static class AProjectile_BMphy0_Primary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AProjectile_BMphy0_Primary_C*>(AProjectile_BMphy0_Primary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Projectile_BMphy0_Primary.Projectile_BMphy0_Primary_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  ImpactResult                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProjectile_BMphy0_Primary_C::BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_BMphy0_Primary_C", "BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");

	Params::AProjectile_BMphy0_Primary_C_BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params Parms{};

	Parms.ImpactResult = ImpactResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Projectile_BMphy0_Primary.Projectile_BMphy0_Primary_C.ExecuteUbergraph_Projectile_BMphy0_Primary
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_ImpactResult                          (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProjectile_BMphy0_Primary_C::ExecuteUbergraph_Projectile_BMphy0_Primary(int32 EntryPoint, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Projectile_BMphy0_Primary_C", "ExecuteUbergraph_Projectile_BMphy0_Primary");

	Params::AProjectile_BMphy0_Primary_C_ExecuteUbergraph_Projectile_BMphy0_Primary_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ImpactResult = K2Node_ComponentBoundEvent_ImpactResult;

	UObject::ProcessEvent(Func, &Parms);

}

}



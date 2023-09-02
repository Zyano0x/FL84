﻿/**
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
	 * 		Name   -> Function Projectile_VH_Leg_Spider01_ShapedGun.Projectile_VH_Leg_Spider01_ShapedGun_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_VH_Leg_Spider01_ShapedGun_C::BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_VH_Leg_Spider01_ShapedGun.Projectile_VH_Leg_Spider01_ShapedGun_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");
		
		AProjectile_VH_Leg_Spider01_ShapedGun_C_BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Projectile_VH_Leg_Spider01_ShapedGun.Projectile_VH_Leg_Spider01_ShapedGun_C.ExecuteUbergraph_Projectile_VH_Leg_Spider01_ShapedGun
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_VH_Leg_Spider01_ShapedGun_C::ExecuteUbergraph_Projectile_VH_Leg_Spider01_ShapedGun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_VH_Leg_Spider01_ShapedGun.Projectile_VH_Leg_Spider01_ShapedGun_C.ExecuteUbergraph_Projectile_VH_Leg_Spider01_ShapedGun");
		
		AProjectile_VH_Leg_Spider01_ShapedGun_C_ExecuteUbergraph_Projectile_VH_Leg_Spider01_ShapedGun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_VH_Leg_Spider01_ShapedGun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_VH_Leg_Spider01_ShapedGun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_VH_Leg_Spider01_ShapedGun.Projectile_VH_Leg_Spider01_ShapedGun_C");
		return ptr;
	}

}


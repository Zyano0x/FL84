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
	 * 		Name   -> Function Projectile_VH_TransTL_WL07_Machinegun_Secondary.Projectile_VH_TransTL_WL07_Machinegun_Secondary_C.K2_OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C::K2_OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_VH_TransTL_WL07_Machinegun_Secondary.Projectile_VH_TransTL_WL07_Machinegun_Secondary_C.K2_OnExplode");
		
		AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C_K2_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function Projectile_VH_TransTL_WL07_Machinegun_Secondary.Projectile_VH_TransTL_WL07_Machinegun_Secondary_C.ExecuteUbergraph_Projectile_VH_TransTL_WL07_Machinegun_Secondary
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C::ExecuteUbergraph_Projectile_VH_TransTL_WL07_Machinegun_Secondary(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_VH_TransTL_WL07_Machinegun_Secondary.Projectile_VH_TransTL_WL07_Machinegun_Secondary_C.ExecuteUbergraph_Projectile_VH_TransTL_WL07_Machinegun_Secondary");
		
		AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C_ExecuteUbergraph_Projectile_VH_TransTL_WL07_Machinegun_Secondary_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_VH_TransTL_WL07_Machinegun_Secondary.Projectile_VH_TransTL_WL07_Machinegun_Secondary_C");
		return ptr;
	}

}



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
	 * 		Name   -> Function Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man.Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAbility_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man.Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C.ReceiveBeginPlay");
		
		AAbility_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man.Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAbility_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man.Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C.ReceiveTick");
		
		AAbility_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DE00
	 * 		Name   -> Function Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man.Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C.ExecuteUbergraph_Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAbility_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C::ExecuteUbergraph_Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man.Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C.ExecuteUbergraph_Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man");
		
		AAbility_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C_ExecuteUbergraph_Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAbility_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbility_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man.Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C");
		return ptr;
	}

}



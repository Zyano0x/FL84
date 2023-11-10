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
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function Ability_VehicleExplosion.Ability_VehicleExplosion_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAbility_VehicleExplosion_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Ability_VehicleExplosion.Ability_VehicleExplosion_C.ReceiveBeginPlay"));
		
		AAbility_VehicleExplosion_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function Ability_VehicleExplosion.Ability_VehicleExplosion_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAbility_VehicleExplosion_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Ability_VehicleExplosion.Ability_VehicleExplosion_C.ReceiveTick"));
		
		AAbility_VehicleExplosion_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function Ability_VehicleExplosion.Ability_VehicleExplosion_C.ExecuteUbergraph_Ability_VehicleExplosion
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAbility_VehicleExplosion_C::ExecuteUbergraph_Ability_VehicleExplosion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Ability_VehicleExplosion.Ability_VehicleExplosion_C.ExecuteUbergraph_Ability_VehicleExplosion"));
		
		AAbility_VehicleExplosion_C_ExecuteUbergraph_Ability_VehicleExplosion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAbility_VehicleExplosion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbility_VehicleExplosion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass Ability_VehicleExplosion.Ability_VehicleExplosion_C"));
		return ptr;
	}

}



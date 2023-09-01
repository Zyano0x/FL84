/**
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
	 * 		Name   -> Function Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAbility_Antivehicle_Weapon01_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ReceiveBeginPlay");
		
		AAbility_Antivehicle_Weapon01_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAbility_Antivehicle_Weapon01_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ReceiveTick");
		
		AAbility_Antivehicle_Weapon01_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ExecuteUbergraph_Ability_Anti-vehicle_Weapon01
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAbility_Antivehicle_Weapon01_C::ExecuteUbergraph_Ability_Antivehicle_Weapon01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ExecuteUbergraph_Ability_Anti-vehicle_Weapon01");
		
		AAbility_Antivehicle_Weapon01_C_ExecuteUbergraph_Ability_Antivehicle_Weapon01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAbility_Antivehicle_Weapon01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbility_Antivehicle_Weapon01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Anti_vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C");
		return ptr;
	}

}



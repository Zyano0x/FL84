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
	 * 		Name   -> Function Ability_RPG_BaseDamage.Ability_RPG_BaseDamage_C.OnLoaded_F1E8D1D244089792BF00E29440E0F852
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAbility_RPG_BaseDamage_C::OnLoaded_F1E8D1D244089792BF00E29440E0F852(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_RPG_BaseDamage.Ability_RPG_BaseDamage_C.OnLoaded_F1E8D1D244089792BF00E29440E0F852");
		
		AAbility_RPG_BaseDamage_C_OnLoaded_F1E8D1D244089792BF00E29440E0F852_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Ability_RPG_BaseDamage.Ability_RPG_BaseDamage_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAbility_RPG_BaseDamage_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_RPG_BaseDamage.Ability_RPG_BaseDamage_C.ReceiveBeginPlay");
		
		AAbility_RPG_BaseDamage_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0260DF10
	 * 		Name   -> Function Ability_RPG_BaseDamage.Ability_RPG_BaseDamage_C.ExecuteUbergraph_Ability_RPG_BaseDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAbility_RPG_BaseDamage_C::ExecuteUbergraph_Ability_RPG_BaseDamage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ability_RPG_BaseDamage.Ability_RPG_BaseDamage_C.ExecuteUbergraph_Ability_RPG_BaseDamage");
		
		AAbility_RPG_BaseDamage_C_ExecuteUbergraph_Ability_RPG_BaseDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAbility_RPG_BaseDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbility_RPG_BaseDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ability_RPG_BaseDamage.Ability_RPG_BaseDamage_C");
		return ptr;
	}

}



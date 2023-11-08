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
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function GA_Weapon_EMP_Throw.GA_Weapon_EMP_Throw_C.K2_ActivateAbilityFromEvent
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Weapon_EMP_Throw_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GA_Weapon_EMP_Throw.GA_Weapon_EMP_Throw_C.K2_ActivateAbilityFromEvent"));
		
		UGA_Weapon_EMP_Throw_C_K2_ActivateAbilityFromEvent_Params params {};
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function GA_Weapon_EMP_Throw.GA_Weapon_EMP_Throw_C.ExecuteUbergraph_GA_Weapon_EMP_Throw
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Weapon_EMP_Throw_C::ExecuteUbergraph_GA_Weapon_EMP_Throw(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GA_Weapon_EMP_Throw.GA_Weapon_EMP_Throw_C.ExecuteUbergraph_GA_Weapon_EMP_Throw"));
		
		UGA_Weapon_EMP_Throw_C_ExecuteUbergraph_GA_Weapon_EMP_Throw_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Weapon_EMP_Throw_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Weapon_EMP_Throw_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GA_Weapon_EMP_Throw.GA_Weapon_EMP_Throw_C"));
		return ptr;
	}

}



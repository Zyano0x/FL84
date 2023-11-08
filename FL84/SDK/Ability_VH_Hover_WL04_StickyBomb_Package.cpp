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
	 * 		Name   -> Function Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAbility_VH_Hover_WL04_StickyBomb_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C.ReceiveBeginPlay"));
		
		AAbility_VH_Hover_WL04_StickyBomb_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAbility_VH_Hover_WL04_StickyBomb_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C.ReceiveTick"));
		
		AAbility_VH_Hover_WL04_StickyBomb_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C.ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAbility_VH_Hover_WL04_StickyBomb_C::ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C.ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb"));
		
		AAbility_VH_Hover_WL04_StickyBomb_C_ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAbility_VH_Hover_WL04_StickyBomb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAbility_VH_Hover_WL04_StickyBomb_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C"));
		return ptr;
	}

}



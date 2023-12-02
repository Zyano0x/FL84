/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_Framework.BP_Character_Framework_C.GetWeaponLevelDamageBonus
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_Framework_C::GetWeaponLevelDamageBonus(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_Framework.BP_Character_Framework_C.GetWeaponLevelDamageBonus"));
		
		ABP_Character_Framework_C_GetWeaponLevelDamageBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_Framework.BP_Character_Framework_C.[A]GetHealthState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	E_CharacterHealthState ABP_Character_Framework_C::AGetHealthState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_Framework.BP_Character_Framework_C.[A]GetHealthState"));
		
		ABP_Character_Framework_C_AGetHealthState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_Framework.BP_Character_Framework_C.[S]SkyDiveFly
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Character_Framework_C::SSkyDiveFly(const struct FVector& Location, float Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_Framework.BP_Character_Framework_C.[S]SkyDiveFly"));
		
		ABP_Character_Framework_C_SSkyDiveFly_Params params {};
		params.Location = Location;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_Framework.BP_Character_Framework_C.[S]Set Sky Dive State
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_Character_Framework_C::SSetSkyDiveState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_Framework.BP_Character_Framework_C.[S]Set Sky Dive State"));
		
		ABP_Character_Framework_C_SSetSkyDiveState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_Framework.BP_Character_Framework_C.OnCompleted_84F20D844D539263D5B45F9EDF867241
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerWeapon*                          Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_Framework_C::OnCompleted_84F20D844D539263D5B45F9EDF867241(class ASolarPlayerWeapon* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_Framework.BP_Character_Framework_C.OnCompleted_84F20D844D539263D5B45F9EDF867241"));
		
		ABP_Character_Framework_C_OnCompleted_84F20D844D539263D5B45F9EDF867241_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_Framework.BP_Character_Framework_C.OnCompleted_C9B9AA40496B70A95EF897A2092C6753
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerWeapon*                          Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_Framework_C::OnCompleted_C9B9AA40496B70A95EF897A2092C6753(class ASolarPlayerWeapon* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_Framework.BP_Character_Framework_C.OnCompleted_C9B9AA40496B70A95EF897A2092C6753"));
		
		ABP_Character_Framework_C_OnCompleted_C9B9AA40496B70A95EF897A2092C6753_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_Framework.BP_Character_Framework_C.OnCompleted_9F8149E84A6F3575574B32ADD8BF2960
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerWeapon*                          Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_Framework_C::OnCompleted_9F8149E84A6F3575574B32ADD8BF2960(class ASolarPlayerWeapon* Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_Framework.BP_Character_Framework_C.OnCompleted_9F8149E84A6F3575574B32ADD8BF2960"));
		
		ABP_Character_Framework_C_OnCompleted_9F8149E84A6F3575574B32ADD8BF2960_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_Framework.BP_Character_Framework_C.BeginPlayBlueprint
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Character_Framework_C::BeginPlayBlueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_Framework.BP_Character_Framework_C.BeginPlayBlueprint"));
		
		ABP_Character_Framework_C_BeginPlayBlueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_Framework.BP_Character_Framework_C.SetWeapon
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EWeaponSlotType                                    Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WeapoinId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FWeaponPartsData                            Parts                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_Character_Framework_C::SetWeapon(EWeaponSlotType Slot, int32_t WeapoinId, const struct FWeaponPartsData& Parts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_Framework.BP_Character_Framework_C.SetWeapon"));
		
		ABP_Character_Framework_C_SetWeapon_Params params {};
		params.Slot = Slot;
		params.WeapoinId = WeapoinId;
		params.Parts = Parts;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_Framework.BP_Character_Framework_C.BatchSetItem
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FS_AiItem>                           ItemList                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void ABP_Character_Framework_C::BatchSetItem(TArray<struct FS_AiItem> ItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_Framework.BP_Character_Framework_C.BatchSetItem"));
		
		ABP_Character_Framework_C_BatchSetItem_Params params {};
		params.ItemList = ItemList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_Framework.BP_Character_Framework_C.[s]GiveWeapon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDestroyPrevWeapon                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EWeaponSlotType                                    Slot                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_Framework_C::sGiveWeapon(bool bDestroyPrevWeapon, EWeaponSlotType Slot, int32_t ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_Framework.BP_Character_Framework_C.[s]GiveWeapon"));
		
		ABP_Character_Framework_C_sGiveWeapon_Params params {};
		params.bDestroyPrevWeapon = bDestroyPrevWeapon;
		params.Slot = Slot;
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_Character_Framework.BP_Character_Framework_C.ExecuteUbergraph_BP_Character_Framework
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Character_Framework_C::ExecuteUbergraph_BP_Character_Framework(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_Character_Framework.BP_Character_Framework_C.ExecuteUbergraph_BP_Character_Framework"));
		
		ABP_Character_Framework_C_ExecuteUbergraph_BP_Character_Framework_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Character_Framework_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Character_Framework_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_Character_Framework.BP_Character_Framework_C"));
		return ptr;
	}

}



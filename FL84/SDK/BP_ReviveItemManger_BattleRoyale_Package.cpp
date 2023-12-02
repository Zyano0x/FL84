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
	 * 		Name   -> Function BP_ReviveItemManger_BattleRoyale.BP_ReviveItemManger_BattleRoyale_C.GetSingleCruiseEndCenter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     DeathBoxLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ReviveItemManger_BattleRoyale_C::GetSingleCruiseEndCenter(const struct FVector& DeathBoxLocation, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_BattleRoyale.BP_ReviveItemManger_BattleRoyale_C.GetSingleCruiseEndCenter"));
		
		ABP_ReviveItemManger_BattleRoyale_C_GetSingleCruiseEndCenter_Params params {};
		params.DeathBoxLocation = DeathBoxLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_ReviveItemManger_BattleRoyale.BP_ReviveItemManger_BattleRoyale_C.RevivePlayer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarCharacter*                                                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  2                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               _bool_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ReviveItemManger_BattleRoyale_C::RevivePlayer(class ASolarCharacter* , const struct FTransform& 2, bool* _bool_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_ReviveItemManger_BattleRoyale.BP_ReviveItemManger_BattleRoyale_C.RevivePlayer"));
		
		ABP_ReviveItemManger_BattleRoyale_C_RevivePlayer_Params params {};
		params. = ;
		params.2 = 2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_bool_ != nullptr)
			*_bool_ = params._bool_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ReviveItemManger_BattleRoyale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ReviveItemManger_BattleRoyale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_ReviveItemManger_BattleRoyale.BP_ReviveItemManger_BattleRoyale_C"));
		return ptr;
	}

}



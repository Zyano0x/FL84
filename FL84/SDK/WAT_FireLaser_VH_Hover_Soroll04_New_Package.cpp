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
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function WAT_FireLaser_VH_Hover_Soroll04_New.WAT_FireLaser_VH_Hover_Soroll04_New_C.K2_ActivateRealFire
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWAT_FireLaser_VH_Hover_Soroll04_New_C::K2_ActivateRealFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WAT_FireLaser_VH_Hover_Soroll04_New.WAT_FireLaser_VH_Hover_Soroll04_New_C.K2_ActivateRealFire"));
		
		UWAT_FireLaser_VH_Hover_Soroll04_New_C_K2_ActivateRealFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function WAT_FireLaser_VH_Hover_Soroll04_New.WAT_FireLaser_VH_Hover_Soroll04_New_C.ExecuteUbergraph_WAT_FireLaser_VH_Hover_Soroll04_New
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWAT_FireLaser_VH_Hover_Soroll04_New_C::ExecuteUbergraph_WAT_FireLaser_VH_Hover_Soroll04_New(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function WAT_FireLaser_VH_Hover_Soroll04_New.WAT_FireLaser_VH_Hover_Soroll04_New_C.ExecuteUbergraph_WAT_FireLaser_VH_Hover_Soroll04_New"));
		
		UWAT_FireLaser_VH_Hover_Soroll04_New_C_ExecuteUbergraph_WAT_FireLaser_VH_Hover_Soroll04_New_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWAT_FireLaser_VH_Hover_Soroll04_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWAT_FireLaser_VH_Hover_Soroll04_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass WAT_FireLaser_VH_Hover_Soroll04_New.WAT_FireLaser_VH_Hover_Soroll04_New_C"));
		return ptr;
	}

}



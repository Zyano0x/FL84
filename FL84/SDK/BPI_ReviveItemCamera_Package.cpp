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
	 * 		Name   -> Function BPI_ReviveItemCamera.BPI_ReviveItemCamera_C.SetReviveCameraFade
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_ReviveItemCamera_C::SetReviveCameraFade(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPI_ReviveItemCamera.BPI_ReviveItemCamera_C.SetReviveCameraFade"));
		
		UBPI_ReviveItemCamera_C_SetReviveCameraFade_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_ReviveItemCamera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_ReviveItemCamera_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BPI_ReviveItemCamera.BPI_ReviveItemCamera_C"));
		return ptr;
	}

}



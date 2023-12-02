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
	 * 		Name   -> Function BPC_FilterBase_AiComp.BPC_FilterBase_AiComp_C.CheckFilter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ABP_PlayerState_Framework_C*                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_FilterBase_AiComp_C::CheckFilter(class ABP_PlayerState_Framework_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPC_FilterBase_AiComp.BPC_FilterBase_AiComp_C.CheckFilter"));
		
		UBPC_FilterBase_AiComp_C_CheckFilter_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_FilterBase_AiComp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_FilterBase_AiComp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BPC_FilterBase_AiComp.BPC_FilterBase_AiComp_C"));
		return ptr;
	}

}



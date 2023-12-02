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
	 * 		Name   -> Function BTT_RandomLocationFromEffectArea.BTT_RandomLocationFromEffectArea_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_RandomLocationFromEffectArea_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BTT_RandomLocationFromEffectArea.BTT_RandomLocationFromEffectArea_C.ReceiveExecuteAI"));
		
		UBTT_RandomLocationFromEffectArea_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BTT_RandomLocationFromEffectArea.BTT_RandomLocationFromEffectArea_C.ExecuteUbergraph_BTT_RandomLocationFromEffectArea
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_RandomLocationFromEffectArea_C::ExecuteUbergraph_BTT_RandomLocationFromEffectArea(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BTT_RandomLocationFromEffectArea.BTT_RandomLocationFromEffectArea_C.ExecuteUbergraph_BTT_RandomLocationFromEffectArea"));
		
		UBTT_RandomLocationFromEffectArea_C_ExecuteUbergraph_BTT_RandomLocationFromEffectArea_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_RandomLocationFromEffectArea_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_RandomLocationFromEffectArea_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BTT_RandomLocationFromEffectArea.BTT_RandomLocationFromEffectArea_C"));
		return ptr;
	}

}



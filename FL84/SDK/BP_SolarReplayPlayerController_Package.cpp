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
	 * 		Name   -> Function BP_SolarReplayPlayerController.BP_SolarReplayPlayerController_C.InpActEvt_F10_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SolarReplayPlayerController_C::InpActEvt_F10_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayPlayerController.BP_SolarReplayPlayerController_C.InpActEvt_F10_K2Node_InputKeyEvent_1"));
		
		ABP_SolarReplayPlayerController_C_InpActEvt_F10_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarReplayPlayerController.BP_SolarReplayPlayerController_C.ExecuteUbergraph_BP_SolarReplayPlayerController
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SolarReplayPlayerController_C::ExecuteUbergraph_BP_SolarReplayPlayerController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarReplayPlayerController.BP_SolarReplayPlayerController_C.ExecuteUbergraph_BP_SolarReplayPlayerController"));
		
		ABP_SolarReplayPlayerController_C_ExecuteUbergraph_BP_SolarReplayPlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SolarReplayPlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SolarReplayPlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_SolarReplayPlayerController.BP_SolarReplayPlayerController_C"));
		return ptr;
	}

}



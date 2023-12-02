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
	 * 		Name   -> Function BP_SI_RebornLine.BP_SI_RebornLine_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_SI_RebornLine_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SI_RebornLine.BP_SI_RebornLine_C.ReceiveBeginPlay"));
		
		ABP_SI_RebornLine_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SI_RebornLine.BP_SI_RebornLine_C.Event_SetWaitingColor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SI_RebornLine_C::Event_SetWaitingColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SI_RebornLine.BP_SI_RebornLine_C.Event_SetWaitingColor"));
		
		ABP_SI_RebornLine_C_Event_SetWaitingColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SI_RebornLine.BP_SI_RebornLine_C.Event_SetFinishColor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SI_RebornLine_C::Event_SetFinishColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SI_RebornLine.BP_SI_RebornLine_C.Event_SetFinishColor"));
		
		ABP_SI_RebornLine_C_Event_SetFinishColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SI_RebornLine.BP_SI_RebornLine_C.ExecuteUbergraph_BP_SI_RebornLine
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SI_RebornLine_C::ExecuteUbergraph_BP_SI_RebornLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SI_RebornLine.BP_SI_RebornLine_C.ExecuteUbergraph_BP_SI_RebornLine"));
		
		ABP_SI_RebornLine_C_ExecuteUbergraph_BP_SI_RebornLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SI_RebornLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SI_RebornLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_SI_RebornLine.BP_SI_RebornLine_C"));
		return ptr;
	}

}



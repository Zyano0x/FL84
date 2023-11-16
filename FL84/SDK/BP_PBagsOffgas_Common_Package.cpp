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
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.BackpackSFXBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EFXJetType                                         InJetType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               GroundDetected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PBagsOffgas_Common_C::BackpackSFXBegin(EFXJetType InJetType, bool GroundDetected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.BackpackSFXBegin"));
		
		ABP_PBagsOffgas_Common_C_BackpackSFXBegin_Params params {};
		params.InJetType = InJetType;
		params.GroundDetected = GroundDetected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.BackpackSFXEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_PBagsOffgas_Common_C::BackpackSFXEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.BackpackSFXEnd"));
		
		ABP_PBagsOffgas_Common_C_BackpackSFXEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.OnBackpackTrailAssembling
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FBackpackTrailAssemblingParams              Params                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EBackpackPropellingMode                            PropellingMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PBagsOffgas_Common_C::OnBackpackTrailAssembling(const struct FBackpackTrailAssemblingParams& Params, EBackpackPropellingMode PropellingMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.OnBackpackTrailAssembling"));
		
		ABP_PBagsOffgas_Common_C_OnBackpackTrailAssembling_Params params {};
		params.Params = Params;
		params.PropellingMode = PropellingMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.ExecuteUbergraph_BP_PBagsOffgas_Common
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PBagsOffgas_Common_C::ExecuteUbergraph_BP_PBagsOffgas_Common(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.ExecuteUbergraph_BP_PBagsOffgas_Common"));
		
		ABP_PBagsOffgas_Common_C_ExecuteUbergraph_BP_PBagsOffgas_Common_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PBagsOffgas_Common_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PBagsOffgas_Common_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C"));
		return ptr;
	}

}



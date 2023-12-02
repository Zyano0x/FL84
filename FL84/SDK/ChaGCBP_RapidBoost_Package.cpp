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
	 * 		Name   -> Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.WhileActive_Impl
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AChaGCBP_RapidBoost_C::WhileActive_Impl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.WhileActive_Impl"));
		
		AChaGCBP_RapidBoost_C_WhileActive_Impl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnActive_Impl
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AChaGCBP_RapidBoost_C::OnActive_Impl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnActive_Impl"));
		
		AChaGCBP_RapidBoost_C_OnActive_Impl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnPlayEndSound
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AChaGCBP_RapidBoost_C::OnPlayEndSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnPlayEndSound"));
		
		AChaGCBP_RapidBoost_C_OnPlayEndSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.SpawnEmitter
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             EmitterTemplate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPSCPoolMethod                                     PoolingMethod                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAbsoluteRotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UParticleSystemComponent* AChaGCBP_RapidBoost_C::SpawnEmitter(class UParticleSystem* EmitterTemplate, class USceneComponent* Mesh, const class FName& BoneName, EPSCPoolMethod PoolingMethod, bool bAbsoluteRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.SpawnEmitter"));
		
		AChaGCBP_RapidBoost_C_SpawnEmitter_Params params {};
		params.EmitterTemplate = EmitterTemplate;
		params.Mesh = Mesh;
		params.BoneName = BoneName;
		params.PoolingMethod = PoolingMethod;
		params.bAbsoluteRotation = bAbsoluteRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnRemove
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	bool AChaGCBP_RapidBoost_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnRemove"));
		
		AChaGCBP_RapidBoost_C_OnRemove_Params params {};
		params.MyTarget = MyTarget;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.K2_HandleGameplayCue
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      MyTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGameplayCueEvent                                  EventType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayCueParameters                      Parameters                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void AChaGCBP_RapidBoost_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.K2_HandleGameplayCue"));
		
		AChaGCBP_RapidBoost_C_K2_HandleGameplayCue_Params params {};
		params.MyTarget = MyTarget;
		params.EventType = EventType;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.ExecuteUbergraph_ChaGCBP_RapidBoost
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChaGCBP_RapidBoost_C::ExecuteUbergraph_ChaGCBP_RapidBoost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.ExecuteUbergraph_ChaGCBP_RapidBoost"));
		
		AChaGCBP_RapidBoost_C_ExecuteUbergraph_ChaGCBP_RapidBoost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChaGCBP_RapidBoost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChaGCBP_RapidBoost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C"));
		return ptr;
	}

}



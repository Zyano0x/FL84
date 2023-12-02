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
	 * 		Name   -> Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.GetModuleName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString ABP_CustomPoisonCircle_Template_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.GetModuleName"));
		
		ABP_CustomPoisonCircle_Template_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.SetMeshVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomPoisonCircle_Template_C::SetMeshVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.SetMeshVisibility"));
		
		ABP_CustomPoisonCircle_Template_C_SetMeshVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.DataTrace
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            inInt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InFloat                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomPoisonCircle_Template_C::DataTrace(int32_t inInt, const struct FVector& Vector, float InFloat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.DataTrace"));
		
		ABP_CustomPoisonCircle_Template_C_DataTrace_Params params {};
		params.inInt = inInt;
		params.Vector = Vector;
		params.InFloat = InFloat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.OnLoaded_2CF9BD9E4D7B992D773DE7AE62F29135
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomPoisonCircle_Template_C::OnLoaded_2CF9BD9E4D7B992D773DE7AE62F29135(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.OnLoaded_2CF9BD9E4D7B992D773DE7AE62F29135"));
		
		ABP_CustomPoisonCircle_Template_C_OnLoaded_2CF9BD9E4D7B992D773DE7AE62F29135_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_CustomPoisonCircle_Template_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.ReceiveBeginPlay"));
		
		ABP_CustomPoisonCircle_Template_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomPoisonCircle_Template_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.ReceiveTick"));
		
		ABP_CustomPoisonCircle_Template_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.[S]SetNextArea
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Center                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WaitTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DamageLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomPoisonCircle_Template_C::SSetNextArea(const struct FVector& Center, float Radius, float WaitTime, float MoveTime, int32_t DamageLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.[S]SetNextArea"));
		
		ABP_CustomPoisonCircle_Template_C_SSetNextArea_Params params {};
		params.Center = Center;
		params.Radius = Radius;
		params.WaitTime = WaitTime;
		params.MoveTime = MoveTime;
		params.DamageLevel = DamageLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.ShowEffectInside
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInside                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CustomPoisonCircle_Template_C::ShowEffectInside(bool bInside)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.ShowEffectInside"));
		
		ABP_CustomPoisonCircle_Template_C_ShowEffectInside_Params params {};
		params.bInside = bInside;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.Evnet_ResetMaterial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomPoisonCircle_Template_C::Evnet_ResetMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.Evnet_ResetMaterial"));
		
		ABP_CustomPoisonCircle_Template_C_Evnet_ResetMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.ExecuteUbergraph_BP_CustomPoisonCircle_Template
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomPoisonCircle_Template_C::ExecuteUbergraph_BP_CustomPoisonCircle_Template(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C.ExecuteUbergraph_BP_CustomPoisonCircle_Template"));
		
		ABP_CustomPoisonCircle_Template_C_ExecuteUbergraph_BP_CustomPoisonCircle_Template_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CustomPoisonCircle_Template_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CustomPoisonCircle_Template_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C"));
		return ptr;
	}

}



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
	 * 		Name   -> Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Interpolation Start Distance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SetRenderParametersBasedOnDifferentStates_C::InterpolationStartDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Interpolation Start Distance"));
		
		ABP_SetRenderParametersBasedOnDifferentStates_C_InterpolationStartDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Interpolation Fog Height Falloff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SetRenderParametersBasedOnDifferentStates_C::InterpolationFogHeightFalloff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Interpolation Fog Height Falloff"));
		
		ABP_SetRenderParametersBasedOnDifferentStates_C_InterpolationFogHeightFalloff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Interpolation Fog Density
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SetRenderParametersBasedOnDifferentStates_C::InterpolationFogDensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Interpolation Fog Density"));
		
		ABP_SetRenderParametersBasedOnDifferentStates_C_InterpolationFogDensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Interpolation Fog Color
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                FogColorafterInterpolation                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SetRenderParametersBasedOnDifferentStates_C::InterpolationFogColor(struct FLinearColor* FogColorafterInterpolation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Interpolation Fog Color"));
		
		ABP_SetRenderParametersBasedOnDifferentStates_C_InterpolationFogColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FogColorafterInterpolation != nullptr)
			*FogColorafterInterpolation = params.FogColorafterInterpolation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.HeightFog
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterSkydivingState                           CharacterSkydivingState                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SetRenderParametersBasedOnDifferentStates_C::HeightFog(ECharacterSkydivingState CharacterSkydivingState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.HeightFog"));
		
		ABP_SetRenderParametersBasedOnDifferentStates_C_HeightFog_Params params {};
		params.CharacterSkydivingState = CharacterSkydivingState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.MaterialShadowDistance_Change
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterSkydivingState                           CharacterSkydivingState                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SetRenderParametersBasedOnDifferentStates_C::MaterialShadowDistance_Change(ECharacterSkydivingState CharacterSkydivingState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.MaterialShadowDistance_Change"));
		
		ABP_SetRenderParametersBasedOnDifferentStates_C_MaterialShadowDistance_Change_Params params {};
		params.CharacterSkydivingState = CharacterSkydivingState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.TreeCullDistance_Change
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECharacterSkydivingState                           CharacterSkydivingState                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SetRenderParametersBasedOnDifferentStates_C::TreeCullDistance_Change(ECharacterSkydivingState CharacterSkydivingState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.TreeCullDistance_Change"));
		
		ABP_SetRenderParametersBasedOnDifferentStates_C_TreeCullDistance_Change_Params params {};
		params.CharacterSkydivingState = CharacterSkydivingState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.SetRenderParamerts
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarCharacter*                             SolarCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SetRenderParametersBasedOnDifferentStates_C::SetRenderParamerts(class ASolarCharacter* SolarCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.SetRenderParamerts"));
		
		ABP_SetRenderParametersBasedOnDifferentStates_C_SetRenderParamerts_Params params {};
		params.SolarCharacter = SolarCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Set Render Paramerts With Height
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SetRenderParametersBasedOnDifferentStates_C::SetRenderParamertsWithHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Set Render Paramerts With Height"));
		
		ABP_SetRenderParametersBasedOnDifferentStates_C_SetRenderParamertsWithHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_SetRenderParametersBasedOnDifferentStates_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.ReceiveBeginPlay"));
		
		ABP_SetRenderParametersBasedOnDifferentStates_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.ResetToInitialState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarCharacter*                             SolarCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SetRenderParametersBasedOnDifferentStates_C::ResetToInitialState(class ASolarCharacter* SolarCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.ResetToInitialState"));
		
		ABP_SetRenderParametersBasedOnDifferentStates_C_ResetToInitialState_Params params {};
		params.SolarCharacter = SolarCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Reset Set Fog
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SetRenderParametersBasedOnDifferentStates_C::ResetSetFog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Reset Set Fog"));
		
		ABP_SetRenderParametersBasedOnDifferentStates_C_ResetSetFog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Flying set Fog
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SetRenderParametersBasedOnDifferentStates_C::FlyingsetFog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Flying set Fog"));
		
		ABP_SetRenderParametersBasedOnDifferentStates_C_FlyingsetFog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.ExecuteUbergraph_BP_SetRenderParametersBasedOnDifferentStates
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SetRenderParametersBasedOnDifferentStates_C::ExecuteUbergraph_BP_SetRenderParametersBasedOnDifferentStates(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.ExecuteUbergraph_BP_SetRenderParametersBasedOnDifferentStates"));
		
		ABP_SetRenderParametersBasedOnDifferentStates_C_ExecuteUbergraph_BP_SetRenderParametersBasedOnDifferentStates_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SetRenderParametersBasedOnDifferentStates_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SetRenderParametersBasedOnDifferentStates_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C"));
		return ptr;
	}

}



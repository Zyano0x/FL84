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
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetSolarCameraComponent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class USolarCameraComponent* ABP_SolarCharacterPlayer_C::GetSolarCameraComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetSolarCameraComponent"));
		
		ABP_SolarCharacterPlayer_C_GetSolarCameraComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetSolarSpringArmComponent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class USolarSpringArmComponent* ABP_SolarCharacterPlayer_C::GetSolarSpringArmComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetSolarSpringArmComponent"));
		
		ABP_SolarCharacterPlayer_C_GetSolarSpringArmComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.RefreshRenderConsoleVarForSkydive
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 */
	void ABP_SolarCharacterPlayer_C::RefreshRenderConsoleVarForSkydive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.RefreshRenderConsoleVarForSkydive"));
		
		ABP_SolarCharacterPlayer_C_RefreshRenderConsoleVarForSkydive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.Is Observation Target
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_SolarCharacterPlayer_C::IsObservationTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.Is Observation Target"));
		
		ABP_SolarCharacterPlayer_C_IsObservationTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.FixSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ABP_SolarCharacterPlayer_C::FixSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.FixSpeed"));
		
		ABP_SolarCharacterPlayer_C_FixSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.FigureSpeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SolarCharacterPlayer_C::FigureSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.FigureSpeed"));
		
		ABP_SolarCharacterPlayer_C_FigureSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetFixedY
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_SolarCharacterPlayer_C::GetFixedY(float NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetFixedY"));
		
		ABP_SolarCharacterPlayer_C_GetFixedY_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetFixedX
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_SolarCharacterPlayer_C::GetFixedX(float NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetFixedX"));
		
		ABP_SolarCharacterPlayer_C_GetFixedX_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.SetCameraInput_3
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SolarCharacterPlayer_C::SetCameraInput_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.SetCameraInput_3"));
		
		ABP_SolarCharacterPlayer_C_SetCameraInput_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.SetCameraInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SolarCharacterPlayer_C::SetCameraInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.SetCameraInput"));
		
		ABP_SolarCharacterPlayer_C_SetCameraInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetFixedLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector ABP_SolarCharacterPlayer_C::GetFixedLocation(const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetFixedLocation"));
		
		ABP_SolarCharacterPlayer_C_GetFixedLocation_Params params {};
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetFixedSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_SolarCharacterPlayer_C::GetFixedSpeed(float NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetFixedSpeed"));
		
		ABP_SolarCharacterPlayer_C_GetFixedSpeed_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.DecelerationEffectUpdate
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Altitude                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UParticleSystemComponent*>            Effects                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::DecelerationEffectUpdate(float* Altitude, TArray<class UParticleSystemComponent*>* Effects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.DecelerationEffectUpdate"));
		
		ABP_SolarCharacterPlayer_C_DecelerationEffectUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Altitude != nullptr)
			*Altitude = params.Altitude;
		if (Effects != nullptr)
			*Effects = params.Effects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.UndecelerationEffectUpdate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Altitude                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UParticleSystemComponent*>            Effects                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::UndecelerationEffectUpdate(float* Altitude, TArray<class UParticleSystemComponent*>* Effects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.UndecelerationEffectUpdate"));
		
		ABP_SolarCharacterPlayer_C_UndecelerationEffectUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Altitude != nullptr)
			*Altitude = params.Altitude;
		if (Effects != nullptr)
			*Effects = params.Effects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_4"));
		
		ABP_SolarCharacterPlayer_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.InpActEvt_Home_K2Node_InputKeyEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::InpActEvt_Home_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.InpActEvt_Home_K2Node_InputKeyEvent_3"));
		
		ABP_SolarCharacterPlayer_C_InpActEvt_Home_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.InpActEvt_End_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::InpActEvt_End_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.InpActEvt_End_K2Node_InputKeyEvent_2"));
		
		ABP_SolarCharacterPlayer_C_InpActEvt_End_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.InpActEvt_Delete_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::InpActEvt_Delete_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.InpActEvt_Delete_K2Node_InputKeyEvent_1"));
		
		ABP_SolarCharacterPlayer_C_InpActEvt_Delete_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceiveUpdateSkydiveLandingEffects
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DistanceToGround                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::ReceiveUpdateSkydiveLandingEffects(float DistanceToGround)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceiveUpdateSkydiveLandingEffects"));
		
		ABP_SolarCharacterPlayer_C_ReceiveUpdateSkydiveLandingEffects_Params params {};
		params.DistanceToGround = DistanceToGround;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceivePlaySkydiveLandingEndEffects
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsInWater                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SolarCharacterPlayer_C::ReceivePlaySkydiveLandingEndEffects(bool bIsInWater)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceivePlaySkydiveLandingEndEffects"));
		
		ABP_SolarCharacterPlayer_C_ReceivePlaySkydiveLandingEndEffects_Params params {};
		params.bIsInWater = bIsInWater;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.K2_OnMovementModeChanged"));
		
		ABP_SolarCharacterPlayer_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceiveUpdateSkydiveFlyingEffects
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FallingRate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::ReceiveUpdateSkydiveFlyingEffects(float FallingRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceiveUpdateSkydiveFlyingEffects"));
		
		ABP_SolarCharacterPlayer_C_ReceiveUpdateSkydiveFlyingEffects_Params params {};
		params.FallingRate = FallingRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceiveEndPlay"));
		
		ABP_SolarCharacterPlayer_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_SolarCharacterPlayer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceiveBeginPlay"));
		
		ABP_SolarCharacterPlayer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.SetOpenScopeDuration
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InDuration                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInOpenScope                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SolarCharacterPlayer_C::SetOpenScopeDuration(float InDuration, bool bInOpenScope)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.SetOpenScopeDuration"));
		
		ABP_SolarCharacterPlayer_C_SetOpenScopeDuration_Params params {};
		params.InDuration = InDuration;
		params.bInOpenScope = bInOpenScope;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.Event_UseReviveItem
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASCMPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::Event_UseReviveItem(class ASCMPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.Event_UseReviveItem"));
		
		ABP_SolarCharacterPlayer_C_Event_UseReviveItem_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.OnSkydiveStageChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		ESkydiveStage                                      LastStage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESkydiveStage                                      CurrentStage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::OnSkydiveStageChanged(ESkydiveStage LastStage, ESkydiveStage CurrentStage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.OnSkydiveStageChanged"));
		
		ABP_SolarCharacterPlayer_C_OnSkydiveStageChanged_Params params {};
		params.LastStage = LastStage;
		params.CurrentStage = CurrentStage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.OnCharacterEjectStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_CharacterEjectState                              State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::OnCharacterEjectStateChanged(E_CharacterEjectState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.OnCharacterEjectStateChanged"));
		
		ABP_SolarCharacterPlayer_C_OnCharacterEjectStateChanged_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ExecuteUbergraph_BP_SolarCharacterPlayer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::ExecuteUbergraph_BP_SolarCharacterPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ExecuteUbergraph_BP_SolarCharacterPlayer"));
		
		ABP_SolarCharacterPlayer_C_ExecuteUbergraph_BP_SolarCharacterPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.OnEjectingStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_CharacterEjectState                              State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASolarCharacter*                             TargetCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SolarCharacterPlayer_C::OnEjectingStateChanged__DelegateSignature(E_CharacterEjectState State, class ASolarCharacter* TargetCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.OnEjectingStateChanged__DelegateSignature"));
		
		ABP_SolarCharacterPlayer_C_OnEjectingStateChanged__DelegateSignature_Params params {};
		params.State = State;
		params.TargetCharacter = TargetCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SolarCharacterPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SolarCharacterPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C"));
		return ptr;
	}

}



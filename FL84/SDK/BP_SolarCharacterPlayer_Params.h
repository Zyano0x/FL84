#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetSolarCameraComponent
	 */
	struct ABP_SolarCharacterPlayer_C_GetSolarCameraComponent_Params
	{
	public:
		class USolarCameraComponent*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetSolarSpringArmComponent
	 */
	struct ABP_SolarCharacterPlayer_C_GetSolarSpringArmComponent_Params
	{
	public:
		class USolarSpringArmComponent*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.RefreshRenderConsoleVarForSkydive
	 */
	struct ABP_SolarCharacterPlayer_C_RefreshRenderConsoleVarForSkydive_Params
	{	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.Is Observation Target
	 */
	struct ABP_SolarCharacterPlayer_C_IsObservationTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.FixSpeed
	 */
	struct ABP_SolarCharacterPlayer_C_FixSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.FigureSpeed
	 */
	struct ABP_SolarCharacterPlayer_C_FigureSpeed_Params
	{	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetFixedY
	 */
	struct ABP_SolarCharacterPlayer_C_GetFixedY_Params
	{
	public:
		float                                                      NewParam;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetFixedX
	 */
	struct ABP_SolarCharacterPlayer_C_GetFixedX_Params
	{
	public:
		float                                                      NewParam;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.SetCameraInput_3
	 */
	struct ABP_SolarCharacterPlayer_C_SetCameraInput_3_Params
	{	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.SetCameraInput
	 */
	struct ABP_SolarCharacterPlayer_C_SetCameraInput_Params
	{	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetFixedLocation
	 */
	struct ABP_SolarCharacterPlayer_C_GetFixedLocation_Params
	{
	public:
		struct FVector                                             InLocation;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.GetFixedSpeed
	 */
	struct ABP_SolarCharacterPlayer_C_GetFixedSpeed_Params
	{
	public:
		float                                                      NewParam;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.DecelerationEffectUpdate
	 */
	struct ABP_SolarCharacterPlayer_C_DecelerationEffectUpdate_Params
	{
	public:
		float                                                      Altitude;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DVD1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UParticleSystemComponent*>                    Effects;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.UndecelerationEffectUpdate
	 */
	struct ABP_SolarCharacterPlayer_C_UndecelerationEffectUpdate_Params
	{
	public:
		float                                                      Altitude;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EDV4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UParticleSystemComponent*>                    Effects;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_4
	 */
	struct ABP_SolarCharacterPlayer_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.InpActEvt_Home_K2Node_InputKeyEvent_3
	 */
	struct ABP_SolarCharacterPlayer_C_InpActEvt_Home_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.InpActEvt_End_K2Node_InputKeyEvent_2
	 */
	struct ABP_SolarCharacterPlayer_C_InpActEvt_End_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.InpActEvt_Delete_K2Node_InputKeyEvent_1
	 */
	struct ABP_SolarCharacterPlayer_C_InpActEvt_Delete_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceiveUpdateSkydiveLandingEffects
	 */
	struct ABP_SolarCharacterPlayer_C_ReceiveUpdateSkydiveLandingEffects_Params
	{
	public:
		float                                                      DistanceToGround;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceivePlaySkydiveLandingEndEffects
	 */
	struct ABP_SolarCharacterPlayer_C_ReceivePlaySkydiveLandingEndEffects_Params
	{
	public:
		bool                                                       bIsInWater;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.K2_OnMovementModeChanged
	 */
	struct ABP_SolarCharacterPlayer_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceiveUpdateSkydiveFlyingEffects
	 */
	struct ABP_SolarCharacterPlayer_C_ReceiveUpdateSkydiveFlyingEffects_Params
	{
	public:
		float                                                      FallingRate;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceiveEndPlay
	 */
	struct ABP_SolarCharacterPlayer_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ReceiveBeginPlay
	 */
	struct ABP_SolarCharacterPlayer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.SetOpenScopeDuration
	 */
	struct ABP_SolarCharacterPlayer_C_SetOpenScopeDuration_Params
	{
	public:
		float                                                      InDuration;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInOpenScope;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.Event_UseReviveItem
	 */
	struct ABP_SolarCharacterPlayer_C_Event_UseReviveItem_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.OnSkydiveStageChanged
	 */
	struct ABP_SolarCharacterPlayer_C_OnSkydiveStageChanged_Params
	{
	public:
		ESkydiveStage                                              LastStage;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESkydiveStage                                              CurrentStage;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.OnCharacterEjectStateChanged
	 */
	struct ABP_SolarCharacterPlayer_C_OnCharacterEjectStateChanged_Params
	{
	public:
		E_CharacterEjectState                                      State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.ExecuteUbergraph_BP_SolarCharacterPlayer
	 */
	struct ABP_SolarCharacterPlayer_C_ExecuteUbergraph_BP_SolarCharacterPlayer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarCharacterPlayer.BP_SolarCharacterPlayer_C.OnEjectingStateChanged__DelegateSignature
	 */
	struct ABP_SolarCharacterPlayer_C_OnEjectingStateChanged__DelegateSignature_Params
	{
	public:
		E_CharacterEjectState                                      State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RBZ5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASolarCharacter*                                     TargetCharacter;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

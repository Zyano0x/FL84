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
	 * Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Interpolation Start Distance
	 */
	struct ABP_SetRenderParametersBasedOnDifferentStates_C_InterpolationStartDistance_Params
	{	};

	/**
	 * Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Interpolation Fog Height Falloff
	 */
	struct ABP_SetRenderParametersBasedOnDifferentStates_C_InterpolationFogHeightFalloff_Params
	{	};

	/**
	 * Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Interpolation Fog Density
	 */
	struct ABP_SetRenderParametersBasedOnDifferentStates_C_InterpolationFogDensity_Params
	{	};

	/**
	 * Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Interpolation Fog Color
	 */
	struct ABP_SetRenderParametersBasedOnDifferentStates_C_InterpolationFogColor_Params
	{
	public:
		struct FLinearColor                                        FogColorafterInterpolation;                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.HeightFog
	 */
	struct ABP_SetRenderParametersBasedOnDifferentStates_C_HeightFog_Params
	{
	public:
		ECharacterSkydivingState                                   CharacterSkydivingState;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.MaterialShadowDistance_Change
	 */
	struct ABP_SetRenderParametersBasedOnDifferentStates_C_MaterialShadowDistance_Change_Params
	{
	public:
		ECharacterSkydivingState                                   CharacterSkydivingState;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_37ZR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.TreeCullDistance_Change
	 */
	struct ABP_SetRenderParametersBasedOnDifferentStates_C_TreeCullDistance_Change_Params
	{
	public:
		ECharacterSkydivingState                                   CharacterSkydivingState;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.SetRenderParamerts
	 */
	struct ABP_SetRenderParametersBasedOnDifferentStates_C_SetRenderParamerts_Params
	{
	public:
		class ASolarCharacter*                                     SolarCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Set Render Paramerts With Height
	 */
	struct ABP_SetRenderParametersBasedOnDifferentStates_C_SetRenderParamertsWithHeight_Params
	{	};

	/**
	 * Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.ReceiveBeginPlay
	 */
	struct ABP_SetRenderParametersBasedOnDifferentStates_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.ResetToInitialState
	 */
	struct ABP_SetRenderParametersBasedOnDifferentStates_C_ResetToInitialState_Params
	{
	public:
		class ASolarCharacter*                                     SolarCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Reset Set Fog
	 */
	struct ABP_SetRenderParametersBasedOnDifferentStates_C_ResetSetFog_Params
	{	};

	/**
	 * Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.Flying set Fog
	 */
	struct ABP_SetRenderParametersBasedOnDifferentStates_C_FlyingsetFog_Params
	{	};

	/**
	 * Function BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C.ExecuteUbergraph_BP_SetRenderParametersBasedOnDifferentStates
	 */
	struct ABP_SetRenderParametersBasedOnDifferentStates_C_ExecuteUbergraph_BP_SetRenderParametersBasedOnDifferentStates_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

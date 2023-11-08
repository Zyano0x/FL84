#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.OnWallRun
	 */
	struct ABP_PBagsTrail_Common_C_OnWallRun_Params
	{	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXEnd
	 */
	struct ABP_PBagsTrail_Common_C_BackpackSFXEnd_Params
	{	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXLaunch
	 */
	struct ABP_PBagsTrail_Common_C_BackpackSFXLaunch_Params
	{
	public:
		bool                                                       GroundDetected;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RGFN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             GroundLocation;                                          // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             GroundNormal;                                            // 0x0010(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXBegin
	 */
	struct ABP_PBagsTrail_Common_C_BackpackSFXBegin_Params
	{
	public:
		EFXJetType                                                 InJetType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       GroundDetected;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.UpdateTrailParticle
	 */
	struct ABP_PBagsTrail_Common_C_UpdateTrailParticle_Params
	{
	public:
		struct FBackpackTrailAssemblingParams                      SoftObjectRef;                                           // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.GetTrailEffectComponent
	 */
	struct ABP_PBagsTrail_Common_C_GetTrailEffectComponent_Params
	{
	public:
		class UParticleSystemComponent*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.FX_FinishDeactive
	 */
	struct ABP_PBagsTrail_Common_C_FX_FinishDeactive_Params
	{	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.SkyDivingLanding
	 */
	struct ABP_PBagsTrail_Common_C_SkyDivingLanding_Params
	{	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.DropSlowDown
	 */
	struct ABP_PBagsTrail_Common_C_DropSlowDown_Params
	{	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.Normal Jet Fly
	 */
	struct ABP_PBagsTrail_Common_C_NormalJetFly_Params
	{	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.FX_InitializeDeactive
	 */
	struct ABP_PBagsTrail_Common_C_FX_InitializeDeactive_Params
	{	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TrailFade__FinishedFunc
	 */
	struct ABP_PBagsTrail_Common_C_TrailFade__FinishedFunc_Params
	{	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TrailFade__UpdateFunc
	 */
	struct ABP_PBagsTrail_Common_C_TrailFade__UpdateFunc_Params
	{	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.OnBackpackTrailAssembling
	 */
	struct ABP_PBagsTrail_Common_C_OnBackpackTrailAssembling_Params
	{
	public:
		struct FBackpackTrailAssemblingParams                      Params;                                                  // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EBackpackPropellingMode                                    PropellingMode;                                          // 0x00A8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TryFadeOutTrail
	 */
	struct ABP_PBagsTrail_Common_C_TryFadeOutTrail_Params
	{	};

	/**
	 * Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.ExecuteUbergraph_BP_PBagsTrail_Common
	 */
	struct ABP_PBagsTrail_Common_C_ExecuteUbergraph_BP_PBagsTrail_Common_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NE96[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

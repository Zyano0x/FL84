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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_PBagsTrail_Common.BP_PBagsTrail_Common_C
	 * Size -> 0x0040 (FullSize[0x02C0] - InheritedSize[0x0280])
	 */
	class ABP_PBagsTrail_Common_C : public ASolarBackpackSFX
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            FX_PowerBag_WallRunLoop;                                 // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            FX_PowerBag_Trail;                                       // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            FX_PowerBag_DropSlowDown;                                // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            FX_PowerBag_SkyDivingLanding;                            // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     VFX;                                                     // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TrailFade_Size_581709C845BD673DB0841C82710F99F1;         // 0x02B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TrailFade__Direction_581709C845BD673DB0841C82710F99F1;   // 0x02B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VRF5[0x3];                                   // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TrailFade;                                               // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnWallRun();
		void BackpackSFXEnd();
		void BackpackSFXLaunch(bool GroundDetected, const struct FVector& GroundLocation, const struct FVector& GroundNormal);
		void BackpackSFXBegin(EFXJetType InJetType, bool GroundDetected);
		void UpdateTrailParticle(const struct FBackpackTrailAssemblingParams& SoftObjectRef);
		class UParticleSystemComponent* GetTrailEffectComponent();
		void FX_FinishDeactive();
		void SkyDivingLanding();
		void DropSlowDown();
		void NormalJetFly();
		void FX_InitializeDeactive();
		void TrailFade__FinishedFunc();
		void TrailFade__UpdateFunc();
		void OnBackpackTrailAssembling(const struct FBackpackTrailAssemblingParams& Params, EBackpackPropellingMode PropellingMode);
		void TryFadeOutTrail();
		void ExecuteUbergraph_BP_PBagsTrail_Common(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2C0 - 0x280)
// BlueprintGeneratedClass BP_PBagsTrail_Common.BP_PBagsTrail_Common_C
class ABP_PBagsTrail_Common_C : public ASolarBackpackSFX
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              FX_PowerBag_WallRunLoop;                           // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FX_PowerBag_Trail;                                 // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FX_PowerBag_DropSlowDown;                          // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FX_PowerBag_SkyDivingLanding;                      // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       VFX;                                               // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TrailFade_Size_581709C845BD673DB0841C82710F99F1;   // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TrailFade__Direction_581709C845BD673DB0841C82710F99F1; // 0x2B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TrailFade;                                         // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PBagsTrail_Common_C* GetDefaultObj();

	void OnWallRun();
	void BackpackSFXEnd();
	void BackpackSFXLaunch(bool GroundDetected, struct FVector& GroundLocation, struct FVector& GroundNormal, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	void BackpackSFXBegin(enum class EFXJetType InJetType, bool GroundDetected, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateTrailParticle(const struct FBackpackTrailAssemblingParams& SoftObjectRef, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	class UParticleSystemComponent* GetTrailEffectComponent();
	void FX_FinishDeactive();
	void SkyDivingLanding();
	void DropSlowDown();
	void Normal_Jet_Fly();
	void FX_InitializeDeactive();
	void TrailFade__FinishedFunc();
	void TrailFade__UpdateFunc();
	void OnBackpackTrailAssembling(struct FBackpackTrailAssemblingParams& Params, enum class EBackpackPropellingMode PropellingMode);
	void TryFadeOutTrail();
	void ExecuteUbergraph_BP_PBagsTrail_Common(int32 EntryPoint, const struct FBackpackTrailAssemblingParams& K2Node_Event_Params, enum class EBackpackPropellingMode K2Node_Event_PropellingMode, bool CallFunc_IsActive_ReturnValue);
};

}



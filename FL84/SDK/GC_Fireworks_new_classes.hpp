#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4A (0x2E2 - 0x298)
// BlueprintGeneratedClass GC_Fireworks_new.GC_Fireworks_new_C
class AGC_Fireworks_new_C : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       AudioComponent;                                    // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       FireworksMuzzleVFX;                                // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       FireworksExplosionVFX;                             // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                FireworksMuzzleAudio;                              // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                FireworksExplosionAudio;                           // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CanSetCacheLocationLeft;                           // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanSetCacheLocationRight;                          // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGC_Fireworks_new_C* GetDefaultObj();

	void PlayFireworksExplosionAudioRight(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity, int32 CallFunc_PostEventAtLocation_ReturnValue);
	void PlayFireworksExplosionAudioLeft(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity, int32 CallFunc_PostEventAtLocation_ReturnValue);
	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* NewLocalVar_0, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ASolarVehiclePawn* K2Node_DynamicCast_AsSolar_Vehicle_Pawn, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_InverseTransformRotation_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_TransformRotation_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, const struct FVector& CallFunc_TransformLocation_ReturnValue_1, const struct FRotator& CallFunc_TransformRotation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_StaticPostAkEventByName_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GC_Fireworks_new(int32 EntryPoint);
};

}



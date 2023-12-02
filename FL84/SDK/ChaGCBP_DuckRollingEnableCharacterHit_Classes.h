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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C
	 * Size -> 0x003C (FullSize[0x02EC] - InheritedSize[0x02B0])
	 */
	class AChaGCBP_DuckRollingEnableCharacterHit_C : public AChaGC_CharacterActorCueBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UB_DuckRollingProxyComponent_C*                      ProxyCompoent;                                           // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ParticleAsset;                                           // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UB_DuckRollingMeshComponent_C*                       MeshComponent;                                           // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleComponent;                                       // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            RotationOffset;                                          // 0x02E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_ChaGCBP_DuckRollingEnableCharacterHit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass BP_FX_Defenders.BP_FX_Defenders_C
	 * Size -> 0x0020 (FullSize[0x0248] - InheritedSize[0x0228])
	 */
	class ABP_FX_Defenders_C : public ASolarTrailEffect
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            FX_DropPathSmallDefenderFinal_Trail;                     // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPlayer;                                                // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3YO3[0x3];                                   // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FXMulti;                                                 // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnFinished();
		struct FTransform GetTrackingTransform(class ASolarCharacter* Character);
		void GetFXDistance(float* Distance);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void AttachToCharacter(class ASolarCharacter* Character);
		void ExecuteUbergraph_BP_FX_Defenders(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass GC_Freeze.GC_Freeze_C
	 * Size -> 0x00D0 (FullSize[0x0430] - InheritedSize[0x0360])
	 */
	class AGC_Freeze_C : public ASolarSkillGC_Freeze
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FMaterialChangeHandle                               MaterialChangeHandle;                                    // 0x0370(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<int32_t, class FString>                               SoundPlayMap;                                            // 0x0378(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<int32_t, class FString>                               SoundStopMap;                                            // 0x03C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UParticleSystemComponent*                            ParticleHandle;                                          // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              PlayingAudioEventName;                                   // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void RemoveFunc(class AActor* Actor);
		void ActiveFunc(class AActor* TartgetActor);
		void IsTeammate(class ASolarCharacter* Actor1, class AActor* Actor2, bool* IsTeammate);
		void PlaySoundEvent(class AActor* TargetActor, bool bPlay);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_GC_Freeze(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

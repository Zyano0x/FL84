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
	 * BlueprintGeneratedClass BP_Ability_SmokeGrenade.BP_Ability_SmokeGrenade_C
	 * Size -> 0x0050 (FullSize[0x0278] - InheritedSize[0x0228])
	 */
	class ABP_Ability_SmokeGrenade_C : public AWeaponHitAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            FX_SmokeShell;                                           // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        AkAudioComponent;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USolarGameplaySmokeComponent*                        Smoke;                                                   // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SmokeFadeOut_Alpha_3E9C3E664BF7E30B8AC9DD9276A8ACCE;     // 0x0250(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         SmokeFadeOut__Direction_3E9C3E664BF7E30B8AC9DD9276A8ACCE; // 0x0254(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CVRS[0x3];                                   // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SmokeFadeOut;                                            // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SmokeFadeIn_Alpha_3B8839634FFDF220C79937AFE6C47DC9;      // 0x0260(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         SmokeFadeIn__Direction_3B8839634FFDF220C79937AFE6C47DC9; // 0x0264(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QEFM[0x3];                                   // 0x0265(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  SmokeFadeIn;                                             // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TranslucentSortPriority;                                 // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SmokeVFXLifeTime;                                        // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SmokeFadeIn__FinishedFunc();
		void SmokeFadeIn__UpdateFunc();
		void SmokeFadeOut__FinishedFunc();
		void SmokeFadeOut__UpdateFunc();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_Ability_SmokeGrenade(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

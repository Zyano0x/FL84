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
	 * BlueprintGeneratedClass BP_DBox_Default.BP_DBox_Default_C
	 * Size -> 0x0044 (FullSize[0x07AC] - InheritedSize[0x0768])
	 */
	class ABP_DBox_Default_C : public ADeathTreasureBox
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0768(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     FX_Position;                                             // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       ResurrectionComplete;                                    // 0x0778(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JRUE[0x7];                                   // 0x0779(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                QualityMap;                                              // 0x0780(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		unsigned char                                              DeadBox_Particle[0x10];                                  // 0x0790(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class UParticleSystemComponent*                            QualityEffect;                                           // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NewBoxParticle;                                          // 0x07A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CanBuyResurrect(class ASolarCharacter* InReqCharacter);
		bool IsSameTeam(unsigned char CharacterTeamID);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_DBox_Default(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

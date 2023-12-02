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
	 * BlueprintGeneratedClass BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C
	 * Size -> 0x0020 (FullSize[0x02A0] - InheritedSize[0x0280])
	 */
	class ABP_PBagsOffgas_Common_C : public ASolarBackpackSFX
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            FX_BoostClimb_Start;                                     // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            FX_PowerBag_MainJet;                                     // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     VFX;                                                     // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BackpackSFXBegin(EFXJetType InJetType, bool GroundDetected);
		void BackpackSFXEnd();
		void OnBackpackTrailAssembling(const struct FBackpackTrailAssemblingParams& Params, EBackpackPropellingMode PropellingMode);
		void ExecuteUbergraph_BP_PBagsOffgas_Common(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

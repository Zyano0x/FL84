#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * BlueprintGeneratedClass Ability_VH_Hover_WL04_StickyBomb_Explode.Ability_VH_Hover_WL04_StickyBomb_Explode_C
	 * Size -> 0x0018 (FullSize[0x0320] - InheritedSize[0x0308])
	 */
	class AAbility_VH_Hover_WL04_StickyBomb_Explode_C : public ASolarAbility
	{
	public:
		unsigned char                                              UnknownData_UZAF[0x8];                                   // 0x0308(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            FX_Hover_WL04_Hit;                                       // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb_Explode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

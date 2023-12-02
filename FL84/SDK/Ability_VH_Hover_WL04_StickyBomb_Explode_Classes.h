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
	 * BlueprintGeneratedClass Ability_VH_Hover_WL04_StickyBomb_Explode.Ability_VH_Hover_WL04_StickyBomb_Explode_C
	 * Size -> 0x0010 (FullSize[0x0318] - InheritedSize[0x0308])
	 */
	class AAbility_VH_Hover_WL04_StickyBomb_Explode_C : public ASolarAbility
	{
	public:
		unsigned char                                              UnknownData_5GB8[0x8];                                   // 0x0308(0x0008) Fix Super Size
		class UParticleSystemComponent*                            FX_Hover_WL04_Hit;                                       // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

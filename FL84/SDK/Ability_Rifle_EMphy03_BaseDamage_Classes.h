#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * BlueprintGeneratedClass Ability_Rifle_EMphy03_BaseDamage.Ability_Rifle_EMphy03_BaseDamage_C
	 * Size -> 0x0010 (FullSize[0x0318] - InheritedSize[0x0308])
	 */
	class AAbility_Rifle_EMphy03_BaseDamage_C : public ASolarAbility
	{
	public:
		unsigned char                                              UnknownData_HF9A[0x8];                                   // 0x0308(0x0008) Fix Super Size
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

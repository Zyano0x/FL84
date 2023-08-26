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
	 * BlueprintGeneratedClass Ability_Rifle_Psm04_BaseDamage.Ability_Rifle_Psm04_BaseDamage_C
	 * Size -> 0x0008 (FullSize[0x0310] - InheritedSize[0x0308])
	 */
	class AAbility_Rifle_Psm04_BaseDamage_C : public ASolarAbility
	{
	public:
		unsigned char                                              UnknownData_HGRF[0x8];                                   // 0x0308(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass GC_Weapon_EMP.GC_Weapon_EMP_C
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UGC_Weapon_EMP_C : public UGameplayCueNotify_Static
	{
	public:
		class UParticleSystem*                                     EMPParticle;                                             // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

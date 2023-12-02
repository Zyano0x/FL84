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
	 * BlueprintGeneratedClass GA_Weapon_EMP_Throw.GA_Weapon_EMP_Throw_C
	 * Size -> 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
	 */
	class UGA_Weapon_EMP_Throw_C : public USolarWeaponGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
		void ExecuteUbergraph_GA_Weapon_EMP_Throw(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass Ability_RPG_BaseDamage.Ability_RPG_BaseDamage_C
	 * Size -> 0x0008 (FullSize[0x03B8] - InheritedSize[0x03B0])
	 */
	class AAbility_RPG_BaseDamage_C : public AWeaponAbilityBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnLoaded_F1E8D1D244089792BF00E29440E0F852(class UObject* Loaded);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Ability_RPG_BaseDamage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

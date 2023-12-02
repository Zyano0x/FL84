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
	 * BlueprintGeneratedClass BP_Character_Framework.BP_Character_Framework_C
	 * Size -> 0x0024 (FullSize[0x23BC] - InheritedSize[0x2398])
	 */
	class ABP_Character_Framework_C : public ABP_SolarCharacterPlayer_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UClass*>                                      DefaultAbilitiesExtra;                                   // 0x23A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FS_AiItem                                           NewVar_1;                                                // 0x23B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetWeaponLevelDamageBonus(float* Result);
		E_CharacterHealthState AGetHealthState();
		bool SSkyDiveFly(const struct FVector& Location, float Height);
		bool SSetSkyDiveState();
		void OnCompleted_84F20D844D539263D5B45F9EDF867241(class ASolarPlayerWeapon* Weapon);
		void OnCompleted_C9B9AA40496B70A95EF897A2092C6753(class ASolarPlayerWeapon* Weapon);
		void OnCompleted_9F8149E84A6F3575574B32ADD8BF2960(class ASolarPlayerWeapon* Weapon);
		void BeginPlayBlueprint();
		void SetWeapon(EWeaponSlotType Slot, int32_t WeapoinId, const struct FWeaponPartsData& Parts);
		void BatchSetItem(TArray<struct FS_AiItem> ItemList);
		void sGiveWeapon(bool bDestroyPrevWeapon, EWeaponSlotType Slot, int32_t ItemID);
		void ExecuteUbergraph_BP_Character_Framework(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

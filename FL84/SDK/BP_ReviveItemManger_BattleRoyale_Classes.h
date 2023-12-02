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
	 * BlueprintGeneratedClass BP_ReviveItemManger_BattleRoyale.BP_ReviveItemManger_BattleRoyale_C
	 * Size -> 0x0028 (FullSize[0x0388] - InheritedSize[0x0360])
	 */
	class ABP_ReviveItemManger_BattleRoyale_C : public ABP_ReviveItemManger_0_C
	{
	public:
		int32_t                                                    PointError;                                              // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      R;                                                       // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      X;                                                       // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Y;                                                       // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LeftUp;                                                  // 0x0370(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RightDown;                                               // 0x037C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetSingleCruiseEndCenter(const struct FVector& DeathBoxLocation, struct FVector* Location);
		void RevivePlayer(class ASolarCharacter* , const struct FTransform& _, bool* _bool_);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

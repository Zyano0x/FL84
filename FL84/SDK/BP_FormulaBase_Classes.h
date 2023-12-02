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
	 * BlueprintGeneratedClass BP_FormulaBase.BP_FormulaBase_C
	 * Size -> 0x0004 (FullSize[0x025C] - InheritedSize[0x0258])
	 */
	class ABP_FormulaBase_C : public ACGFormula
	{
	public:
		float                                                      ExpGainLifeTimeLimit;                                    // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		TMap<int32_t, int32_t> GetCollectionItemRewards(class ASolarPlayerState* InPS);
		int32_t GetFixedLevelExp(int32_t Origin, class ASolarPlayerState* Player);
		void GetStrategyGuideConditions(class ASolarPlayerState* InPS, TArray<int32_t>* OutResult);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass FL_SettlementFormula.FL_SettlementFormula_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_SettlementFormula_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_IntCompareReward(int32_t Source, int32_t Condition, TMap<int32_t, int32_t> ItemCount, float Weight, class UObject* __WorldContext, class FString* Desc, class FString* ItemList);
		void STATIC_GetCommonExtraRewards(int32_t SaveNum, int32_t KillNum, int32_t AssitNum, float DamageValue, class UObject* __WorldContext, TArray<struct FSettlementParam_ExtraRewardInfo>* NewParam);
		void STATIC_CombineRewardItem(TArray<class FString>* RewardList, class UObject* __WorldContext, class FString* RewardString);
		void STATIC_FormatRewardItem(float Weight, int32_t ItemID, int32_t ItemCount, class UObject* __WorldContext, class FString* ItemString);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

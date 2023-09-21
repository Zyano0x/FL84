#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass BP_QuickSummon_Forward.BP_QuickSummon_Forward_C
class UBP_QuickSummon_Forward_C : public USolarQuickSummonProxy
{
public:
	float                                        CheckHeightUp;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CheckHeightDown;                                   // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                CheckDistanceArray;                                // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_QuickSummon_Forward_C* GetDefaultObj();

	bool TryGetSummonHitResult(struct FHitResult* OutHitResult, class AActor* InSummoner, class USolarSummonDetectionConfig* InSummonConfig, const struct FHitResult& CallFunc_CanSummonForward_OutHitResult, bool CallFunc_CanSummonForward_ReturnValue);
};

}



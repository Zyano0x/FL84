#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass BP_QuickSummon_FootDown.BP_QuickSummon_FootDown_C
class UBP_QuickSummon_FootDown_C : public USolarQuickSummonProxy
{
public:
	float                                        UpHeight;                                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DownHeight;                                        // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_QuickSummon_FootDown_C* GetDefaultObj();

	bool TryGetSummonHitResult(struct FHitResult* OutHitResult, class AActor* InSummoner, class USolarSummonDetectionConfig* InSummonConfig, const struct FHitResult& CallFunc_CanSummonFootDown_OutHitResult, bool CallFunc_CanSummonFootDown_ReturnValue);
};

}



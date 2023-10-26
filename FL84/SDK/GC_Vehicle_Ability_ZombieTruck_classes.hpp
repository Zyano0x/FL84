#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass GC_Vehicle_Ability_ZombieTruck.GC_Vehicle_Ability_ZombieTruck_C
class UGC_Vehicle_Ability_ZombieTruck_C : public USolarVehicleGC_ZombieTruck
{
public:

	static class UClass* StaticClass();
	static class UGC_Vehicle_Ability_ZombieTruck_C* GetDefaultObj();

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ABP_SolarVH_Tire_WL05_C* K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnRemove_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class ABP_SolarVH_Tire_WL05_C* K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05, bool K2Node_DynamicCast_bSuccess, bool CallFunc_WhileActive_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
};

}



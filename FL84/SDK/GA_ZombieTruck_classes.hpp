#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x500 - 0x4F8)
// BlueprintGeneratedClass GA_ZombieTruck.GA_ZombieTruck_C
class UGA_ZombieTruck_C : public USolarVehicleGA_ZombieTruck
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_ZombieTruck_C* GetDefaultObj();

	void K2_OnEndAbility(bool bWasCancelled);
	void K2_CommitExecute();
	void ExecuteUbergraph_GA_ZombieTruck(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class ABP_SolarVH_Tire_WL05_C* K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05, bool K2Node_DynamicCast_bSuccess, class ABP_SolarVH_Tire_WL05_C* K2Node_DynamicCast_AsBP_Solar_VH_Tire_WL05_1, bool K2Node_DynamicCast_bSuccess_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_IsDedicatedServer_ReturnValue_1);
};

}



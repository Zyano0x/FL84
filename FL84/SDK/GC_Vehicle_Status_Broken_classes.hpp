#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass GC_Vehicle_Status_Broken.GC_Vehicle_Status_Broken_C
class UGC_Vehicle_Status_Broken_C : public UGameplayCueNotify_Static
{
public:

	static class UClass* StaticClass();
	static class UGC_Vehicle_Status_Broken_C* GetDefaultObj();

	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnActive_ReturnValue, class ASolarVehiclePawn* K2Node_DynamicCast_AsSolar_Vehicle_Pawn, bool K2Node_DynamicCast_bSuccess);
	bool WhileActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_WhileActive_ReturnValue, class ASolarVehiclePawn* K2Node_DynamicCast_AsSolar_Vehicle_Pawn, bool K2Node_DynamicCast_bSuccess);
};

}



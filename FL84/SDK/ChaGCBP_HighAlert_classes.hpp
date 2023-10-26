#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x320 - 0x310)
// BlueprintGeneratedClass ChaGCBP_HighAlert.ChaGCBP_HighAlert_C
class AChaGCBP_HighAlert_C : public AChaGC_HighAlert
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AChaGCBP_HighAlert_C* GetDefaultObj();

	void ReceiveAlertEvent(enum class EAlertDirection InDirection);
	void ExecuteUbergraph_ChaGCBP_HighAlert(int32 EntryPoint, enum class EAlertDirection K2Node_Event_InDirection);
};

}



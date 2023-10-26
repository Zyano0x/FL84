#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3D (0x142D - 0x13F0)
// BlueprintGeneratedClass BP_SolarVH_Tire_WL05.BP_SolarVH_Tire_WL05_C
class ABP_SolarVH_Tire_WL05_C : public ABP_WheeledVehicleBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x13F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Platform;                                          // 0x13F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  VehicleHitbox2;                                    // 0x1400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh3;                                       // 0x1408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x1410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       VFX_BloodVolume;                                   // 0x1418(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MoveableHitBoxLocation;                            // 0x1420(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDestroying;                                      // 0x142C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_SolarVH_Tire_WL05_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_SolarVH_Tire_WL05(int32 EntryPoint, bool CallFunc_IsVehicleBroken_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float K2Node_Event_DeltaSeconds, int32 CallFunc_GetHealthPercentInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}



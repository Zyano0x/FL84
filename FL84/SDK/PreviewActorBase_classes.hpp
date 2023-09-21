#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x591 - 0x540)
// BlueprintGeneratedClass PreviewActorBase.PreviewActorBase_C
class APreviewActorBase_C : public APreviewActor
{
public:
	TMap<int32, struct FTransform>               EmoteActions;                                      // 0x540(0x50)(Edit, BlueprintVisible)
	bool                                         bRotatedByMesh;                                    // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class APreviewActorBase_C* GetDefaultObj();

	void SetMeshRelativeRotationOnYaw(float Delta, float NewYaw, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, TArray<class UMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class UMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

}



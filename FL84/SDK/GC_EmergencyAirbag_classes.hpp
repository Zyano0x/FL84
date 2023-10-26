#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2B8 - 0x298)
// BlueprintGeneratedClass GC_EmergencyAirbag.GC_EmergencyAirbag_C
class AGC_EmergencyAirbag_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CharacterVFX;                                      // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           ScreenVFX;                                         // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEmergencyAirbag_C*                    Actor;                                             // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_EmergencyAirbag_C* GetDefaultObj();

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, const class FString& Temp_string_Variable, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_InSameTeamWithFirstPlayerController_ReturnValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, bool Temp_bool_Variable_1, const class FString& K2Node_Select_Default, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const class FString& K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool Temp_bool_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_InSameTeamWithFirstPlayerController_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AEmergencyAirbag_C* CallFunc_FinishSpawningActor_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& K2Node_Select_Default, const class FString& Temp_string_Variable_2, bool CallFunc_IsValid_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UFX_Widget_Buff_AbilityIncrease_C* CallFunc_Create_ReturnValue, class USolarGameInstanceBase* CallFunc_GetSolarGameInstanceBase_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUI_Root_C* K2Node_DynamicCast_AsUI_Root, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const class FString& K2Node_Select_Default_1);
};

}



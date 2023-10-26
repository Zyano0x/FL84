#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2B8 - 0x298)
// BlueprintGeneratedClass GC_UnlimitedAmmo.GC_UnlimitedAmmo_C
class AGC_UnlimitedAmmo_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CharacterVFX;                                      // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           ScreenVFX;                                         // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CharacterEffectHandle;                             // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ScreenEffectHandle;                                // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_UnlimitedAmmo_C* GetDefaultObj();

	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool Temp_bool_Variable, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, const class FString& Temp_string_Variable, bool CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue, bool CallFunc_InSameTeamWithFirstPlayerController_ReturnValue, bool Temp_bool_Variable_1, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& K2Node_Select_Default, const class FString& K2Node_Select_Default_1);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool Temp_bool_Variable, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, const class FString& Temp_string_Variable, int32 CallFunc_StartActorEffect_ReturnValue, bool CallFunc_IsPlayerLocallyControlledOrSpectated_ReturnValue, bool CallFunc_IsPlayerLocallyControlled_ReturnValue, bool CallFunc_InSameTeamWithFirstPlayerController_ReturnValue, bool Temp_bool_Variable_1, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, int32 CallFunc_StartScreenEffect_ReturnValue, const class FString& K2Node_Select_Default, const class FString& K2Node_Select_Default_1);
};

}



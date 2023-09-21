#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x420 - 0x3B0)
// BlueprintGeneratedClass BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C
class ABP_Ability_UnlimitedAmmo_C : public AWeaponHitAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              FX_Buff_AbilityIncrease;                           // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Fx_WeaponBuff;                                     // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ASolarCharacter*                       CacheCharacter;                                    // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CharacterEffectSocketName;                         // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ScreenEffectClass;                                 // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CacheScreenEffect;                                 // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SoundName1P;                                       // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                SoundName3P;                                       // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                SoundName3PEnemy;                                  // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ASolarWeapon*                          CacheWeapon;                                       // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Ability_UnlimitedAmmo_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void EndWhenUnhold();
	void ExecuteUbergraph_BP_Ability_UnlimitedAmmo(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue, class ASolarPlayerWeapon* CallFunc_GetCurrentWeapon_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class ASolarPlayerNormalWeapon* K2Node_DynamicCast_AsSolar_Player_Normal_Weapon, bool K2Node_DynamicCast_bSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class ASolarPlayerWeapon* CallFunc_GetCurrentWeapon_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class ASolarPlayerController* CallFunc_GetSolarPlayerController_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, class UUserWidget* CallFunc_Create_ReturnValue, bool CallFunc_InSameTeamWithFirstPlayerController_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, bool Temp_bool_Variable, bool CallFunc_HasAuthority_ReturnValue_1, const class FString& K2Node_Select_Default, bool Temp_bool_Variable_1, class USolarGameInstanceBase* CallFunc_GetSolarGameInstanceBase_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, const class FString& K2Node_Select_Default_1, int32 CallFunc_PostAkEventByName_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, class UUI_Root_C* K2Node_DynamicCast_AsUI_Root, bool K2Node_DynamicCast_bSuccess_1, class ASolarPlayerNormalWeapon* K2Node_DynamicCast_AsSolar_Player_Normal_Weapon_1, bool K2Node_DynamicCast_bSuccess_2, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, class ASolarPlayerWeapon* CallFunc_GetCurrentWeapon_ReturnValue_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_IsOpenedScope_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_IsValid_ReturnValue_14, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FMargin& K2Node_MakeStruct_Margin);
};

}



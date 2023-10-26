#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x430 - 0x360)
// BlueprintGeneratedClass GC_Freeze.GC_Freeze_C
class AGC_Freeze_C : public ASolarSkillGC_Freeze
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FMaterialChangeHandle                 MaterialChangeHandle;                              // 0x370(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<int32, class FString>                   SoundPlayMap;                                      // 0x378(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, class FString>                   SoundStopMap;                                      // 0x3C8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*              ParticleHandle;                                    // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                PlayingAudioEventName;                             // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_Freeze_C* GetDefaultObj();

	void RemoveFunc(class AActor* Actor, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UActorMaterialSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_RemoveMaterialChange_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void ActiveFunc(class AActor* TartgetActor, class AActor* TargetActor, const struct FAddMaterialChangeParams& K2Node_MakeStruct_AddMaterialChangeParams, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UActorMaterialSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FMaterialChangeHandle& CallFunc_K2_AddMaterialChange_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ContainsMaterialChange_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void Is_Teammate(class ASolarCharacter* Actor1, class AActor* Actor2, bool* IsTeammate, bool bIsTeammate, class ASolarVehiclePawn* K2Node_DynamicCast_AsSolar_Vehicle_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTeammateWith_ReturnValue, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsTeammateWith_ReturnValue_1);
	void PlaySoundEvent(class AActor* TargetActor, bool bPlay, const class FString& CallFunc_Replace_ReturnValue, int32 CallFunc_PlaySoundbyname_ReturnValue, int32 CallFunc_PlaySoundbyname_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class ASolarCharacter* CallFunc__C_GetLocalCharacter_ReturnValue, bool CallFunc_Is_Teammate_IsTeammate, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_GC_Freeze(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}



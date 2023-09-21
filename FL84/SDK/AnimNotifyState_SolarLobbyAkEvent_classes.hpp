#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x80 - 0x30)
// BlueprintGeneratedClass AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C
class UAnimNotifyState_SolarLobbyAkEvent_C : public UAnimNotifyState
{
public:
	bool                                         Follow;                                            // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Attach_Name;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Begin_Event;                                       // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Begin_Event_Name;                                  // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         End_Event;                                         // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                End_Event_Name;                                    // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UAkComponent*                          NewVar_0;                                          // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimNotifyState_SolarLobbyAkEvent_C* GetDefaultObj();

	void AK_Event_Fun(class USkeletalMeshComponent* Skeletal_Mesh_Comp, class UAkAudioEvent* Event, const class FString& Event_Name, bool IsNotifyEnd, bool* Return_Value, class UAkComponent* CallFunc_Get_Mesh_AK_Component_OutAkComp, bool CallFunc_Get_Mesh_AK_Component_IsSuccess, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_GetAkSwitch_ShouldPlaySounds, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 CallFunc_PostAkEvent_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_GetAkComponent_ComponentCreated, class UAkComponent* CallFunc_GetAkComponent_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void Get_Mesh_AK_Component(class USkeletalMeshComponent* InSkeletalMeshComp, class UAkComponent** OutAkComp, bool* IsSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class ASolarLobbyCharacter* K2Node_DynamicCast_AsSolar_Lobby_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEditor_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_GetAkComponent_ComponentCreated, class UAkComponent* CallFunc_GetAkComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetAkSwitch(class USkeletalMeshComponent* InSkeletalMeshComp, bool* ShouldPlaySounds, class AActor* CallFunc_GetOwner_ReturnValue, class ASolarLobbyCharacter* K2Node_DynamicCast_AsSolar_Lobby_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEditor_ReturnValue);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USolarLobbyAnimInstance* K2Node_DynamicCast_AsSolar_Lobby_Anim_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AK_Event_Fun_Return_Value);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USolarLobbyAnimInstance* K2Node_DynamicCast_AsSolar_Lobby_Anim_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AK_Event_Fun_Return_Value);
};

}



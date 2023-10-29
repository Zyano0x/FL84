#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10D (0x10D - 0x0)
// Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.AK Event Fun
struct UAnimNotifyState_SolarLobbyAkEvent_C_AK_Event_Fun_Params
{
public:
	class USkeletalMeshComponent*                Skeletal_Mesh_Comp;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Event;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Event_Name;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         IsNotifyEnd;                                       // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Return_Value;                                      // 0x21(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_288E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkComponent*                          CallFunc_Get_Mesh_AK_Component_OutAkComp;          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Mesh_AK_Component_IsSuccess;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_288F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue_1;             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAkSwitch_ShouldPlaySounds;             // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2890[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2891[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0xB0(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0xC0(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable_1;                          // 0xD0(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable_1;                            // 0xE0(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_PostAkEvent_ReturnValue;                  // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0xF4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAkComponent_ComponentCreated;          // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2892[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkComponent*                          CallFunc_GetAkComponent_ReturnValue;               // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PostAkEvent_ReturnValue_1;                // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Get Mesh AK Component
struct UAnimNotifyState_SolarLobbyAkEvent_C_Get_Mesh_AK_Component_Params
{
public:
	class USkeletalMeshComponent*                InSkeletalMeshComp;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          OutAkComp;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSuccess;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2894[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASolarLobbyCharacter*                  K2Node_DynamicCast_AsSolar_Lobby_Character;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEditor_ReturnValue;                     // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2895[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAkComponent_ComponentCreated;          // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2896[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkComponent*                          CallFunc_GetAkComponent_ReturnValue;               // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.GetAkSwitch
struct UAnimNotifyState_SolarLobbyAkEvent_C_GetAkSwitch_Params
{
public:
	class USkeletalMeshComponent*                InSkeletalMeshComp;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldPlaySounds;                                  // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2898[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASolarLobbyCharacter*                  K2Node_DynamicCast_AsSolar_Lobby_Character;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEditor_ReturnValue;                     // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Received_NotifyEnd
struct UAnimNotifyState_SolarLobbyAkEvent_C_Received_NotifyEnd_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_289B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USolarLobbyAnimInstance*               K2Node_DynamicCast_AsSolar_Lobby_Anim_Instance;    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AK_Event_Fun_Return_Value;                // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function AnimNotifyState_SolarLobbyAkEvent.AnimNotifyState_SolarLobbyAkEvent_C.Received_NotifyBegin
struct UAnimNotifyState_SolarLobbyAkEvent_C_Received_NotifyBegin_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TotalDuration;                                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USolarLobbyAnimInstance*               K2Node_DynamicCast_AsSolar_Lobby_Anim_Instance;    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AK_Event_Fun_Return_Value;                // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}



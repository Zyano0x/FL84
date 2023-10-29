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

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkPortalComponent.PortalPlacementValid
struct UAkPortalComponent_PortalPlacementValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkPortalComponent.GetPrimitiveParent
struct UAkPortalComponent_GetPrimitiveParent_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkPortalComponent.GetCurrentState
struct UAkPortalComponent_GetCurrentState_Params
{
public:
	enum class EAkAcousticPortalState            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkAcousticPortal.GetCurrentState
struct AAkAcousticPortal_GetCurrentState_Params
{
public:
	enum class EAkAcousticPortalState            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
struct UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkAudioEvent.GetMinimumDuration
struct UAkAudioEvent_GetMinimumDuration_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkAudioEvent.GetMaximumDuration
struct UAkAudioEvent_GetMaximumDuration_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
struct UAkAudioEvent_GetMaxAttenuationRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkAudioEvent.GetIsInfinite
struct UAkAudioEvent_GetIsInfinite_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameObject.SetRTPCValue
struct UAkGameObject_SetRTPCValue_Params
{
public:
	class UAkRtpc*                               RTPCValue;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InterpolationTimeMs;                               // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RTPC;                                              // 0x10(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
struct UAkGameObject_PostAssociatedAkEventAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           PostEventCallback;                                 // 0xC(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_64[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         ExternalSources;                                   // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x30(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        PlayingID;                                         // 0x48(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_65[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameObject.PostAssociatedAkEvent
struct UAkGameObject_PostAssociatedAkEvent_Params
{
public:
	int32                                        CallbackMask;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           PostEventCallback;                                 // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_69[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         ExternalSources;                                   // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function AkAudio.AkGameObject.PostAkEventAsync
struct UAkGameObject_PostAkEventAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AkEvent;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingID;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           PostEventCallback;                                 // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>         ExternalSources;                                   // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x38(0x18)(Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function AkAudio.AkGameObject.PostAkEvent
struct UAkGameObject_PostAkEvent_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           PostEventCallback;                                 // 0xC(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_76[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         ExternalSources;                                   // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                In_EventName;                                      // 0x30(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameObject.GetRTPCValue
struct UAkGameObject_GetRTPCValue_Params
{
public:
	class UAkRtpc*                               RTPCValue;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERTPCValueType                    InputValueType;                                    // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERTPCValueType                    OutputValueType;                                   // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RTPC;                                              // 0x18(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingID;                                         // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkComponent.UseReverbVolumes
struct UAkComponent_UseReverbVolumes_Params
{
public:
	bool                                         InUseReverbVolumes;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkComponent.UseEarlyReflections
struct UAkComponent_UseEarlyReflections_Params
{
public:
	class UAkAuxBus*                             AuxBus;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Order;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BusSendGain;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPathLength;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SpotReflectors;                                    // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AuxBusName;                                        // 0x18(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkComponent.SetSwitch
struct UAkComponent_SetSwitch_Params
{
public:
	class UAkSwitchValue*                        SwitchValue;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SwitchGroup;                                       // 0x8(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SwitchState;                                       // 0x18(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
struct UAkComponent_SetStopWhenOwnerDestroyed_Params
{
public:
	bool                                         bStopWhenOwnerDestroyed;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkComponent.SetOutputBusVolume
struct UAkComponent_SetOutputBusVolume_Params
{
public:
	float                                        BusVolume;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkComponent.SetListeners
struct UAkComponent_SetListeners_Params
{
public:
	TArray<class UAkComponent*>                  Listeners;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkComponent.SetGameObjectRadius
struct UAkComponent_SetGameObjectRadius_Params
{
public:
	float                                        In_outerRadius;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        In_innerRadius;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkComponent.SetEarlyReflectionsVolume
struct UAkComponent_SetEarlyReflectionsVolume_Params
{
public:
	float                                        SendVolume;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
struct UAkComponent_SetEarlyReflectionsAuxBus_Params
{
public:
	class FString                                AuxBusName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkComponent.SetAttenuationScalingFactor
struct UAkComponent_SetAttenuationScalingFactor_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkComponent.PostTrigger
struct UAkComponent_PostTrigger_Params
{
public:
	class UAkTrigger*                            TriggerValue;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Trigger;                                           // 0x8(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
struct UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Params
{
public:
	int32                                        PlayingID;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         ExternalSources;                                   // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x18(0x18)(Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
struct UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params
{
public:
	TArray<struct FAkExternalSourceInfo>         ExternalSources;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_87[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkComponent.PostAkEventByName
struct UAkComponent_PostAkEventByName_Params
{
public:
	class FString                                In_EventName;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
struct UAkComponent_PostAkEventAndWaitForEndAsync_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingID;                                         // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         ExternalSources;                                   // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x20(0x18)(Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
struct UAkComponent_PostAkEventAndWaitForEnd_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                In_EventName;                                      // 0x8(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>         ExternalSources;                                   // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x28(0x18)(Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkComponent.GetCurrentRoom
struct UAkComponent_GetCurrentRoom_Params
{
public:
	class UAkRoomComponent*                      ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkComponent.GetAttenuationRadius
struct UAkComponent_GetAttenuationRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
struct UAkAudioInputComponent_PostAssociatedAudioInputEvent_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkCheckBox.SetIsChecked
struct UAkCheckBox_SetIsChecked_Params
{
public:
	bool                                         InIsChecked;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkCheckBox.SetCheckedState
struct UAkCheckBox_SetCheckedState_Params
{
public:
	enum class ECheckBoxState                    InCheckedState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkCheckBox.SetAkItemId
struct UAkCheckBox_SetAkItemId_Params
{
public:
	struct FGuid                                 ItemID;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkCheckBox.SetAkBoolProperty
struct UAkCheckBox_SetAkBoolProperty_Params
{
public:
	class FString                                ItemProperty;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkCheckBox.IsPressed
struct UAkCheckBox_IsPressed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkCheckBox.IsChecked
struct UAkCheckBox_IsChecked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkCheckBox.GetCheckedState
struct UAkCheckBox_GetCheckedState_Params
{
public:
	enum class ECheckBoxState                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkCheckBox.GetAkProperty
struct UAkCheckBox_GetAkProperty_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkCheckBox.GetAkItemId
struct UAkCheckBox_GetAkItemId_Params
{
public:
	struct FGuid                                 ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.UseReverbVolumes
struct UAkGameplayStatics_UseReverbVolumes_Params
{
public:
	bool                                         InUseReverbVolumes;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameplayStatics.UseEarlyReflections
struct UAkGameplayStatics_UseEarlyReflections_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAuxBus*                             AuxBus;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Order;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BusSendGain;                                       // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPathLength;                                     // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SpotReflectors;                                    // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AuxBusName;                                        // 0x20(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.UpdatePostedEventMultiPositions
struct UAkGameplayStatics_UpdatePostedEventMultiPositions_Params
{
public:
	class UAkComponent*                          AkComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Positions;                                         // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.UpdateDopplerEffectDatas
struct UAkGameplayStatics_UpdateDopplerEffectDatas_Params
{
public:
	class AActor*                                SoundingObj;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SoundingObjPos;                                    // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ListeningObjPos;                                   // 0x14(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.UnloadBankByNameAsync
struct UAkGameplayStatics_UnloadBankByNameAsync_Params
{
public:
	class FString                                BankName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           BankUnloadedCallback;                              // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.UnloadBankByName
struct UAkGameplayStatics_UnloadBankByName_Params
{
public:
	class FString                                BankName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.UnloadBankAsync
struct UAkGameplayStatics_UnloadBankAsync_Params
{
public:
	class UAkAudioBank*                          Bank;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           BankUnloadedCallback;                              // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AkAudio.AkGameplayStatics.UnloadBank
struct UAkGameplayStatics_UnloadBank_Params
{
public:
	class UAkAudioBank*                          Bank;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BankName;                                          // 0x8(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x18(0x18)(Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkGameplayStatics.Suspend
struct UAkGameplayStatics_Suspend_Params
{
public:
	bool                                         In_bRenderAnyway;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.StopSoundOnComponentbyname
struct UAkGameplayStatics_StopSoundOnComponentbyname_Params
{
public:
	class FString                                SoundName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       Component;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.StopSoundOnComponent
struct UAkGameplayStatics_StopSoundOnComponent_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       Component;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.StopSoundbyname
struct UAkGameplayStatics_StopSoundbyname_Params
{
public:
	class FString                                SoundName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.StopSound2Dbyname
struct UAkGameplayStatics_StopSound2Dbyname_Params
{
public:
	class FString                                SoundName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.StopSound2D
struct UAkGameplayStatics_StopSound2D_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.StopSound
struct UAkGameplayStatics_StopSound_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
struct UAkGameplayStatics_StopAllAmbientSounds_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkGameplayStatics.StopActor
struct UAkGameplayStatics_StopActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.StartProfilerCapture
struct UAkGameplayStatics_StartProfilerCapture_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.StartOutputCapture
struct UAkGameplayStatics_StartOutputCapture_Params
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
struct UAkGameplayStatics_StartAllAmbientSounds_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
struct UAkGameplayStatics_SpawnAkComponentAtLocation_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AkEvent;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Orientation;                                       // 0x1C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         AutoPost;                                          // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventName;                                         // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoDestroy;                                       // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkComponent*                          ReturnValue;                                       // 0x48(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.SetSwitchToListenerbyname
struct UAkGameplayStatics_SetSwitchToListenerbyname_Params
{
public:
	class FString                                SwitchGroup;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SwitchState;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkGameplayStatics.SetSwitchToListener
struct UAkGameplayStatics_SetSwitchToListener_Params
{
public:
	class UAkSwitchValue*                        SwitchValue;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkGameplayStatics.SetSwitchToComponentbyname
struct UAkGameplayStatics_SetSwitchToComponentbyname_Params
{
public:
	class UActorComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SwitchGroup;                                       // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SwitchState;                                       // 0x18(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.SetSwitchToComponent
struct UAkGameplayStatics_SetSwitchToComponent_Params
{
public:
	class UAkSwitchValue*                        SwitchValue;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       Component;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkGameplayStatics.SetSwitchbyname
struct UAkGameplayStatics_SetSwitchbyname_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SwitchGroup;                                       // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SwitchState;                                       // 0x18(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.SetSwitch
struct UAkGameplayStatics_SetSwitch_Params
{
public:
	class UAkSwitchValue*                        SwitchValue;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SwitchGroup;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SwitchState;                                       // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.SetState
struct UAkGameplayStatics_SetState_Params
{
public:
	class UAkStateValue*                         StateValue;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StateGroup;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  State;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkGameplayStatics.SetSpeakerAngles
struct UAkGameplayStatics_SetSpeakerAngles_Params
{
public:
	TArray<float>                                SpeakerAngles;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightAngle;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DeviceShareset;                                    // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.SetRTPCValueToListenerbyname
struct UAkGameplayStatics_SetRTPCValueToListenerbyname_Params
{
public:
	class FString                                RTPC;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InterpolationTimeMs;                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.SetRTPCValueToListener
struct UAkGameplayStatics_SetRTPCValueToListener_Params
{
public:
	class UAkRtpc*                               RTPCValue;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InterpolationTimeMs;                               // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.SetRTPCValueToComponentbyname
struct UAkGameplayStatics_SetRTPCValueToComponentbyname_Params
{
public:
	class FString                                RTPC;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InterpolationTimeMs;                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       Component;                                         // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.SetRTPCValueToComponent
struct UAkGameplayStatics_SetRTPCValueToComponent_Params
{
public:
	class UAkRtpc*                               RTPCValue;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InterpolationTimeMs;                               // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       Component;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.SetRTPCValuebyname
struct UAkGameplayStatics_SetRTPCValuebyname_Params
{
public:
	class FString                                RTPC;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InterpolationTimeMs;                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.SetRTPCValue
struct UAkGameplayStatics_SetRTPCValue_Params
{
public:
	class UAkRtpc*                               RTPCValue;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InterpolationTimeMs;                               // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RTPC;                                              // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkGameplayStatics.SetReflectionsOrder
struct UAkGameplayStatics_SetReflectionsOrder_Params
{
public:
	int32                                        Order;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RefreshPaths;                                      // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
struct UAkGameplayStatics_SetPortalToPortalObstruction_Params
{
public:
	class UAkPortalComponent*                    PortalComponent0;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkPortalComponent*                    PortalComponent1;                                  // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ObstructionValue;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
struct UAkGameplayStatics_SetPortalObstructionAndOcclusion_Params
{
public:
	class UAkPortalComponent*                    PortalComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ObstructionValue;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionValue;                                    // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkGameplayStatics.SetPanningRule
struct UAkGameplayStatics_SetPanningRule_Params
{
public:
	enum class EPanningRule                      PanRule;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
struct UAkGameplayStatics_SetOutputBusVolume_Params
{
public:
	float                                        BusVolume;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
struct UAkGameplayStatics_SetOcclusionScalingFactor_Params
{
public:
	float                                        ScalingFactor;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
struct UAkGameplayStatics_SetOcclusionRefreshInterval_Params
{
public:
	float                                        RefreshInterval;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.SetMultiplePositions
struct UAkGameplayStatics_SetMultiplePositions_Params
{
public:
	class UAkComponent*                          GameObjectAkComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Positions;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkMultiPositionType              MultiPositionType;                                 // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_123[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
struct UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Params
{
public:
	class UAkComponent*                          GameObjectAkComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkChannelMask>                ChannelMasks;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Positions;                                         // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkMultiPositionType              MultiPositionType;                                 // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_125[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
struct UAkGameplayStatics_SetMultipleChannelEmitterPositions_Params
{
public:
	class UAkComponent*                          GameObjectAkComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EAkChannelConfiguration>   ChannelMasks;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Positions;                                         // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkMultiPositionType              MultiPositionType;                                 // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_127[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
struct UAkGameplayStatics_SetGameObjectToPortalObstruction_Params
{
public:
	class UAkComponent*                          GameObjectAkComponent;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkPortalComponent*                    PortalComponent;                                   // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ObstructionValue;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_129[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
struct UAkGameplayStatics_SetCurrentAudioCultureAsync_Params
{
public:
	class FString                                AudioCulture;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Completed;                                         // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
struct UAkGameplayStatics_SetCurrentAudioCulture_Params
{
public:
	class FString                                AudioCulture;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x10(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.SetBusConfig
struct UAkGameplayStatics_SetBusConfig_Params
{
public:
	class FString                                BusName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkChannelConfiguration           ChannelConfiguration;                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.ReplaceMainOutput
struct UAkGameplayStatics_ReplaceMainOutput_Params
{
public:
	struct FAkOutputSettings                     MainOutputSettings;                                // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.PostTrigger
struct UAkGameplayStatics_PostTrigger_Params
{
public:
	class UAkTrigger*                            TriggerValue;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Trigger;                                           // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.PostEventByName
struct UAkGameplayStatics_PostEventByName_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function AkAudio.AkGameplayStatics.PostEventAttached
struct UAkGameplayStatics_PostEventAttached_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachPointName;                                   // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventName;                                         // 0x20(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x30(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_130[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
struct UAkGameplayStatics_PostEventAtLocationByName_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Orientation;                                       // 0x1C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkGameplayStatics.PostEventAtLocation
struct UAkGameplayStatics_PostEventAtLocation_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Orientation;                                       // 0x14(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x20(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x38(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_132[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function AkAudio.AkGameplayStatics.PostEvent
struct UAkGameplayStatics_PostEvent_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           PostEventCallback;                                 // 0x14(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_133[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         ExternalSources;                                   // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_134[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventName;                                         // 0x40(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x50(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
struct UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingID;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         ExternalSources;                                   // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x28(0x18)(Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
struct UAkGameplayStatics_PostAndWaitForEndOfEvent_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         ExternalSources;                                   // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x28(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x38(0x18)(Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x50(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.PlaySoundToComponentbyname
struct UAkGameplayStatics_PlaySoundToComponentbyname_Params
{
public:
	class FString                                SoundName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       Component;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.PlaySoundToComponent
struct UAkGameplayStatics_PlaySoundToComponent_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       Component;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.PlaySoundbyname
struct UAkGameplayStatics_PlaySoundbyname_Params
{
public:
	class FString                                SoundName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AkAudio.AkGameplayStatics.PlaySoundAtLocationbyname
struct UAkGameplayStatics_PlaySoundAtLocationbyname_Params
{
public:
	class FString                                SoundName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Orientation;                                       // 0x1C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x30(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameplayStatics.PlaySoundAtLocation
struct UAkGameplayStatics_PlaySoundAtLocation_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Orientation;                                       // 0x14(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.PlaySound2Dbyname
struct UAkGameplayStatics_PlaySound2Dbyname_Params
{
public:
	class FString                                SoundName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_141[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.PlaySound2D
struct UAkGameplayStatics_PlaySound2D_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.PlaySound
struct UAkGameplayStatics_PlaySound_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.LoadBanks
struct UAkGameplayStatics_LoadBanks_Params
{
public:
	TArray<class UAkAudioBank*>                  SoundBanks;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SynchronizeSoundBanks;                             // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_147[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.LoadBankByNameAsync
struct UAkGameplayStatics_LoadBankByNameAsync_Params
{
public:
	class FString                                BankName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           BankLoadedCallback;                                // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.LoadBankByName
struct UAkGameplayStatics_LoadBankByName_Params
{
public:
	class FString                                BankName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.LoadBankAsync
struct UAkGameplayStatics_LoadBankAsync_Params
{
public:
	class UAkAudioBank*                          Bank;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           BankLoadedCallback;                                // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AkAudio.AkGameplayStatics.LoadBank
struct UAkGameplayStatics_LoadBank_Params
{
public:
	class UAkAudioBank*                          Bank;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BankName;                                          // 0x8(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                     LatentInfo;                                        // 0x18(0x18)(Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.IsGame
struct UAkGameplayStatics_IsGame_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkGameplayStatics.IsEditor
struct UAkGameplayStatics_IsEditor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkGameplayStatics.GetSpeakerAngles
struct UAkGameplayStatics_GetSpeakerAngles_Params
{
public:
	TArray<float>                                SpeakerAngles;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightAngle;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DeviceShareset;                                    // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkGameplayStatics.GetRTPCValue
struct UAkGameplayStatics_GetRTPCValue_Params
{
public:
	class UAkRtpc*                               RTPCValue;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingID;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERTPCValueType                    InputValueType;                                    // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_150[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERTPCValueType                    OutputValueType;                                   // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RTPC;                                              // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
struct UAkGameplayStatics_GetOcclusionScalingFactor_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameplayStatics.GetDopplerEffectDatas
struct UAkGameplayStatics_GetDopplerEffectDatas_Params
{
public:
	class AActor*                                SoundingObj;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SoundingObjPos;                                    // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ListeningObjPos;                                   // 0x14(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AddDopplerIntensity;                               // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinusDopplerIntensity;                             // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaTime;                                         // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
struct UAkGameplayStatics_GetCurrentAudioCulture_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
struct UAkGameplayStatics_GetAvailableAudioCultures_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
struct UAkGameplayStatics_GetAkMediaAssetUserData_Params
{
public:
	class UAkMediaAsset*                         Instance;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                Type;                                              // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkGameplayStatics.GetAkComponent
struct UAkGameplayStatics_GetAkComponent_Params
{
public:
	class USceneComponent*                       AttachToComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ComponentCreated;                                  // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AttachPointName;                                   // 0xC(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x14(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachLocation                   LocationType;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkComponent*                          ReturnValue;                                       // 0x28(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
struct UAkGameplayStatics_GetAkAudioTypeUserData_Params
{
public:
	class UAkAudioType*                          Instance;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                Type;                                              // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
struct UAkGameplayStatics_ExecuteActionOnPlayingID_Params
{
public:
	enum class EAkActionOnEventType              ActionType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayingID;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TransitionDuration;                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkCurveInterpolation             FadeCurve;                                         // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
struct UAkGameplayStatics_ExecuteActionOnEvent_Params
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkActionOnEventType              ActionType;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TransitionDuration;                                // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkCurveInterpolation             FadeCurve;                                         // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayingID;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkGameplayStatics.ClearDopplerEffectDatas
struct UAkGameplayStatics_ClearDopplerEffectDatas_Params
{
public:
	class AActor*                                SoundingObj;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.CancelEventCallback
struct UAkGameplayStatics_CancelEventCallback_Params
{
public:
	FDelegateProperty_                           PostEventCallback;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkGameplayStatics.ApplyDopplerEffectDatas
struct UAkGameplayStatics_ApplyDopplerEffectDatas_Params
{
public:
	class AActor*                                SoundingObj;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ListeningObjPos;                                   // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AddDopplerIntensity;                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinusDopplerIntensity;                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaTime;                                         // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
struct UAkGameplayStatics_AddOutputCaptureMarker_Params
{
public:
	class FString                                MarkerText;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetType
struct UAkMIDIEventCallbackInfo_GetType_Params
{
public:
	enum class EAkMidiEventType                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
struct UAkMIDIEventCallbackInfo_GetProgramChange_Params
{
public:
	struct FAkMidiProgramChange                  AsProgramChange;                                   // 0x0(0x3)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
struct UAkMIDIEventCallbackInfo_GetPitchBend_Params
{
public:
	struct FAkMidiPitchBend                      AsPitchBend;                                       // 0x0(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x5 (0x5 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
struct UAkMIDIEventCallbackInfo_GetNoteOn_Params
{
public:
	struct FAkMidiNoteOnOff                      AsNoteOn;                                          // 0x0(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
struct UAkMIDIEventCallbackInfo_GetNoteOff_Params
{
public:
	struct FAkMidiNoteOnOff                      AsNoteOff;                                         // 0x0(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
struct UAkMIDIEventCallbackInfo_GetNoteAftertouch_Params
{
public:
	struct FAkMidiNoteAftertouch                 AsNoteAftertouch;                                  // 0x0(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
struct UAkMIDIEventCallbackInfo_GetGeneric_Params
{
public:
	struct FAkMidiGeneric                        AsGeneric;                                         // 0x0(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
struct UAkMIDIEventCallbackInfo_GetChannelAftertouch_Params
{
public:
	struct FAkMidiChannelAftertouch              AsChannelAftertouch;                               // 0x0(0x3)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
struct UAkMIDIEventCallbackInfo_GetChannel_Params
{
public:
	uint8                                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// Function AkAudio.AkMIDIEventCallbackInfo.GetCc
struct UAkMIDIEventCallbackInfo_GetCc_Params
{
public:
	struct FAkMidiCc                             AsCc;                                              // 0x0(0x4)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
struct UAkHololensInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
struct UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Params
{
public:
	struct FAkBoolPropertyToControl              INAkBoolPropertyToControl;                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
struct UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Params
{
public:
	struct FAkBoolPropertyToControl              INAkBoolPropertyToControl;                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkItemBoolProperties.SetSearchText
struct UAkItemBoolProperties_SetSearchText_Params
{
public:
	class FString                                NewText;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkItemBoolProperties.GetSelectedProperty
struct UAkItemBoolProperties_GetSelectedProperty_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkItemBoolProperties.GetSearchText
struct UAkItemBoolProperties_GetSearchText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
struct UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Params
{
public:
	struct FAkPropertyToControl                  INAkPropertyToControl;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
struct UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Params
{
public:
	struct FAkPropertyToControl                  INAkPropertyToControl;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkItemProperties.SetSearchText
struct UAkItemProperties_SetSearchText_Params
{
public:
	class FString                                NewText;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkItemProperties.GetSelectedProperty
struct UAkItemProperties_GetSelectedProperty_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkItemProperties.GetSearchText
struct UAkItemProperties_GetSearchText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
struct UAkLateReverbComponent_AssociateAkTextureSetComponent_Params
{
public:
	class UAkAcousticTextureSetComponent*        TextureSetComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
struct UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
struct UAkMacInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
struct UAkPS4InitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.AkRoomComponent.GetPrimitiveParent
struct UAkRoomComponent_GetPrimitiveParent_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkSlider.SetValue
struct UAkSlider_SetValue_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkSlider.SetStepSize
struct UAkSlider_SetStepSize_Params
{
public:
	float                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkSlider.SetSliderHandleColor
struct UAkSlider_SetSliderHandleColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkSlider.SetSliderBarColor
struct UAkSlider_SetSliderBarColor_Params
{
public:
	struct FLinearColor                          InValue;                                           // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkSlider.SetLocked
struct UAkSlider_SetLocked_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkSlider.SetIndentHandle
struct UAkSlider_SetIndentHandle_Params
{
public:
	bool                                         InValue;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkSlider.SetAkSliderItemProperty
struct UAkSlider_SetAkSliderItemProperty_Params
{
public:
	class FString                                ItemProperty;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkSlider.SetAkSliderItemId
struct UAkSlider_SetAkSliderItemId_Params
{
public:
	struct FGuid                                 ItemID;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AkSlider.GetValue
struct UAkSlider_GetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkSlider.GetAkSliderItemProperty
struct UAkSlider_GetAkSliderItemProperty_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkSlider.GetAkSliderItemId
struct UAkSlider_GetAkSliderItemId_Params
{
public:
	struct FGuid                                 ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
struct UAkSwitchInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkWaapiCalls.Unsubscribe
struct UAkWaapiCalls_Unsubscribe_Params
{
public:
	struct FAkWaapiSubscriptionId                SubscriptionId;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         UnsubscriptionDone;                                // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAKWaapiJsonObject                    ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function AkAudio.AkWaapiCalls.SubscribeToWaapi
struct UAkWaapiCalls_SubscribeToWaapi_Params
{
public:
	struct FAkWaapiUri                           WaapiUri;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    WaapiOptions;                                      // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Callback;                                          // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkWaapiSubscriptionId                SubscriptionId;                                    // 0x30(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         SubscriptionDone;                                  // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAKWaapiJsonObject                    ReturnValue;                                       // 0x40(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkWaapiCalls.SetSubscriptionID
struct UAkWaapiCalls_SetSubscriptionID_Params
{
public:
	struct FAkWaapiSubscriptionId                Subscription;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ID;                                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
struct UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E1[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
struct UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E3[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkWaapiCalls.GetSubscriptionID
struct UAkWaapiCalls_GetSubscriptionID_Params
{
public:
	struct FAkWaapiSubscriptionId                Subscription;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
struct UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Params
{
public:
	struct FAkWaapiSubscriptionId                INAkWaapiSubscriptionId;                           // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
struct UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Params
{
public:
	struct FAkWaapiSubscriptionId                INAkWaapiSubscriptionId;                           // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkWaapiCalls.CallWaapi
struct UAkWaapiCalls_CallWaapi_Params
{
public:
	struct FAkWaapiUri                           WaapiUri;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    WaapiArgs;                                         // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    WaapiOptions;                                      // 0x20(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
struct USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Params
{
public:
	struct FAkWaapiFieldNames                    INAkWaapiFieldNames;                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
struct USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Params
{
public:
	struct FAkWaapiFieldNames                    INAkWaapiFieldNames;                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkWaapiJsonManager.SetStringField
struct UAkWaapiJsonManager_SetStringField_Params
{
public:
	struct FAkWaapiFieldNames                    FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                FieldValue;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    Target;                                            // 0x20(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkWaapiJsonManager.SetObjectField
struct UAkWaapiJsonManager_SetObjectField_Params
{
public:
	struct FAkWaapiFieldNames                    FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    FieldValue;                                        // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    Target;                                            // 0x20(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AkAudio.AkWaapiJsonManager.SetNumberField
struct UAkWaapiJsonManager_SetNumberField_Params
{
public:
	struct FAkWaapiFieldNames                    FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        FieldValue;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAKWaapiJsonObject                    Target;                                            // 0x18(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function AkAudio.AkWaapiJsonManager.SetBoolField
struct UAkWaapiJsonManager_SetBoolField_Params
{
public:
	struct FAkWaapiFieldNames                    FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         FieldValue;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_265[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAKWaapiJsonObject                    Target;                                            // 0x18(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
struct UAkWaapiJsonManager_SetArrayStringFields_Params
{
public:
	struct FAkWaapiFieldNames                    FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        FieldStringValues;                                 // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    Target;                                            // 0x20(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
struct UAkWaapiJsonManager_SetArrayObjectFields_Params
{
public:
	struct FAkWaapiFieldNames                    FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FAKWaapiJsonObject>            FieldObjectValues;                                 // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    Target;                                            // 0x20(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkWaapiJsonManager.GetStringField
struct UAkWaapiJsonManager_GetStringField_Params
{
public:
	struct FAkWaapiFieldNames                    FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    Target;                                            // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkWaapiJsonManager.GetObjectField
struct UAkWaapiJsonManager_GetObjectField_Params
{
public:
	struct FAkWaapiFieldNames                    FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    Target;                                            // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkWaapiJsonManager.GetNumberField
struct UAkWaapiJsonManager_GetNumberField_Params
{
public:
	struct FAkWaapiFieldNames                    FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    Target;                                            // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_270[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkWaapiJsonManager.GetIntegerField
struct UAkWaapiJsonManager_GetIntegerField_Params
{
public:
	struct FAkWaapiFieldNames                    FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    Target;                                            // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_271[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkWaapiJsonManager.GetBoolField
struct UAkWaapiJsonManager_GetBoolField_Params
{
public:
	struct FAkWaapiFieldNames                    FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    Target;                                            // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_274[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkWaapiJsonManager.GetArrayField
struct UAkWaapiJsonManager_GetArrayField_Params
{
public:
	struct FAkWaapiFieldNames                    FieldName;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                    Target;                                            // 0x10(0x10)(Parm, NativeAccessSpecifierPublic)
	TArray<struct FAKWaapiJsonObject>            ReturnValue;                                       // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
struct UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Params
{
public:
	struct FAKWaapiJsonObject                    INAKWaapiJsonObject;                               // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
struct UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Params
{
public:
	struct FAKWaapiJsonObject                    INAKWaapiJsonObject;                               // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
struct UAkWaapiUriConv_Conv_FAkWaapiUriToText_Params
{
public:
	struct FAkWaapiUri                           INAkWaapiUri;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
struct UAkWaapiUriConv_Conv_FAkWaapiUriToString_Params
{
public:
	struct FAkWaapiUri                           INAkWaapiUri;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
struct UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkWwiseTree.SetSearchText
struct UAkWwiseTree_SetSearchText_Params
{
public:
	class FString                                NewText;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AkWwiseTree.GetSelectedItem
struct UAkWwiseTree_GetSelectedItem_Params
{
public:
	struct FAkWwiseObjectDetails                 ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AkWwiseTree.GetSearchText
struct UAkWwiseTree_GetSearchText_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
struct UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Params
{
public:
	bool                                         NewValue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AudioManager.SetVoiceVolume
struct UAudioManager_SetVoiceVolume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AudioManager.SetVoiceEnabled
struct UAudioManager_SetVoiceEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AudioManager.SetSwitch
struct UAudioManager_SetSwitch_Params
{
public:
	class FString                                SwitchGroupName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SwitchName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TargetActor;                                       // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AudioManager.SetState
struct UAudioManager_SetState_Params
{
public:
	class FString                                StateGroupName;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StateName;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AudioManager.SetSoundVolume
struct UAudioManager_SetSoundVolume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AudioManager.SetSoundEnabled
struct UAudioManager_SetSoundEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AkAudio.AudioManager.SetMusicVolume
struct UAudioManager_SetMusicVolume_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AkAudio.AudioManager.SetMusicEnabled
struct UAudioManager_SetMusicEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AudioManager.SetGlobalRTPC
struct UAudioManager_SetGlobalRTPC_Params
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateTolerance;                                   // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AudioManager.SetEmitterRTPC
struct UAudioManager_SetEmitterRTPC_Params
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Emitter;                                           // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateTolerance;                                   // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_290[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function AkAudio.AudioManager.ResetRTPCValue
struct UAudioManager_ResetRTPCValue_Params
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Emitter;                                           // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AudioManager.PlayEvent3D
struct UAudioManager_PlayEvent3D_Params
{
public:
	class UAkAudioEvent*                         EventReference;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Emitter;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StopOnDestroy;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Source;                                            // 0x18(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x28(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_294[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.AudioManager.PlayEvent2D
struct UAudioManager_PlayEvent2D_Params
{
public:
	class UAkAudioEvent*                         EventReference;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_295[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.AudioManager.IsSwitchAt
struct UAudioManager_IsSwitchAt_Params
{
public:
	class FString                                SwitchGroupName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SwitchName;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TargetActor;                                       // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_298[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AudioManager.IsStateAt
struct UAudioManager_IsStateAt_Params
{
public:
	class FString                                StateGroupName;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StateName;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AudioManager.GetSwitch
struct UAudioManager_GetSwitch_Params
{
public:
	class FString                                SwitchGroupName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TargetActor;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AudioManager.GetState
struct UAudioManager_GetState_Params
{
public:
	class FString                                StateGroupName;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AkAudio.AudioManager.GetRTPCValue
struct UAudioManager_GetRTPCValue_Params
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Emitter;                                           // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function AkAudio.AudioManager.ExecuteActionOnEvent
struct UAudioManager_ExecuteActionOnEvent_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Emitter;                                           // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkActionOnEventType              ActionType;                                        // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeTime;                                          // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayingID;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.BankManager.GetInstance
struct UBankManager_GetInstance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBankManager*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.EmitterManager.SetSelfEmitter
struct UEmitterManager_SetSelfEmitter_Params
{
public:
	class UAkComponent*                          Emitter;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AkAudio.EmitterManager.RemoveSelfEmitter
struct UEmitterManager_RemoveSelfEmitter_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.EmitterManager.IsSelfEmitter
struct UEmitterManager_IsSelfEmitter_Params
{
public:
	class UAkComponent*                          Emitter;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.EmitterManager.GetSelfEmitter
struct UEmitterManager_GetSelfEmitter_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkComponent*                          ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.EmitterManager.GetInstance
struct UEmitterManager_GetInstance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEmitterManager*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.ListenerManager.GetInstance
struct UListenerManager_GetInstance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UListenerManager*                      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function AkAudio.PostEventAsync.PostEventAsync
struct UPostEventAsync_PostEventAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AkEvent;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CallbackMask;                                      // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           PostEventCallback;                                 // 0x1C(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         ExternalSources;                                   // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenAttachedToDestroyed;                      // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPostEventAsync*                       ReturnValue;                                       // 0x48(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
struct UPostEventAtLocationAsync_PostEventAtLocationAsync_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AkEvent;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Orientation;                                       // 0x1C(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UPostEventAtLocationAsync*             ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AkAudio.SpatialAudioManager.GetInstance
struct USpatialAudioManager_GetInstance_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpatialAudioManager*                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}



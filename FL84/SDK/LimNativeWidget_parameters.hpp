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

// 0x20 (0x20 - 0x0)
// Function LimNativeWidget.AudioPermissionHelperProxy.OnAndroidPermissionResult
struct UAudioPermissionHelperProxy_OnAndroidPermissionResult_Params
{
public:
	TArray<class FString>                        Permissions;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 Results;                                           // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.AudioPermissionHelperProxy.CheckIOSAudioPermission
struct UAudioPermissionHelperProxy_CheckIOSAudioPermission_Params
{
public:
	enum class EIOSAudioPermissionState          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.AudioPermissionHelperProxy.CheckAndroidAudioPermission
struct UAudioPermissionHelperProxy_CheckAndroidAudioPermission_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function LimNativeWidget.ChatGMEManager.UpdateSelfPosition
struct UChatGMEManager_UpdateSelfPosition_Params
{
public:
	struct FVector                               InSelfPosition;                                    // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LimNativeWidget.ChatGMEManager.UpdateAudioRecvRange
struct UChatGMEManager_UpdateAudioRecvRange_Params
{
public:
	int32                                        InRange;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNativeWidget.ChatGMEManager.SwitchRoomCompatible
struct UChatGMEManager_SwitchRoomCompatible_Params
{
public:
	class FString                                InRoomId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GmeToken;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function LimNativeWidget.ChatGMEManager.SwitchRoom
struct UChatGMEManager_SwitchRoom_Params
{
public:
	class FString                                InRoomId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function LimNativeWidget.ChatGMEManager.SetRangeAudioTeamID
struct UChatGMEManager_SetRangeAudioTeamID_Params
{
public:
	int32                                        InTeamId;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.SetRangeAudioMode
struct UChatGMEManager_SetRangeAudioMode_Params
{
public:
	enum class EChatGMERangeAudioMode            InAudioMode;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNativeWidget.ChatGMEManager.SetAudioSendAndRecvRules
struct UChatGMEManager_SetAudioSendAndRecvRules_Params
{
public:
	enum class EChatGMEAudioRouteSendType        SendType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        SendOpenIDList;                                    // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChatGMEAudioRouteRecvType        RecvType;                                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        RecvOpenIDList;                                    // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.ChatGMEManager.SelectSpeak
struct UChatGMEManager_SelectSpeak_Params
{
public:
	class FString                                InDeviceID;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.ChatGMEManager.SelectMic
struct UChatGMEManager_SelectMic_Params
{
public:
	class FString                                InDeviceID;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// DelegateFunction LimNativeWidget.ChatGMEManager.OnUserVolumesDelegate__DelegateSignature
struct UChatGMEManager_OnUserVolumesDelegate__DelegateSignature_Params
{
public:
	struct FChatGMEDataUserVolumes               InData;                                            // 0x0(0x58)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction LimNativeWidget.ChatGMEManager.OnUserUpdateDelegate__DelegateSignature
struct UChatGMEManager_OnUserUpdateDelegate__DelegateSignature_Params
{
public:
	struct FChatGMEDataUserUpdate                InData;                                            // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// DelegateFunction LimNativeWidget.ChatGMEManager.OnRoomManagementOperatorDelegate__DelegateSignature
struct UChatGMEManager_OnRoomManagementOperatorDelegate__DelegateSignature_Params
{
public:
	struct FChatGMEDataRoomOperator              InData;                                            // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// DelegateFunction LimNativeWidget.ChatGMEManager.OnResultDelegate__DelegateSignature
struct UChatGMEManager_OnResultDelegate__DelegateSignature_Params
{
public:
	struct FChatGMEDataResult                    Result;                                            // 0x0(0x28)(Parm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// DelegateFunction LimNativeWidget.ChatGMEManager.OnRecordCompletedDelegate__DelegateSignature
struct UChatGMEManager_OnRecordCompletedDelegate__DelegateSignature_Params
{
public:
	struct FChatGMEDataRecordCompleted           InData;                                            // 0x0(0x48)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction LimNativeWidget.ChatGMEManager.OnNumberOfUsersUpdateDelegate__DelegateSignature
struct UChatGMEManager_OnNumberOfUsersUpdateDelegate__DelegateSignature_Params
{
public:
	struct FChatGMEDataNumberOfUserUpdate        InData;                                            // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LimNativeWidget.ChatGMEManager.OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature
struct UChatGMEManager_OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature_Params
{
public:
	struct FChatGMEDataNumberOfAudioStreamsUpdate InData;                                            // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// DelegateFunction LimNativeWidget.ChatGMEManager.OnNotifyFileInfoDelegate__DelegateSignature
struct UChatGMEManager_OnNotifyFileInfoDelegate__DelegateSignature_Params
{
public:
	struct FChatGMEDataFileInfo                  InData;                                            // 0x0(0x58)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LimNativeWidget.ChatGMEManager.OnNotifyDelegate__DelegateSignature
struct UChatGMEManager_OnNotifyDelegate__DelegateSignature_Params
{
public:
	class FString                                InData;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function LimNativeWidget.ChatGMEManager.OnGetAuthBuffer
struct UChatGMEManager_OnGetAuthBuffer_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeGetGMETokenCallBack         RetData;                                           // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// DelegateFunction LimNativeWidget.ChatGMEManager.OnDeviceChangedDelegate__DelegateSignature
struct UChatGMEManager_OnDeviceChangedDelegate__DelegateSignature_Params
{
public:
	struct FChatGMEDataDeviceInfo                InData;                                            // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// DelegateFunction LimNativeWidget.ChatGMEManager.OnChangeRoomTypeDelegate__DelegateSignature
struct UChatGMEManager_OnChangeRoomTypeDelegate__DelegateSignature_Params
{
public:
	struct FChatGMEDataChangeRoomType            InData;                                            // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction LimNativeWidget.ChatGMEManager.OnChangeRoomQualityDelegate__DelegateSignature
struct UChatGMEManager_OnChangeRoomQualityDelegate__DelegateSignature_Params
{
public:
	struct FChatGMEDataRoomQuality               InData;                                            // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction LimNativeWidget.ChatGMEManager.OnAndroidPermissionResult__DelegateSignature
struct UChatGMEManager_OnAndroidPermissionResult__DelegateSignature_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LimNativeWidget.ChatGMEManager.MediaMute
struct UChatGMEManager_MediaMute_Params
{
public:
	class FString                                InUserId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InMute;                                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.IsRoomEntered
struct UChatGMEManager_IsRoomEntered_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.IsAudioSendEnabled
struct UChatGMEManager_IsAudioSendEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.IsAudioRecvEnabled
struct UChatGMEManager_IsAudioRecvEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.IsAudioPlayDeviceEnabled
struct UChatGMEManager_IsAudioPlayDeviceEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.IsAudioCaptureDeviceEnabled
struct UChatGMEManager_IsAudioCaptureDeviceEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.InnerEnableMic
struct UChatGMEManager_InnerEnableMic_Params
{
public:
	bool                                         InEnable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNativeWidget.ChatGMEManager.InitGME
struct UChatGMEManager_InitGME_Params
{
public:
	class FString                                InEnvId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InGMEUserID;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNativeWidget.ChatGMEManager.Init
struct UChatGMEManager_Init_Params
{
public:
	class FString                                InUserId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InAppId;                                           // 0x10(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InEnvId;                                           // 0x20(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GetSpeakerState
struct UChatGMEManager_GetSpeakerState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GetSpeakerList
struct UChatGMEManager_GetSpeakerList_Params
{
public:
	TArray<struct FChatGMEDataDeviceInfo>        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GetRecordingLocalFilePath
struct UChatGMEManager_GetRecordingLocalFilePath_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GetMicState
struct UChatGMEManager_GetMicState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GetMicList
struct UChatGMEManager_GetMicList_Params
{
public:
	TArray<struct FChatGMEDataDeviceInfo>        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GetInstance
struct UChatGMEManager_GetInstance_Params
{
public:
	class UChatGMEManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GameUploadRecordedFileCompatible
struct UChatGMEManager_GameUploadRecordedFileCompatible_Params
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Token;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GameUploadRecordedFile
struct UChatGMEManager_GameUploadRecordedFile_Params
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GameStartRecording
struct UChatGMEManager_GameStartRecording_Params
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GameSetSpeakerVolume
struct UChatGMEManager_GameSetSpeakerVolume_Params
{
public:
	int32                                        Volume;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GameSetMicVolume
struct UChatGMEManager_GameSetMicVolume_Params
{
public:
	int32                                        MicVolume;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GamePlayRecordedFile
struct UChatGMEManager_GamePlayRecordedFile_Params
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GameGetVoiceFileDuration
struct UChatGMEManager_GameGetVoiceFileDuration_Params
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GameGetSpeakerVolume
struct UChatGMEManager_GameGetSpeakerVolume_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GameGetSpeakerLevel
struct UChatGMEManager_GameGetSpeakerLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GameGetMicVolume
struct UChatGMEManager_GameGetMicVolume_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GameGetMicLevel
struct UChatGMEManager_GameGetMicLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GameDownloadRecordedFileeCompatible
struct UChatGMEManager_GameDownloadRecordedFileeCompatible_Params
{
public:
	class FString                                FileID;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FilePath;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Token;                                             // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNativeWidget.ChatGMEManager.GameDownloadRecordedFile
struct UChatGMEManager_GameDownloadRecordedFile_Params
{
public:
	class FString                                FileID;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FilePath;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.ExitRoom
struct UChatGMEManager_ExitRoom_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNativeWidget.ChatGMEManager.EnterRoomCompatible
struct UChatGMEManager_EnterRoomCompatible_Params
{
public:
	class FString                                InRoomId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GmeToken;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function LimNativeWidget.ChatGMEManager.EnterRoom
struct UChatGMEManager_EnterRoom_Params
{
public:
	class FString                                InRoomId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChatGMERoomType                  InRoomType;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF[0x6];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.EnableSpeaker
struct UChatGMEManager_EnableSpeaker_Params
{
public:
	bool                                         InEnable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.EnableMic
struct UChatGMEManager_EnableMic_Params
{
public:
	bool                                         InEnable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.EnableAudioSend
struct UChatGMEManager_EnableAudioSend_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.EnableAudioRecv
struct UChatGMEManager_EnableAudioRecv_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.EnableAudioPlayDevice
struct UChatGMEManager_EnableAudioPlayDevice_Params
{
public:
	bool                                         InEnable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.ChatGMEManager.EnableAudioCaptureDevice
struct UChatGMEManager_EnableAudioCaptureDevice_Params
{
public:
	bool                                         InEnable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LimNativeWidget.ChatGMEManager.CheckPlatformMicPermission
struct UChatGMEManager_CheckPlatformMicPermission_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNativeWidget.LimChatManager.TranslateText
struct ULimChatManager_TranslateText_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Lang;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExtraInfo;                                         // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNativeWidget.LimChatManager.SwitchConvTo
struct ULimChatManager_SwitchConvTo_Params
{
public:
	struct FChatListConvData                     InConvData;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RefreshConvList;                                   // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_112[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.LimChatManager.SetCtxLanguage
struct ULimChatManager_SetCtxLanguage_Params
{
public:
	class FString                                Lang;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LimNativeWidget.LimChatManager.SetConvRead
struct ULimChatManager_SetConvRead_Params
{
public:
	struct FChatListConvData                     ConvData;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LimNativeWidget.LimChatManager.SetConvMsgRead
struct ULimChatManager_SetConvMsgRead_Params
{
public:
	class FString                                ConvID;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MsgId;                                             // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LimNativeWidget.LimChatManager.SendVoiceMessageToConv
struct ULimChatManager_SendVoiceMessageToConv_Params
{
public:
	class FString                                ConvID;                                            // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_117[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FileID;                                            // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LimNativeWidget.LimChatManager.SendTextMessageToConv
struct ULimChatManager_SendTextMessageToConv_Params
{
public:
	class FString                                ConvID;                                            // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNativeWidget.LimChatManager.SendTextMessage
struct ULimChatManager_SendTextMessage_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// Function LimNativeWidget.LimChatManager.PostInitChatManager
struct ULimChatManager_PostInitChatManager_Params
{
public:
	struct FLimNativeReportConfig                ReportConfig;                                      // 0x0(0xC8)(Parm, NativeAccessSpecifierPublic)
	struct FLimNativeParkConfig                  ParkConfig;                                        // 0xC8(0x58)(Parm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNativeWidget.LimChatManager.OpenChatUI
struct ULimChatManager_OpenChatUI_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChatWidgetPath;                                    // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZOrder;                                            // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           ReturnValue;                                       // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnTextTranslateDynamicDelegate__DelegateSignature
struct ULimChatManager_OnTextTranslateDynamicDelegate__DelegateSignature_Params
{
public:
	bool                                         TranslateRes;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TranslatedText;                                    // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Translator;                                        // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExtraInfo;                                         // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnSendMessageCallBackDynamicDelegate__DelegateSignature
struct ULimChatManager_OnSendMessageCallBackDynamicDelegate__DelegateSignature_Params
{
public:
	struct FChatListMessageData                  MsgCallBack;                                       // 0x0(0x98)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnReceiveMessageDynamicDelegate__DelegateSignature
struct ULimChatManager_OnReceiveMessageDynamicDelegate__DelegateSignature_Params
{
public:
	struct FChatListMessageData                  Msg;                                               // 0x0(0x98)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnReceiveLogicMessageDynamicDelegate__DelegateSignature
struct ULimChatManager_OnReceiveLogicMessageDynamicDelegate__DelegateSignature_Params
{
public:
	int32                                        MsgType;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLimNativeDataBizFullObj              NativeMsg;                                         // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnNewSendMessageCallBackDynamicDelegate__DelegateSignature
struct ULimChatManager_OnNewSendMessageCallBackDynamicDelegate__DelegateSignature_Params
{
public:
	struct FNewChatListMessageData               MsgCallBack;                                       // 0x0(0x178)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RetData;                                           // 0x178(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Code;                                              // 0x188(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_122[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x178 (0x178 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnNewReceiveMessageDynamicDelegate__DelegateSignature
struct ULimChatManager_OnNewReceiveMessageDynamicDelegate__DelegateSignature_Params
{
public:
	struct FNewChatListMessageData               Msg;                                               // 0x0(0x178)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function LimNativeWidget.LimChatManager.OnMiscConfigInfoHandle
struct ULimChatManager_OnMiscConfigInfoHandle_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeGetMiscConfigInfoCallBack   RetData;                                           // 0x10(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function LimNativeWidget.LimChatManager.OnMessageSend
struct ULimChatManager_OnMessageSend_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnSendMsgCallBack           RetData;                                           // 0x10(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function LimNativeWidget.LimChatManager.OnMessageReceived
struct ULimChatManager_OnMessageReceived_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnMsgReceivedEventCallBack  RetData;                                           // 0x10(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnLoginDynamicDelegate__DelegateSignature
struct ULimChatManager_OnLoginDynamicDelegate__DelegateSignature_Params
{
public:
	bool                                         LoginRes;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_124[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Code;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RetData;                                           // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function LimNativeWidget.LimChatManager.OnLogin
struct ULimChatManager_OnLogin_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnLoginCallBack             RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function LimNativeWidget.LimChatManager.OnLogicMsgReceived
struct ULimChatManager_OnLogicMsgReceived_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnMsgLogicReceivedEventCallBack RetData;                                           // 0x10(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNativeWidget.LimChatManager.OnLog
struct ULimChatManager_OnLog_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Data;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnInputBoxStateChangeDelegate__DelegateSignature
struct ULimChatManager_OnInputBoxStateChangeDelegate__DelegateSignature_Params
{
public:
	bool                                         bUp;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Left;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Top;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Right;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Bottom;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnGetUsersCallBackDynamicDelegate__DelegateSignature
struct ULimChatManager_OnGetUsersCallBackDynamicDelegate__DelegateSignature_Params
{
public:
	TArray<struct FChatListUserData>             UserDataList;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function LimNativeWidget.LimChatManager.OnGetUserListState
struct ULimChatManager_OnGetUserListState_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetUsersStateCallBack     RetData;                                           // 0x10(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function LimNativeWidget.LimChatManager.OnGetUserListInfo
struct ULimChatManager_OnGetUserListInfo_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetUsersCallBack          RetData;                                           // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function LimNativeWidget.LimChatManager.OnGetUserInfo
struct ULimChatManager_OnGetUserInfo_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetUserCallBack           RetData;                                           // 0x10(0x168)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnGetUserCallBackDynamicDelegate__DelegateSignature
struct ULimChatManager_OnGetUserCallBackDynamicDelegate__DelegateSignature_Params
{
public:
	struct FChatListUserData                     UserData;                                          // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function LimNativeWidget.LimChatManager.OnGetTextTranslateHandle
struct ULimChatManager_OnGetTextTranslateHandle_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeTextTranslateCallBack       RetData;                                           // 0x10(0x88)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LimNativeWidget.LimChatManager.OnGetNetStatHandle
struct ULimChatManager_OnGetNetStatHandle_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        RetData;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnGetNetStatDynamicDelegate__DelegateSignature
struct ULimChatManager_OnGetNetStatDynamicDelegate__DelegateSignature_Params
{
public:
	int32                                        Val;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function LimNativeWidget.LimChatManager.OnGetMessageInRange
struct ULimChatManager_OnGetMessageInRange_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetMsgsCallBack           RetData;                                           // 0x10(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnGetMessageDataDynamicDelegate__DelegateSignature
struct ULimChatManager_OnGetMessageDataDynamicDelegate__DelegateSignature_Params
{
public:
	int32                                        Code;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ConvID;                                            // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnGetFriendsCallBackDynamicDelegate__DelegateSignature
struct ULimChatManager_OnGetFriendsCallBackDynamicDelegate__DelegateSignature_Params
{
public:
	TArray<struct FChatListUserData>             FriendList;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function LimNativeWidget.LimChatManager.OnGetFriends
struct ULimChatManager_OnGetFriends_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetFriendCallBack         RetData;                                           // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function LimNativeWidget.LimChatManager.OnGetConnStateHandle
struct ULimChatManager_OnGetConnStateHandle_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeGetConnStateCallBack        RetData;                                           // 0x10(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnGetConnStatDynamicDelegate__DelegateSignature
struct ULimChatManager_OnGetConnStatDynamicDelegate__DelegateSignature_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Val;                                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnConvsGetDynamicDelegate__DelegateSignature
struct ULimChatManager_OnConvsGetDynamicDelegate__DelegateSignature_Params
{
public:
	bool                                         GetConvRes;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function LimNativeWidget.LimChatManager.OnConvRead
struct ULimChatManager_OnConvRead_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnSetConvReadCallBack       RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function LimNativeWidget.LimChatManager.OnConvListGet
struct ULimChatManager_OnConvListGet_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnConvsGetCallBack          RetData;                                           // 0x10(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnConvHandleDynamicDelegate__DelegateSignature
struct ULimChatManager_OnConvHandleDynamicDelegate__DelegateSignature_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLimNativeConvHandleCallBackData      Data;                                              // 0x8(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function LimNativeWidget.LimChatManager.OnConvHandle
struct ULimChatManager_OnConvHandle_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnConvHandleCallBack        RetData;                                           // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function LimNativeWidget.LimChatManager.OnConvChatLevelConfig
struct ULimChatManager_OnConvChatLevelConfig_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetConvChatLevelConfigCallBack RetData;                                           // 0x10(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnConfigInfoHandleDynamicDelegate__DelegateSignature
struct ULimChatManager_OnConfigInfoHandleDynamicDelegate__DelegateSignature_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Val;                                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction LimNativeWidget.LimChatManager.OnConfigGetChatLevlDynamicDelegate__DelegateSignature
struct ULimChatManager_OnConfigGetChatLevlDynamicDelegate__DelegateSignature_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function LimNativeWidget.LimChatManager.Login
struct ULimChatManager_Login_Params
{
public:
	class FString                                InAppId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InAppUserID;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InToken;                                           // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InRoleID;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function LimNativeWidget.LimChatManager.InitChatManager
struct ULimChatManager_InitChatManager_Params
{
public:
	struct FLimNativeInitConfig                  InitConfig;                                        // 0x0(0x78)(Parm, NativeAccessSpecifierPublic)
	class FString                                InEnvId;                                           // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InGMEUserID;                                       // 0x88(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.LimChatManager.GetUserListState
struct ULimChatManager_GetUserListState_Params
{
public:
	TArray<class FString>                        InUserIDList;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.LimChatManager.GetUserListInfo
struct ULimChatManager_GetUserListInfo_Params
{
public:
	TArray<class FString>                        InUserIDList;                                      // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.LimChatManager.GetUserInfo
struct ULimChatManager_GetUserInfo_Params
{
public:
	class FString                                InUserId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LimNativeWidget.LimChatManager.GetMessageInRange
struct ULimChatManager_GetMessageInRange_Params
{
public:
	class FString                                ConvID;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FromMsgId;                                         // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ToMsgId;                                           // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LimNativeWidget.LimChatManager.GetMessage
struct ULimChatManager_GetMessage_Params
{
public:
	struct FChatListConvData                     TargetConv;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.LimChatManager.GetLimSlssvrTest
struct ULimChatManager_GetLimSlssvrTest_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.LimChatManager.GetLimSlssvrDomesticTest
struct ULimChatManager_GetLimSlssvrDomesticTest_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.LimChatManager.GetLimSlssvrDomestic
struct ULimChatManager_GetLimSlssvrDomestic_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.LimChatManager.GetLimSlssvr
struct ULimChatManager_GetLimSlssvr_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.LimChatManager.GetLimSDKRegionDomestic
struct ULimChatManager_GetLimSDKRegionDomestic_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.LimChatManager.GetLimSDKRegion
struct ULimChatManager_GetLimSDKRegion_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LimNativeWidget.LimChatManager.GetLimGameID
struct ULimChatManager_GetLimGameID_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LimNativeWidget.LimChatManager.GetInstance
struct ULimChatManager_GetInstance_Params
{
public:
	class ULimChatManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LimNativeWidget.LimChatManager.GetFarlightDomainDomestic
struct ULimChatManager_GetFarlightDomainDomestic_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LimNativeWidget.LimChatManager.GetFarlightDomain
struct ULimChatManager_GetFarlightDomain_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LimNativeWidget.LimChatManager.GetConvMessage
struct ULimChatManager_GetConvMessage_Params
{
public:
	class FString                                ConvID;                                            // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FromMsgId;                                         // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ToMsgId;                                           // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LimNativeWidget.LimChatManager.DiscardConv
struct ULimChatManager_DiscardConv_Params
{
public:
	class FString                                ConvID;                                            // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function LimNativeWidget.LimChatManager.CheckTargetIsContainIn
struct ULimChatManager_CheckTargetIsContainIn_Params
{
public:
	struct FChatListConvData                     InConvData;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function LimNativeWidget.LimNativeWidgetSettings.GetInstance
struct ULimNativeWidgetSettings_GetInstance_Params
{
public:
	class ULimNativeWidgetSettings*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LimNativeWidget.NertcManager.UpdateSelfPosition
struct UNertcManager_UpdateSelfPosition_Params
{
public:
	struct FVector                               InSelfPosition;                                    // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              InSelfRotator;                                     // 0xC(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LimNativeWidget.NertcManager.UpdateAudioRecvRange
struct UNertcManager_UpdateAudioRecvRange_Params
{
public:
	int32                                        InRange;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNativeWidget.NertcManager.SwitchRoom
struct UNertcManager_SwitchRoom_Params
{
public:
	class FString                                RoomID;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppToken;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Uid;                                               // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TeamID;                                            // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AudioDistance;                                     // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.NertcManager.SetSubscribeAudioOnlyBy
struct UNertcManager_SetSubscribeAudioOnlyBy_Params
{
public:
	TArray<int32>                                OpenIDList;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.NertcManager.SetSubscribeAudioBlocklist
struct UNertcManager_SetSubscribeAudioBlocklist_Params
{
public:
	TArray<int32>                                OpenIDList;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.NertcManager.SetSubscribeAudioAllowlist
struct UNertcManager_SetSubscribeAudioAllowlist_Params
{
public:
	TArray<int32>                                OpenIDList;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LimNativeWidget.NertcManager.SetRangeAudioTeamID
struct UNertcManager_SetRangeAudioTeamID_Params
{
public:
	int32                                        TeamID;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.NertcManager.SetRangeAudioMode
struct UNertcManager_SetRangeAudioMode_Params
{
public:
	enum class EChatGMERangeAudioMode            InAudioMode;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.NertcManager.SetClientRole
struct UNertcManager_SetClientRole_Params
{
public:
	bool                                         bBroadCast;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNativeWidget.NertcManager.SetAudioSendAndRecvRules
struct UNertcManager_SetAudioSendAndRecvRules_Params
{
public:
	enum class EChatGMEAudioRouteSendType        InSendType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                InSendOpenIDList;                                  // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChatGMEAudioRouteRecvType        InRecvType;                                        // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                InRecvOpenIDList;                                  // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.NertcManager.SelectSpeak
struct UNertcManager_SelectSpeak_Params
{
public:
	class FString                                InDeviceID;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.NertcManager.SelectMic
struct UNertcManager_SelectMic_Params
{
public:
	class FString                                InDeviceID;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction LimNativeWidget.NertcManager.OnUserRoomStateChange__DelegateSignature
struct UNertcManager_OnUserRoomStateChange__DelegateSignature_Params
{
public:
	bool                                         EnterRoom;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Uid;                                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LimNativeWidget.NertcManager.OnUserInfoUpdateDelegate__DelegateSignature
struct UNertcManager_OnUserInfoUpdateDelegate__DelegateSignature_Params
{
public:
	struct FNertcUserUpdateData                  UserData;                                          // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction LimNativeWidget.NertcManager.OnNertcConnectionChange__DelegateSignature
struct UNertcManager_OnNertcConnectionChange__DelegateSignature_Params
{
public:
	int32                                        State;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Reason;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction LimNativeWidget.NertcManager.OnLocalUserVolumeChanged__DelegateSignature
struct UNertcManager_OnLocalUserVolumeChanged__DelegateSignature_Params
{
public:
	int32                                        Volume;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVad;                                              // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LimNativeWidget.NertcManager.OnExitRoomDelegate__DelegateSignature
struct UNertcManager_OnExitRoomDelegate__DelegateSignature_Params
{
public:
	int32                                        Result;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction LimNativeWidget.NertcManager.OnEnterRoomDelegate__DelegateSignature
struct UNertcManager_OnEnterRoomDelegate__DelegateSignature_Params
{
public:
	int64                                        RoomID;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Uid;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Elapsed;                                           // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction LimNativeWidget.NertcManager.OnAudioDeviceStateChanged__DelegateSignature
struct UNertcManager_OnAudioDeviceStateChanged__DelegateSignature_Params
{
public:
	bool                                         bChanged;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction LimNativeWidget.NertcManager.OnAndroidPermissionResult__DelegateSignature
struct UNertcManager_OnAndroidPermissionResult__DelegateSignature_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.NertcManager.MuteLocalStream
struct UNertcManager_MuteLocalStream_Params
{
public:
	bool                                         bMute;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LimNativeWidget.NertcManager.MediaMute
struct UNertcManager_MediaMute_Params
{
public:
	int32                                        Uid;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMute;                                             // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.NertcManager.IsRoomEntered
struct UNertcManager_IsRoomEntered_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.NertcManager.IsInRTCRoom
struct UNertcManager_IsInRTCRoom_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNativeWidget.NertcManager.InnerEnterRoom
struct UNertcManager_InnerEnterRoom_Params
{
public:
	class FString                                RoomID;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppToken;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Uid;                                               // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.NertcManager.InnerEnableMic
struct UNertcManager_InnerEnableMic_Params
{
public:
	bool                                         InEnable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.NertcManager.Init
struct UNertcManager_Init_Params
{
public:
	class FString                                Appkey;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.NertcManager.GetSpeakerList
struct UNertcManager_GetSpeakerList_Params
{
public:
	TArray<struct FChatGMEDataDeviceInfo>        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNativeWidget.NertcManager.GetMicList
struct UNertcManager_GetMicList_Params
{
public:
	TArray<struct FChatGMEDataDeviceInfo>        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LimNativeWidget.NertcManager.GetInstance
struct UNertcManager_GetInstance_Params
{
public:
	class UNertcManager*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LimNativeWidget.NertcManager.GameSetSpeakerVolume
struct UNertcManager_GameSetSpeakerVolume_Params
{
public:
	int32                                        Volume;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LimNativeWidget.NertcManager.GameSetMicVolume
struct UNertcManager_GameSetMicVolume_Params
{
public:
	int32                                        MicVolume;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNativeWidget.NertcManager.EnterRoom
struct UNertcManager_EnterRoom_Params
{
public:
	class FString                                RoomID;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppToken;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Uid;                                               // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.NertcManager.EnableSpeaker
struct UNertcManager_EnableSpeaker_Params
{
public:
	bool                                         InEnable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.NertcManager.EnableRangeVoice
struct UNertcManager_EnableRangeVoice_Params
{
public:
	bool                                         bEnbale;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LimNativeWidget.NertcManager.EnableMic
struct UNertcManager_EnableMic_Params
{
public:
	bool                                         InEnable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function LimNativeWidget.NertcManager.EnabelAudioIndication
struct UNertcManager_EnabelAudioIndication_Params
{
public:
	bool                                         InEnable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Millions;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnbaleLocal;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D9[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}



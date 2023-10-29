#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class LimNativeWidget.AudioPermissionHelperProxy
class UAudioPermissionHelperProxy : public UObject
{
public:
	uint8                                        Pad_9D[0x20];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAudioPermissionHelperProxy* GetDefaultObj();

	void OnAndroidPermissionResult(TArray<class FString>& Permissions, TArray<bool>& Results);
	enum class EIOSAudioPermissionState CheckIOSAudioPermission();
	bool CheckAndroidAudioPermission();
	void AcquireIOSAudioPermission();
	void AcquireAndroidAudioPermission();
};

// 0x770 (0x798 - 0x28)
// Class LimNativeWidget.ChatGMEManager
class UChatGMEManager : public UObject
{
public:
	uint8                                        Pad_D8[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLimNativeLowLevelWrapper             Ctx;                                               // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEnterRoom;                                       // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnExitRoom;                                        // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRoomDisconnect;                                  // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUserUpdate;                                      // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnNumberOfUsersUpdate;                             // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_DE[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnNumberOfAudioStreamsUpdate;                      // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnReconnectStart;                                  // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E0[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnReconnectSuccess;                                // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E1[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSwitchRoom;                                      // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChangeRoomType;                                  // 0x1A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E3[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAudioDataEmpty;                                  // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRoomSharingStart;                                // 0x1F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRoomSharingStop;                                 // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRecordCompleted;                                 // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRecordPreviewCompleted;                          // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRecordMixCompleted;                              // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAudioRouteUpdate;                                // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSpeakerDefaultDeviceChanged;                     // 0x2E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSpeakerNewDevice;                                // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSpeakerLostDevice;                               // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMicNewDevice;                                    // 0x360(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMicLostDevice;                                   // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMicDefaultDeviceChanged;                         // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAudioRouteChanged;                               // 0x3D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUserVolumes;                                     // 0x400(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F2[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChangeRoomQuality;                               // 0x428(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAccompanyFinish;                                 // 0x450(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnServerAudioRouteEvent;                           // 0x478(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCustomDataUpdate;                                // 0x4A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRealtimeASR;                                     // 0x4C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChorusEvent;                                     // 0x4F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChangeTeamId;                                    // 0x518(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAudioReady;                                      // 0x540(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHardwareTestRecordFinish;                        // 0x568(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHardwareTestPreviewFinish;                       // 0x590(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPTTRecordComplete;                               // 0x5B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPTTUploadComplete;                               // 0x5E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPTTDownloadComplete;                             // 0x608(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPTTPlayComplete;                                 // 0x630(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_101[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPTTSpeech2TextComplete;                          // 0x658(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_102[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPTTStreamingRecognitionComplete;                 // 0x680(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_103[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPTTStreamingRecognitionIsRunning;                // 0x6A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_104[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRoomManagementOperator;                          // 0x6D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_105[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPermissionResult;                                // 0x6F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_106[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChatGMEManager* GetDefaultObj();

	void UpdateSelfPosition(const struct FVector& InSelfPosition);
	void UpdateAudioRecvRange(int32 InRange);
	void UnRegisterLuaEvent();
	void Uninit();
	bool SwitchRoomCompatible(const class FString& InRoomId, const class FString& GmeToken);
	bool SwitchRoom(const class FString& InRoomId);
	void SetRangeAudioTeamID(int32 InTeamId);
	void SetRangeAudioMode(enum class EChatGMERangeAudioMode InAudioMode);
	void SetAudioSendAndRecvRules(enum class EChatGMEAudioRouteSendType SendType, const TArray<class FString>& SendOpenIDList, enum class EChatGMEAudioRouteRecvType RecvType, const TArray<class FString>& RecvOpenIDList);
	void SelectSpeak(const class FString& InDeviceID);
	void SelectMic(const class FString& InDeviceID);
	void PreInit();
	void OnUserVolumesDelegate__DelegateSignature(const struct FChatGMEDataUserVolumes& InData);
	void OnUserUpdateDelegate__DelegateSignature(const struct FChatGMEDataUserUpdate& InData);
	void OnRoomManagementOperatorDelegate__DelegateSignature(const struct FChatGMEDataRoomOperator& InData);
	void OnResultDelegate__DelegateSignature(const struct FChatGMEDataResult& Result);
	void OnRecordCompletedDelegate__DelegateSignature(const struct FChatGMEDataRecordCompleted& InData);
	void OnNumberOfUsersUpdateDelegate__DelegateSignature(const struct FChatGMEDataNumberOfUserUpdate& InData);
	void OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature(const struct FChatGMEDataNumberOfAudioStreamsUpdate& InData);
	void OnNotifyFileInfoDelegate__DelegateSignature(const struct FChatGMEDataFileInfo& InData);
	void OnNotifyDelegate__DelegateSignature(const class FString& InData);
	void OnGetAuthBuffer(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetGMETokenCallBack& RetData);
	void OnDeviceChangedDelegate__DelegateSignature(const struct FChatGMEDataDeviceInfo& InData);
	void OnChangeRoomTypeDelegate__DelegateSignature(const struct FChatGMEDataChangeRoomType& InData);
	void OnChangeRoomQualityDelegate__DelegateSignature(const struct FChatGMEDataRoomQuality& InData);
	void OnAndroidPermissionResult__DelegateSignature(bool bSuccess);
	void MediaMute(const class FString& InUserId, bool InMute);
	bool IsRoomEntered();
	bool IsAudioSendEnabled();
	bool IsAudioRecvEnabled();
	bool IsAudioPlayDeviceEnabled();
	bool IsAudioCaptureDeviceEnabled();
	void InnerEnableMic(bool InEnable);
	void InitGME(const class FString& InEnvId, const class FString& InGMEUserID);
	void Init(const class FString& InUserId, const class FString& InAppId, const class FString& InEnvId);
	bool GetSpeakerState();
	TArray<struct FChatGMEDataDeviceInfo> GetSpeakerList();
	class FString GetRecordingLocalFilePath();
	bool GetMicState();
	TArray<struct FChatGMEDataDeviceInfo> GetMicList();
	class UChatGMEManager* GetInstance();
	void GameUploadRecordedFileCompatible(const class FString& FilePath, const class FString& Token);
	void GameUploadRecordedFile(const class FString& FilePath);
	void GameStopRecording();
	void GameStopPlayFile();
	void GameStartRecording(const class FString& FilePath);
	int32 GameSetSpeakerVolume(int32 Volume);
	int32 GameSetMicVolume(int32 MicVolume);
	void GameResumeRecording();
	void GamePlayRecordedFile(const class FString& FilePath);
	void GamePauseRecording();
	int32 GameGetVoiceFileDuration(const class FString& FilePath);
	int32 GameGetSpeakerVolume();
	int32 GameGetSpeakerLevel();
	int32 GameGetMicVolume();
	int32 GameGetMicLevel();
	void GameDownloadRecordedFileeCompatible(const class FString& FileID, const class FString& FilePath, const class FString& Token);
	void GameDownloadRecordedFile(const class FString& FileID, const class FString& FilePath);
	void GameCancleRecording();
	bool ExitRoom();
	bool EnterRoomCompatible(const class FString& InRoomId, const class FString& GmeToken);
	bool EnterRoom(const class FString& InRoomId, enum class EChatGMERoomType InRoomType);
	void EnableSpeaker(bool InEnable);
	void EnableMic(bool InEnable);
	void EnableAudioSend(bool bEnable);
	void EnableAudioRecv(bool bEnable);
	void EnableAudioPlayDevice(bool InEnable);
	void EnableAudioCaptureDevice(bool InEnable);
	void DestroyInstance();
	void DeleteCacheFiles();
	int32 CheckPlatformMicPermission();
};

// 0xF8 (0x120 - 0x28)
// Class LimNativeWidget.ChatListEmojiEntryData
class UChatListEmojiEntryData : public UObject
{
public:
	class FString                                Tag;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Image;                                             // 0x40(0xE0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChatListEmojiEntryData* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class LimNativeWidget.ChatListEntryDataBase
class UChatListEntryDataBase : public UObject
{
public:
	enum class ELimNativeMsgContentType          MessageType;                                       // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_111[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             Timestamp;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SenderId;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SenderName;                                        // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SenderAvatarUrl;                                   // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeMsgState                MsgState;                                          // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_112[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ConvID;                                            // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_113[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MsgId;                                             // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChatListEntryDataBase* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class LimNativeWidget.ChatListEntryDataText
class UChatListEntryDataText : public UChatListEntryDataBase
{
public:
	class FString                                Message;                                           // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChatListEntryDataText* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class LimNativeWidget.ChatListEntryDataSystem
class UChatListEntryDataSystem : public UChatListEntryDataBase
{
public:
	class FString                                Message;                                           // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChatListEntryDataSystem* GetDefaultObj();

};

// 0x38 (0xD0 - 0x98)
// Class LimNativeWidget.ChatListEntryDataVoice
class UChatListEntryDataVoice : public UChatListEntryDataBase
{
public:
	class FString                                UUID;                                              // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Size;                                              // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Duration;                                          // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChatListEntryDataVoice* GetDefaultObj();

};

// 0x48 (0xE0 - 0x98)
// Class LimNativeWidget.ChatListEntryDataImage
class UChatListEntryDataImage : public UChatListEntryDataBase
{
public:
	class FString                                UUID;                                              // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Fmt;                                               // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Size;                                              // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChatListEntryDataImage* GetDefaultObj();

};

// 0x58 (0xF0 - 0x98)
// Class LimNativeWidget.ChatListEntryDataCustomEmotion
class UChatListEntryDataCustomEmotion : public UChatListEntryDataBase
{
public:
	class FString                                PackName;                                          // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativePackType                PackType;                                          // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EmotionName;                                       // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EmotionId;                                         // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EmotionUrl;                                        // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChatListEntryDataCustomEmotion* GetDefaultObj();

};

// 0x68 (0x100 - 0x98)
// Class LimNativeWidget.ChatListEntryDataShaderedGameCard
class UChatListEntryDataShaderedGameCard : public UChatListEntryDataBase
{
public:
	int32                                        Type;                                              // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Text;                                              // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Detail;                                            // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Img;                                               // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChatListEntryDataShaderedGameCard* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class LimNativeWidget.ChatListUserEntryData
class UChatListUserEntryData : public UObject
{
public:
	class FString                                Uid;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NickName;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarUrl;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarFrameUrl;                                    // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeUserSexType             Sex;                                               // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VipLevel;                                          // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsShowVip;                                         // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeFriendStateType         OnlineState;                                       // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UnreadCount;                                       // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChatListUserEntryData* GetDefaultObj();

};

// 0x2F8 (0x320 - 0x28)
// Class LimNativeWidget.LimChatManager
class ULimChatManager : public UObject
{
public:
	uint8                                        Pad_1BD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULimNative*                            LimNativeInstance;                                 // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLimNativeLowLevelWrapper             Ctx;                                               // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                CurrentLanguage;                                   // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoginCallBackHandle;                             // 0x58(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConvsGetCallBackHandle;                          // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNewGetMessageHandle;                             // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMessageReceivedHandle;                           // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNewMessageReceivedHandle;                        // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMessageSendCallBackHandle;                       // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNewMessageSendCallBackHandle;                    // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReceiveLogicMsgHandle;                           // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConvDiscardHandle;                               // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConfigInfoHandle;                                // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetConnStatHandle;                               // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNetStatHandle;                                   // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetConfigChatLevelHandle;                        // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextTranslateDynamicDelegate;                    // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                SelfRoleID;                                        // 0x138(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChatListConvData                     CurrentConvData;                                   // 0x148(0x18)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLimNativeConversationData>    ConvListFullData;                                  // 0x160(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNewChatListMessageData>       ChatMsgDataList;                                   // 0x170(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLimNativeConvChatLevelConfigData> ChatLevelDataList;                                 // 0x180(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FChatListConvData, class FString> MsgIDMap;                                          // 0x190(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FChatListUserData>             PeerDataList;                                      // 0x1E0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChatListUserData>             FriendDataList;                                    // 0x1F0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FChatListConvData, class FString> BaseMsgIDMap;                                      // 0x200(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<struct FChatListConvData, int32>        UnreadMsgMap;                                      // 0x250(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetFriendsCallBackHandle;                        // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetUserHandle;                                   // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetUserListHandle;                               // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetUserListStateHandle;                          // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRedHintUpdateHandle;                             // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInputBoxChangeHandle;                            // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULimChatManager* GetDefaultObj();

	void UnRegisterLuaEvent();
	void UnInitChatManager();
	void TranslateText(const class FString& Text, const class FString& Lang, const class FString& ExtraInfo);
	void SwitchConvTo(struct FChatListConvData& InConvData, bool RefreshConvList);
	void SetCtxLanguage(const class FString& Lang);
	void SetConvRead(struct FChatListConvData& ConvData);
	void SetConvMsgRead(const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& MsgId, const class FString& Extra);
	void SendVoiceMessageToConv(const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& FileID, const class FString& Extra);
	void SendTextMessageToConv(const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Message, const class FString& Extra);
	void SendTextMessage(const class FString& Message, const class FString& Extra);
	void PostInitChatManager(const struct FLimNativeReportConfig& ReportConfig, const struct FLimNativeParkConfig& ParkConfig);
	class UUserWidget* OpenChatUI(class UObject* WorldContextObject, const class FString& ChatWidgetPath, int32 ZOrder);
	void OnTextTranslateDynamicDelegate__DelegateSignature(bool TranslateRes, const class FString& TranslatedText, const class FString& Translator, const class FString& ExtraInfo);
	void OnSendMessageCallBackDynamicDelegate__DelegateSignature(struct FChatListMessageData& MsgCallBack);
	void OnRedHintUpdateDynamicDelegate__DelegateSignature();
	void OnReceiveMessageDynamicDelegate__DelegateSignature(struct FChatListMessageData& Msg);
	void OnReceiveLogicMessageDynamicDelegate__DelegateSignature(int32 MsgType, struct FLimNativeDataBizFullObj& NativeMsg);
	void OnOpenChatUI();
	void OnNewSendMessageCallBackDynamicDelegate__DelegateSignature(struct FNewChatListMessageData& MsgCallBack, const class FString& RetData, int32 Code);
	void OnNewReceiveMessageDynamicDelegate__DelegateSignature(struct FNewChatListMessageData& Msg);
	void OnMiscConfigInfoHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetMiscConfigInfoCallBack& RetData);
	void OnMessageSend(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSendMsgCallBack& RetData);
	void OnMessageReceived(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgReceivedEventCallBack& RetData);
	void OnLoginDynamicDelegate__DelegateSignature(bool LoginRes, int32 Code, const class FString& RetData);
	void OnLogin(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnLoginCallBack& RetData);
	void OnLogicMsgReceived(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgLogicReceivedEventCallBack& RetData);
	void OnLog(struct FLimNativeLowLevelWrapper& InWrapper, const class FString& Data);
	void OnInputBoxStateChangeDelegate__DelegateSignature(bool bUp, int32 Left, int32 Top, int32 Right, int32 Bottom);
	void OnGetUsersStateCallBackDynamicDelegate__DelegateSignature();
	void OnGetUsersCallBackDynamicDelegate__DelegateSignature(TArray<struct FChatListUserData>& UserDataList);
	void OnGetUserListState(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUsersStateCallBack& RetData);
	void OnGetUserListInfo(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUsersCallBack& RetData);
	void OnGetUserInfo(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUserCallBack& RetData);
	void OnGetUserCallBackDynamicDelegate__DelegateSignature(struct FChatListUserData& UserData);
	void OnGetTextTranslateHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeTextTranslateCallBack& RetData);
	void OnGetNetStatHandle(struct FLimNativeLowLevelWrapper& InWrapper, int32 RetData);
	void OnGetNetStatDynamicDelegate__DelegateSignature(int32 Val);
	void OnGetMessageInRange(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetMsgsCallBack& RetData);
	void OnGetMessageDataDynamicDelegate__DelegateSignature(int32 Code, const class FString& ConvID, enum class ELimNativeConvType ConvType);
	void OnGetFriendsCallBackDynamicDelegate__DelegateSignature(TArray<struct FChatListUserData>& FriendList);
	void OnGetFriends(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetFriendCallBack& RetData);
	void OnGetConnStateHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetConnStateCallBack& RetData);
	void OnGetConnStatDynamicDelegate__DelegateSignature(bool Result, int32 Val);
	void OnConvsGetDynamicDelegate__DelegateSignature(bool GetConvRes);
	void OnConvRead(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSetConvReadCallBack& RetData);
	void OnConvListGet(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnConvsGetCallBack& RetData);
	void OnConvHandleDynamicDelegate__DelegateSignature(bool Result, struct FLimNativeConvHandleCallBackData& Data);
	void OnConvHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnConvHandleCallBack& RetData);
	void OnConvChatLevelConfig(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetConvChatLevelConfigCallBack& RetData);
	void OnConfigInfoHandleDynamicDelegate__DelegateSignature(bool Result, int32 Val);
	void OnConfigGetChatLevlDynamicDelegate__DelegateSignature(bool Result);
	void Logout();
	void Login(const class FString& InAppId, const class FString& InAppUserID, const class FString& InToken, const class FString& InRoleID, const class FString& InExtra);
	void InitChatManager(const struct FLimNativeInitConfig& InitConfig, const class FString& InEnvId, const class FString& InGMEUserID);
	void GetUserListState(TArray<class FString>& InUserIDList);
	void GetUserListInfo(const TArray<class FString>& InUserIDList);
	void GetUserInfo(const class FString& InUserId);
	void GetMiscConfigInfo();
	void GetMessageInRange(const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& FromMsgId, const class FString& ToMsgId);
	void GetMessage(struct FChatListConvData& TargetConv);
	class FString GetLimSlssvrTest();
	class FString GetLimSlssvrDomesticTest();
	class FString GetLimSlssvrDomestic();
	class FString GetLimSlssvr();
	class FString GetLimSDKRegionDomestic();
	class FString GetLimSDKRegion();
	int32 GetLimGameID();
	class ULimChatManager* GetInstance();
	void GetFriendList();
	int32 GetFarlightDomainDomestic();
	int32 GetFarlightDomain();
	void GetConvMessage(const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& FromMsgId, const class FString& ToMsgId);
	void GetConvList();
	void GetConvChatLevelConfig();
	void GetConnState();
	void DiscardConv(const class FString& ConvID, enum class ELimNativeConvType ConvType);
	void DestroyInstance();
	bool CheckTargetIsContainIn(struct FChatListConvData& InConvData);
};

// 0x190 (0x1C8 - 0x38)
// Class LimNativeWidget.LimNativeWidgetSettings
class ULimNativeWidgetSettings : public UDeveloperSettings
{
public:
	class FString                                RDownloadPath;                                     // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FileIOThreadIntervalMs;                            // 0x48(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedDiskFileExpiredDuration;                     // 0x4C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedResponseExpiredDuration;                     // 0x50(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedResponseMaxCount;                            // 0x54(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       LocalizationTable;                                 // 0x58(0x18)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EnvId;                                             // 0x70(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GME_AppId;                                         // 0x80(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GME_PrivateKey;                                    // 0x90(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GME_Test_AppId;                                    // 0xA0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GME_Test_PrivateKey;                               // 0xB0(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestGmeEnv;                                       // 0xC0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GME_EventTick;                                     // 0xC4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRecordingTime;                                  // 0xC8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowLimSdkLog;                                    // 0xCC(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Lim_SDKRegion;                                     // 0xD0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Lim_SDKRegion_Domestic;                            // 0xE0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Lim_GameID;                                        // 0xF0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Lim_Slssvr;                                        // 0xF8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Lim_Slssvr_Test;                                   // 0x108(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Lim_Slssvr_Domestic;                               // 0x118(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Lim_Slssvr_Domestic_Test;                          // 0x128(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Use_Farlight_Domain;                               // 0x138(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Use_Farlight_Domain_Domestic;                      // 0x13C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Nertc_AppKey;                                      // 0x140(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Nertc_AppToken;                                    // 0x150(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Nertc_Test_AppKey;                                 // 0x160(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Nertc_Test_AppToken;                               // 0x170(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Agora_AppKey;                                      // 0x180(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Agora_AppToken;                                    // 0x190(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Agora_Test_AppKey;                                 // 0x1A0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Agora_Test_AppToken;                               // 0x1B0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnvOversea;                                       // 0x1C0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULimNativeWidgetSettings* GetDefaultObj();

	class ULimNativeWidgetSettings* GetInstance();
};

// 0xB8 (0xE0 - 0x28)
// Class LimNativeWidget.NertcManager
class UNertcManager : public UObject
{
public:
	uint8                                        Pad_214[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPermissionResult;                                // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEnterRoom;                                       // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnExitRoom;                                        // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConnectionChanged;                               // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNertcUserInfoUpdate;                             // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNertcLocalInfoUpdate;                            // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUserRoomStateChange;                             // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAudioStateChanged;                               // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<int32>                                MuteUIDList;                                       // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_216[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNertcManager* GetDefaultObj();

	void UpdateSelfPosition(struct FVector& InSelfPosition, struct FRotator& InSelfRotator);
	void UpdateAudioRecvRange(int32 InRange);
	void UnRegisterLuaEvent();
	void Uninit();
	void SwitchRoom(const class FString& RoomID, const class FString& AppToken, int32 Uid, int32 TeamID, int32 AudioDistance);
	void SetSubscribeAudioOnlyBy(TArray<int32>& OpenIDList);
	void SetSubscribeAudioBlocklist(TArray<int32>& OpenIDList);
	void SetSubscribeAudioAllowlist(TArray<int32>& OpenIDList);
	void SetRangeAudioTeamID(int32 TeamID);
	void SetRangeAudioMode(enum class EChatGMERangeAudioMode InAudioMode);
	void SetClientRole(bool bBroadCast);
	void SetAudioSessionRestriction();
	void SetAudioSendAndRecvRules(enum class EChatGMEAudioRouteSendType InSendType, TArray<int32>& InSendOpenIDList, enum class EChatGMEAudioRouteRecvType InRecvType, TArray<int32>& InRecvOpenIDList);
	void SelectSpeak(const class FString& InDeviceID);
	void SelectMic(const class FString& InDeviceID);
	void OnUserRoomStateChange__DelegateSignature(bool EnterRoom, int32 Uid);
	void OnUserInfoUpdateDelegate__DelegateSignature(const struct FNertcUserUpdateData& UserData);
	void OnNertcConnectionChange__DelegateSignature(int32 State, int32 Reason);
	void OnLocalUserVolumeChanged__DelegateSignature(int32 Volume, bool bVad);
	void OnExitRoomDelegate__DelegateSignature(int32 Result, int64 Reason);
	void OnEnterRoomDelegate__DelegateSignature(int64 RoomID, int32 Uid, int32 Result, int64 Elapsed);
	void OnAudioDeviceStateChanged__DelegateSignature(bool bChanged);
	void OnAndroidPermissionResult__DelegateSignature(bool bSuccess);
	void MuteLocalStream(bool bMute);
	void MediaMute(int32 Uid, bool bMute);
	bool IsRoomEntered();
	bool IsInRTCRoom();
	void InnerEnterRoom(const class FString& RoomID, const class FString& AppToken, int32 Uid);
	void InnerEnableMic(bool InEnable);
	void Init(const class FString& Appkey);
	TArray<struct FChatGMEDataDeviceInfo> GetSpeakerList();
	TArray<struct FChatGMEDataDeviceInfo> GetMicList();
	class UNertcManager* GetInstance();
	int32 GameSetSpeakerVolume(int32 Volume);
	int32 GameSetMicVolume(int32 MicVolume);
	void ExitRoom();
	void EnterRoom(const class FString& RoomID, const class FString& AppToken, int32 Uid);
	void EnableSpeaker(bool InEnable);
	void EnableRangeVoice(bool bEnbale);
	void EnableMic(bool InEnable);
	void EnabelAudioIndication(bool InEnable, int32 Millions, bool bEnbaleLocal);
	void DestroyInstance();
};

}



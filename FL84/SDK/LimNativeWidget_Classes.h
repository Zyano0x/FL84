#pragma once

/**
 * Name: FL84
 * Version: 15.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class LimNativeWidget.AudioPermissionHelperProxy
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAudioPermissionHelperProxy : public UObject
	{
	public:
		unsigned char                                              UnknownData_CPB3[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnAndroidPermissionResult(TArray<class FString> Permissions, TArray<bool> Results);
		EIOSAudioPermissionState STATIC_CheckIOSAudioPermission();
		bool STATIC_CheckAndroidAudioPermission();
		void AcquireIOSAudioPermission();
		void AcquireAndroidAudioPermission();
		static UClass* StaticClass();
	};

	/**
	 * Class LimNativeWidget.ChatGMEManager
	 * Size -> 0x0770 (FullSize[0x0798] - InheritedSize[0x0028])
	 */
	class UChatGMEManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_B2U8[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLimNativeLowLevelWrapper                           ctx;                                                     // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnterRoom;                                             // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LRI5[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnExitRoom;                                              // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V37Y[0x18];                                  // 0x0078(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRoomDisconnect;                                        // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZZ9[0x18];                                  // 0x00A0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUserUpdate;                                            // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2NQC[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNumberOfUsersUpdate;                                   // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2UU[0x18];                                  // 0x00F0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNumberOfAudioStreamsUpdate;                            // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JOGA[0x18];                                  // 0x0118(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnReconnectStart;                                        // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WBH[0x18];                                  // 0x0140(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnReconnectSuccess;                                      // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6LQ3[0x18];                                  // 0x0168(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSwitchRoom;                                            // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_80VR[0x18];                                  // 0x0190(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChangeRoomType;                                        // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J8BC[0x18];                                  // 0x01B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAudioDataEmpty;                                        // 0x01D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9UR8[0x18];                                  // 0x01E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRoomSharingStart;                                      // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0TE[0x18];                                  // 0x0208(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRoomSharingStop;                                       // 0x0220(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HE0G[0x18];                                  // 0x0230(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRecordCompleted;                                       // 0x0248(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YRFK[0x18];                                  // 0x0258(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRecordPreviewCompleted;                                // 0x0270(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I25W[0x18];                                  // 0x0280(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRecordMixCompleted;                                    // 0x0298(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8HRK[0x18];                                  // 0x02A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAudioRouteUpdate;                                      // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZ6R[0x18];                                  // 0x02D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSpeakerDefaultDeviceChanged;                           // 0x02E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B0S8[0x18];                                  // 0x02F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSpeakerNewDevice;                                      // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RBG5[0x18];                                  // 0x0320(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSpeakerLostDevice;                                     // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1KZZ[0x18];                                  // 0x0348(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMicNewDevice;                                          // 0x0360(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F8TB[0x18];                                  // 0x0370(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMicLostDevice;                                         // 0x0388(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YPDG[0x18];                                  // 0x0398(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMicDefaultDeviceChanged;                               // 0x03B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZE0[0x18];                                  // 0x03C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAudioRouteChanged;                                     // 0x03D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7EY8[0x18];                                  // 0x03E8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUserVolumes;                                           // 0x0400(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HS8R[0x18];                                  // 0x0410(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChangeRoomQuality;                                     // 0x0428(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J2MD[0x18];                                  // 0x0438(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAccompanyFinish;                                       // 0x0450(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UT7[0x18];                                  // 0x0460(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnServerAudioRouteEvent;                                 // 0x0478(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJXC[0x18];                                  // 0x0488(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCustomDataUpdate;                                      // 0x04A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YFS7[0x18];                                  // 0x04B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRealtimeASR;                                           // 0x04C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N13F[0x18];                                  // 0x04D8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChorusEvent;                                           // 0x04F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9ZL3[0x18];                                  // 0x0500(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChangeTeamId;                                          // 0x0518(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K0XV[0x18];                                  // 0x0528(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAudioReady;                                            // 0x0540(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7V4S[0x18];                                  // 0x0550(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHardwareTestRecordFinish;                              // 0x0568(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L3SE[0x18];                                  // 0x0578(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHardwareTestPreviewFinish;                             // 0x0590(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4B8M[0x18];                                  // 0x05A0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPTTRecordComplete;                                     // 0x05B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y1ZW[0x18];                                  // 0x05C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPTTUploadComplete;                                     // 0x05E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8V9E[0x18];                                  // 0x05F0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPTTDownloadComplete;                                   // 0x0608(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IYV0[0x18];                                  // 0x0618(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPTTPlayComplete;                                       // 0x0630(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LDXS[0x18];                                  // 0x0640(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPTTSpeech2TextComplete;                                // 0x0658(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QHU7[0x18];                                  // 0x0668(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPTTStreamingRecognitionComplete;                       // 0x0680(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O7ZF[0x18];                                  // 0x0690(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPTTStreamingRecognitionIsRunning;                      // 0x06A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KK5M[0x18];                                  // 0x06B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRoomManagementOperator;                                // 0x06D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VD75[0x18];                                  // 0x06E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPermissionResult;                                      // 0x06F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46LA[0x90];                                  // 0x0708(0x0090) MISSED OFFSET (PADDING)

	public:
		void UpdateSelfPosition(const struct FVector& InSelfPosition);
		void UpdateAudioRecvRange(int32_t InRange);
		void UnRegisterLuaEvent();
		void Uninit();
		bool SwitchRoomCompatible(const class FString& InRoomId, const class FString& GmeToken);
		bool SwitchRoom(const class FString& InRoomId);
		void SetRangeAudioTeamID(int32_t InTeamId);
		void SetRangeAudioMode(EChatGMERangeAudioMode InAudioMode);
		void SetAudioSendAndRecvRules(EChatGMEAudioRouteSendType SendType, TArray<class FString> SendOpenIDList, EChatGMEAudioRouteRecvType RecvType, TArray<class FString> RecvOpenIDList);
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
		void OnGetAuthBuffer(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeGetGMETokenCallBack& RetData);
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
		class FString STATIC_GetRecordingLocalFilePath();
		bool GetMicState();
		TArray<struct FChatGMEDataDeviceInfo> GetMicList();
		class UChatGMEManager* STATIC_GetInstance();
		void GameUploadRecordedFileCompatible(const class FString& FilePath, const class FString& Token);
		void GameUploadRecordedFile(const class FString& FilePath);
		void GameStopRecording();
		void GameStopPlayFile();
		void GameStartRecording(const class FString& FilePath);
		int32_t GameSetSpeakerVolume(int32_t Volume);
		int32_t GameSetMicVolume(int32_t MicVolume);
		void GameResumeRecording();
		void GamePlayRecordedFile(const class FString& FilePath);
		void GamePauseRecording();
		int32_t GameGetVoiceFileDuration(const class FString& FilePath);
		int32_t GameGetSpeakerVolume();
		int32_t GameGetSpeakerLevel();
		int32_t GameGetMicVolume();
		int32_t GameGetMicLevel();
		void GameDownloadRecordedFileeCompatible(const class FString& FileID, const class FString& FilePath, const class FString& Token);
		void GameDownloadRecordedFile(const class FString& FileID, const class FString& FilePath);
		void GameCancleRecording();
		bool ExitRoom();
		bool EnterRoomCompatible(const class FString& InRoomId, const class FString& GmeToken);
		bool EnterRoom(const class FString& InRoomId, EChatGMERoomType InRoomType);
		void EnableSpeaker(bool InEnable);
		void EnableMic(bool InEnable);
		void EnableAudioSend(bool bEnable);
		void EnableAudioRecv(bool bEnable);
		void EnableAudioPlayDevice(bool InEnable);
		void EnableAudioCaptureDevice(bool InEnable);
		void STATIC_DestroyInstance();
		void DeleteCacheFiles();
		int32_t CheckPlatformMicPermission();
		static UClass* StaticClass();
	};

	/**
	 * Class LimNativeWidget.ChatListEmojiEntryData
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class UChatListEmojiEntryData : public UObject
	{
	public:
		class FString                                              Tag;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9LWW[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Image;                                                   // 0x0040(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LimNativeWidget.ChatListEntryDataBase
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UChatListEntryDataBase : public UObject
	{
	public:
		ELimNativeMsgContentType                                   MessageType;                                             // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y3WR[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           Timestamp;                                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SenderId;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SenderName;                                              // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SenderAvatarUrl;                                         // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeMsgState                                         MsgState;                                                // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0REN[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ConvID;                                                  // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeConvType                                         ConvType;                                                // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NE1[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MsgId;                                                   // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LimNativeWidget.ChatListEntryDataText
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UChatListEntryDataText : public UChatListEntryDataBase
	{
	public:
		class FString                                              Message;                                                 // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LimNativeWidget.ChatListEntryDataSystem
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UChatListEntryDataSystem : public UChatListEntryDataBase
	{
	public:
		class FString                                              Message;                                                 // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LimNativeWidget.ChatListEntryDataVoice
	 * Size -> 0x0038 (FullSize[0x00D0] - InheritedSize[0x0098])
	 */
	class UChatListEntryDataVoice : public UChatListEntryDataBase
	{
	public:
		class FString                                              UUID;                                                    // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Size;                                                    // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Duration;                                                // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEND[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LimNativeWidget.ChatListEntryDataImage
	 * Size -> 0x0048 (FullSize[0x00E0] - InheritedSize[0x0098])
	 */
	class UChatListEntryDataImage : public UChatListEntryDataBase
	{
	public:
		class FString                                              UUID;                                                    // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Fmt;                                                     // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Width;                                                   // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Size;                                                    // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LimNativeWidget.ChatListEntryDataCustomEmotion
	 * Size -> 0x0058 (FullSize[0x00F0] - InheritedSize[0x0098])
	 */
	class UChatListEntryDataCustomEmotion : public UChatListEntryDataBase
	{
	public:
		class FString                                              PackName;                                                // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativePackType                                         PackType;                                                // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JL0D[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EmotionName;                                             // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EmotionId;                                               // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EmotionUrl;                                              // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Desc;                                                    // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LimNativeWidget.ChatListEntryDataShaderedGameCard
	 * Size -> 0x0068 (FullSize[0x0100] - InheritedSize[0x0098])
	 */
	class UChatListEntryDataShaderedGameCard : public UChatListEntryDataBase
	{
	public:
		int32_t                                                    Type;                                                    // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSC1[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Text;                                                    // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Detail;                                                  // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Img;                                                     // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Extra;                                                   // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LimNativeWidget.ChatListUserEntryData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UChatListUserEntryData : public UObject
	{
	public:
		class FString                                              Uid;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NickName;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvatarUrl;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvatarFrameUrl;                                          // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeUserSexType                                      Sex;                                                     // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQWM[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VipLevel;                                                // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsShowVip;                                               // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeFriendStateType                                  OnlineState;                                             // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F30C[0x2];                                   // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UnreadCount;                                             // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LimNativeWidget.LimChatManager
	 * Size -> 0x02F8 (FullSize[0x0320] - InheritedSize[0x0028])
	 */
	class ULimChatManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_8G1N[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULimNative*                                          LimNativeInstance;                                       // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLimNativeLowLevelWrapper                           ctx;                                                     // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              CurrentLanguage;                                         // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLoginCallBackHandle;                                   // 0x0058(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnConvsGetCallBackHandle;                                // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNewGetMessageHandle;                                   // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMessageReceivedHandle;                                 // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNewMessageReceivedHandle;                              // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMessageSendCallBackHandle;                             // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNewMessageSendCallBackHandle;                          // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReceiveLogicMsgHandle;                                 // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnConvDiscardHandle;                                     // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnConfigInfoHandle;                                      // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetConnStatHandle;                                     // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNetStatHandle;                                         // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetConfigChatLevelHandle;                              // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextTranslateDynamicDelegate;                          // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              SelfRoleID;                                              // 0x0138(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChatListConvData                                   CurrentConvData;                                         // 0x0148(0x0018) BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLimNativeConversationData>                  ConvListFullData;                                        // 0x0160(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNewChatListMessageData>                     ChatMsgDataList;                                         // 0x0170(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLimNativeConvChatLevelConfigData>           ChatLevelDataList;                                       // 0x0180(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FChatListConvData, class FString>              MsgIDMap;                                                // 0x0190(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FChatListUserData>                           PeerDataList;                                            // 0x01E0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FChatListUserData>                           FriendDataList;                                          // 0x01F0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FChatListConvData, class FString>              BaseMsgIDMap;                                            // 0x0200(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FChatListConvData, int32_t>                    UnreadMsgMap;                                            // 0x0250(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetFriendsCallBackHandle;                              // 0x02A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetUserHandle;                                         // 0x02B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetUserListHandle;                                     // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetUserListStateHandle;                                // 0x02D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRedHintUpdateHandle;                                   // 0x02E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInputBoxChangeHandle;                                  // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14WK[0x20];                                  // 0x0300(0x0020) MISSED OFFSET (PADDING)

	public:
		void UnRegisterLuaEvent();
		void UnInitChatManager();
		void TranslateText(const class FString& Text, const class FString& Lang, const class FString& ExtraInfo);
		void SwitchConvTo(const struct FChatListConvData& InConvData, bool RefreshConvList);
		void SetCtxLanguage(const class FString& Lang);
		void SetConvRead(const struct FChatListConvData& ConvData);
		void SetConvMsgRead(const class FString& ConvID, ELimNativeConvType ConvType, const class FString& MsgId, const class FString& Extra);
		void SendVoiceMessageToConv(const class FString& ConvID, ELimNativeConvType ConvType, const class FString& FileID, const class FString& Extra);
		void SendTextMessageToConv(const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Message, const class FString& Extra);
		void SendTextMessage(const class FString& Message, const class FString& Extra);
		void PostInitChatManager(const struct FLimNativeReportConfig& ReportConfig, const struct FLimNativeParkConfig& ParkConfig);
		class UUserWidget* OpenChatUI(class UObject* WorldContextObject, const class FString& ChatWidgetPath, int32_t ZOrder);
		void OnTextTranslateDynamicDelegate__DelegateSignature(bool TranslateRes, const class FString& TranslatedText, const class FString& Translator, const class FString& ExtraInfo);
		void OnSendMessageCallBackDynamicDelegate__DelegateSignature(const struct FChatListMessageData& MsgCallBack);
		void OnRedHintUpdateDynamicDelegate__DelegateSignature();
		void OnReceiveMessageDynamicDelegate__DelegateSignature(const struct FChatListMessageData& Msg);
		void OnReceiveLogicMessageDynamicDelegate__DelegateSignature(int32_t MsgType, const struct FLimNativeDataBizFullObj& NativeMsg);
		void OnOpenChatUI();
		void OnNewSendMessageCallBackDynamicDelegate__DelegateSignature(const struct FNewChatListMessageData& MsgCallBack, const class FString& RetData, int32_t Code);
		void OnNewReceiveMessageDynamicDelegate__DelegateSignature(const struct FNewChatListMessageData& Msg);
		void OnMiscConfigInfoHandle(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeGetMiscConfigInfoCallBack& RetData);
		void OnMessageSend(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnSendMsgCallBack& RetData);
		void OnMessageReceived(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnMsgReceivedEventCallBack& RetData);
		void OnLoginDynamicDelegate__DelegateSignature(bool LoginRes, int32_t Code, const class FString& RetData);
		void OnLogin(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnLoginCallBack& RetData);
		void OnLogicMsgReceived(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnMsgLogicReceivedEventCallBack& RetData);
		void OnLog(const struct FLimNativeLowLevelWrapper& InWrapper, const class FString& Data);
		void OnInputBoxStateChangeDelegate__DelegateSignature(bool bUp, int32_t Left, int32_t Top, int32_t Right, int32_t Bottom);
		void OnGetUsersStateCallBackDynamicDelegate__DelegateSignature();
		void OnGetUsersCallBackDynamicDelegate__DelegateSignature(TArray<struct FChatListUserData> UserDataList);
		void OnGetUserListState(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetUsersStateCallBack& RetData);
		void OnGetUserListInfo(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetUsersCallBack& RetData);
		void OnGetUserInfo(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetUserCallBack& RetData);
		void OnGetUserCallBackDynamicDelegate__DelegateSignature(const struct FChatListUserData& UserData);
		void OnGetTextTranslateHandle(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeTextTranslateCallBack& RetData);
		void OnGetNetStatHandle(const struct FLimNativeLowLevelWrapper& InWrapper, int32_t RetData);
		void OnGetNetStatDynamicDelegate__DelegateSignature(int32_t val);
		void OnGetMessageInRange(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetMsgsCallBack& RetData);
		void OnGetMessageDataDynamicDelegate__DelegateSignature(int32_t Code, const class FString& ConvID, ELimNativeConvType ConvType);
		void OnGetFriendsCallBackDynamicDelegate__DelegateSignature(TArray<struct FChatListUserData> FriendList);
		void OnGetFriends(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetFriendCallBack& RetData);
		void OnGetConnStateHandle(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeGetConnStateCallBack& RetData);
		void OnGetConnStatDynamicDelegate__DelegateSignature(bool Result, int32_t val);
		void OnConvsGetDynamicDelegate__DelegateSignature(bool GetConvRes);
		void OnConvRead(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnSetConvReadCallBack& RetData);
		void OnConvListGet(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnConvsGetCallBack& RetData);
		void OnConvHandleDynamicDelegate__DelegateSignature(bool Result, const struct FLimNativeConvHandleCallBackData& Data);
		void OnConvHandle(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnConvHandleCallBack& RetData);
		void OnConvChatLevelConfig(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetConvChatLevelConfigCallBack& RetData);
		void OnConfigInfoHandleDynamicDelegate__DelegateSignature(bool Result, int32_t val);
		void OnConfigGetChatLevlDynamicDelegate__DelegateSignature(bool Result);
		void Logout();
		void Login(const class FString& InAppId, const class FString& InAppUserID, const class FString& InToken, const class FString& InRoleID, const class FString& InExtra);
		void InitChatManager(const struct FLimNativeInitConfig& InitConfig, const class FString& InEnvId, const class FString& InGMEUserID);
		void GetUserListState(TArray<class FString> InUserIDList);
		void GetUserListInfo(TArray<class FString> InUserIDList);
		void GetUserInfo(const class FString& InUserId);
		void GetMiscConfigInfo();
		void GetMessageInRange(const class FString& ConvID, ELimNativeConvType ConvType, const class FString& FromMsgId, const class FString& ToMsgId);
		void GetMessage(const struct FChatListConvData& TargetConv);
		class FString STATIC_GetLimSlssvrTest();
		class FString STATIC_GetLimSlssvrDomesticTest();
		class FString STATIC_GetLimSlssvrDomestic();
		class FString STATIC_GetLimSlssvr();
		class FString STATIC_GetLimSDKRegionDomestic();
		class FString STATIC_GetLimSDKRegion();
		int32_t STATIC_GetLimGameID();
		class ULimChatManager* STATIC_GetInstance();
		void GetFriendList();
		int32_t STATIC_GetFarlightDomainDomestic();
		int32_t STATIC_GetFarlightDomain();
		void GetConvMessage(const class FString& ConvID, ELimNativeConvType ConvType, const class FString& FromMsgId, const class FString& ToMsgId);
		void GetConvList();
		void GetConvChatLevelConfig();
		void GetConnState();
		void DiscardConv(const class FString& ConvID, ELimNativeConvType ConvType);
		void STATIC_DestroyInstance();
		bool CheckTargetIsContainIn(const struct FChatListConvData& InConvData);
		static UClass* StaticClass();
	};

	/**
	 * Class LimNativeWidget.LimNativeWidgetSettings
	 * Size -> 0x0190 (FullSize[0x01C8] - InheritedSize[0x0038])
	 */
	class ULimNativeWidgetSettings : public UDeveloperSettings
	{
	public:
		class FString                                              rDownloadPath;                                           // 0x0038(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FileIOThreadIntervalMs;                                  // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CachedDiskFileExpiredDuration;                           // 0x004C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CachedResponseExpiredDuration;                           // 0x0050(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CachedResponseMaxCount;                                  // 0x0054(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     LocalizationTable;                                       // 0x0058(0x0018) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EnvId;                                                   // 0x0070(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GME_AppId;                                               // 0x0080(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GME_PrivateKey;                                          // 0x0090(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GME_Test_AppId;                                          // 0x00A0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GME_Test_PrivateKey;                                     // 0x00B0(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTestGmeEnv;                                             // 0x00C0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PLA9[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GME_EventTick;                                           // 0x00C4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxRecordingTime;                                        // 0x00C8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowLimSdkLog;                                          // 0x00CC(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DEBQ[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Lim_SDKRegion;                                           // 0x00D0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Lim_SDKRegion_Domestic;                                  // 0x00E0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Lim_GameID;                                              // 0x00F0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCD4[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Lim_Slssvr;                                              // 0x00F8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Lim_Slssvr_Test;                                         // 0x0108(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Lim_Slssvr_Domestic;                                     // 0x0118(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Lim_Slssvr_Domestic_Test;                                // 0x0128(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Use_Farlight_Domain;                                     // 0x0138(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Use_Farlight_Domain_Domestic;                            // 0x013C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Nertc_AppKey;                                            // 0x0140(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Nertc_AppToken;                                          // 0x0150(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Nertc_Test_AppKey;                                       // 0x0160(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Nertc_Test_AppToken;                                     // 0x0170(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Agora_AppKey;                                            // 0x0180(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Agora_AppToken;                                          // 0x0190(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Agora_Test_AppKey;                                       // 0x01A0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Agora_Test_AppToken;                                     // 0x01B0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnvOversea;                                             // 0x01C0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9EYB[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (PADDING)

	public:
		class ULimNativeWidgetSettings* STATIC_GetInstance();
		static UClass* StaticClass();
	};

	/**
	 * Class LimNativeWidget.NertcManager
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UNertcManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_KHSS[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPermissionResult;                                      // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnterRoom;                                             // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitRoom;                                              // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnConnectionChanged;                                     // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNertcUserInfoUpdate;                                   // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNertcLocalInfoUpdate;                                  // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUserRoomStateChange;                                   // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAudioStateChanged;                                     // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<int32_t>                                            MuteUIDList;                                             // 0x00B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FR7R[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (PADDING)

	public:
		void UpdateSelfPosition(const struct FVector& InSelfPosition, const struct FRotator& InSelfRotator);
		void UpdateAudioRecvRange(int32_t InRange);
		void UnRegisterLuaEvent();
		void Uninit();
		void SwitchRoom(const class FString& RoomID, const class FString& AppToken, int32_t Uid, int32_t TeamID, int32_t AudioDistance);
		void SetSubscribeAudioOnlyBy(TArray<int32_t> OpenIDList);
		void SetSubscribeAudioBlocklist(TArray<int32_t> OpenIDList);
		void SetSubscribeAudioAllowlist(TArray<int32_t> OpenIDList);
		void SetRangeAudioTeamID(int32_t TeamID);
		void SetRangeAudioMode(EChatGMERangeAudioMode InAudioMode);
		void SetClientRole(bool bBroadCast);
		void SetAudioSessionRestriction();
		void SetAudioSendAndRecvRules(EChatGMEAudioRouteSendType InSendType, TArray<int32_t> InSendOpenIDList, EChatGMEAudioRouteRecvType InRecvType, TArray<int32_t> InRecvOpenIDList);
		void SelectSpeak(const class FString& InDeviceID);
		void SelectMic(const class FString& InDeviceID);
		void OnUserRoomStateChange__DelegateSignature(bool EnterRoom, int32_t Uid);
		void OnUserInfoUpdateDelegate__DelegateSignature(const struct FNertcUserUpdateData& UserData);
		void OnNertcConnectionChange__DelegateSignature(int32_t State, int32_t reason);
		void OnLocalUserVolumeChanged__DelegateSignature(int32_t Volume, bool bVad);
		void OnExitRoomDelegate__DelegateSignature(int32_t Result, int64_t reason);
		void OnEnterRoomDelegate__DelegateSignature(int64_t RoomID, int32_t Uid, int32_t Result, int64_t Elapsed);
		void OnAudioDeviceStateChanged__DelegateSignature(bool bChanged);
		void OnAndroidPermissionResult__DelegateSignature(bool bSuccess);
		void MuteLocalStream(bool bMute);
		void MediaMute(int32_t Uid, bool bMute);
		bool IsRoomEntered();
		bool IsInRTCRoom();
		void InnerEnterRoom(const class FString& RoomID, const class FString& AppToken, int32_t Uid);
		void InnerEnableMic(bool InEnable);
		void Init(const class FString& Appkey);
		TArray<struct FChatGMEDataDeviceInfo> GetSpeakerList();
		TArray<struct FChatGMEDataDeviceInfo> GetMicList();
		class UNertcManager* STATIC_GetInstance();
		int32_t GameSetSpeakerVolume(int32_t Volume);
		int32_t GameSetMicVolume(int32_t MicVolume);
		void ExitRoom();
		void EnterRoom(const class FString& RoomID, const class FString& AppToken, int32_t Uid);
		void EnableSpeaker(bool InEnable);
		void EnableRangeVoice(bool bEnbale);
		void EnableMic(bool InEnable);
		void EnabelAudioIndication(bool InEnable, int32_t millions, bool bEnbaleLocal);
		void STATIC_DestroyInstance();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

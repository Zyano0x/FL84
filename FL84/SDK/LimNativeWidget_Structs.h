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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum LimNativeWidget.EChatGMERoomType
	 */
	enum class EChatGMERoomType : uint8_t
	{
		Fluency     = 0,
		Standard    = 1,
		HighQuality = 2,
		MAX         = 3
	};

	/**
	 * Enum LimNativeWidget.EChatGMERoomTypeSubEvent
	 */
	enum class EChatGMERoomTypeSubEvent : uint8_t
	{
		EnterRoom = 0,
		Start     = 1,
		Complete  = 2,
		Request   = 3,
		MAX       = 4
	};

	/**
	 * Enum LimNativeWidget.EChatGMERoomManagementOp
	 */
	enum class EChatGMERoomManagementOp : uint8_t
	{
		Capture         = 0,
		Play            = 1,
		AudioSend       = 2,
		AudioREC        = 3,
		Mic             = 4,
		Speaker         = 5,
		GetMicState     = 6,
		GetSpeakerState = 7,
		Fobin           = 8,
		MAX             = 9
	};

	/**
	 * Enum LimNativeWidget.EChatGMEEventIDUserUpdate
	 */
	enum class EChatGMEEventIDUserUpdate : uint8_t
	{
		Enter          = 0,
		Exit           = 1,
		HasCameraVideo = 2,
		NoCameraVideo  = 3,
		HasAudio       = 4,
		NoAudio        = 5,
		MAX            = 6
	};

	/**
	 * Enum LimNativeWidget.EChatGMEAudioRouteRecvType
	 */
	enum class EChatGMEAudioRouteRecvType : uint8_t
	{
		RecvInquireError  = 0,
		NotRecvFromAnyone = 1,
		RecvFromAll       = 2,
		RecvBlacklist     = 3,
		RecvWhitelist     = 4,
		MAX               = 5
	};

	/**
	 * Enum LimNativeWidget.EChatGMEAudioRouteSendType
	 */
	enum class EChatGMEAudioRouteSendType : uint8_t
	{
		InquireError    = 0,
		NotSendToAnyone = 1,
		SendToAll       = 2,
		SendBlacklist   = 3,
		SendWhitelist   = 4,
		MAX             = 5
	};

	/**
	 * Enum LimNativeWidget.EChatGMERangeAudioMode
	 */
	enum class EChatGMERangeAudioMode : uint8_t
	{
		World = 0,
		Team  = 1,
		MAX   = 2
	};

	/**
	 * Enum LimNativeWidget.EIOSAudioPermissionState
	 */
	enum class EIOSAudioPermissionState : uint8_t
	{
		AudioPermission_Unknown      = 0,
		AudioPermission_Undetermined = 1,
		AudioPermission_Denied       = 2,
		AudioPermission_Granted      = 3,
		AudioPermission_MAX          = 4
	};

	/**
	 * Enum LimNativeWidget.EChatGMEAudioRouteType
	 */
	enum class EChatGMEAudioRouteType : uint8_t
	{
		Others          = 0,
		BuildInreciever = 1,
		Speaker         = 2,
		Headphone       = 3,
		Bluetooth       = 4,
		MAX             = 5
	};

	/**
	 * Enum LimNativeWidget.EChatGMEKaraokeType
	 */
	enum class EChatGMEKaraokeType : uint8_t
	{
		Original = 0,
		Pop      = 1,
		Rock     = 2,
		RB       = 3,
		Dance    = 4,
		Heaven   = 5,
		TTS      = 6,
		Vigorous = 7,
		Limpid   = 8,
		Count    = 9,
		MAX      = 10
	};

	/**
	 * Enum LimNativeWidget.EChatGMEVoiceType
	 */
	enum class EChatGMEVoiceType : uint8_t
	{
		OriginalSound = 0,
		Lotita        = 1,
		Uncle         = 2,
		Intangible    = 3,
		DeadFatboy    = 4,
		HeavyMental   = 5,
		Dialect       = 6,
		Influenza     = 7,
		CagedAnimal   = 8,
		HeavyMachine  = 9,
		StrongCurrent = 10,
		Kindergarten  = 11,
		Huang         = 12,
		Count         = 13,
		MAX           = 14
	};

	/**
	 * Enum LimNativeWidget.EChatGMELogLevel
	 */
	enum class EChatGMELogLevel : uint8_t
	{
		None    = 0,
		Error   = 1,
		Info    = 2,
		Debug   = 3,
		Verbose = 4,
		MAX     = 5
	};

	/**
	 * Enum LimNativeWidget.EChatGMEAudioRouteSubEventType
	 */
	enum class EChatGMEAudioRouteSubEventType : uint8_t
	{
		Update = 0,
		MAX    = 1
	};

	/**
	 * Enum LimNativeWidget.EChatGMECustomDataSubEvent
	 */
	enum class EChatGMECustomDataSubEvent : uint8_t
	{
		Update = 0,
		MAX    = 1
	};

	/**
	 * Enum LimNativeWidget.EChatGMEChorusSubEvent
	 */
	enum class EChatGMEChorusSubEvent : uint8_t
	{
		HasNoCMDPack      = 0,
		HadCMDPack        = 1,
		Start             = 2,
		Stop              = 3,
		AccompanierOption = 4,
		StatusRefuse      = 5,
		StopByPeer        = 6,
		MAX               = 7
	};

	/**
	 * Enum LimNativeWidget.EChatGMEEventType
	 */
	enum class EChatGMEEventType : uint8_t
	{
		None                             = 0,
		EnterRoom                        = 1,
		ExitRoom                         = 2,
		RoomDisconnect                   = 3,
		UserUpdate                       = 4,
		NumberOfUsersUpdate              = 5,
		NumberOfAudioStreamsUpdate       = 6,
		ReconnectStart                   = 7,
		ReconnectSuccess                 = 8,
		SwitchRoom                       = 9,
		ChangeRoomType                   = 10,
		AudioDataEmpty                   = 11,
		RoomSharingStart                 = 12,
		RoomSharingStop                  = 13,
		RecordCompleted                  = 14,
		RecordPreviewCompleted           = 15,
		RecordMixCompleted               = 16,
		AudioRouteUpdate                 = 17,
		SpeakerDefaultDeviceChanged      = 18,
		SpeakerNewDevice                 = 19,
		SpeakerLostDevice                = 20,
		MicNewDevice                     = 21,
		MicLostDevice                    = 22,
		MicDefaultDeviceChanged          = 23,
		AudioRouteChanged                = 24,
		UserVolumes                      = 25,
		ChangeRoomQuality                = 26,
		AccompanyFinish                  = 27,
		ServerAudioRouteEvent            = 28,
		CustomDataUpdate                 = 29,
		RealtimeASR                      = 30,
		ChorusEvent                      = 31,
		ChangeTeamId                     = 32,
		AudioReady                       = 33,
		HardwareTestRecordFinish         = 34,
		HardwareTestPreviewFinish        = 35,
		PTTRecordComplete                = 36,
		PTTUploadComplete                = 37,
		PTTDownloadComplete              = 38,
		PTTPlayComplete                  = 39,
		PTTSpeech2TextComplete           = 40,
		PTTStreamingRecognitionComplete  = 41,
		PTTStreamingRecognitionIsRunning = 42,
		RoomManagementOperator           = 43,
		MAX                              = 44
	};

	/**
	 * Enum LimNativeWidget.EChatGMEASRSubEvent
	 */
	enum class EChatGMEASRSubEvent : uint8_t
	{
		Start   = 0,
		Content = 1,
		End     = 2,
		MAX     = 3
	};

	/**
	 * Enum LimNativeWidget.EChatGMERecordPermission
	 */
	enum class EChatGMERecordPermission : uint8_t
	{
		Granted       = 0,
		Denied        = 1,
		NotDetermined = 2,
		Error         = 3,
		MAX           = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LimNativeWidget.ChatListConvData
	 * Size -> 0x0018
	 */
	struct FChatListConvData
	{
	public:
		class FString                                              ConvID;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeConvType                                         ConvType;                                                // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L9L4[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNativeWidget.NewChatListMessageData
	 * Size -> 0x0178
	 */
	struct FNewChatListMessageData
	{
	public:
		class FString                                              SendId;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MsgId;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeMsgState                                         MsgState;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MS7C[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MsgContent;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UUID;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Size;                                                    // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Duration;                                                // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NDY4[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Ext;                                                     // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeMsgContentType                                   MsgType;                                                 // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DPZF[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ConvID;                                                  // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeConvType                                         ConvType;                                                // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VBG1[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Timestamp;                                               // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLimNativeIMChatMessage                             MsgData;                                                 // 0x00B0(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLimNativeIMChatMessageBase                         MsgBase;                                                 // 0x0120(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNativeWidget.ChatListUserData
	 * Size -> 0x0050
	 */
	struct FChatListUserData
	{
	public:
		class FString                                              Uid;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NickName;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvatarUrl;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvatarFrameUrl;                                          // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeUserSexType                                      Sex;                                                     // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HHRQ[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VipLevel;                                                // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsShowVip;                                               // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeFriendStateType                                  OnlineState;                                             // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3J6L[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNativeWidget.ChatGMEDataResult
	 * Size -> 0x0028
	 */
	struct FChatGMEDataResult
	{
	public:
		unsigned char                                              UnknownData_YGMM[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSuccess;                                                // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OKUO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ErrorInfo;                                               // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ErrorCode;                                               // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ALBI[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNativeWidget.ChatGMEDataDeviceInfo
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FChatGMEDataDeviceInfo : public FChatGMEDataResult
	{
	public:
		class FString                                              DeviceID;                                                // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceName;                                              // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNewDevice;                                              // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsedDevice;                                             // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R55B[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNativeWidget.ChatGMEDataRoomQuality
	 * Size -> 0x0018
	 */
	struct FChatGMEDataRoomQuality
	{
	public:
		unsigned char                                              UnknownData_U8S7[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Weight;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Loss;                                                    // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Delay;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0Z2V[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNativeWidget.ChatGMEDataChangeRoomType
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FChatGMEDataChangeRoomType : public FChatGMEDataResult
	{
	public:
		EChatGMERoomTypeSubEvent                                   NewRoomType;                                             // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LDRM[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNativeWidget.ChatGMEDataFileInfo
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FChatGMEDataFileInfo : public FChatGMEDataResult
	{
	public:
		class FString                                              FileID;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FilePath;                                                // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Text;                                                    // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNativeWidget.ChatGMEDataNumberOfAudioStreamsUpdate
	 * Size -> 0x0010
	 */
	struct FChatGMEDataNumberOfAudioStreamsUpdate
	{
	public:
		unsigned char                                              UnknownData_B3S7[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AudioStreamsNum;                                         // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ZRB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNativeWidget.ChatGMEDataNumberOfUserUpdate
	 * Size -> 0x0018
	 */
	struct FChatGMEDataNumberOfUserUpdate
	{
	public:
		unsigned char                                              UnknownData_AFIM[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AllUserNum;                                              // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AccUserNum;                                              // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProxyUserNum;                                            // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1Q4[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNativeWidget.ChatGMEDataRecordCompleted
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FChatGMEDataRecordCompleted : public FChatGMEDataResult
	{
	public:
		class FString                                              FilePath;                                                // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Duration;                                                // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNativeWidget.ChatGMEDataRoomOperator
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	struct FChatGMEDataRoomOperator : public FChatGMEDataResult
	{
	public:
		class FString                                              SenderId;                                                // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiverId;                                              // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChatGMERoomManagementOp                                   OperateType;                                             // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOpenCmd;                                                // 0x0049(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRV4[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNativeWidget.ChatGMEDataUserUpdate
	 * Size -> 0x0020
	 */
	struct FChatGMEDataUserUpdate
	{
	public:
		unsigned char                                              UnknownData_8PJT[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EChatGMEEventIDUserUpdate                                  EventId;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NP0W[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      UserList;                                                // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNativeWidget.ChatGMEDataUserVolumes
	 * Size -> 0x0058
	 */
	struct FChatGMEDataUserVolumes
	{
	public:
		unsigned char                                              UnknownData_GLDU[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, float>                                 Volumes;                                                 // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNativeWidget.ChatListMessageData
	 * Size -> 0x0098
	 */
	struct FChatListMessageData
	{
	public:
		class FString                                              SendId;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MsgId;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeMsgState                                         MsgState;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3Y3[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLimNativeIMChatMessage                             MsgData;                                                 // 0x0028(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNativeWidget.NertcUserUpdateData
	 * Size -> 0x0010
	 */
	struct FNertcUserUpdateData
	{
	public:
		TArray<class FString>                                      UserList;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNativeWidget.ChatLogicMessageData
	 * Size -> 0x0010
	 */
	struct FChatLogicMessageData
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNFW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLimNativeDataObjectBase                            BizObj;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

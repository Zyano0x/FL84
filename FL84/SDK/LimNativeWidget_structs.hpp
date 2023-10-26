#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EChatGMERoomType : uint8
{
	Fluency                        = 0,
	Standard                       = 1,
	HighQuality                    = 2,
	EChatGMERoomType_MAX           = 3,
};

enum class EChatGMERoomTypeSubEvent : uint8
{
	EnterRoom                      = 0,
	Start                          = 1,
	Complete                       = 2,
	Request                        = 3,
	EChatGMERoomTypeSubEvent_MAX   = 4,
};

enum class EChatGMERoomManagementOp : uint8
{
	Capture                        = 0,
	Play                           = 1,
	AudioSend                      = 2,
	AudioREC                       = 3,
	Mic                            = 4,
	Speaker                        = 5,
	GetMicState                    = 6,
	GetSpeakerState                = 7,
	Fobin                          = 8,
	EChatGMERoomManagementOp_MAX   = 9,
};

enum class EChatGMEEventIDUserUpdate : uint8
{
	Enter                          = 0,
	Exit                           = 1,
	HasCameraVideo                 = 2,
	NoCameraVideo                  = 3,
	HasAudio                       = 4,
	NoAudio                        = 5,
	EChatGMEEventIDUserUpdate_MAX  = 6,
};

enum class EChatGMEAudioRouteRecvType : uint8
{
	RecvInquireError               = 0,
	NotRecvFromAnyone              = 1,
	RecvFromAll                    = 2,
	RecvBlacklist                  = 3,
	RecvWhitelist                  = 4,
	EChatGMEAudioRouteRecvType_MAX = 5,
};

enum class EChatGMEAudioRouteSendType : uint8
{
	InquireError                   = 0,
	NotSendToAnyone                = 1,
	SendToAll                      = 2,
	SendBlacklist                  = 3,
	SendWhitelist                  = 4,
	EChatGMEAudioRouteSendType_MAX = 5,
};

enum class EChatGMERangeAudioMode : uint8
{
	World                          = 0,
	Team                           = 1,
	EChatGMERangeAudioMode_MAX     = 2,
};

enum class EIOSAudioPermissionState : uint8
{
	AudioPermission_Unknown        = 0,
	AudioPermission_Undetermined   = 1,
	AudioPermission_Denied         = 2,
	AudioPermission_Granted        = 3,
	AudioPermission_MAX            = 4,
};

enum class EChatGMEAudioRouteType : uint8
{
	Others                         = 0,
	BuildInreciever                = 1,
	Speaker                        = 2,
	Headphone                      = 3,
	Bluetooth                      = 4,
	EChatGMEAudioRouteType_MAX     = 5,
};

enum class EChatGMEKaraokeType : uint8
{
	Original                       = 0,
	Pop                            = 1,
	Rock                           = 2,
	RB                             = 3,
	Dance                          = 4,
	Heaven                         = 5,
	TTS                            = 6,
	Vigorous                       = 7,
	Limpid                         = 8,
	Count                          = 9,
	EChatGMEKaraokeType_MAX        = 10,
};

enum class EChatGMEVoiceType : uint8
{
	OriginalSound                  = 0,
	Lotita                         = 1,
	Uncle                          = 2,
	Intangible                     = 3,
	DeadFatboy                     = 4,
	HeavyMental                    = 5,
	Dialect                        = 6,
	Influenza                      = 7,
	CagedAnimal                    = 8,
	HeavyMachine                   = 9,
	StrongCurrent                  = 10,
	Kindergarten                   = 11,
	Huang                          = 12,
	Count                          = 13,
	EChatGMEVoiceType_MAX          = 14,
};

enum class EChatGMELogLevel : uint8
{
	None                           = 0,
	Error                          = 1,
	Info                           = 2,
	Debug                          = 3,
	Verbose                        = 4,
	EChatGMELogLevel_MAX           = 5,
};

enum class EChatGMEAudioRouteSubEventType : uint8
{
	Update                         = 0,
	EChatGMEAudioRouteSubEventType_MAX = 1,
};

enum class EChatGMECustomDataSubEvent : uint8
{
	Update                         = 0,
	EChatGMECustomDataSubEvent_MAX = 1,
};

enum class EChatGMEChorusSubEvent : uint8
{
	HasNoCMDPack                   = 0,
	HadCMDPack                     = 1,
	Start                          = 2,
	Stop                           = 3,
	AccompanierOption              = 4,
	StatusRefuse                   = 5,
	StopByPeer                     = 6,
	EChatGMEChorusSubEvent_MAX     = 7,
};

enum class EChatGMEEventType : uint8
{
	None                           = 0,
	EnterRoom                      = 1,
	ExitRoom                       = 2,
	RoomDisconnect                 = 3,
	UserUpdate                     = 4,
	NumberOfUsersUpdate            = 5,
	NumberOfAudioStreamsUpdate     = 6,
	ReconnectStart                 = 7,
	ReconnectSuccess               = 8,
	SwitchRoom                     = 9,
	ChangeRoomType                 = 10,
	AudioDataEmpty                 = 11,
	RoomSharingStart               = 12,
	RoomSharingStop                = 13,
	RecordCompleted                = 14,
	RecordPreviewCompleted         = 15,
	RecordMixCompleted             = 16,
	AudioRouteUpdate               = 17,
	SpeakerDefaultDeviceChanged    = 18,
	SpeakerNewDevice               = 19,
	SpeakerLostDevice              = 20,
	MicNewDevice                   = 21,
	MicLostDevice                  = 22,
	MicDefaultDeviceChanged        = 23,
	AudioRouteChanged              = 24,
	UserVolumes                    = 25,
	ChangeRoomQuality              = 26,
	AccompanyFinish                = 27,
	ServerAudioRouteEvent          = 28,
	CustomDataUpdate               = 29,
	RealtimeASR                    = 30,
	ChorusEvent                    = 31,
	ChangeTeamId                   = 32,
	AudioReady                     = 33,
	HardwareTestRecordFinish       = 34,
	HardwareTestPreviewFinish      = 35,
	PTTRecordComplete              = 36,
	PTTUploadComplete              = 37,
	PTTDownloadComplete            = 38,
	PTTPlayComplete                = 39,
	PTTSpeech2TextComplete         = 40,
	PTTStreamingRecognitionComplete = 41,
	PTTStreamingRecognitionIsRunning = 42,
	RoomManagementOperator         = 43,
	EChatGMEEventType_MAX          = 44,
};

enum class EChatGMEASRSubEvent : uint8
{
	Start                          = 0,
	Content                        = 1,
	End                            = 2,
	EChatGMEASRSubEvent_MAX        = 3,
};

enum class EChatGMERecordPermission : uint8
{
	Granted                        = 0,
	Denied                         = 1,
	NotDetermined                  = 2,
	Error                          = 3,
	EChatGMERecordPermission_MAX   = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct LimNativeWidget.ChatGMEDataResult
struct FChatGMEDataResult
{
public:
	uint8                                        Pad_1E1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSuccess;                                          // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrorInfo;                                         // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ErrorCode;                                         // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x50 - 0x28)
// ScriptStruct LimNativeWidget.ChatGMEDataDeviceInfo
struct FChatGMEDataDeviceInfo : public FChatGMEDataResult
{
public:
	class FString                                DeviceID;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeviceName;                                        // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewDevice;                                        // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsedDevice;                                       // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LimNativeWidget.ChatGMEDataRoomQuality
struct FChatGMEDataRoomQuality
{
public:
	uint8                                        Pad_1E5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Weight;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Loss;                                              // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Delay;                                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct LimNativeWidget.ChatGMEDataChangeRoomType
struct FChatGMEDataChangeRoomType : public FChatGMEDataResult
{
public:
	enum class EChatGMERoomTypeSubEvent          NewRoomType;                                       // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x58 - 0x28)
// ScriptStruct LimNativeWidget.ChatGMEDataFileInfo
struct FChatGMEDataFileInfo : public FChatGMEDataResult
{
public:
	class FString                                FileID;                                            // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FilePath;                                          // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Text;                                              // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LimNativeWidget.ChatGMEDataNumberOfAudioStreamsUpdate
struct FChatGMEDataNumberOfAudioStreamsUpdate
{
public:
	uint8                                        Pad_1EB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AudioStreamsNum;                                   // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LimNativeWidget.ChatGMEDataNumberOfUserUpdate
struct FChatGMEDataNumberOfUserUpdate
{
public:
	uint8                                        Pad_1ED[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AllUserNum;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AccUserNum;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProxyUserNum;                                      // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x48 - 0x28)
// ScriptStruct LimNativeWidget.ChatGMEDataRecordCompleted
struct FChatGMEDataRecordCompleted : public FChatGMEDataResult
{
public:
	class FString                                FilePath;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Duration;                                          // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct LimNativeWidget.ChatGMEDataRoomOperator
struct FChatGMEDataRoomOperator : public FChatGMEDataResult
{
public:
	class FString                                SenderId;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceiverId;                                        // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChatGMERoomManagementOp          OperateType;                                       // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOpenCmd;                                          // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EF[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LimNativeWidget.ChatGMEDataUserUpdate
struct FChatGMEDataUserUpdate
{
public:
	uint8                                        Pad_1F0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EChatGMEEventIDUserUpdate         EventId;                                           // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        UserList;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct LimNativeWidget.ChatGMEDataUserVolumes
struct FChatGMEDataUserVolumes
{
public:
	uint8                                        Pad_1F3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, float>                   Volumes;                                           // 0x8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LimNativeWidget.ChatListConvData
struct FChatListConvData
{
public:
	class FString                                ConvID;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LimNativeWidget.ChatListUserData
struct FChatListUserData
{
public:
	class FString                                Uid;                                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NickName;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarUrl;                                         // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarFrameUrl;                                    // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeUserSexType             Sex;                                               // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VipLevel;                                          // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsShowVip;                                         // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeFriendStateType         OnlineState;                                       // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F7[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x178 (0x178 - 0x0)
// ScriptStruct LimNativeWidget.NewChatListMessageData
struct FNewChatListMessageData
{
public:
	class FString                                SendId;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MsgId;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeMsgState                MsgState;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MsgContent;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UUID;                                              // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Size;                                              // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Duration;                                          // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Ext;                                               // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeMsgContentType          MsgType;                                           // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ConvID;                                            // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Timestamp;                                         // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLimNativeIMChatMessage               MsgData;                                           // 0xB0(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLimNativeIMChatMessageBase           MsgBase;                                           // 0x120(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct LimNativeWidget.ChatListMessageData
struct FChatListMessageData
{
public:
	class FString                                SendId;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MsgId;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeMsgState                MsgState;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLimNativeIMChatMessage               MsgData;                                           // 0x28(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LimNativeWidget.NertcUserUpdateData
struct FNertcUserUpdateData
{
public:
	TArray<class FString>                        UserList;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LimNativeWidget.ChatLogicMessageData
struct FChatLogicMessageData
{
public:
	int32                                        Type;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLimNativeDataObjectBase              BizObj;                                            // 0x8(0x8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

}



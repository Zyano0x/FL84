#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELimNativeConvType : uint8
{
	Group                          = 0,
	Peer                           = 1,
	Room                           = 2,
	CustomGroup                    = 3,
	Robot                          = 4,
	System                         = 5,
	TempGroup                      = 6,
	ELimNativeConvType_MAX         = 7,
};

enum class ELimNativeMsgDirType : uint8
{
	After                          = 0,
	Around                         = 1,
	Before                         = 2,
	ELimNativeMsgDirType_MAX       = 3,
};

enum class ELimNativeSupportedLanguage : uint8
{
	DefaultLanguage                = 0,
	SimplifiedChinese              = 1,
	TraditionalChinese             = 2,
	Arabic                         = 3,
	German                         = 4,
	English                        = 5,
	Spanish                        = 6,
	French                         = 7,
	Hindi                          = 8,
	Indonesian                     = 9,
	Italian                        = 10,
	Japanese                       = 11,
	Korean                         = 12,
	Malay                          = 13,
	Polish                         = 14,
	Portuguese                     = 15,
	Russian                        = 16,
	Thai                           = 17,
	Turkish                        = 18,
	Vietnamese                     = 19,
	Tagalog                        = 20,
	PO                             = 21,
	OP                             = 22,
	ELimNativeSupportedLanguage_MAX = 23,
};

enum class ELimNativeErrorType : uint8
{
	OK                             = 0,
	ApiNotFound                    = 1,
	ParameterInvalid               = 2,
	NetworkError                   = 3,
	InitializeError                = 4,
	ResourceNotFound               = 5,
	ApiTimeout                     = 6,
	LoginFailed                    = 7,
	MsgSendFailed                  = 8,
	MsgSendTimeout                 = 9,
	MsgBuildFailed                 = 10,
	MsgSetStateFailed              = 11,
	ConvsGetFailed                 = 12,
	ConvDiscardFailed              = 13,
	UnImplemented                  = 14,
	Exception                      = 15,
	UserInfoGetFailed              = 16,
	JsonDecodeFailed               = 17,
	Unknown                        = 18,
	ELimNativeErrorType_MAX        = 19,
};

enum class ELimNativeMsgContentType : uint8
{
	Unknown                        = 0,
	Text                           = 1,
	Voice                          = 2,
	Image                          = 3,
	Notification                   = 4,
	ShareGameCard                  = 5,
	CustomEmotion                  = 6,
	Recalled                       = 7,
	ELimNativeMsgContentType_MAX   = 8,
};

enum class ELimNativeFriendStateType : uint8
{
	InIdle                         = 0,
	InTeam                         = 1,
	InMatching                     = 2,
	InGaming                       = 3,
	Offline                        = 4,
	ELimNativeFriendStateType_MAX  = 5,
};

enum class ELimNativeUserSexType : uint8
{
	Unknow                         = 0,
	Male                           = 1,
	FeMale                         = 2,
	ELimNativeUserSexType_MAX      = 3,
};

enum class ELimNativeMsgState : uint8
{
	Created                        = 0,
	Sending                        = 1,
	Sent                           = 2,
	Failed                         = 3,
	Unread                         = 4,
	Read                           = 5,
	ReadAll                        = 6,
	Played                         = 7,
	Revoked                        = 8,
	ELimNativeMsgState_MAX         = 9,
};

enum class ELimNativePackType : uint8
{
	StaticPicture                  = 0,
	DynamicPicture                 = 1,
	ELimNativePackType_MAX         = 2,
};

enum class ELimNativeOSType : uint8
{
	Android                        = 0,
	IOS                            = 1,
	Windows                        = 2,
	ELimNativeOSType_MAX           = 3,
};

enum class ELimNativeUserPeerStatus : uint8
{
	Online                         = 0,
	Blocking                       = 1,
	Blocked                        = 2,
	ELimNativeUserPeerStatus_MAX   = 3,
};

enum class ELimNativeUserAllowType : uint8
{
	Any                            = 0,
	Confirm                        = 1,
	None                           = 2,
	ELimNativeUserAllowType_MAX    = 3,
};

enum class ELimNativeProtType : uint8
{
	Game                           = 0,
	App                            = 1,
	ELimNativeProtType_MAX         = 2,
};

enum class ELimNativeGroupRoleType : uint8
{
	Owner                          = 0,
	Admin                          = 1,
	Member                         = 2,
	ELimNativeGroupRoleType_MAX    = 3,
};

enum class ELimNativeGroupJoinType : uint8
{
	Free                           = 0,
	Verify                         = 1,
	Forbidden                      = 2,
	ELimNativeGroupJoinType_MAX    = 3,
};

enum class ELimNativeGroupType : uint8
{
	Normal                         = 0,
	Temp                           = 1,
	Room                           = 2,
	Custom                         = 3,
	ELimNativeGroupType_MAX        = 4,
};

enum class ELimNativeEventType : uint8
{
	SDKReady                       = 0,
	SDKError                       = 1,
	NetDisconnected                = 2,
	NetConnecting                  = 3,
	NetConnected                   = 4,
	NetReconnected                 = 5,
	NetReconnecting                = 6,
	NetInterrupt                   = 7,
	TokenRenewed                   = 8,
	TokenExpired                   = 9,
	KickedOut                      = 10,
	LoginFreqLimit                 = 11,
	Logining                       = 12,
	Logined                        = 13,
	MsgReceived                    = 14,
	MsgRevoked                     = 15,
	MsgRead                        = 16,
	MsgEdited                      = 17,
	MsgLogicReceived               = 18,
	MsgCaptTriggerred              = 19,
	MsgCaptDispose                 = 20,
	ConvsUpdated                   = 21,
	FriendChanged                  = 22,
	FriendRequestChanged           = 23,
	BlockeeChanged                 = 24,
	BadgesChanged                  = 25,
	UnkownEvent                    = 26,
	ELimNativeEventType_MAX        = 27,
};

enum class ELimNativeConvMentionType : uint8
{
	AtMe                           = 0,
	AtAll                          = 1,
	AtAllMe                        = 2,
	ELimNativeConvMentionType_MAX  = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct LimNative.LimNativeLowLevelWrapper
struct FLimNativeLowLevelWrapper
{
public:
	uint8                                        Pad_B4F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LimNative.LimNativeDataObjectBase
struct FLimNativeDataObjectBase
{
public:
	uint8                                        Pad_B53[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LimNative.UidList
struct FUidList : public FLimNativeDataObjectBase
{
public:
	TArray<class FString>                        Uids;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct LimNative.LimNativeInitConfig
struct FLimNativeInitConfig : public FLimNativeDataObjectBase
{
public:
	enum class ELimNativeSupportedLanguage       Lang;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B56[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Mode;                                              // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EnvId;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppId;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SDKRegion;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameID;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B58[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SlsSvr;                                            // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FarlightDomain;                                    // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ParkEnvID;                                         // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Timeout;                                           // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UseHttps;                                          // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct LimNative.LimNativeDataCallBackBase
struct FLimNativeDataCallBackBase : public FLimNativeDataObjectBase
{
public:
	class FString                                FuncName;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeErrorType               ErrorCode;                                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Code;                                              // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct LimNative.LimNativeResult
struct FLimNativeResult : public FLimNativeDataObjectBase
{
public:
	int32                                        ErrCode;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ErrMsg;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct LimNative.LimNativeDataCallBackDataBase
struct FLimNativeDataCallBackDataBase : public FLimNativeDataObjectBase
{
public:
	struct FLimNativeResult                      ResultData;                                        // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x58 - 0x30)
// ScriptStruct LimNative.LimNativeFriendCommonCallBack
struct FLimNativeFriendCommonCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeDataCallBackDataBase        ResultData;                                        // 0x30(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct LimNative.LimNativeIMGroupBrief
struct FLimNativeIMGroupBrief : public FLimNativeDataObjectBase
{
public:
	class FString                                ChannelId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct LimNative.LimNativeIMChannelMember
struct FLimNativeIMChannelMember : public FLimNativeDataObjectBase
{
public:
	class FString                                ChannelId;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Uid;                                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Role;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x68 - 0x38)
// ScriptStruct LimNative.LimNativeIMGroup
struct FLimNativeIMGroup : public FLimNativeIMGroupBrief
{
public:
	class FString                                GameID;                                            // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Uid;                                               // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLimNativeIMChannelMember>     Members;                                           // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x98 - 0x30)
// ScriptStruct LimNative.LimNativeOnGroupMemberAddCallBack
struct FLimNativeOnGroupMemberAddCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeIMGroup                     Data;                                              // 0x30(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct LimNative.LimNativeConvHandleCallBackData
struct FLimNativeConvHandleCallBackData : public FLimNativeDataObjectBase
{
public:
	struct FLimNativeResult                      Result;                                            // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Msg;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x68 - 0x30)
// ScriptStruct LimNative.LimNativeOnConvHandleCallBack
struct FLimNativeOnConvHandleCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeConvHandleCallBackData      Data;                                              // 0x30(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct LimNative.LimNativeConversationData
struct FLimNativeConversationData : public FLimNativeDataObjectBase
{
public:
	class FString                                ConvID;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B65[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubType;                                           // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Avatar;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UnreadCount;                                       // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B66[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LastMsgId;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeMsgContentType          LastMsgType;                                       // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B67[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                LastMsgTs;                                         // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastReadMsgId;                                     // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastMsgContent;                                    // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BaseMsgId;                                         // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Flags;                                             // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LimNative.LimNativeOnConvsGetCallBackData
struct FLimNativeOnConvsGetCallBackData : public FLimNativeDataObjectBase
{
public:
	TArray<struct FLimNativeConversationData>    ConvList;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x48 - 0x30)
// ScriptStruct LimNative.LimNativeOnConvsGetCallBack
struct FLimNativeOnConvsGetCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeOnConvsGetCallBackData      Data;                                              // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct LimNative.CreateFriendRequestData
struct FCreateFriendRequestData : public FLimNativeDataCallBackDataBase
{
public:
	class FString                                RequestID;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x68 - 0x30)
// ScriptStruct LimNative.LimNativeOnCreateFriendRequestCallBack
struct FLimNativeOnCreateFriendRequestCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FCreateFriendRequestData              FriendRequestCallBackData;                         // 0x30(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x68 (0x98 - 0x30)
// ScriptStruct LimNative.LimNativeOnCreateGroupCallBack
struct FLimNativeOnCreateGroupCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeIMGroup                     Data;                                              // 0x30(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct LimNative.LimNativeOnGroupDestoryCallBack
struct FLimNativeOnGroupDestoryCallBack : public FLimNativeDataCallBackBase
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct LimNative.LimNativeOnGroupAttrGetAllCallBack
struct FLimNativeOnGroupAttrGetAllCallBack : public FLimNativeDataCallBackBase
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct LimNative.LimUserInfo
struct FLimUserInfo : public FLimNativeDataObjectBase
{
public:
	class FString                                Uid;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NickName;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarUrl;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct LimNative.GetBlockeesData
struct FGetBlockeesData : public FLimNativeDataCallBackDataBase
{
public:
	TArray<struct FLimUserInfo>                  UserInfoList;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x68 - 0x30)
// ScriptStruct LimNative.LimNativeOnGetBlockeesCallBack
struct FLimNativeOnGetBlockeesCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FGetBlockeesData                      Data;                                              // 0x30(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct LimNative.LimNativeCommonMsgData
struct FLimNativeCommonMsgData : public FLimNativeDataObjectBase
{
public:
	int32                                        Type;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6B[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct LimNative.LimNativeCommonMsg
struct FLimNativeCommonMsg : public FLimNativeDataObjectBase
{
public:
	class FString                                ServerMsgId;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetId;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetType;                                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLimNativeCommonMsgData               Data;                                              // 0x30(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct LimNative.LimNativeGetCommonCallBackData
struct FLimNativeGetCommonCallBackData : public FLimNativeDataObjectBase
{
public:
	TArray<struct FLimNativeCommonMsg>           CommonMessages;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLimNativeResult                      Result;                                            // 0x18(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x68 - 0x30)
// ScriptStruct LimNative.LimNativeOnGetCommonMsgsCallBack
struct FLimNativeOnGetCommonMsgsCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeGetCommonCallBackData       Data;                                              // 0x30(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct LimNative.LimNativeIMConfig
struct FLimNativeIMConfig : public FLimNativeDataObjectBase
{
public:
	enum class ELimNativeSupportedLanguage       Lang;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B70[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ResDir;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x50 - 0x30)
// ScriptStruct LimNative.LimNativeOnGetConfigCallBack
struct FLimNativeOnGetConfigCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeIMConfig                    Data;                                              // 0x30(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct LimNative.LimNativConnStateData
struct FLimNativConnStateData : public FLimNativeDataObjectBase
{
public:
	int32                                        Connect_State;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B71[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x40 - 0x30)
// ScriptStruct LimNative.LimNativeGetConnStateCallBack
struct FLimNativeGetConnStateCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativConnStateData                Data;                                              // 0x30(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct LimNative.LimNativeConvNumLimitData
struct FLimNativeConvNumLimitData : public FLimNativeDataObjectBase
{
public:
	int32                                        Duration;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Number;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct LimNative.LimNativeConvChatLevelConfigData
struct FLimNativeConvChatLevelConfigData : public FLimNativeDataCallBackDataBase
{
public:
	enum class ELimNativeConvType                ConvType;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B72[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Level;                                             // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Interval;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B73[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLimNativeConvNumLimitData>    NumLimits;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x40 - 0x30)
// ScriptStruct LimNative.LimNativeOnGetConvChatLevelConfigCallBack
struct FLimNativeOnGetConvChatLevelConfigCallBack : public FLimNativeDataCallBackBase
{
public:
	TArray<struct FLimNativeConvChatLevelConfigData> DataList;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct LimNative.SendFriendRequestData
struct FSendFriendRequestData : public FLimNativeDataObjectBase
{
public:
	class FString                                RequestID;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetId;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NickName;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarUrl;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct LimNative.ReceivedFriendRequestData
struct FReceivedFriendRequestData : public FLimNativeDataObjectBase
{
public:
	class FString                                RequestID;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetId;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NickName;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarUrl;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOffLineRequest;                                  // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B77[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x48 - 0x28)
// ScriptStruct LimNative.GetFriendRequestData
struct FGetFriendRequestData : public FLimNativeDataCallBackDataBase
{
public:
	TArray<struct FSendFriendRequestData>        SendRequests;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FReceivedFriendRequestData>    ReceiveRequests;                                   // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x78 - 0x30)
// ScriptStruct LimNative.LimNativeOnGetFriendRequestCallBack
struct FLimNativeOnGetFriendRequestCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FGetFriendRequestData                 GetFriendRequestData;                              // 0x30(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct LimNative.Kingdom
struct FKingdom : public FLimNativeDataObjectBase
{
public:
	class FString                                StoryId;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KingdomId;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarUrl;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct LimNative.Guild
struct FGuild : public FLimNativeDataObjectBase
{
public:
	class FString                                ID;                                                // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarUrl;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AbbrName;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct LimNative.SubTitleItem
struct FSubTitleItem : public FLimNativeDataObjectBase
{
public:
	class FString                                Key;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Content;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BGUrl;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct LimNative.BubbleConfig
struct FBubbleConfig : public FLimNativeDataObjectBase
{
public:
	class FString                                URL;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Top;                                               // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Left;                                              // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bottom;                                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Right;                                             // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA8 - 0x8)
// ScriptStruct LimNative.BubbleConfigs
struct FBubbleConfigs : public FLimNativeDataObjectBase
{
public:
	struct FBubbleConfig                         LeftNormal;                                        // 0x8(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBubbleConfig                         LeftPressed;                                       // 0x30(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBubbleConfig                         RightNormal;                                       // 0x58(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBubbleConfig                         RightPressed;                                      // 0x80(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LimNative.Presence
struct FPresence : public FLimNativeDataObjectBase
{
public:
	bool                                         IsOnline;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B79[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TeamID;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TeamStatus;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsInMyTeam;                                        // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeFriendStateType         FriendState;                                       // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7A[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C8 (0x1D0 - 0x8)
// ScriptStruct LimNative.FriendInfo
struct FFriendInfo : public FLimNativeDataObjectBase
{
public:
	class FString                                Uid;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NickName;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarUrl;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeUserSexType             Sex;                                               // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuild                                Guild;                                             // 0x40(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FKingdom                              Kingdom;                                           // 0x88(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FSubTitleItem>                 SubTitleList;                                      // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BadgeUrl;                                          // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarFrameUrl;                                    // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBubbleConfigs                        BubbleConfigs;                                     // 0x100(0xA8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        VipLevel;                                          // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsShowVip;                                         // 0x1AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ServerTime;                                        // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastFetchTime;                                     // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPresence                             Presence;                                          // 0x1B8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct LimNative.FriendInfoList
struct FFriendInfoList : public FLimNativeDataCallBackDataBase
{
public:
	TArray<struct FFriendInfo>                   FriendList;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x68 - 0x30)
// ScriptStruct LimNative.LimNativeOnGetFriendCallBack
struct FLimNativeOnGetFriendCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FFriendInfoList                       FriendData;                                        // 0x30(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct LimNative.LimNativeGetGMETokenData
struct FLimNativeGetGMETokenData : public FLimNativeDataCallBackDataBase
{
public:
	TArray<uint8>                                AuthBuffer;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x68 - 0x30)
// ScriptStruct LimNative.LimNativeGetGMETokenCallBack
struct FLimNativeGetGMETokenCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeGetGMETokenData             Data;                                              // 0x30(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct LimNative.LimNativeOnGroupAttrGetCallBack
struct FLimNativeOnGroupAttrGetCallBack : public FLimNativeDataCallBackBase
{
public:
};

// 0x68 (0x98 - 0x30)
// ScriptStruct LimNative.LimNativeOnGroupGetCallBack
struct FLimNativeOnGroupGetCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeIMGroup                     Data;                                              // 0x30(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct LimNative.LimNativeOnGroupMemberGetCallBack
struct FLimNativeOnGroupMemberGetCallBack : public FLimNativeDataCallBackBase
{
public:
};

// 0x68 (0x98 - 0x30)
// ScriptStruct LimNative.LimNativeOnGroupMembersGetCallBack
struct FLimNativeOnGroupMembersGetCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeIMGroup                     Data;                                              // 0x30(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x50 - 0x30)
// ScriptStruct LimNative.LimNativeOnGroupsGetCallBack
struct FLimNativeOnGroupsGetCallBack : public FLimNativeDataCallBackBase
{
public:
	class FString                                GameID;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLimNativeIMGroupBrief>        Channels;                                          // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct LimNative.LimNativConfigInfoData
struct FLimNativConfigInfoData : public FLimNativeDataObjectBase
{
public:
	int32                                        Interval;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B80[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x40 - 0x28)
// ScriptStruct LimNative.LimNativeGetConfigInfoData
struct FLimNativeGetConfigInfoData : public FLimNativeDataCallBackDataBase
{
public:
	struct FLimNativConfigInfoData               Data;                                              // 0x28(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        ResultCode;                                        // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B82[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x70 - 0x30)
// ScriptStruct LimNative.LimNativeGetMiscConfigInfoCallBack
struct FLimNativeGetMiscConfigInfoCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeGetConfigInfoData           Data;                                              // 0x30(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct LimNative.LimNativeIMChatMessageInfo
struct FLimNativeIMChatMessageInfo : public FLimNativeDataObjectBase
{
public:
	class FString                                ConvID;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeMsgContentType          MsgType;                                           // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B84[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Ext;                                               // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Nonce;                                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct LimNative.LimNativeIMChatMessage
struct FLimNativeIMChatMessage : public FLimNativeDataObjectBase
{
public:
	struct FLimNativeIMChatMessageInfo           BaseInfo;                                          // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_B85[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ELimNativeMsgContentType          MsgType;                                           // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B86[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct LimNative.LimNativeOnChatMsgCallBackData
struct FLimNativeOnChatMsgCallBackData : public FLimNativeDataObjectBase
{
public:
	class FString                                MsgId;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeMsgState                State;                                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B87[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLimNativeIMChatMessage               Msg;                                               // 0x20(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0xA8 - 0x90)
// ScriptStruct LimNative.LimNativeMsgListData
struct FLimNativeMsgListData : public FLimNativeOnChatMsgCallBackData
{
public:
	class FString                                SenderId;                                          // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsISent;                                           // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B89[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct LimNative.LimNativeMsgConvListData
struct FLimNativeMsgConvListData : public FLimNativeDataObjectBase
{
public:
	class FString                                ConvID;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLimNativeMsgListData>         MsgList;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LimNative.LimNativeMsgConvData
struct FLimNativeMsgConvData : public FLimNativeDataObjectBase
{
public:
	TArray<struct FLimNativeMsgConvListData>     MsgConvList;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x48 - 0x30)
// ScriptStruct LimNative.LimNativeOnGetMsgsCallBack
struct FLimNativeOnGetMsgsCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeMsgConvData                 Data;                                              // 0x30(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct LimNative.LimNativeOssTokenData
struct FLimNativeOssTokenData : public FLimNativeDataObjectBase
{
public:
	class FString                                AssessKeyID;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccessKeySecret;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExpirationUtc;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B94[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SecurityToken;                                     // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Bucket;                                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EndPoint;                                          // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FilePath;                                          // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0xA0 - 0x28)
// ScriptStruct LimNative.LimNativeGetOssTokenData
struct FLimNativeGetOssTokenData : public FLimNativeDataCallBackDataBase
{
public:
	struct FLimNativeOssTokenData                Data;                                              // 0x28(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        ResultCode;                                        // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B95[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xD0 - 0x30)
// ScriptStruct LimNative.LimNativeGetOssTokenCallBack
struct FLimNativeGetOssTokenCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeGetOssTokenData             Data;                                              // 0x30(0xA0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x110 (0x138 - 0x28)
// ScriptStruct LimNative.LimNativeGetUserData
struct FLimNativeGetUserData : public FLimNativeDataCallBackDataBase
{
public:
	class FString                                AvatarFrameUrl;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarUrl;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CreateTime;                                        // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B96[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuild                                Guild;                                             // 0x50(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FKingdom                              Kingdom;                                           // 0x98(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        LastFetchTime;                                     // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B97[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NickName;                                          // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerTime;                                        // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsShowVip;                                         // 0xFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B98[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSubTitleItem>                 SubTitleList;                                      // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Uid;                                               // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VipLevel;                                          // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                GameExtra;                                         // 0x128(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x168 - 0x30)
// ScriptStruct LimNative.LimNativeOnGetUserCallBack
struct FLimNativeOnGetUserCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeGetUserData                 Data;                                              // 0x30(0x138)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct LimNative.LimNativeGetUsersData
struct FLimNativeGetUsersData : public FLimNativeDataCallBackDataBase
{
public:
	TArray<struct FLimNativeGetUserData>         DataResultList;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x68 - 0x30)
// ScriptStruct LimNative.LimNativeOnGetUsersCallBack
struct FLimNativeOnGetUsersCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeGetUsersData                Data;                                              // 0x30(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x78 - 0x28)
// ScriptStruct LimNative.UsersPresence
struct FUsersPresence : public FLimNativeDataCallBackDataBase
{
public:
	TMap<class FString, struct FPresence>        Result;                                            // 0x28(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x78 (0xA8 - 0x30)
// ScriptStruct LimNative.LimNativeOnGetUsersStateCallBack
struct FLimNativeOnGetUsersStateCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FUsersPresence                        Data;                                              // 0x30(0x78)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct LimNative.LimNativeOnGroupJoinCallBack
struct FLimNativeOnGroupJoinCallBack : public FLimNativeDataCallBackBase
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct LimNative.LimNativeOnLoginCallBack
struct FLimNativeOnLoginCallBack : public FLimNativeDataCallBackBase
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct LimNative.LimNativeOnLogoutCallBack
struct FLimNativeOnLogoutCallBack : public FLimNativeDataCallBackBase
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LimNative.LimNativeDataBizFullObj
struct FLimNativeDataBizFullObj : public FLimNativeDataObjectBase
{
public:
	class FString                                Uid;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct LimNative.LimNativeMsgLogiCommonMsgData
struct FLimNativeMsgLogiCommonMsgData : public FLimNativeDataObjectBase
{
public:
	int32                                        Type;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLimNativeDataBizFullObj              BizObj;                                            // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct LimNative.LimNativeMsgLogiMsgData
struct FLimNativeMsgLogiMsgData : public FLimNativeDataObjectBase
{
public:
	struct FLimNativeMsgLogiCommonMsgData        Data;                                              // 0x8(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct LimNative.LimNativeOnMsgLogicReceivedEventCallBack
struct FLimNativeOnMsgLogicReceivedEventCallBack : public FLimNativeDataObjectBase
{
public:
	struct FLimNativeMsgLogiMsgData              Data;                                              // 0x8(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA0 (0xC8 - 0x28)
// ScriptStruct LimNative.LimNativeReceivedMsgData
struct FLimNativeReceivedMsgData : public FLimNativeDataCallBackDataBase
{
public:
	class FString                                LanguageList;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SenderId;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MsgId;                                             // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLimNativeIMChatMessage               Msg;                                               // 0x58(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct LimNative.LimNativeOnMsgReceivedData
struct FLimNativeOnMsgReceivedData : public FLimNativeDataCallBackDataBase
{
public:
	TArray<struct FLimNativeReceivedMsgData>     MsgDataList;                                       // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct LimNative.LimNativeOnMsgReceivedEventCallBack
struct FLimNativeOnMsgReceivedEventCallBack : public FLimNativeDataObjectBase
{
public:
	struct FLimNativeOnMsgReceivedData           Data;                                              // 0x8(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x58 - 0x28)
// ScriptStruct LimNative.LimNativeOnMsgRevokedData
struct FLimNativeOnMsgRevokedData : public FLimNativeDataCallBackDataBase
{
public:
	class FString                                ConvID;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MessageId;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SenderId;                                          // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct LimNative.LimNativeOnMsgRevokedEventCallBack
struct FLimNativeOnMsgRevokedEventCallBack : public FLimNativeDataObjectBase
{
public:
	struct FLimNativeOnMsgRevokedData            Data;                                              // 0x8(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x20 (0x50 - 0x30)
// ScriptStruct LimNative.LimNativeOnGroupQuitCallBack
struct FLimNativeOnGroupQuitCallBack : public FLimNativeDataCallBackBase
{
public:
	class FString                                GameID;                                            // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChannelId;                                         // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x98 - 0x30)
// ScriptStruct LimNative.LimNativeOnGroupMemberRemoveCallBack
struct FLimNativeOnGroupMemberRemoveCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeIMGroup                     Data;                                              // 0x30(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct LimNative.LimNativeOnRevokeMsgCallBack
struct FLimNativeOnRevokeMsgCallBack : public FLimNativeDataCallBackBase
{
public:
};

// 0x90 (0xC0 - 0x30)
// ScriptStruct LimNative.LimNativeOnSendMsgCallBack
struct FLimNativeOnSendMsgCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeOnChatMsgCallBackData       Data;                                              // 0x30(0x90)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x30 - 0x30)
// ScriptStruct LimNative.LimNativeOnSetConvReadCallBack
struct FLimNativeOnSetConvReadCallBack : public FLimNativeDataCallBackBase
{
public:
};

// 0x0 (0x30 - 0x30)
// ScriptStruct LimNative.LimNativeOnGroupAttrSetCallBack
struct FLimNativeOnGroupAttrSetCallBack : public FLimNativeDataCallBackBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct LimNative.LimNativeLanguageConfig
struct FLimNativeLanguageConfig : public FLimNativeDataObjectBase
{
public:
	enum class ELimNativeSupportedLanguage       Lang;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x30 - 0x30)
// ScriptStruct LimNative.LimNativeOnSetMsgStateCallBack
struct FLimNativeOnSetMsgStateCallBack : public FLimNativeDataCallBackBase
{
public:
};

// 0x50 (0x58 - 0x8)
// ScriptStruct LimNative.LimNativeParkConfig
struct FLimNativeParkConfig : public FLimNativeDataObjectBase
{
public:
	class FString                                App_Id;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Sdk_Env;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Sdk_Region;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Gid;                                               // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SlsSvr;                                            // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC8 - 0x8)
// ScriptStruct LimNative.LimNativeReportConfig
struct FLimNativeReportConfig : public FLimNativeDataObjectBase
{
public:
	class FString                                PackageName;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Android_Id;                                        // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Goodle_Aid;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Os_Version;                                        // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Mac;                                               // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Device_Model;                                      // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Open_Id;                                           // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Idfa;                                              // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                App_Version;                                       // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Server_Id;                                         // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Device_Id;                                         // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SlsSvr;                                            // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LimNative.LimNativeResDirConfig
struct FLimNativeResDirConfig : public FLimNativeDataObjectBase
{
public:
	class FString                                ResDir;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x58 - 0x28)
// ScriptStruct LimNative.LimNativeTextTranslateData
struct FLimNativeTextTranslateData : public FLimNativeDataCallBackDataBase
{
public:
	class FString                                TranslatedText;                                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Translator;                                        // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExtraInfo;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x88 - 0x30)
// ScriptStruct LimNative.LimNativeTextTranslateCallBack
struct FLimNativeTextTranslateCallBack : public FLimNativeDataCallBackBase
{
public:
	struct FLimNativeTextTranslateData           Data;                                              // 0x30(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct LimNative.LimNativeIMChatMessageBase
struct FLimNativeIMChatMessageBase : public FLimNativeDataObjectBase
{
public:
	uint8                                        Pad_BA7[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0xB0 - 0x58)
// ScriptStruct LimNative.LimNativeIMEmotionMessage
struct FLimNativeIMEmotionMessage : public FLimNativeIMChatMessageBase
{
public:
	class FString                                PackName;                                          // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativePackType                PackType;                                          // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EmotionName;                                       // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EmotionId;                                         // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EmotionUrl;                                        // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0xA0 - 0x58)
// ScriptStruct LimNative.LimNativeIMImageMessage
struct FLimNativeIMImageMessage : public FLimNativeIMChatMessageBase
{
public:
	class FString                                UUID;                                              // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Fmt;                                               // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Size;                                              // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0xC0 - 0x58)
// ScriptStruct LimNative.LimNativeIMShareMessage
struct FLimNativeIMShareMessage : public FLimNativeIMChatMessageBase
{
public:
	int32                                        Type;                                              // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Text;                                              // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Detail;                                            // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Img;                                               // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x68 - 0x58)
// ScriptStruct LimNative.LimNativeIMTextMessage
struct FLimNativeIMTextMessage : public FLimNativeIMChatMessageBase
{
public:
	class FString                                Text;                                              // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x68 - 0x58)
// ScriptStruct LimNative.LimNativeIMTextWithAtMessage
struct FLimNativeIMTextWithAtMessage : public FLimNativeIMChatMessageBase
{
public:
	class FString                                Text;                                              // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x90 - 0x58)
// ScriptStruct LimNative.LimNativeIMVoiceMessage
struct FLimNativeIMVoiceMessage : public FLimNativeIMChatMessageBase
{
public:
	class FString                                UUID;                                              // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Size;                                              // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Duration;                                          // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct LimNative.LimNativeSetMsgState
struct FLimNativeSetMsgState : public FLimNativeDataObjectBase
{
public:
	enum class ELimNativeConvType                ConvType;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ConvID;                                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeMsgContentType          MsgType;                                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MsgId;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeMsgState                MsgState;                                          // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB0[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct LimNative.LimNativeOnMsgLogicReceivedData
struct FLimNativeOnMsgLogicReceivedData : public FLimNativeDataCallBackDataBase
{
public:
	TArray<struct FLimNativeCommonMsg>           CommonMessage;                                     // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct LimNative.LimNativeBizObjFriendBase
struct FLimNativeBizObjFriendBase : public FLimNativeDataObjectBase
{
public:
	class FString                                Uid;                                               // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NickName;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarUrl;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AvatarFrameUrl;                                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x58 - 0x48)
// ScriptStruct LimNative.LimNativeBizObjRefreshFriend
struct FLimNativeBizObjRefreshFriend : public FLimNativeBizObjFriendBase
{
public:
	class FString                                EmblemUrls;                                        // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x98 - 0x48)
// ScriptStruct LimNative.LimNativeBizObjFriendRequest
struct FLimNativeBizObjFriendRequest : public FLimNativeBizObjFriendBase
{
public:
	class FString                                RequestID;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RequestMsg;                                        // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RequestSource;                                     // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Lang;                                              // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LimNative.LimNativeBizObjGroupBase
struct FLimNativeBizObjGroupBase : public FLimNativeDataObjectBase
{
public:
	class FString                                Groupid;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x30 - 0x18)
// ScriptStruct LimNative.LimNativeBizObjExitGroup
struct FLimNativeBizObjExitGroup : public FLimNativeBizObjGroupBase
{
public:
	enum class ELimNativeGroupType               Type;                                              // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Uid;                                               // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x28 - 0x18)
// ScriptStruct LimNative.LimNativeBizObjGroupPerms
struct FLimNativeBizObjGroupPerms : public FLimNativeBizObjGroupBase
{
public:
	class FString                                Perms;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x68 - 0x58)
// ScriptStruct LimNative.LimNativeIMNotificationMessage
struct FLimNativeIMNotificationMessage : public FLimNativeIMChatMessageBase
{
public:
	class FString                                Text;                                              // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct LimNative.LimNativeEventDataBase
struct FLimNativeEventDataBase : public FLimNativeDataObjectBase
{
public:
	class FString                                JsonData;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ErrorCode;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeEventType               EventCode;                                         // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}



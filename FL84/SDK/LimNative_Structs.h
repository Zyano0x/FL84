#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
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
	 * Enum LimNative.ELimNativeConvType
	 */
	enum class ELimNativeConvType : uint8_t
	{
		Group       = 0,
		Peer        = 1,
		Room        = 2,
		CustomGroup = 3,
		Robot       = 4,
		System      = 5,
		TempGroup   = 6,
		MAX         = 7
	};

	/**
	 * Enum LimNative.ELimNativeMsgDirType
	 */
	enum class ELimNativeMsgDirType : uint8_t
	{
		After  = 0,
		Around = 1,
		Before = 2,
		MAX    = 3
	};

	/**
	 * Enum LimNative.ELimNativeSupportedLanguage
	 */
	enum class ELimNativeSupportedLanguage : uint8_t
	{
		DefaultLanguage    = 0,
		SimplifiedChinese  = 1,
		TraditionalChinese = 2,
		Arabic             = 3,
		German             = 4,
		English            = 5,
		Spanish            = 6,
		French             = 7,
		Hindi              = 8,
		Indonesian         = 9,
		Italian            = 10,
		Japanese           = 11,
		Korean             = 12,
		Malay              = 13,
		Polish             = 14,
		Portuguese         = 15,
		Russian            = 16,
		Thai               = 17,
		Turkish            = 18,
		Vietnamese         = 19,
		Tagalog            = 20,
		PO                 = 21,
		OP                 = 22,
		MAX                = 23
	};

	/**
	 * Enum LimNative.ELimNativeErrorType
	 */
	enum class ELimNativeErrorType : uint8_t
	{
		OK                = 0,
		ApiNotFound       = 1,
		ParameterInvalid  = 2,
		NetworkError      = 3,
		InitializeError   = 4,
		ResourceNotFound  = 5,
		ApiTimeout        = 6,
		LoginFailed       = 7,
		MsgSendFailed     = 8,
		MsgSendTimeout    = 9,
		MsgBuildFailed    = 10,
		MsgSetStateFailed = 11,
		ConvsGetFailed    = 12,
		ConvDiscardFailed = 13,
		UnImplemented     = 14,
		Exception         = 15,
		UserInfoGetFailed = 16,
		JsonDecodeFailed  = 17,
		Unknown           = 18,
		MAX               = 19
	};

	/**
	 * Enum LimNative.ELimNativeMsgContentType
	 */
	enum class ELimNativeMsgContentType : uint8_t
	{
		Unknown       = 0,
		Text          = 1,
		Voice         = 2,
		Image         = 3,
		Notification  = 4,
		ShareGameCard = 5,
		CustomEmotion = 6,
		Recalled      = 7,
		MAX           = 8
	};

	/**
	 * Enum LimNative.ELimNativeFriendStateType
	 */
	enum class ELimNativeFriendStateType : uint8_t
	{
		InIdle     = 0,
		InTeam     = 1,
		InMatching = 2,
		InGaming   = 3,
		Offline    = 4,
		MAX        = 5
	};

	/**
	 * Enum LimNative.ELimNativeUserSexType
	 */
	enum class ELimNativeUserSexType : uint8_t
	{
		Unknow = 0,
		Male   = 1,
		FeMale = 2,
		MAX    = 3
	};

	/**
	 * Enum LimNative.ELimNativeMsgState
	 */
	enum class ELimNativeMsgState : uint8_t
	{
		Created = 0,
		Sending = 1,
		Sent    = 2,
		Failed  = 3,
		Unread  = 4,
		Read    = 5,
		ReadAll = 6,
		Played  = 7,
		Revoked = 8,
		MAX     = 9
	};

	/**
	 * Enum LimNative.ELimNativePackType
	 */
	enum class ELimNativePackType : uint8_t
	{
		StaticPicture  = 0,
		DynamicPicture = 1,
		MAX            = 2
	};

	/**
	 * Enum LimNative.ELimNativeOSType
	 */
	enum class ELimNativeOSType : uint8_t
	{
		Android = 0,
		iOS     = 1,
		Windows = 2,
		MAX     = 3
	};

	/**
	 * Enum LimNative.ELimNativeUserPeerStatus
	 */
	enum class ELimNativeUserPeerStatus : uint8_t
	{
		Online   = 0,
		Blocking = 1,
		Blocked  = 2,
		MAX      = 3
	};

	/**
	 * Enum LimNative.ELimNativeUserAllowType
	 */
	enum class ELimNativeUserAllowType : uint8_t
	{
		Any     = 0,
		Confirm = 1,
		None    = 2,
		MAX     = 3
	};

	/**
	 * Enum LimNative.ELimNativeProtType
	 */
	enum class ELimNativeProtType : uint8_t
	{
		Game = 0,
		App  = 1,
		MAX  = 2
	};

	/**
	 * Enum LimNative.ELimNativeGroupRoleType
	 */
	enum class ELimNativeGroupRoleType : uint8_t
	{
		Owner  = 0,
		Admin  = 1,
		Member = 2,
		MAX    = 3
	};

	/**
	 * Enum LimNative.ELimNativeGroupJoinType
	 */
	enum class ELimNativeGroupJoinType : uint8_t
	{
		Free      = 0,
		Verify    = 1,
		Forbidden = 2,
		MAX       = 3
	};

	/**
	 * Enum LimNative.ELimNativeGroupType
	 */
	enum class ELimNativeGroupType : uint8_t
	{
		Normal = 0,
		Temp   = 1,
		Room   = 2,
		Custom = 3,
		MAX    = 4
	};

	/**
	 * Enum LimNative.ELimNativeEventType
	 */
	enum class ELimNativeEventType : uint8_t
	{
		SDKReady             = 0,
		SDKError             = 1,
		NetDisconnected      = 2,
		NetConnecting        = 3,
		NetConnected         = 4,
		NetReconnected       = 5,
		NetReconnecting      = 6,
		NetInterrupt         = 7,
		TokenRenewed         = 8,
		TokenExpired         = 9,
		KickedOut            = 10,
		LoginFreqLimit       = 11,
		Logining             = 12,
		Logined              = 13,
		MsgReceived          = 14,
		MsgRevoked           = 15,
		MsgRead              = 16,
		MsgEdited            = 17,
		MsgLogicReceived     = 18,
		MsgCaptTriggerred    = 19,
		MsgCaptDispose       = 20,
		ConvsUpdated         = 21,
		FriendChanged        = 22,
		FriendRequestChanged = 23,
		BlockeeChanged       = 24,
		BadgesChanged        = 25,
		UnkownEvent          = 26,
		MAX                  = 27
	};

	/**
	 * Enum LimNative.ELimNativeConvMentionType
	 */
	enum class ELimNativeConvMentionType : uint8_t
	{
		AtMe    = 0,
		AtAll   = 1,
		AtAllMe = 2,
		MAX     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LimNative.LimNativeLowLevelWrapper
	 * Size -> 0x0010
	 */
	struct FLimNativeLowLevelWrapper
	{
	public:
		unsigned char                                              UnknownData_9AZS[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.LimNativeDataObjectBase
	 * Size -> 0x0008
	 */
	struct FLimNativeDataObjectBase
	{
	public:
		unsigned char                                              UnknownData_4GT3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.UidList
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FUidList : public FLimNativeDataObjectBase
	{
	public:
		TArray<class FString>                                      Uids;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeInitConfig
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FLimNativeInitConfig : public FLimNativeDataObjectBase
	{
	public:
		ELimNativeSupportedLanguage                                Lang;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZC27[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Mode;                                                    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EnvId;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AppId;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SDKRegion;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameID;                                                  // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W1JH[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SlsSvr;                                                  // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FarlightDomain;                                          // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Timeout;                                                 // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeDataCallBackBase
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FLimNativeDataCallBackBase : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              FuncName;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeErrorType                                        ErrorCode;                                               // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3K3[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Code;                                                    // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeResult
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FLimNativeResult : public FLimNativeDataObjectBase
	{
	public:
		int32_t                                                    ErrCode;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ADQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ErrMsg;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeDataCallBackDataBase
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FLimNativeDataCallBackDataBase : public FLimNativeDataObjectBase
	{
	public:
		struct FLimNativeResult                                    ResultData;                                              // 0x0008(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeFriendCommonCallBack
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	struct FLimNativeFriendCommonCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeDataCallBackDataBase                      ResultData;                                              // 0x0030(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeIMGroupBrief
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FLimNativeIMGroupBrief : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              ChannelId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Extra;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeIMChannelMember
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FLimNativeIMChannelMember : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              ChannelId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Uid;                                                     // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Role;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeIMGroup
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	struct FLimNativeIMGroup : public FLimNativeIMGroupBrief
	{
	public:
		class FString                                              GameID;                                                  // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Uid;                                                     // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLimNativeIMChannelMember>                   members;                                                 // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGroupMemberAddCallBack
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGroupMemberAddCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeIMGroup                                   Data;                                                    // 0x0030(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeConvHandleCallBackData
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FLimNativeConvHandleCallBackData : public FLimNativeDataObjectBase
	{
	public:
		struct FLimNativeResult                                    Result;                                                  // 0x0008(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              Msg;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnConvHandleCallBack
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnConvHandleCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeConvHandleCallBackData                    Data;                                                    // 0x0030(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeConversationData
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FLimNativeConversationData : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              ConvID;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeConvType                                         ConvType;                                                // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0HF[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SubType;                                                 // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Avatar;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UnreadCount;                                             // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D6KK[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LastMsgId;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeMsgContentType                                   LastMsgType;                                             // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SUUT[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LastMsgTs;                                               // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastReadMsgId;                                           // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastMsgContent;                                          // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BaseMsgId;                                               // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Flags;                                                   // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnConvsGetCallBackData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FLimNativeOnConvsGetCallBackData : public FLimNativeDataObjectBase
	{
	public:
		TArray<struct FLimNativeConversationData>                  ConvList;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnConvsGetCallBack
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnConvsGetCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeOnConvsGetCallBackData                    Data;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.CreateFriendRequestData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FCreateFriendRequestData : public FLimNativeDataCallBackDataBase
	{
	public:
		class FString                                              RequestID;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnCreateFriendRequestCallBack
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnCreateFriendRequestCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FCreateFriendRequestData                            FriendRequestCallBackData;                               // 0x0030(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnCreateGroupCallBack
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnCreateGroupCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeIMGroup                                   Data;                                                    // 0x0030(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGroupDestoryCallBack
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGroupDestoryCallBack : public FLimNativeDataCallBackBase
	{	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGroupAttrGetAllCallBack
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGroupAttrGetAllCallBack : public FLimNativeDataCallBackBase
	{	};

	/**
	 * ScriptStruct LimNative.LimUserInfo
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FLimUserInfo : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              Uid;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NickName;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvatarUrl;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.GetBlockeesData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FGetBlockeesData : public FLimNativeDataCallBackDataBase
	{
	public:
		TArray<struct FLimUserInfo>                                UserInfoList;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGetBlockeesCallBack
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGetBlockeesCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FGetBlockeesData                                    Data;                                                    // 0x0030(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeCommonMsgData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FLimNativeCommonMsgData : public FLimNativeDataObjectBase
	{
	public:
		int32_t                                                    Type;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UEKO[0x14];                                  // 0x000C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.LimNativeCommonMsg
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FLimNativeCommonMsg : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              ServerMsgId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetId;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetType;                                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6GS[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLimNativeCommonMsgData                             Data;                                                    // 0x0030(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeGetCommonCallBackData
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FLimNativeGetCommonCallBackData : public FLimNativeDataObjectBase
	{
	public:
		TArray<struct FLimNativeCommonMsg>                         CommonMessages;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLimNativeResult                                    Result;                                                  // 0x0018(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGetCommonMsgsCallBack
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGetCommonMsgsCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeGetCommonCallBackData                     Data;                                                    // 0x0030(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeIMConfig
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FLimNativeIMConfig : public FLimNativeDataObjectBase
	{
	public:
		ELimNativeSupportedLanguage                                Lang;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHFA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ResDir;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGetConfigCallBack
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGetConfigCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeIMConfig                                  Data;                                                    // 0x0030(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativConnStateData
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FLimNativConnStateData : public FLimNativeDataObjectBase
	{
	public:
		int32_t                                                    Connect_State;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYVO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.LimNativeGetConnStateCallBack
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FLimNativeGetConnStateCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativConnStateData                              Data;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeConvNumLimitData
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FLimNativeConvNumLimitData : public FLimNativeDataObjectBase
	{
	public:
		int32_t                                                    Duration;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Number;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeConvChatLevelConfigData
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FLimNativeConvChatLevelConfigData : public FLimNativeDataCallBackDataBase
	{
	public:
		ELimNativeConvType                                         ConvType;                                                // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KC4L[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Interval;                                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGLL[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLimNativeConvNumLimitData>                  NumLimits;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGetConvChatLevelConfigCallBack
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGetConvChatLevelConfigCallBack : public FLimNativeDataCallBackBase
	{
	public:
		TArray<struct FLimNativeConvChatLevelConfigData>           DataList;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.SendFriendRequestData
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FSendFriendRequestData : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              RequestID;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetId;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NickName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvatarUrl;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.ReceivedFriendRequestData
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FReceivedFriendRequestData : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              RequestID;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetId;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NickName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvatarUrl;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOffLineRequest;                                        // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IEVJ[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.GetFriendRequestData
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FGetFriendRequestData : public FLimNativeDataCallBackDataBase
	{
	public:
		TArray<struct FSendFriendRequestData>                      SendRequests;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FReceivedFriendRequestData>                  ReceiveRequests;                                         // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGetFriendRequestCallBack
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGetFriendRequestCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FGetFriendRequestData                               GetFriendRequestData;                                    // 0x0030(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.Guild
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FGuild : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              ID;                                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvatarUrl;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AbbrName;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.Kingdom
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FKingdom : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              StoryId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KingdomId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvatarUrl;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.SubTitleItem
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FSubTitleItem : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              Key;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Content;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BGUrl;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.BubbleConfig
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FBubbleConfig : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              URL;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top;                                                     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Left;                                                    // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bottom;                                                  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Right;                                                   // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.BubbleConfigs
	 * Size -> 0x00A0 (FullSize[0x00A8] - InheritedSize[0x0008])
	 */
	struct FBubbleConfigs : public FLimNativeDataObjectBase
	{
	public:
		struct FBubbleConfig                                       LeftNormal;                                              // 0x0008(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBubbleConfig                                       LeftPressed;                                             // 0x0030(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBubbleConfig                                       RightNormal;                                             // 0x0058(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBubbleConfig                                       RightPressed;                                            // 0x0080(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.Presence
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FPresence : public FLimNativeDataObjectBase
	{
	public:
		bool                                                       IsOnline;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S2IG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TeamID;                                                  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamStatus;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInMyTeam;                                              // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeFriendStateType                                  FriendState;                                             // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YED[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.FriendInfo
	 * Size -> 0x01C8 (FullSize[0x01D0] - InheritedSize[0x0008])
	 */
	struct FFriendInfo : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              Uid;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NickName;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvatarUrl;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeUserSexType                                      Sex;                                                     // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZFR[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuild                                              Guild;                                                   // 0x0040(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FKingdom                                            Kingdom;                                                 // 0x0088(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FSubTitleItem>                               SubTitleList;                                            // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BadgeUrl;                                                // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvatarFrameUrl;                                          // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBubbleConfigs                                      BubbleConfigs;                                           // 0x0100(0x00A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    VipLevel;                                                // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsShowVip;                                               // 0x01AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WHOO[0x3];                                   // 0x01AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ServerTime;                                              // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastFetchTime;                                           // 0x01B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPresence                                           Presence;                                                // 0x01B8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.FriendInfoList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FFriendInfoList : public FLimNativeDataCallBackDataBase
	{
	public:
		TArray<struct FFriendInfo>                                 FriendList;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGetFriendCallBack
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGetFriendCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FFriendInfoList                                     FriendData;                                              // 0x0030(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeGetGMETokenData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FLimNativeGetGMETokenData : public FLimNativeDataCallBackDataBase
	{
	public:
		TArray<unsigned char>                                      AuthBuffer;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeGetGMETokenCallBack
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	struct FLimNativeGetGMETokenCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeGetGMETokenData                           Data;                                                    // 0x0030(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGroupAttrGetCallBack
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGroupAttrGetCallBack : public FLimNativeDataCallBackBase
	{	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGroupGetCallBack
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGroupGetCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeIMGroup                                   Data;                                                    // 0x0030(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGroupMemberGetCallBack
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGroupMemberGetCallBack : public FLimNativeDataCallBackBase
	{	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGroupMembersGetCallBack
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGroupMembersGetCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeIMGroup                                   Data;                                                    // 0x0030(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGroupsGetCallBack
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGroupsGetCallBack : public FLimNativeDataCallBackBase
	{
	public:
		class FString                                              GameID;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLimNativeIMGroupBrief>                      Channels;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativConfigInfoData
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FLimNativConfigInfoData : public FLimNativeDataObjectBase
	{
	public:
		int32_t                                                    Interval;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BX5Y[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.LimNativeGetConfigInfoData
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FLimNativeGetConfigInfoData : public FLimNativeDataCallBackDataBase
	{
	public:
		struct FLimNativConfigInfoData                             Data;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    ResultCode;                                              // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E3W1[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.LimNativeGetMiscConfigInfoCallBack
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	struct FLimNativeGetMiscConfigInfoCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeGetConfigInfoData                         Data;                                                    // 0x0030(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeIMChatMessageInfo
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FLimNativeIMChatMessageInfo : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              ConvID;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeConvType                                         ConvType;                                                // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeMsgContentType                                   MsgType;                                                 // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_686D[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Ext;                                                     // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Nonce;                                                   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeIMChatMessage
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FLimNativeIMChatMessage : public FLimNativeDataObjectBase
	{
	public:
		struct FLimNativeIMChatMessageInfo                         BaseInfo;                                                // 0x0008(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C4TY[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ELimNativeMsgContentType                                   MsgType;                                                 // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDTD[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnChatMsgCallBackData
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FLimNativeOnChatMsgCallBackData : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              MsgId;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeMsgState                                         State;                                                   // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMB3[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLimNativeIMChatMessage                             Msg;                                                     // 0x0020(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeMsgListData
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	struct FLimNativeMsgListData : public FLimNativeOnChatMsgCallBackData
	{
	public:
		class FString                                              SenderId;                                                // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsISent;                                                 // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BNEH[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.LimNativeMsgConvListData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FLimNativeMsgConvListData : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              ConvID;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeConvType                                         ConvType;                                                // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOV2[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLimNativeMsgListData>                       MsgList;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeMsgConvData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FLimNativeMsgConvData : public FLimNativeDataObjectBase
	{
	public:
		TArray<struct FLimNativeMsgConvListData>                   MsgConvList;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGetMsgsCallBack
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGetMsgsCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeMsgConvData                               Data;                                                    // 0x0030(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOssTokenData
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FLimNativeOssTokenData : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              AssessKeyID;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AccessKeySecret;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExpirationUtc;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VX4W[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SecurityToken;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Bucket;                                                  // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EndPoint;                                                // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FilePath;                                                // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeGetOssTokenData
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	struct FLimNativeGetOssTokenData : public FLimNativeDataCallBackDataBase
	{
	public:
		struct FLimNativeOssTokenData                              Data;                                                    // 0x0028(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    ResultCode;                                              // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZFG[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.LimNativeGetOssTokenCallBack
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	struct FLimNativeGetOssTokenCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeGetOssTokenData                           Data;                                                    // 0x0030(0x00A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeGetUserData
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	struct FLimNativeGetUserData : public FLimNativeDataCallBackDataBase
	{
	public:
		class FString                                              AvatarFrameUrl;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvatarUrl;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CreateTime;                                              // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TECY[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuild                                              Guild;                                                   // 0x0050(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FKingdom                                            Kingdom;                                                 // 0x0098(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    LastFetchTime;                                           // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7FX[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NickName;                                                // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerTime;                                              // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsShowVip;                                               // 0x00FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0Q2F[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSubTitleItem>                               SubTitleList;                                            // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Uid;                                                     // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VipLevel;                                                // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E6FK[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GameExtra;                                               // 0x0128(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGetUserCallBack
	 * Size -> 0x0138 (FullSize[0x0168] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGetUserCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeGetUserData                               Data;                                                    // 0x0030(0x0138) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeGetUsersData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FLimNativeGetUsersData : public FLimNativeDataCallBackDataBase
	{
	public:
		TArray<struct FLimNativeGetUserData>                       DataResultList;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGetUsersCallBack
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGetUsersCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeGetUsersData                              Data;                                                    // 0x0030(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.UsersPresence
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	struct FUsersPresence : public FLimNativeDataCallBackDataBase
	{
	public:
		TMap<class FString, struct FPresence>                      Result;                                                  // 0x0028(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGetUsersStateCallBack
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGetUsersStateCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FUsersPresence                                      Data;                                                    // 0x0030(0x0078) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGroupJoinCallBack
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGroupJoinCallBack : public FLimNativeDataCallBackBase
	{	};

	/**
	 * ScriptStruct LimNative.LimNativeOnLoginCallBack
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnLoginCallBack : public FLimNativeDataCallBackBase
	{	};

	/**
	 * ScriptStruct LimNative.LimNativeOnLogoutCallBack
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnLogoutCallBack : public FLimNativeDataCallBackBase
	{	};

	/**
	 * ScriptStruct LimNative.LimNativeDataBizFullObj
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FLimNativeDataBizFullObj : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              Uid;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeMsgLogiCommonMsgData
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FLimNativeMsgLogiCommonMsgData : public FLimNativeDataObjectBase
	{
	public:
		int32_t                                                    Type;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KPVH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLimNativeDataBizFullObj                            BizObj;                                                  // 0x0010(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeMsgLogiMsgData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FLimNativeMsgLogiMsgData : public FLimNativeDataObjectBase
	{
	public:
		struct FLimNativeMsgLogiCommonMsgData                      Data;                                                    // 0x0008(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnMsgLogicReceivedEventCallBack
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FLimNativeOnMsgLogicReceivedEventCallBack : public FLimNativeDataObjectBase
	{
	public:
		struct FLimNativeMsgLogiMsgData                            Data;                                                    // 0x0008(0x0030) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeReceivedMsgData
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	struct FLimNativeReceivedMsgData : public FLimNativeDataCallBackDataBase
	{
	public:
		class FString                                              LanguageList;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SenderId;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MsgId;                                                   // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLimNativeIMChatMessage                             Msg;                                                     // 0x0058(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnMsgReceivedData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FLimNativeOnMsgReceivedData : public FLimNativeDataCallBackDataBase
	{
	public:
		TArray<struct FLimNativeReceivedMsgData>                   MsgDataList;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnMsgReceivedEventCallBack
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FLimNativeOnMsgReceivedEventCallBack : public FLimNativeDataObjectBase
	{
	public:
		struct FLimNativeOnMsgReceivedData                         Data;                                                    // 0x0008(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnMsgRevokedData
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FLimNativeOnMsgRevokedData : public FLimNativeDataCallBackDataBase
	{
	public:
		class FString                                              ConvID;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeConvType                                         ConvType;                                                // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4682[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MessageId;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SenderId;                                                // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QIDO[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnMsgRevokedEventCallBack
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FLimNativeOnMsgRevokedEventCallBack : public FLimNativeDataObjectBase
	{
	public:
		struct FLimNativeOnMsgRevokedData                          Data;                                                    // 0x0008(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGroupQuitCallBack
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGroupQuitCallBack : public FLimNativeDataCallBackBase
	{
	public:
		class FString                                              GameID;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ChannelId;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGroupMemberRemoveCallBack
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGroupMemberRemoveCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeIMGroup                                   Data;                                                    // 0x0030(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnRevokeMsgCallBack
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnRevokeMsgCallBack : public FLimNativeDataCallBackBase
	{	};

	/**
	 * ScriptStruct LimNative.LimNativeOnSendMsgCallBack
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnSendMsgCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeOnChatMsgCallBackData                     Data;                                                    // 0x0030(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnSetConvReadCallBack
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnSetConvReadCallBack : public FLimNativeDataCallBackBase
	{	};

	/**
	 * ScriptStruct LimNative.LimNativeOnGroupAttrSetCallBack
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnGroupAttrSetCallBack : public FLimNativeDataCallBackBase
	{	};

	/**
	 * ScriptStruct LimNative.LimNativeLanguageConfig
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FLimNativeLanguageConfig : public FLimNativeDataObjectBase
	{
	public:
		ELimNativeSupportedLanguage                                Lang;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z514[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnSetMsgStateCallBack
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FLimNativeOnSetMsgStateCallBack : public FLimNativeDataCallBackBase
	{	};

	/**
	 * ScriptStruct LimNative.LimNativeParkConfig
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FLimNativeParkConfig : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              App_Id;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Sdk_Env;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Sdk_Region;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Gid;                                                     // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SlsSvr;                                                  // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeReportConfig
	 * Size -> 0x00C0 (FullSize[0x00C8] - InheritedSize[0x0008])
	 */
	struct FLimNativeReportConfig : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              PackageName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Android_Id;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Goodle_Aid;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Os_Version;                                              // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Mac;                                                     // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Device_Model;                                            // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Open_Id;                                                 // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Idfa;                                                    // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              App_Version;                                             // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Server_Id;                                               // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Device_Id;                                               // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SlsSvr;                                                  // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeResDirConfig
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FLimNativeResDirConfig : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              ResDir;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeTextTranslateData
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	struct FLimNativeTextTranslateData : public FLimNativeDataCallBackDataBase
	{
	public:
		class FString                                              TranslatedText;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Translator;                                              // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExtraInfo;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeTextTranslateCallBack
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	struct FLimNativeTextTranslateCallBack : public FLimNativeDataCallBackBase
	{
	public:
		struct FLimNativeTextTranslateData                         Data;                                                    // 0x0030(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeIMChatMessageBase
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FLimNativeIMChatMessageBase : public FLimNativeDataObjectBase
	{
	public:
		unsigned char                                              UnknownData_PZYQ[0x50];                                  // 0x0008(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.LimNativeIMEmotionMessage
	 * Size -> 0x0058 (FullSize[0x00B0] - InheritedSize[0x0058])
	 */
	struct FLimNativeIMEmotionMessage : public FLimNativeIMChatMessageBase
	{
	public:
		class FString                                              PackName;                                                // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativePackType                                         PackType;                                                // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TLE[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EmotionName;                                             // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EmotionId;                                               // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EmotionUrl;                                              // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Desc;                                                    // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeIMImageMessage
	 * Size -> 0x0048 (FullSize[0x00A0] - InheritedSize[0x0058])
	 */
	struct FLimNativeIMImageMessage : public FLimNativeIMChatMessageBase
	{
	public:
		class FString                                              UUID;                                                    // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Fmt;                                                     // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Width;                                                   // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Height;                                                  // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Size;                                                    // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeIMShareMessage
	 * Size -> 0x0068 (FullSize[0x00C0] - InheritedSize[0x0058])
	 */
	struct FLimNativeIMShareMessage : public FLimNativeIMChatMessageBase
	{
	public:
		int32_t                                                    Type;                                                    // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1QUX[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Text;                                                    // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Detail;                                                  // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Img;                                                     // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Extra;                                                   // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeIMTextMessage
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	struct FLimNativeIMTextMessage : public FLimNativeIMChatMessageBase
	{
	public:
		class FString                                              Text;                                                    // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeIMTextWithAtMessage
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	struct FLimNativeIMTextWithAtMessage : public FLimNativeIMChatMessageBase
	{
	public:
		class FString                                              Text;                                                    // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeIMVoiceMessage
	 * Size -> 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
	 */
	struct FLimNativeIMVoiceMessage : public FLimNativeIMChatMessageBase
	{
	public:
		class FString                                              UUID;                                                    // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Size;                                                    // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Duration;                                                // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MYJ5[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.LimNativeSetMsgState
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FLimNativeSetMsgState : public FLimNativeDataObjectBase
	{
	public:
		ELimNativeConvType                                         ConvType;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4UQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ConvID;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeMsgContentType                                   MsgType;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00CY[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MsgId;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeMsgState                                         MsgState;                                                // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKQM[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LimNative.LimNativeOnMsgLogicReceivedData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FLimNativeOnMsgLogicReceivedData : public FLimNativeDataCallBackDataBase
	{
	public:
		TArray<struct FLimNativeCommonMsg>                         CommonMessage;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeBizObjFriendBase
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FLimNativeBizObjFriendBase : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              Uid;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NickName;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvatarUrl;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AvatarFrameUrl;                                          // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeBizObjRefreshFriend
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	struct FLimNativeBizObjRefreshFriend : public FLimNativeBizObjFriendBase
	{
	public:
		class FString                                              EmblemUrls;                                              // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeBizObjFriendRequest
	 * Size -> 0x0050 (FullSize[0x0098] - InheritedSize[0x0048])
	 */
	struct FLimNativeBizObjFriendRequest : public FLimNativeBizObjFriendBase
	{
	public:
		class FString                                              RequestID;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RequestMsg;                                              // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RequestSource;                                           // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Lang;                                                    // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeBizObjGroupBase
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FLimNativeBizObjGroupBase : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              groupid;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeBizObjExitGroup
	 * Size -> 0x0018 (FullSize[0x0030] - InheritedSize[0x0018])
	 */
	struct FLimNativeBizObjExitGroup : public FLimNativeBizObjGroupBase
	{
	public:
		ELimNativeGroupType                                        Type;                                                    // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LYF5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Uid;                                                     // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeBizObjGroupPerms
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FLimNativeBizObjGroupPerms : public FLimNativeBizObjGroupBase
	{
	public:
		class FString                                              Perms;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeIMNotificationMessage
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	struct FLimNativeIMNotificationMessage : public FLimNativeIMChatMessageBase
	{
	public:
		class FString                                              Text;                                                    // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct LimNative.LimNativeEventDataBase
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FLimNativeEventDataBase : public FLimNativeDataObjectBase
	{
	public:
		class FString                                              JsonData;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ErrorCode;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELimNativeEventType                                        EventCode;                                               // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0QQS[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

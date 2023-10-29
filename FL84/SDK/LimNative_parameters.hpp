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

// 0x38 (0x38 - 0x0)
// Function LimNative.LimNative.TranslateText
struct ULimNative_TranslateText_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InText;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeSupportedLanguage       InLang;                                            // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_987[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ExtraInfo;                                         // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNative.SetResDir
struct ULimNative_SetResDir_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InResDir;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function LimNative.LimNative.SetMsgState
struct ULimNative_SetMsgState_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeSetMsgState                 SetMsgParams;                                      // 0x10(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNative.SetLogHandler
struct ULimNative_SetLogHandler_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LimNative.LimNative.SetLanguage
struct ULimNative_SetLanguage_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ELimNativeSupportedLanguage       InLanguage;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_988[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function LimNative.LimNative.SetGroupAttr
struct ULimNative_SetGroupAttr_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Groupid;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNative.SetEventHandler
struct ULimNative_SetEventHandler_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function LimNative.LimNative.SetConvRead
struct ULimNative_SetConvRead_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InMsgID;                                           // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function LimNative.LimNative.SetAllConfig
struct ULimNative_SetAllConfig_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeInitConfig                  InConfig;                                          // 0x10(0x78)(Parm, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function LimNative.LimNative.SendVoiceMsg
struct ULimNative_SendVoiceMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMVoiceMessage              VoiceMsg;                                          // 0x10(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0xA0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0xB0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_990[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Nonce;                                             // 0xB8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0xC8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0xD8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function LimNative.LimNative.SendTextWithAtMsg
struct ULimNative_SendTextWithAtMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMTextWithAtMessage         TextWithAtMsg;                                     // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x88(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_995[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Nonce;                                             // 0x90(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0xA0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0xB0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function LimNative.LimNative.SendTextMsg
struct ULimNative_SendTextMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMTextMessage               TextMsg;                                           // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x88(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Nonce;                                             // 0x90(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0xA0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0xB0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function LimNative.LimNative.SendShareMsg
struct ULimNative_SendShareMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMShareMessage              ShareMsg;                                          // 0x10(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0xD0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0xE0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Nonce;                                             // 0xE8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0xF8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0x108(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function LimNative.LimNative.SendImageMsg
struct ULimNative_SendImageMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMImageMessage              ImageMsg;                                          // 0x10(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0xB0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0xC0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Nonce;                                             // 0xC8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0xD8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0xE8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function LimNative.LimNative.SendEmotionMsg
struct ULimNative_SendEmotionMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMEmotionMessage            EmotionMsg;                                        // 0x10(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0xC0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0xD0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Nonce;                                             // 0xD8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0xE8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0xF8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function LimNative.LimNative.RevokeVoiceMsg
struct ULimNative_RevokeVoiceMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMVoiceMessage              VoiceMsg;                                          // 0x10(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0xA0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0xB0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9BE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Nonce;                                             // 0xB8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0xC8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function LimNative.LimNative.RevokeTextWithAtMsg
struct ULimNative_RevokeTextWithAtMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMTextWithAtMessage         TextWithAtMsg;                                     // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x88(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9BF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Nonce;                                             // 0x90(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0xA0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function LimNative.LimNative.RevokeTextMsg
struct ULimNative_RevokeTextMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMTextMessage               TextMsg;                                           // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0x78(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x88(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Nonce;                                             // 0x90(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0xA0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function LimNative.LimNative.RevokeShareMsg
struct ULimNative_RevokeShareMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMShareMessage              ShareMsg;                                          // 0x10(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0xD0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0xE0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Nonce;                                             // 0xE8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0xF8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// Function LimNative.LimNative.RevokeImageMsg
struct ULimNative_RevokeImageMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMImageMessage              ImageMsg;                                          // 0x10(0xA0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0xB0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0xC0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Nonce;                                             // 0xC8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0xD8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function LimNative.LimNative.RevokeEmotionMsg
struct ULimNative_RevokeEmotionMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMEmotionMessage            EmotionMsg;                                        // 0x10(0xB0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0xC0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0xD0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Nonce;                                             // 0xD8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Timestamp;                                         // 0xE8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNative.ReportMsg
struct ULimNative_ReportMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InType;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InMsg;                                             // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNative.RemoveGroupMember
struct ULimNative_RemoveGroupMember_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Groupid;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Memberid;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNative.RemoveFromBlockee
struct ULimNative_RemoveFromBlockee_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNative.RemoveFriend
struct ULimNative_RemoveFriend_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNative.RefuseFriendRequest
struct ULimNative_RefuseFriendRequest_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InRequestID;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNative.QuitGroup
struct ULimNative_QuitGroup_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Groupid;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function LimNative.LimNative.PostInitLIM
struct ULimNative_PostInitLIM_Params
{
public:
	struct FLimNativeLowLevelWrapper             Ctx;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeReportConfig                ReportConfig;                                      // 0x10(0xC8)(Parm, NativeAccessSpecifierPublic)
	struct FLimNativeParkConfig                  ParkConfig;                                        // 0xD8(0x58)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNative.MsgsGetCommon
struct ULimNative_MsgsGetCommon_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNative.Logout
struct ULimNative_Logout_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNative.LoginV2
struct ULimNative_LoginV2_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InEnvId;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InRoleID;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function LimNative.LimNative.Login
struct ULimNative_Login_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InAppId;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InAppUserID;                                       // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InToken;                                           // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InRoleID;                                          // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x50(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnTranslateTextDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnTranslateTextDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeTextTranslateCallBack       RetData;                                           // 0x10(0x88)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnSetResDirDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnSetResDirDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeResDirConfig                RetData;                                           // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnSetReportConfigDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnSetReportConfigDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeReportConfig                RetData;                                           // 0x10(0xC8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnSetParkConfigDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnSetParkConfigDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeParkConfig                  RetData;                                           // 0x10(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnSetMsgStateDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnSetMsgStateDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnSetMsgStateCallBack       RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnSetLanguageDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnSetLanguageDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeLanguageConfig              RetData;                                           // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnSetGroupAttrDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnSetGroupAttrDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGroupAttrSetCallBack      RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnSetConvReadDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnSetConvReadDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnSetConvReadCallBack       RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnSetAllConfigDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnSetAllConfigDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeInitConfig                  RetData;                                           // 0x10(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnSendMsgDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnSendMsgDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnSendMsgCallBack           RetData;                                           // 0x10(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnRevokeMsgDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnRevokeMsgDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnRevokeMsgCallBack         RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnReportMsgDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnReportMsgDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeDataCallBackBase            RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGroupMemberRemoveCallBack RetData;                                           // 0x10(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeFriendCommonCallBack        RetData;                                           // 0x10(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnRemoveFriendDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnRemoveFriendDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeFriendCommonCallBack        RetData;                                           // 0x10(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeFriendCommonCallBack        RetData;                                           // 0x10(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnQuitGroupDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnQuitGroupDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGroupQuitCallBack         RetData;                                           // 0x10(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnNetConnectStateDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnNetConnectStateDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        EventCode;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnMsgRevokedDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnMsgRevokedDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnMsgRevokedEventCallBack   RetData;                                           // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnMsgReceivedDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnMsgReceivedDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnMsgReceivedEventCallBack  RetData;                                           // 0x10(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnMsgLogicReceivedEventCallBack RetData;                                           // 0x10(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnLogoutDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnLogoutDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnLogoutCallBack            RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnLoginDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnLoginDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnLoginCallBack             RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnJoinGroupDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnJoinGroupDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGroupJoinCallBack         RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetUsersStateDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetUsersStateDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetUsersStateCallBack     RetData;                                           // 0x10(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetUsersDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetUsersDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetUsersCallBack          RetData;                                           // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetUserDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetUserDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetUserCallBack           RetData;                                           // 0x10(0x168)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetOssTokenDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetOssTokenDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeGetOssTokenCallBack         RetData;                                           // 0x10(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetMsgsDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetMsgsDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetMsgsCallBack           RetData;                                           // 0x10(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeGetMiscConfigInfoCallBack   RetData;                                           // 0x10(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetGroupsDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetGroupsDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGroupsGetCallBack         RetData;                                           // 0x10(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetGroupMembersDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetGroupMembersDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGroupMembersGetCallBack   RetData;                                           // 0x10(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetGroupMemberDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetGroupMemberDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGroupMemberGetCallBack    RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetGroupDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetGroupDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGroupGetCallBack          RetData;                                           // 0x10(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetGroupAttrDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetGroupAttrDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGroupAttrGetCallBack      RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetGMETokenDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetGMETokenDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeGetGMETokenCallBack         RetData;                                           // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetFriendsDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetFriendsDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetFriendCallBack         RetData;                                           // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetFriendRequestCallBack  RetData;                                           // 0x10(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetConvChatLevelConfigCallBack RetData;                                           // 0x10(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetConnStateDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetConnStateDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeGetConnStateCallBack        RetData;                                           // 0x10(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetConfigDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetConfigDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetConfigCallBack         RetData;                                           // 0x10(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetCommonMsgsCallBack     RetData;                                           // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetBlockeesDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetBlockeesDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGetBlockeesCallBack       RetData;                                           // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGroupAttrGetAllCallBack   RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnDestoryGroupDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnDestoryGroupDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGroupDestoryCallBack      RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnCreateGroupDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnCreateGroupDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnCreateGroupCallBack       RetData;                                           // 0x10(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnCreateFriendRequestCallBack RetData;                                           // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnConvsGetDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnConvsGetDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnConvsGetCallBack          RetData;                                           // 0x10(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnConvHandleynamicDelegate__DelegateSignature
struct ULimNative_LIMOnConvHandleynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnConvHandleCallBack        RetData;                                           // 0x10(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnCheckImageDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnCheckImageDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeDataCallBackBase            RetData;                                           // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeFriendCommonCallBack        RetData;                                           // 0x10(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnAddToBlockeeDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnAddToBlockeeDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeFriendCommonCallBack        RetData;                                           // 0x10(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnAddGroupMemberDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnAddGroupMemberDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeOnGroupMemberAddCallBack    RetData;                                           // 0x10(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// DelegateFunction LimNative.LimNative.LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature
struct ULimNative_LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeFriendCommonCallBack        RetData;                                           // 0x10(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction LimNative.LimNative.LIMLogDynamicDelegate__DelegateSignature
struct ULimNative_LIMLogDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InData;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction LimNative.LimNative.LIMEventDynamicDelegate__DelegateSignature
struct ULimNative_LIMEventDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InData;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNative.JoinGroup
struct ULimNative_JoinGroup_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Groupid;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function LimNative.LimNative.InitLIM
struct ULimNative_InitLIM_Params
{
public:
	class FString                                InServerEnvID;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLimNativeInitConfig                  InConfig;                                          // 0x10(0x78)(Parm, NativeAccessSpecifierPublic)
	struct FLimNativeLowLevelWrapper             ReturnValue;                                       // 0x88(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNative.GetUsersState
struct ULimNative_GetUsersState_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        InUserIDs;                                         // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNative.GetUsers
struct ULimNative_GetUsers_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FUidList                              InUserIDs;                                         // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNative.GetUser
struct ULimNative_GetUser_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNative.GetResDir
struct ULimNative_GetResDir_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNative.GetOssToken
struct ULimNative_GetOssToken_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNative.GetMiscConfigInfo
struct ULimNative_GetMiscConfigInfo_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function LimNative.LimNative.GetMessagesByID
struct ULimNative_GetMessagesByID_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InConvID;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                InConvType;                                        // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A20[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InFromMsgID;                                       // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InToMsgID;                                         // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNative.GetLIMVersion
struct ULimNative_GetLIMVersion_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LimNative.LimNative.GetLimNativeInstance
struct ULimNative_GetLimNativeInstance_Params
{
public:
	class ULimNative*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNative.GetLanguage
struct ULimNative_GetLanguage_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNative.GetGroups
struct ULimNative_GetGroups_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Tag;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Size;                                              // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function LimNative.LimNative.GetGroupMembers
struct ULimNative_GetGroupMembers_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Groupid;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Tag;                                               // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Size;                                              // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNative.GetGroupAttr
struct ULimNative_GetGroupAttr_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Groupid;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNative.GetGroupAllAttr
struct ULimNative_GetGroupAllAttr_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Groupid;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNative.GetGroup
struct ULimNative_GetGroup_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Groupid;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function LimNative.LimNative.GetGMEToken
struct ULimNative_GetGMEToken_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InAppId;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InRoomId;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LimNative.LimNative.GetFriendsV2
struct ULimNative_GetFriendsV2_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         InNeedPresence;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A27[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function LimNative.LimNative.GetFriends
struct ULimNative_GetFriends_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InTag;                                             // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A28[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InSize;                                            // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LimNative.LimNative.GetFriendRequests
struct ULimNative_GetFriendRequests_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InTag;                                             // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A29[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InSize;                                            // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNative.GetConvChatLevelConfig
struct ULimNative_GetConvChatLevelConfig_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNative.GetConnState
struct ULimNative_GetConnState_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LimNative.LimNative.GetBlockees
struct ULimNative_GetBlockees_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InTag;                                             // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InSize;                                            // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNative.GetBeforeMessages
struct ULimNative_GetBeforeMessages_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MsgId;                                             // 0x24(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNative.GetAfterMessages
struct ULimNative_GetAfterMessages_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MsgId;                                             // 0x24(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNative.DestoryGroup
struct ULimNative_DestoryGroup_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Groupid;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNative.CreateLIM
struct ULimNative_CreateLIM_Params
{
public:
	class FString                                InServerEnvID;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLimNativeLowLevelWrapper             ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function LimNative.LimNative.CreateGroup
struct ULimNative_CreateGroup_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Members;                                           // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extra;                                             // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNative.CreateFriendRequest
struct ULimNative_CreateFriendRequest_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNative.ConversationsGet
struct ULimNative_ConversationsGet_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Size;                                              // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A30[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Extra;                                             // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNative.ConversationDiscard
struct ULimNative_ConversationDiscard_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ConvID;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                ConvType;                                          // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A32[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNative.CheckImage
struct ULimNative_CheckImage_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUrl;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function LimNative.LimNative.CancelFriendRequest
struct ULimNative_CancelFriendRequest_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InRequestID;                                       // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNative.AddToBlockee
struct ULimNative_AddToBlockee_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNative.AddGroupMember
struct ULimNative_AddGroupMember_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Groupid;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Memberid;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNative.AcceptFriendRequest
struct ULimNative_AcceptFriendRequest_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InRequestID;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// Function LimNative.LimNativeChatMsgReader.GetVoiceMessage
struct ULimNativeChatMsgReader_GetVoiceMessage_Params
{
public:
	struct FLimNativeIMChatMessage               MsgStructWrapper;                                  // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMChatMessageInfo           MsgInfo;                                           // 0x70(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMVoiceMessage              ReturnValue;                                       // 0xC0(0x90)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function LimNative.LimNativeChatMsgReader.GetTextMessage
struct ULimNativeChatMsgReader_GetTextMessage_Params
{
public:
	struct FLimNativeIMChatMessage               MsgStructWrapper;                                  // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMChatMessageInfo           MsgInfo;                                           // 0x70(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMTextMessage               ReturnValue;                                       // 0xC0(0x68)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// Function LimNative.LimNativeChatMsgReader.GetShareMessage
struct ULimNativeChatMsgReader_GetShareMessage_Params
{
public:
	struct FLimNativeIMChatMessage               MsgStructWrapper;                                  // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMChatMessageInfo           MsgInfo;                                           // 0x70(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMShareMessage              ReturnValue;                                       // 0xC0(0xC0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function LimNative.LimNativeChatMsgReader.GetNotificationMessage
struct ULimNativeChatMsgReader_GetNotificationMessage_Params
{
public:
	struct FLimNativeIMChatMessage               MsgStructWrapper;                                  // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMChatMessageInfo           MsgInfo;                                           // 0x70(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMNotificationMessage       ReturnValue;                                       // 0xC0(0x68)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function LimNative.LimNativeChatMsgReader.GetImageMessage
struct ULimNativeChatMsgReader_GetImageMessage_Params
{
public:
	struct FLimNativeIMChatMessage               MsgStructWrapper;                                  // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMChatMessageInfo           MsgInfo;                                           // 0x70(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMImageMessage              ReturnValue;                                       // 0xC0(0xA0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x170 (0x170 - 0x0)
// Function LimNative.LimNativeChatMsgReader.GetEmotionMessage
struct ULimNativeChatMsgReader_GetEmotionMessage_Params
{
public:
	struct FLimNativeIMChatMessage               MsgStructWrapper;                                  // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMChatMessageInfo           MsgInfo;                                           // 0x70(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FLimNativeIMEmotionMessage            ReturnValue;                                       // 0xC0(0xB0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeHelper.NameStringToEnumValue
struct ULimNativeHelper_NameStringToEnumValue_Params
{
public:
	class FString                                Enum;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EnumName;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A68[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeHelper.GetUE4LogFilePath
struct ULimNativeHelper_GetUE4LogFilePath_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeHelper.GetSavedPath
struct ULimNativeHelper_GetSavedPath_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeHelper.GetProjectPath
struct ULimNativeHelper_GetProjectPath_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeHelper.GetProjectContentPath
struct ULimNativeHelper_GetProjectContentPath_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeHelper.GetGamePersistentDownloadDir
struct ULimNativeHelper_GetGamePersistentDownloadDir_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeHelper.GetFileText
struct ULimNativeHelper_GetFileText_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeHelper.GetFileBinary
struct ULimNativeHelper_GetFileBinary_Params
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeHelper.EnumToStringArray
struct ULimNativeHelper_EnumToStringArray_Params
{
public:
	class FString                                Enum;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeHidden;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeHelper.EnumToString
struct ULimNativeHelper_EnumToString_Params
{
public:
	class FString                                Enum;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnumValue;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A71[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeHelper.EnumToNameStringArray
struct ULimNativeHelper_EnumToNameStringArray_Params
{
public:
	class FString                                Enum;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeHidden;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A73[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeHelper.EnumToNameString
struct ULimNativeHelper_EnumToNameString_Params
{
public:
	class FString                                Enum;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnumValue;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A76[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LimNative.LimNativeLowLevel.TranslateText
struct ULimNativeLowLevel_TranslateText_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InText;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeSupportedLanguage       InLang;                                            // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ExtraInfo;                                         // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.SetMsgState
struct ULimNativeLowLevel_SetMsgState_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InMsgParams;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function LimNative.LimNativeLowLevel.SetMsgRead
struct ULimNativeLowLevel_SetMsgRead_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InConvID;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                InConvType;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InMsgID;                                           // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeLowLevel.SetLogHandler
struct ULimNativeLowLevel_SetLogHandler_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function LimNative.LimNativeLowLevel.SetGroupAttr
struct ULimNativeLowLevel_SetGroupAttr_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InGroupID;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InKey;                                             // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InValue;                                           // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function LimNative.LimNativeLowLevel.SetGroup
struct ULimNativeLowLevel_SetGroup_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InGroupID;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InGroupName;                                       // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeLowLevel.SetEventHandler
struct ULimNativeLowLevel_SetEventHandler_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeLowLevel.SetConvSticky
struct ULimNativeLowLevel_SetConvSticky_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InConvID;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                InConvType;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSticky;                                           // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9A[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function LimNative.LimNativeLowLevel.SetConvRead
struct ULimNativeLowLevel_SetConvRead_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InConvID;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                InConvType;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InMsgID;                                           // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeLowLevel.SetConvMute
struct ULimNativeLowLevel_SetConvMute_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InConvID;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                InConvType;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMute;                                             // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA2[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function LimNative.LimNativeLowLevel.SetConvAttr
struct ULimNativeLowLevel_SetConvAttr_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InConvID;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                InConvType;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InKey;                                             // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InValue;                                           // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.SetAllConfigs
struct ULimNativeLowLevel_SetAllConfigs_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InJsonString;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.SendMsg
struct ULimNativeLowLevel_SendMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InMsg;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.RevokeMsg
struct ULimNativeLowLevel_RevokeMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InMsg;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeLowLevel.Resume
struct ULimNativeLowLevel_Resume_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.ReportMsg
struct ULimNativeLowLevel_ReportMsg_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InMsg;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNativeLowLevel.RemoveGroupMember
struct ULimNativeLowLevel_RemoveGroupMember_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InGroupID;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InMemberID;                                        // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.RemoveFromBlockee
struct ULimNativeLowLevel_RemoveFromBlockee_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNativeLowLevel.RemoveFriend
struct ULimNativeLowLevel_RemoveFriend_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNativeLowLevel.RefuseFriendRequest
struct ULimNativeLowLevel_RefuseFriendRequest_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InRequestID;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.QuitGroup
struct ULimNativeLowLevel_QuitGroup_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InGroupID;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeLowLevel.Pause
struct ULimNativeLowLevel_Pause_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeLowLevel.Logout
struct ULimNativeLowLevel_Logout_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNativeLowLevel.LoginV2
struct ULimNativeLowLevel_LoginV2_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InEnv;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InRoleID;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function LimNative.LimNativeLowLevel.Login
struct ULimNativeLowLevel_Login_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InAppId;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InAppUserID;                                       // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InToken;                                           // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InRoleID;                                          // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x50(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction LimNative.LimNativeLowLevel.LIMResultDynamicDelegate__DelegateSignature
struct ULimNativeLowLevel_LIMResultDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InData;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction LimNative.LimNativeLowLevel.LIMLogDynamicDelegate__DelegateSignature
struct ULimNativeLowLevel_LIMLogDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InData;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction LimNative.LimNativeLowLevel.LIMEventDynamicDelegate__DelegateSignature
struct ULimNativeLowLevel_LIMEventDynamicDelegate__DelegateSignature_Params
{
public:
	struct FLimNativeLowLevelWrapper             InWrapper;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InData;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.JoinGroup
struct ULimNativeLowLevel_JoinGroup_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InGroupID;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.GetUsersState
struct ULimNativeLowLevel_GetUsersState_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        InUserIDs;                                         // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.GetUsers
struct ULimNativeLowLevel_GetUsers_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUserIDs;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.GetUser
struct ULimNativeLowLevel_GetUser_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeLowLevel.GetOssToken
struct ULimNativeLowLevel_GetOssToken_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function LimNative.LimNativeLowLevel.GetMsgsV2
struct ULimNativeLowLevel_GetMsgsV2_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InConvID;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                InConvType;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InFromMsgID;                                       // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InToMsgID;                                         // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function LimNative.LimNativeLowLevel.GetMsgs
struct ULimNativeLowLevel_GetMsgs_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InConvID;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                InConvType;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeMsgDirType              InDir;                                             // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC8[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InMsgID;                                           // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeLowLevel.GetMiscConfigInfo
struct ULimNativeLowLevel_GetMiscConfigInfo_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeLowLevel.GetLIMVersion
struct ULimNativeLowLevel_GetLIMVersion_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LimNative.LimNativeLowLevel.GetInstance
struct ULimNativeLowLevel_GetInstance_Params
{
public:
	class ULimNativeLowLevel*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeLowLevel.GetGroups
struct ULimNativeLowLevel_GetGroups_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InTag;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSize;                                            // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LimNative.LimNativeLowLevel.GetGroupMembers
struct ULimNativeLowLevel_GetGroupMembers_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InGroupID;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InTag;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSize;                                            // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNativeLowLevel.GetGroupMember
struct ULimNativeLowLevel_GetGroupMember_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InGroupID;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InMemberID;                                        // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNativeLowLevel.GetGroupAttr
struct ULimNativeLowLevel_GetGroupAttr_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InGroupID;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InKey;                                             // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.GetGroupAllAttrs
struct ULimNativeLowLevel_GetGroupAllAttrs_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InGroupID;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.GetGroup
struct ULimNativeLowLevel_GetGroup_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InGroupID;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function LimNative.LimNativeLowLevel.GetGMEToken
struct ULimNativeLowLevel_GetGMEToken_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InAppId;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InRoomId;                                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeLowLevel.GetFriends
struct ULimNativeLowLevel_GetFriends_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InTag;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSize;                                            // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeLowLevel.GetFriendRequests
struct ULimNativeLowLevel_GetFriendRequests_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InTag;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSize;                                            // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeLowLevel.GetConvs
struct ULimNativeLowLevel_GetConvs_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InSize;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InExtra;                                           // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeLowLevel.GetConvChatLevelConfig
struct ULimNativeLowLevel_GetConvChatLevelConfig_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LimNative.LimNativeLowLevel.GetConvAttr
struct ULimNativeLowLevel_GetConvAttr_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InConvID;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                InConvType;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B00[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InKey;                                             // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeLowLevel.GetConvAllAttrs
struct ULimNativeLowLevel_GetConvAllAttrs_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InConvID;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                InConvType;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B02[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeLowLevel.GetConv
struct ULimNativeLowLevel_GetConv_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InConvID;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                InConvType;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B04[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeLowLevel.GetConnState
struct ULimNativeLowLevel_GetConnState_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeLowLevel.GetBlockees
struct ULimNativeLowLevel_GetBlockees_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InTag;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InSize;                                            // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LimNative.LimNativeLowLevel.GetAllConfigs
struct ULimNativeLowLevel_GetAllConfigs_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.DestroyGroup
struct ULimNativeLowLevel_DestroyGroup_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InGroupID;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeLowLevel.DestroyConv
struct ULimNativeLowLevel_DestroyConv_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InConvID;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                InConvType;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.CreateLIM
struct ULimNativeLowLevel_CreateLIM_Params
{
public:
	class FString                                InServerEnvID;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLimNativeLowLevelWrapper             ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function LimNative.LimNativeLowLevel.CreateGroup
struct ULimNativeLowLevel_CreateGroup_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        InMembers;                                         // 0x10(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InGroupName;                                       // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNativeLowLevel.CreateFriendRequest
struct ULimNativeLowLevel_CreateFriendRequest_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LimNative.LimNativeLowLevel.CreateConv
struct ULimNativeLowLevel_CreateConv_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InConvID;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                InConvType;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B18[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InExtra;                                           // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LimNative.LimNativeLowLevel.ClearConv
struct ULimNativeLowLevel_ClearConv_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InConvID;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELimNativeConvType                InConvType;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.CheckImage
struct ULimNativeLowLevel_CheckImage_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUrl;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function LimNative.LimNativeLowLevel.CancelFriendRequest
struct ULimNativeLowLevel_CancelFriendRequest_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InRequestID;                                       // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.Call
struct ULimNativeLowLevel_Call_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InJsonString;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.BlockeeExists
struct ULimNativeLowLevel_BlockeeExists_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LimNative.LimNativeLowLevel.AddToBlockee
struct ULimNativeLowLevel_AddToBlockee_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InUserId;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNativeLowLevel.AddGroupMember
struct ULimNativeLowLevel_AddGroupMember_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InGroupID;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InMemberID;                                        // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LimNative.LimNativeLowLevel.AcceptFriendRequest
struct ULimNativeLowLevel_AcceptFriendRequest_Params
{
public:
	struct FLimNativeLowLevelWrapper             InCtx;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                InRequestID;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtra;                                           // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}



#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function LimNative.LimNative.TranslateText
	 */
	struct ULimNative_TranslateText_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InText;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeSupportedLanguage                                InLang;                                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XFY0[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ExtraInfo;                                               // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.SetResDir
	 */
	struct ULimNative_SetResDir_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InResDir;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.SetMsgState
	 */
	struct ULimNative_SetMsgState_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeSetMsgState                               SetMsgParams;                                            // 0x0010(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.SetLogHandler
	 */
	struct ULimNative_SetLogHandler_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.SetLanguage
	 */
	struct ULimNative_SetLanguage_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ELimNativeSupportedLanguage                                InLanguage;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.SetGroupAttr
	 */
	struct ULimNative_SetGroupAttr_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              groupid;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.SetEventHandler
	 */
	struct ULimNative_SetEventHandler_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.SetConvRead
	 */
	struct ULimNative_SetConvRead_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8AQ1[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InMsgID;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Extra;                                                   // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.SetAllConfig
	 */
	struct ULimNative_SetAllConfig_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeInitConfig                                InConfig;                                                // 0x0010(0x0060)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.SendVoiceMsg
	 */
	struct ULimNative_SendVoiceMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMVoiceMessage                            VoiceMsg;                                                // 0x0010(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x00A0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x00B0(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XF9C[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Nonce;                                                   // 0x00B8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Timestamp;                                               // 0x00C8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Extra;                                                   // 0x00D8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.SendTextWithAtMsg
	 */
	struct ULimNative_SendTextWithAtMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMTextWithAtMessage                       TextWithAtMsg;                                           // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x0078(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0088(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F7JI[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Nonce;                                                   // 0x0090(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Timestamp;                                               // 0x00A0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Extra;                                                   // 0x00B0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.SendTextMsg
	 */
	struct ULimNative_SendTextMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMTextMessage                             TextMsg;                                                 // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x0078(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0088(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NI77[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Nonce;                                                   // 0x0090(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Timestamp;                                               // 0x00A0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Extra;                                                   // 0x00B0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.SendShareMsg
	 */
	struct ULimNative_SendShareMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMShareMessage                            ShareMsg;                                                // 0x0010(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x00D0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x00E0(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CUY1[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Nonce;                                                   // 0x00E8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Timestamp;                                               // 0x00F8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Extra;                                                   // 0x0108(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.SendImageMsg
	 */
	struct ULimNative_SendImageMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMImageMessage                            ImageMsg;                                                // 0x0010(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x00B0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x00C0(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6CZN[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Nonce;                                                   // 0x00C8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Timestamp;                                               // 0x00D8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Extra;                                                   // 0x00E8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.SendEmotionMsg
	 */
	struct ULimNative_SendEmotionMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMEmotionMessage                          EmotionMsg;                                              // 0x0010(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x00C0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x00D0(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N38L[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Nonce;                                                   // 0x00D8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Timestamp;                                               // 0x00E8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Extra;                                                   // 0x00F8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.RevokeVoiceMsg
	 */
	struct ULimNative_RevokeVoiceMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMVoiceMessage                            VoiceMsg;                                                // 0x0010(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x00A0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x00B0(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YZ1J[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Nonce;                                                   // 0x00B8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Timestamp;                                               // 0x00C8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.RevokeTextWithAtMsg
	 */
	struct ULimNative_RevokeTextWithAtMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMTextWithAtMessage                       TextWithAtMsg;                                           // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x0078(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0088(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GSQH[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Nonce;                                                   // 0x0090(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Timestamp;                                               // 0x00A0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.RevokeTextMsg
	 */
	struct ULimNative_RevokeTextMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMTextMessage                             TextMsg;                                                 // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x0078(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0088(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XRX9[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Nonce;                                                   // 0x0090(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Timestamp;                                               // 0x00A0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.RevokeShareMsg
	 */
	struct ULimNative_RevokeShareMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMShareMessage                            ShareMsg;                                                // 0x0010(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x00D0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x00E0(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R2MC[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Nonce;                                                   // 0x00E8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Timestamp;                                               // 0x00F8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.RevokeImageMsg
	 */
	struct ULimNative_RevokeImageMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMImageMessage                            ImageMsg;                                                // 0x0010(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x00B0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x00C0(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZIAQ[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Nonce;                                                   // 0x00C8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Timestamp;                                               // 0x00D8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.RevokeEmotionMsg
	 */
	struct ULimNative_RevokeEmotionMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMEmotionMessage                          EmotionMsg;                                              // 0x0010(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x00C0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x00D0(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7OA9[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Nonce;                                                   // 0x00D8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Timestamp;                                               // 0x00E8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.ReportMsg
	 */
	struct ULimNative_ReportMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InType;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InMsg;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.RemoveGroupMember
	 */
	struct ULimNative_RemoveGroupMember_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              groupid;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              memberid;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.RemoveFromBlockee
	 */
	struct ULimNative_RemoveFromBlockee_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.RemoveFriend
	 */
	struct ULimNative_RemoveFriend_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.RefuseFriendRequest
	 */
	struct ULimNative_RefuseFriendRequest_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InRequestID;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.QuitGroup
	 */
	struct ULimNative_QuitGroup_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              groupid;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.PostInitLIM
	 */
	struct ULimNative_PostInitLIM_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           ctx;                                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeReportConfig                              ReportConfig;                                            // 0x0010(0x00C8)  (Parm, NativeAccessSpecifierPublic)
		struct FLimNativeParkConfig                                ParkConfig;                                              // 0x00D8(0x0058)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.MsgsGetCommon
	 */
	struct ULimNative_MsgsGetCommon_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.Logout
	 */
	struct ULimNative_Logout_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.LoginV2
	 */
	struct ULimNative_LoginV2_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InEnvId;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InRoleID;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.Login
	 */
	struct ULimNative_Login_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InAppId;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InAppUserID;                                             // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InToken;                                                 // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InRoleID;                                                // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0050(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnTranslateTextDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnTranslateTextDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeTextTranslateCallBack                     RetData;                                                 // 0x0010(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnSetResDirDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnSetResDirDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeResDirConfig                              RetData;                                                 // 0x0010(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnSetReportConfigDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnSetReportConfigDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeReportConfig                              RetData;                                                 // 0x0010(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnSetParkConfigDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnSetParkConfigDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeParkConfig                                RetData;                                                 // 0x0010(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnSetMsgStateDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnSetMsgStateDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnSetMsgStateCallBack                     RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnSetLanguageDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnSetLanguageDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeLanguageConfig                            RetData;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnSetGroupAttrDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnSetGroupAttrDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGroupAttrSetCallBack                    RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnSetConvReadDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnSetConvReadDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnSetConvReadCallBack                     RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnSetAllConfigDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnSetAllConfigDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeInitConfig                                RetData;                                                 // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnSendMsgDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnSendMsgDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnSendMsgCallBack                         RetData;                                                 // 0x0010(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnRevokeMsgDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnRevokeMsgDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnRevokeMsgCallBack                       RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnReportMsgDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnReportMsgDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeDataCallBackBase                          RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGroupMemberRemoveCallBack               RetData;                                                 // 0x0010(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeFriendCommonCallBack                      RetData;                                                 // 0x0010(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnRemoveFriendDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnRemoveFriendDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeFriendCommonCallBack                      RetData;                                                 // 0x0010(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeFriendCommonCallBack                      RetData;                                                 // 0x0010(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnQuitGroupDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnQuitGroupDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGroupQuitCallBack                       RetData;                                                 // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnNetConnectStateDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnNetConnectStateDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    EventCode;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnMsgRevokedDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnMsgRevokedDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnMsgRevokedEventCallBack                 RetData;                                                 // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnMsgReceivedDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnMsgReceivedDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnMsgReceivedEventCallBack                RetData;                                                 // 0x0010(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnMsgLogicReceivedEventCallBack           RetData;                                                 // 0x0010(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnLogoutDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnLogoutDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnLogoutCallBack                          RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnLoginDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnLoginDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnLoginCallBack                           RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnJoinGroupDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnJoinGroupDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGroupJoinCallBack                       RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetUsersStateDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetUsersStateDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetUsersStateCallBack                   RetData;                                                 // 0x0010(0x00A8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetUsersDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetUsersDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetUsersCallBack                        RetData;                                                 // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetUserDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetUserDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetUserCallBack                         RetData;                                                 // 0x0010(0x0168)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetOssTokenDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetOssTokenDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeGetOssTokenCallBack                       RetData;                                                 // 0x0010(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetMsgsDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetMsgsDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetMsgsCallBack                         RetData;                                                 // 0x0010(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeGetMiscConfigInfoCallBack                 RetData;                                                 // 0x0010(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetGroupsDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetGroupsDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGroupsGetCallBack                       RetData;                                                 // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetGroupMembersDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetGroupMembersDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGroupMembersGetCallBack                 RetData;                                                 // 0x0010(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetGroupMemberDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetGroupMemberDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGroupMemberGetCallBack                  RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetGroupDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetGroupDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGroupGetCallBack                        RetData;                                                 // 0x0010(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetGroupAttrDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetGroupAttrDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGroupAttrGetCallBack                    RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetGMETokenDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetGMETokenDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeGetGMETokenCallBack                       RetData;                                                 // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetFriendsDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetFriendsDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetFriendCallBack                       RetData;                                                 // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetFriendRequestCallBack                RetData;                                                 // 0x0010(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetConvChatLevelConfigCallBack          RetData;                                                 // 0x0010(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetConnStateDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetConnStateDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeGetConnStateCallBack                      RetData;                                                 // 0x0010(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetConfigDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetConfigDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetConfigCallBack                       RetData;                                                 // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetCommonMsgsCallBack                   RetData;                                                 // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetBlockeesDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetBlockeesDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGetBlockeesCallBack                     RetData;                                                 // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGroupAttrGetAllCallBack                 RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnDestoryGroupDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnDestoryGroupDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGroupDestoryCallBack                    RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnCreateGroupDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnCreateGroupDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnCreateGroupCallBack                     RetData;                                                 // 0x0010(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnCreateFriendRequestCallBack             RetData;                                                 // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnConvsGetDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnConvsGetDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnConvsGetCallBack                        RetData;                                                 // 0x0010(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnConvHandleynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnConvHandleynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnConvHandleCallBack                      RetData;                                                 // 0x0010(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnCheckImageDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnCheckImageDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeDataCallBackBase                          RetData;                                                 // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeFriendCommonCallBack                      RetData;                                                 // 0x0010(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnAddToBlockeeDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnAddToBlockeeDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeFriendCommonCallBack                      RetData;                                                 // 0x0010(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnAddGroupMemberDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnAddGroupMemberDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeOnGroupMemberAddCallBack                  RetData;                                                 // 0x0010(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeFriendCommonCallBack                      RetData;                                                 // 0x0010(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMLogDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMLogDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InData;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNative.LIMEventDynamicDelegate__DelegateSignature
	 */
	struct ULimNative_LIMEventDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InData;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.JoinGroup
	 */
	struct ULimNative_JoinGroup_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              groupid;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.InitLIM
	 */
	struct ULimNative_InitLIM_Params
	{
	public:
		class FString                                              InServerEnvID;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLimNativeInitConfig                                InConfig;                                                // 0x0010(0x0060)  (Parm, NativeAccessSpecifierPublic)
		struct FLimNativeLowLevelWrapper                           ReturnValue;                                             // 0x0070(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetUsersState
	 */
	struct ULimNative_GetUsersState_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      InUserIDs;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetUsers
	 */
	struct ULimNative_GetUsers_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FUidList                                            InUserIDs;                                               // 0x0010(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetUser
	 */
	struct ULimNative_GetUser_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetResDir
	 */
	struct ULimNative_GetResDir_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetOssToken
	 */
	struct ULimNative_GetOssToken_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetMiscConfigInfo
	 */
	struct ULimNative_GetMiscConfigInfo_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetMessagesByID
	 */
	struct ULimNative_GetMessagesByID_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InConvID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         InConvType;                                              // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FVO1[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InFromMsgID;                                             // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InToMsgID;                                               // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetLIMVersion
	 */
	struct ULimNative_GetLIMVersion_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetLimNativeInstance
	 */
	struct ULimNative_GetLimNativeInstance_Params
	{
	public:
		class ULimNative*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetLanguage
	 */
	struct ULimNative_GetLanguage_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetGroups
	 */
	struct ULimNative_GetGroups_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Tag;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Size;                                                    // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetGroupMembers
	 */
	struct ULimNative_GetGroupMembers_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              groupid;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Tag;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Size;                                                    // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetGroupAttr
	 */
	struct ULimNative_GetGroupAttr_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              groupid;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetGroupAllAttr
	 */
	struct ULimNative_GetGroupAllAttr_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              groupid;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetGroup
	 */
	struct ULimNative_GetGroup_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              groupid;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetGMEToken
	 */
	struct ULimNative_GetGMEToken_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InAppId;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InRoomId;                                                // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetFriendsV2
	 */
	struct ULimNative_GetFriendsV2_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       InNeedPresence;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetFriends
	 */
	struct ULimNative_GetFriends_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    InTag;                                                   // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6C8C[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InSize;                                                  // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetFriendRequests
	 */
	struct ULimNative_GetFriendRequests_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    InTag;                                                   // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9DE1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InSize;                                                  // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetConvChatLevelConfig
	 */
	struct ULimNative_GetConvChatLevelConfig_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetConnState
	 */
	struct ULimNative_GetConnState_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetBlockees
	 */
	struct ULimNative_GetBlockees_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    InTag;                                                   // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RG7L[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InSize;                                                  // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetBeforeMessages
	 */
	struct ULimNative_GetBeforeMessages_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_92SG[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MsgId;                                                   // 0x0024(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.GetAfterMessages
	 */
	struct ULimNative_GetAfterMessages_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZO05[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MsgId;                                                   // 0x0024(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.DestoryLimNativeInstance
	 */
	struct ULimNative_DestoryLimNativeInstance_Params
	{	};

	/**
	 * Function LimNative.LimNative.DestoryGroup
	 */
	struct ULimNative_DestoryGroup_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              groupid;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.CreateLIM
	 */
	struct ULimNative_CreateLIM_Params
	{
	public:
		class FString                                              InServerEnvID;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLimNativeLowLevelWrapper                           ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.CreateGroup
	 */
	struct ULimNative_CreateGroup_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      members;                                                 // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Extra;                                                   // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.CreateFriendRequest
	 */
	struct ULimNative_CreateFriendRequest_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.ConversationsGet
	 */
	struct ULimNative_ConversationsGet_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Size;                                                    // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R0Z1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Extra;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.ConversationSetSticky
	 */
	struct ULimNative_ConversationSetSticky_Params
	{	};

	/**
	 * Function LimNative.LimNative.ConversationSetRead
	 */
	struct ULimNative_ConversationSetRead_Params
	{	};

	/**
	 * Function LimNative.LimNative.ConversationSetMute
	 */
	struct ULimNative_ConversationSetMute_Params
	{	};

	/**
	 * Function LimNative.LimNative.ConversationSetHide
	 */
	struct ULimNative_ConversationSetHide_Params
	{	};

	/**
	 * Function LimNative.LimNative.ConversationDiscard
	 */
	struct ULimNative_ConversationDiscard_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ConvID;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         ConvType;                                                // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.CheckImage
	 */
	struct ULimNative_CheckImage_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUrl;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.CancelFriendRequest
	 */
	struct ULimNative_CancelFriendRequest_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InRequestID;                                             // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.AddToBlockee
	 */
	struct ULimNative_AddToBlockee_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.AddGroupMember
	 */
	struct ULimNative_AddGroupMember_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              groupid;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              memberid;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNative.AcceptFriendRequest
	 */
	struct ULimNative_AcceptFriendRequest_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InRequestID;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeChatMsgReader.GetVoiceMessage
	 */
	struct ULimNativeChatMsgReader_GetVoiceMessage_Params
	{
	public:
		struct FLimNativeIMChatMessage                             MsgStructWrapper;                                        // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMChatMessageInfo                         MsgInfo;                                                 // 0x0070(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMVoiceMessage                            ReturnValue;                                             // 0x00C0(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeChatMsgReader.GetTextMessage
	 */
	struct ULimNativeChatMsgReader_GetTextMessage_Params
	{
	public:
		struct FLimNativeIMChatMessage                             MsgStructWrapper;                                        // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMChatMessageInfo                         MsgInfo;                                                 // 0x0070(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMTextMessage                             ReturnValue;                                             // 0x00C0(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeChatMsgReader.GetShareMessage
	 */
	struct ULimNativeChatMsgReader_GetShareMessage_Params
	{
	public:
		struct FLimNativeIMChatMessage                             MsgStructWrapper;                                        // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMChatMessageInfo                         MsgInfo;                                                 // 0x0070(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMShareMessage                            ReturnValue;                                             // 0x00C0(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeChatMsgReader.GetNotificationMessage
	 */
	struct ULimNativeChatMsgReader_GetNotificationMessage_Params
	{
	public:
		struct FLimNativeIMChatMessage                             MsgStructWrapper;                                        // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMChatMessageInfo                         MsgInfo;                                                 // 0x0070(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMNotificationMessage                     ReturnValue;                                             // 0x00C0(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeChatMsgReader.GetImageMessage
	 */
	struct ULimNativeChatMsgReader_GetImageMessage_Params
	{
	public:
		struct FLimNativeIMChatMessage                             MsgStructWrapper;                                        // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMChatMessageInfo                         MsgInfo;                                                 // 0x0070(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMImageMessage                            ReturnValue;                                             // 0x00C0(0x00A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeChatMsgReader.GetEmotionMessage
	 */
	struct ULimNativeChatMsgReader_GetEmotionMessage_Params
	{
	public:
		struct FLimNativeIMChatMessage                             MsgStructWrapper;                                        // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMChatMessageInfo                         MsgInfo;                                                 // 0x0070(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FLimNativeIMEmotionMessage                          ReturnValue;                                             // 0x00C0(0x00B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeHelper.NameStringToEnumValue
	 */
	struct ULimNativeHelper_NameStringToEnumValue_Params
	{
	public:
		class FString                                              Enum;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              EnumName;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeHelper.GetUE4LogFilePath
	 */
	struct ULimNativeHelper_GetUE4LogFilePath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeHelper.GetSavedPath
	 */
	struct ULimNativeHelper_GetSavedPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeHelper.GetProjectPath
	 */
	struct ULimNativeHelper_GetProjectPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeHelper.GetProjectContentPath
	 */
	struct ULimNativeHelper_GetProjectContentPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeHelper.GetGamePersistentDownloadDir
	 */
	struct ULimNativeHelper_GetGamePersistentDownloadDir_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeHelper.GetFileText
	 */
	struct ULimNativeHelper_GetFileText_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeHelper.GetFileBinary
	 */
	struct ULimNativeHelper_GetFileBinary_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeHelper.EnumToStringArray
	 */
	struct ULimNativeHelper_EnumToStringArray_Params
	{
	public:
		class FString                                              Enum;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bExcludeHidden;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OKW2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeHelper.EnumToString
	 */
	struct ULimNativeHelper_EnumToString_Params
	{
	public:
		class FString                                              Enum;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    EnumValue;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6AEP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeHelper.EnumToNameStringArray
	 */
	struct ULimNativeHelper_EnumToNameStringArray_Params
	{
	public:
		class FString                                              Enum;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bExcludeHidden;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3OGG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeHelper.EnumToNameString
	 */
	struct ULimNativeHelper_EnumToNameString_Params
	{
	public:
		class FString                                              Enum;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    EnumValue;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BGTI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.TranslateText
	 */
	struct ULimNativeLowLevel_TranslateText_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InText;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeSupportedLanguage                                InLang;                                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S8QK[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ExtraInfo;                                               // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.SetMsgState
	 */
	struct ULimNativeLowLevel_SetMsgState_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InMsgParams;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.SetMsgRead
	 */
	struct ULimNativeLowLevel_SetMsgRead_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InConvID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         InConvType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GETA[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InMsgID;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.SetLogHandler
	 */
	struct ULimNativeLowLevel_SetLogHandler_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.SetGroupAttr
	 */
	struct ULimNativeLowLevel_SetGroupAttr_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InGroupID;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InKey;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InValue;                                                 // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.SetGroup
	 */
	struct ULimNativeLowLevel_SetGroup_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InGroupID;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InGroupName;                                             // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.SetEventHandler
	 */
	struct ULimNativeLowLevel_SetEventHandler_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.SetConvSticky
	 */
	struct ULimNativeLowLevel_SetConvSticky_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InConvID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         InConvType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSticky;                                                 // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.SetConvRead
	 */
	struct ULimNativeLowLevel_SetConvRead_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InConvID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         InConvType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1B4O[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InMsgID;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.SetConvMute
	 */
	struct ULimNativeLowLevel_SetConvMute_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InConvID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         InConvType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMute;                                                   // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.SetConvAttr
	 */
	struct ULimNativeLowLevel_SetConvAttr_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InConvID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         InConvType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KVQW[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InKey;                                                   // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InValue;                                                 // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.SetAllConfigs
	 */
	struct ULimNativeLowLevel_SetAllConfigs_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InJsonString;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.SendMsg
	 */
	struct ULimNativeLowLevel_SendMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InMsg;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.RevokeMsg
	 */
	struct ULimNativeLowLevel_RevokeMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InMsg;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.Resume
	 */
	struct ULimNativeLowLevel_Resume_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.ReportMsg
	 */
	struct ULimNativeLowLevel_ReportMsg_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InMsg;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.RemoveGroupMember
	 */
	struct ULimNativeLowLevel_RemoveGroupMember_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InGroupID;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InMemberID;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.RemoveFromBlockee
	 */
	struct ULimNativeLowLevel_RemoveFromBlockee_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.RemoveFriend
	 */
	struct ULimNativeLowLevel_RemoveFriend_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.RefuseFriendRequest
	 */
	struct ULimNativeLowLevel_RefuseFriendRequest_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InRequestID;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.QuitGroup
	 */
	struct ULimNativeLowLevel_QuitGroup_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InGroupID;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.Pause
	 */
	struct ULimNativeLowLevel_Pause_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.Logout
	 */
	struct ULimNativeLowLevel_Logout_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.LoginV2
	 */
	struct ULimNativeLowLevel_LoginV2_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InEnv;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InRoleID;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.Login
	 */
	struct ULimNativeLowLevel_Login_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InAppId;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InAppUserID;                                             // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InToken;                                                 // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InRoleID;                                                // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0050(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNativeLowLevel.LIMResultDynamicDelegate__DelegateSignature
	 */
	struct ULimNativeLowLevel_LIMResultDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InData;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNativeLowLevel.LIMLogDynamicDelegate__DelegateSignature
	 */
	struct ULimNativeLowLevel_LIMLogDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InData;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LimNative.LimNativeLowLevel.LIMEventDynamicDelegate__DelegateSignature
	 */
	struct ULimNativeLowLevel_LIMEventDynamicDelegate__DelegateSignature_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InWrapper;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InData;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.JoinGroup
	 */
	struct ULimNativeLowLevel_JoinGroup_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InGroupID;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetUsersState
	 */
	struct ULimNativeLowLevel_GetUsersState_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      InUserIDs;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetUsers
	 */
	struct ULimNativeLowLevel_GetUsers_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUserIDs;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetUser
	 */
	struct ULimNativeLowLevel_GetUser_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetOssToken
	 */
	struct ULimNativeLowLevel_GetOssToken_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetMsgsV2
	 */
	struct ULimNativeLowLevel_GetMsgsV2_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InConvID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         InConvType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LK48[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InFromMsgID;                                             // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InToMsgID;                                               // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetMsgs
	 */
	struct ULimNativeLowLevel_GetMsgs_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InConvID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         InConvType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeMsgDirType                                       InDir;                                                   // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LE1A[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InMsgID;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetMiscConfigInfo
	 */
	struct ULimNativeLowLevel_GetMiscConfigInfo_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetLIMVersion
	 */
	struct ULimNativeLowLevel_GetLIMVersion_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetInstance
	 */
	struct ULimNativeLowLevel_GetInstance_Params
	{
	public:
		class ULimNativeLowLevel*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetGroups
	 */
	struct ULimNativeLowLevel_GetGroups_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    InTag;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InSize;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetGroupMembers
	 */
	struct ULimNativeLowLevel_GetGroupMembers_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InGroupID;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InTag;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InSize;                                                  // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetGroupMember
	 */
	struct ULimNativeLowLevel_GetGroupMember_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InGroupID;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InMemberID;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetGroupAttr
	 */
	struct ULimNativeLowLevel_GetGroupAttr_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InGroupID;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InKey;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetGroupAllAttrs
	 */
	struct ULimNativeLowLevel_GetGroupAllAttrs_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InGroupID;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetGroup
	 */
	struct ULimNativeLowLevel_GetGroup_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InGroupID;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetGMEToken
	 */
	struct ULimNativeLowLevel_GetGMEToken_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InAppId;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InRoomId;                                                // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetFriends
	 */
	struct ULimNativeLowLevel_GetFriends_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    InTag;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InSize;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetFriendRequests
	 */
	struct ULimNativeLowLevel_GetFriendRequests_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    InTag;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InSize;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetConvs
	 */
	struct ULimNativeLowLevel_GetConvs_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    InSize;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BT8M[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InExtra;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetConvChatLevelConfig
	 */
	struct ULimNativeLowLevel_GetConvChatLevelConfig_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetConvAttr
	 */
	struct ULimNativeLowLevel_GetConvAttr_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InConvID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         InConvType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4GF8[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InKey;                                                   // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetConvAllAttrs
	 */
	struct ULimNativeLowLevel_GetConvAllAttrs_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InConvID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         InConvType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetConv
	 */
	struct ULimNativeLowLevel_GetConv_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InConvID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         InConvType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetConnState
	 */
	struct ULimNativeLowLevel_GetConnState_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetBlockees
	 */
	struct ULimNativeLowLevel_GetBlockees_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    InTag;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InSize;                                                  // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.GetAllConfigs
	 */
	struct ULimNativeLowLevel_GetAllConfigs_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.DestroyGroup
	 */
	struct ULimNativeLowLevel_DestroyGroup_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InGroupID;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.DestroyConv
	 */
	struct ULimNativeLowLevel_DestroyConv_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InConvID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         InConvType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.DestoryInstance
	 */
	struct ULimNativeLowLevel_DestoryInstance_Params
	{	};

	/**
	 * Function LimNative.LimNativeLowLevel.CreateLIM
	 */
	struct ULimNativeLowLevel_CreateLIM_Params
	{
	public:
		class FString                                              InServerEnvID;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLimNativeLowLevelWrapper                           ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.CreateGroup
	 */
	struct ULimNativeLowLevel_CreateGroup_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      InMembers;                                               // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InGroupName;                                             // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.CreateFriendRequest
	 */
	struct ULimNativeLowLevel_CreateFriendRequest_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.CreateConv
	 */
	struct ULimNativeLowLevel_CreateConv_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InConvID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         InConvType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6FI2[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InExtra;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.ClearConv
	 */
	struct ULimNativeLowLevel_ClearConv_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InConvID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELimNativeConvType                                         InConvType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.CheckImage
	 */
	struct ULimNativeLowLevel_CheckImage_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUrl;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.CancelFriendRequest
	 */
	struct ULimNativeLowLevel_CancelFriendRequest_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InRequestID;                                             // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.Call
	 */
	struct ULimNativeLowLevel_Call_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InJsonString;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.BlockeeExists
	 */
	struct ULimNativeLowLevel_BlockeeExists_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.AddToBlockee
	 */
	struct ULimNativeLowLevel_AddToBlockee_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InUserId;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.AddGroupMember
	 */
	struct ULimNativeLowLevel_AddGroupMember_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InGroupID;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InMemberID;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LimNative.LimNativeLowLevel.AcceptFriendRequest
	 */
	struct ULimNativeLowLevel_AcceptFriendRequest_Params
	{
	public:
		struct FLimNativeLowLevelWrapper                           InCtx;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              InRequestID;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtra;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

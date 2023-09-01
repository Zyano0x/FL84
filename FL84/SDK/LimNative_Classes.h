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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class LimNative.LimNative
	 * Size -> 0x03C8 (FullSize[0x03F0] - InheritedSize[0x0028])
	 */
	class ULimNative : public UObject
	{
	public:
		bool                                                       ShowLog;                                                 // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MW8B[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLog;                                                   // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEvent;                                                 // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetLanguage;                                           // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSetLanguage;                                           // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSetAllConfig;                                          // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSetReportConfig;                                       // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSetParkConfig;                                         // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetResDir;                                             // 0x00A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSetResDir;                                             // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLogin;                                                 // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLoginV2;                                               // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLogout;                                                // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCreateGroup;                                           // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnJoinGroup;                                             // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnQuitGroup;                                             // 0x0110(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDestoryGroup;                                          // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetGroup;                                              // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetGroups;                                             // 0x0140(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetAttr;                                               // 0x0150(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetAllGroupAttr;                                       // 0x0160(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSetGroupAttr;                                          // 0x0170(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetGroupMembers;                                       // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddGroupMember;                                        // 0x0190(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveGroupMember;                                     // 0x01A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetGroupMember;                                        // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSetConvRead;                                           // 0x01C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSendMsg;                                               // 0x01D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRevokeMsg;                                             // 0x01E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetBeforeMsg;                                          // 0x01F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetAfterMsg;                                           // 0x0200(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetMsgsById;                                           // 0x0210(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetCommonMsgs;                                         // 0x0220(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSetMsgState;                                           // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnConvHandle;                                            // 0x0240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnConvsGet;                                              // 0x0250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetFriends;                                            // 0x0260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveFriend;                                          // 0x0270(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCreateFriendRequest;                                   // 0x0280(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetFriendRequests;                                     // 0x0290(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAcceptFriendRequest;                                   // 0x02A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRefuseFriendRequest;                                   // 0x02B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancelFriendRequest;                                   // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetBlockees;                                           // 0x02D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddToBlockee;                                          // 0x02E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveFromBlockee;                                     // 0x02F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetUser;                                               // 0x0300(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetUsers;                                              // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetUsersState;                                         // 0x0320(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReportMsg;                                             // 0x0330(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTranslateText;                                         // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCheckImage;                                            // 0x0350(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetOssToken;                                           // 0x0360(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetGMEToken;                                           // 0x0370(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMsgReceived;                                           // 0x0380(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMsgLogicReceived;                                      // 0x0390(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMsgRevoked;                                            // 0x03A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetMiscConfigInfo;                                     // 0x03B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetConvChatLevelConfig;                                // 0x03C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetConnState;                                          // 0x03D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNetState;                                              // 0x03E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void STATIC_TranslateText(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InText, ELimNativeSupportedLanguage InLang, const class FString& ExtraInfo);
		void STATIC_SetResDir(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InResDir);
		void STATIC_SetMsgState(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeSetMsgState& SetMsgParams);
		void STATIC_SetLogHandler(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_SetLanguage(const struct FLimNativeLowLevelWrapper& InCtx, ELimNativeSupportedLanguage InLanguage);
		void STATIC_SetGroupAttr(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid, const class FString& Key, const class FString& Value);
		void STATIC_SetEventHandler(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_SetConvRead(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& InMsgID, const class FString& Extra);
		void STATIC_SetAllConfig(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeInitConfig& InConfig);
		void STATIC_SendVoiceMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMVoiceMessage& VoiceMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra);
		void STATIC_SendTextWithAtMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMTextWithAtMessage& TextWithAtMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra);
		void STATIC_SendTextMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMTextMessage& TextMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra);
		void STATIC_SendShareMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMShareMessage& ShareMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra);
		void STATIC_SendImageMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMImageMessage& ImageMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra);
		void STATIC_SendEmotionMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMEmotionMessage& EmotionMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra);
		void STATIC_RevokeVoiceMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMVoiceMessage& VoiceMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp);
		void STATIC_RevokeTextWithAtMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMTextWithAtMessage& TextWithAtMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp);
		void STATIC_RevokeTextMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMTextMessage& TextMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp);
		void STATIC_RevokeShareMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMShareMessage& ShareMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp);
		void STATIC_RevokeImageMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMImageMessage& ImageMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp);
		void STATIC_RevokeEmotionMsg(const struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeIMEmotionMessage& EmotionMsg, const class FString& ConvID, ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp);
		void STATIC_ReportMsg(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InType, const class FString& InMsg);
		void STATIC_RemoveGroupMember(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid, const class FString& memberid);
		void STATIC_RemoveFromBlockee(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId);
		void STATIC_RemoveFriend(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra);
		void STATIC_RefuseFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra);
		void STATIC_QuitGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid);
		void STATIC_PostInitLIM(const struct FLimNativeLowLevelWrapper& ctx, const struct FLimNativeReportConfig& ReportConfig, const struct FLimNativeParkConfig& ParkConfig);
		void STATIC_MsgsGetCommon(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_Logout(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_LoginV2(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InEnvId, const class FString& InRoleID);
		void STATIC_Login(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InAppUserID, const class FString& InToken, const class FString& InRoleID, const class FString& InExtra);
		void LIMOnTranslateTextDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeTextTranslateCallBack& RetData);
		void LIMOnSetResDirDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeResDirConfig& RetData);
		void LIMOnSetReportConfigDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeReportConfig& RetData);
		void LIMOnSetParkConfigDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeParkConfig& RetData);
		void LIMOnSetMsgStateDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnSetMsgStateCallBack& RetData);
		void LIMOnSetLanguageDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeLanguageConfig& RetData);
		void LIMOnSetGroupAttrDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupAttrSetCallBack& RetData);
		void LIMOnSetConvReadDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnSetConvReadCallBack& RetData);
		void LIMOnSetAllConfigDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeInitConfig& RetData);
		void LIMOnSendMsgDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnSendMsgCallBack& RetData);
		void LIMOnRevokeMsgDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnRevokeMsgCallBack& RetData);
		void LIMOnReportMsgDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeDataCallBackBase& RetData);
		void LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupMemberRemoveCallBack& RetData);
		void LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeFriendCommonCallBack& RetData);
		void LIMOnRemoveFriendDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeFriendCommonCallBack& RetData);
		void LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeFriendCommonCallBack& RetData);
		void LIMOnQuitGroupDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupQuitCallBack& RetData);
		void LIMOnNetConnectStateDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, int32_t EventCode);
		void LIMOnMsgRevokedDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnMsgRevokedEventCallBack& RetData);
		void LIMOnMsgReceivedDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnMsgReceivedEventCallBack& RetData);
		void LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnMsgLogicReceivedEventCallBack& RetData);
		void LIMOnLogoutDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnLogoutCallBack& RetData);
		void LIMOnLoginDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnLoginCallBack& RetData);
		void LIMOnJoinGroupDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupJoinCallBack& RetData);
		void LIMOnGetUsersStateDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetUsersStateCallBack& RetData);
		void LIMOnGetUsersDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetUsersCallBack& RetData);
		void LIMOnGetUserDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetUserCallBack& RetData);
		void LIMOnGetOssTokenDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeGetOssTokenCallBack& RetData);
		void LIMOnGetMsgsDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetMsgsCallBack& RetData);
		void LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeGetMiscConfigInfoCallBack& RetData);
		void LIMOnGetGroupsDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupsGetCallBack& RetData);
		void LIMOnGetGroupMembersDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupMembersGetCallBack& RetData);
		void LIMOnGetGroupMemberDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupMemberGetCallBack& RetData);
		void LIMOnGetGroupDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupGetCallBack& RetData);
		void LIMOnGetGroupAttrDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupAttrGetCallBack& RetData);
		void LIMOnGetGMETokenDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeGetGMETokenCallBack& RetData);
		void LIMOnGetFriendsDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetFriendCallBack& RetData);
		void LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetFriendRequestCallBack& RetData);
		void LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetConvChatLevelConfigCallBack& RetData);
		void LIMOnGetConnStateDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeGetConnStateCallBack& RetData);
		void LIMOnGetConfigDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetConfigCallBack& RetData);
		void LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetCommonMsgsCallBack& RetData);
		void LIMOnGetBlockeesDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGetBlockeesCallBack& RetData);
		void LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupAttrGetAllCallBack& RetData);
		void LIMOnDestoryGroupDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupDestoryCallBack& RetData);
		void LIMOnCreateGroupDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnCreateGroupCallBack& RetData);
		void LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnCreateFriendRequestCallBack& RetData);
		void LIMOnConvsGetDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnConvsGetCallBack& RetData);
		void LIMOnConvHandleynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnConvHandleCallBack& RetData);
		void LIMOnCheckImageDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeDataCallBackBase& RetData);
		void LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeFriendCommonCallBack& RetData);
		void LIMOnAddToBlockeeDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeFriendCommonCallBack& RetData);
		void LIMOnAddGroupMemberDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeOnGroupMemberAddCallBack& RetData);
		void LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const struct FLimNativeFriendCommonCallBack& RetData);
		void LIMLogDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData);
		void LIMEventDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData);
		void STATIC_JoinGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid);
		struct FLimNativeLowLevelWrapper STATIC_InitLIM(const class FString& InServerEnvID, const struct FLimNativeInitConfig& InConfig);
		void STATIC_GetUsersState(const struct FLimNativeLowLevelWrapper& InCtx, TArray<class FString> InUserIDs);
		void STATIC_GetUsers(const struct FLimNativeLowLevelWrapper& InCtx, const struct FUidList& InUserIDs);
		void STATIC_GetUser(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId);
		void STATIC_GetResDir(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_GetOssToken(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_GetMiscConfigInfo(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_GetMessagesByID(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, const class FString& InFromMsgID, const class FString& InToMsgID);
		class FString STATIC_GetLIMVersion();
		class ULimNative* STATIC_GetLimNativeInstance();
		void STATIC_GetLanguage(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_GetGroups(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& Tag, const class FString& Size);
		void STATIC_GetGroupMembers(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid, const class FString& Tag, const class FString& Size);
		void STATIC_GetGroupAttr(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid, const class FString& Key);
		void STATIC_GetGroupAllAttr(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid);
		void STATIC_GetGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid);
		void STATIC_GetGMEToken(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InUserId, const class FString& InRoomId);
		void STATIC_GetFriendsV2(const struct FLimNativeLowLevelWrapper& InCtx, bool InNeedPresence);
		void STATIC_GetFriends(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, const class FString& InSize, const class FString& InExtra);
		void STATIC_GetFriendRequests(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, const class FString& InSize, const class FString& InExtra);
		void STATIC_GetConvChatLevelConfig(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_GetConnState(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_GetBlockees(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, const class FString& InSize, const class FString& InExtra);
		void STATIC_GetBeforeMessages(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, ELimNativeConvType ConvType, int32_t MsgId);
		void STATIC_GetAfterMessages(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, ELimNativeConvType ConvType, int32_t MsgId);
		void STATIC_DestoryLimNativeInstance();
		void STATIC_DestoryGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid);
		struct FLimNativeLowLevelWrapper STATIC_CreateLIM(const class FString& InServerEnvID);
		void STATIC_CreateGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& Name, TArray<class FString> members, const class FString& Extra);
		void STATIC_CreateFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra);
		void STATIC_ConversationsGet(const struct FLimNativeLowLevelWrapper& InCtx, int32_t Size, const class FString& Extra);
		void STATIC_ConversationSetSticky();
		void STATIC_ConversationSetRead();
		void STATIC_ConversationSetMute();
		void STATIC_ConversationSetHide();
		void STATIC_ConversationDiscard(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, ELimNativeConvType ConvType);
		void STATIC_CheckImage(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUrl);
		void STATIC_CancelFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InRequestID, const class FString& InExtra);
		void STATIC_AddToBlockee(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId);
		void STATIC_AddGroupMember(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& groupid, const class FString& memberid);
		void STATIC_AcceptFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra);
		static UClass* StaticClass();
	};

	/**
	 * Class LimNative.LimNativeChatMsgReader
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULimNativeChatMsgReader : public UObject
	{
	public:
		struct FLimNativeIMVoiceMessage STATIC_GetVoiceMessage(const struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo);
		struct FLimNativeIMTextMessage STATIC_GetTextMessage(const struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo);
		struct FLimNativeIMShareMessage STATIC_GetShareMessage(const struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo);
		struct FLimNativeIMNotificationMessage STATIC_GetNotificationMessage(const struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo);
		struct FLimNativeIMImageMessage STATIC_GetImageMessage(const struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo);
		struct FLimNativeIMEmotionMessage STATIC_GetEmotionMessage(const struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class LimNative.LimNativeHelper
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULimNativeHelper : public UObject
	{
	public:
		int32_t STATIC_NameStringToEnumValue(const class FString& Enum, const class FString& EnumName);
		class FString STATIC_GetUE4LogFilePath();
		class FString STATIC_GetSavedPath();
		class FString STATIC_GetProjectPath();
		class FString STATIC_GetProjectContentPath();
		class FString STATIC_GetGamePersistentDownloadDir();
		class FString STATIC_GetFileText(const class FString& Path);
		TArray<unsigned char> STATIC_GetFileBinary(const class FString& Path);
		TArray<class FString> STATIC_EnumToStringArray(const class FString& Enum, bool bExcludeHidden);
		class FString STATIC_EnumToString(const class FString& Enum, int32_t EnumValue);
		TArray<class FString> STATIC_EnumToNameStringArray(const class FString& Enum, bool bExcludeHidden);
		class FString STATIC_EnumToNameString(const class FString& Enum, int32_t EnumValue);
		static UClass* StaticClass();
	};

	/**
	 * Class LimNative.LimNativeLowLevel
	 * Size -> 0x03F0 (FullSize[0x0418] - InheritedSize[0x0028])
	 */
	class ULimNativeLowLevel : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnEvent;                                                 // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnLog;                                                   // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnCall;                                                  // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSetConfig;                                             // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSetAllConfigs;                                         // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetConfig;                                             // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetAllConfigs;                                         // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnLogin;                                                 // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnLoginV2;                                               // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnLogout;                                                // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSendMsg;                                               // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnRevokeMsg;                                             // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetMsgs;                                               // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetMsgsV2;                                             // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSetMsgRead;                                            // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSetMsgState;                                           // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnCreateConv;                                            // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnDestroyConv;                                           // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnClearConv;                                             // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetConvs;                                              // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetConv;                                               // 0x0168(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSetConvRead;                                           // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSetConvSticky;                                         // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSetConvMute;                                           // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetConvAttr;                                           // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetConvAllAttrs;                                       // 0x01B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSetConvAttr;                                           // 0x01C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnCreateGroup;                                           // 0x01D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnJoinGroup;                                             // 0x01E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnQuitGroup;                                             // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnDestroyGroup;                                          // 0x0208(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetGroup;                                              // 0x0218(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSetGroup;                                              // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetGroups;                                             // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetGroupAttr;                                          // 0x0248(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetGroupAllAttrs;                                      // 0x0258(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSetGroupAttr;                                          // 0x0268(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetGroupMembers;                                       // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetGroupMember;                                        // 0x0288(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnAddGroupMember;                                        // 0x0298(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnRemoveGroupMember;                                     // 0x02A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetFriends;                                            // 0x02B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnRemoveFriend;                                          // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetFriendRequests;                                     // 0x02D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnCreateFriendRequest;                                   // 0x02E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnAcceptFriendRequest;                                   // 0x02F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnRefuseFriendRequest;                                   // 0x0308(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnCancelFriendRequest;                                   // 0x0318(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetBlockees;                                           // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnAddToBlockee;                                          // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnRemoveFromBlockee;                                     // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnBlockeeExists;                                         // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetUser;                                               // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetUsers;                                              // 0x0378(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetUsersState;                                         // 0x0388(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetOssToken;                                           // 0x0398(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetGMEToken;                                           // 0x03A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnReportMsg;                                             // 0x03B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnTranslateText;                                         // 0x03C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnCheckImage;                                            // 0x03D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetMiscConfigInfo;                                     // 0x03E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetConvChatLevelConfig;                                // 0x03F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetConnState;                                          // 0x0408(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected

	public:
		void STATIC_TranslateText(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InText, ELimNativeSupportedLanguage InLang, const class FString& ExtraInfo);
		void STATIC_SetMsgState(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsgParams);
		void STATIC_SetMsgRead(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, const class FString& InMsgID, const class FString& InExtra);
		void STATIC_SetLogHandler(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_SetGroupAttr(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InKey, const class FString& InValue);
		void STATIC_SetGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InGroupName, const class FString& InExtra);
		void STATIC_SetEventHandler(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_SetConvSticky(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, bool bSticky);
		void STATIC_SetConvRead(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, const class FString& InMsgID, const class FString& InExtra);
		void STATIC_SetConvMute(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, bool bMute);
		void STATIC_SetConvAttr(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, const class FString& InKey, const class FString& InValue);
		void STATIC_SetAllConfigs(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InJsonString);
		void STATIC_SendMsg(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsg);
		void STATIC_RevokeMsg(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsg);
		void STATIC_Resume(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_ReportMsg(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsg);
		void STATIC_RemoveGroupMember(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InMemberID);
		void STATIC_RemoveFromBlockee(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId);
		void STATIC_RemoveFriend(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra);
		void STATIC_RefuseFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra);
		void STATIC_QuitGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID);
		void STATIC_Pause(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_Logout(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_LoginV2(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InEnv, const class FString& InRoleID);
		void STATIC_Login(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InAppUserID, const class FString& InToken, const class FString& InRoleID, const class FString& InExtra);
		void LIMResultDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData);
		void LIMLogDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData);
		void LIMEventDynamicDelegate__DelegateSignature(const struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData);
		void STATIC_JoinGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID);
		void STATIC_GetUsersState(const struct FLimNativeLowLevelWrapper& InCtx, TArray<class FString> InUserIDs);
		void STATIC_GetUsers(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserIDs);
		void STATIC_GetUser(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId);
		void STATIC_GetOssToken(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_GetMsgsV2(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, const class FString& InFromMsgID, const class FString& InToMsgID);
		void STATIC_GetMsgs(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, ELimNativeMsgDirType InDir, const class FString& InMsgID, const class FString& InExtra);
		void STATIC_GetMiscConfigInfo(const struct FLimNativeLowLevelWrapper& InCtx);
		class FString STATIC_GetLIMVersion();
		class ULimNativeLowLevel* STATIC_GetInstance();
		void STATIC_GetGroups(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, const class FString& InExtra);
		void STATIC_GetGroupMembers(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, int32_t InTag, int32_t InSize, const class FString& InExtra);
		void STATIC_GetGroupMember(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InMemberID);
		void STATIC_GetGroupAttr(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InKey);
		void STATIC_GetGroupAllAttrs(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID);
		void STATIC_GetGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID);
		void STATIC_GetGMEToken(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InUserId, const class FString& InRoomId);
		void STATIC_GetFriends(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, const class FString& InExtra);
		void STATIC_GetFriendRequests(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, const class FString& InExtra);
		void STATIC_GetConvs(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InSize, const class FString& InExtra);
		void STATIC_GetConvChatLevelConfig(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_GetConvAttr(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, const class FString& InKey);
		void STATIC_GetConvAllAttrs(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType);
		void STATIC_GetConv(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType);
		void STATIC_GetConnState(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_GetBlockees(const struct FLimNativeLowLevelWrapper& InCtx, int32_t InTag, int32_t InSize, const class FString& InExtra);
		void STATIC_GetAllConfigs(const struct FLimNativeLowLevelWrapper& InCtx);
		void STATIC_DestroyGroup(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID);
		void STATIC_DestroyConv(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType);
		void STATIC_DestoryInstance();
		struct FLimNativeLowLevelWrapper STATIC_CreateLIM(const class FString& InServerEnvID);
		void STATIC_CreateGroup(const struct FLimNativeLowLevelWrapper& InCtx, TArray<class FString> InMembers, const class FString& InGroupName, const class FString& InExtra);
		void STATIC_CreateFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra);
		void STATIC_CreateConv(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType, const class FString& InExtra);
		void STATIC_ClearConv(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, ELimNativeConvType InConvType);
		void STATIC_CheckImage(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUrl);
		void STATIC_CancelFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InRequestID, const class FString& InExtra);
		void STATIC_Call(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InJsonString);
		void STATIC_BlockeeExists(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId);
		void STATIC_AddToBlockee(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId);
		void STATIC_AddGroupMember(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InMemberID);
		void STATIC_AcceptFriendRequest(const struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

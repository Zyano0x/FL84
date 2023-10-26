#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C8 (0x3F0 - 0x28)
// Class LimNative.LimNative
class ULimNative : public UObject
{
public:
	bool                                         ShowLog;                                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLog;                                             // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEvent;                                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetLanguage;                                     // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetLanguage;                                     // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetAllConfig;                                    // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetReportConfig;                                 // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetParkConfig;                                   // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetResDir;                                       // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetResDir;                                       // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLogin;                                           // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoginV2;                                         // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLogout;                                          // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCreateGroup;                                     // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnJoinGroup;                                       // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuitGroup;                                       // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDestoryGroup;                                    // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetGroup;                                        // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetGroups;                                       // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetAttr;                                         // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetAllGroupAttr;                                 // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetGroupAttr;                                    // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetGroupMembers;                                 // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAddGroupMember;                                  // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRemoveGroupMember;                               // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetGroupMember;                                  // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetConvRead;                                     // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSendMsg;                                         // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRevokeMsg;                                       // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetBeforeMsg;                                    // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetAfterMsg;                                     // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetMsgsById;                                     // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetCommonMsgs;                                   // 0x220(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetMsgState;                                     // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConvHandle;                                      // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConvsGet;                                        // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetFriends;                                      // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRemoveFriend;                                    // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCreateFriendRequest;                             // 0x280(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetFriendRequests;                               // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAcceptFriendRequest;                             // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRefuseFriendRequest;                             // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancelFriendRequest;                             // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetBlockees;                                     // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAddToBlockee;                                    // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRemoveFromBlockee;                               // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetUser;                                         // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetUsers;                                        // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetUsersState;                                   // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReportMsg;                                       // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTranslateText;                                   // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCheckImage;                                      // 0x350(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetOssToken;                                     // 0x360(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetGMEToken;                                     // 0x370(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMsgReceived;                                     // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMsgLogicReceived;                                // 0x390(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMsgRevoked;                                      // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetMiscConfigInfo;                               // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetConvChatLevelConfig;                          // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetConnState;                                    // 0x3D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNetState;                                        // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULimNative* GetDefaultObj();

	void TranslateText(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InText, enum class ELimNativeSupportedLanguage InLang, const class FString& ExtraInfo);
	void SetResDir(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InResDir);
	void SetMsgState(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeSetMsgState& SetMsgParams);
	void SetLogHandler(struct FLimNativeLowLevelWrapper& InCtx);
	void SetLanguage(struct FLimNativeLowLevelWrapper& InCtx, enum class ELimNativeSupportedLanguage InLanguage);
	void SetGroupAttr(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid, const class FString& Key, const class FString& Value);
	void SetEventHandler(struct FLimNativeLowLevelWrapper& InCtx);
	void SetConvRead(struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& InMsgID, const class FString& Extra);
	void SetAllConfig(struct FLimNativeLowLevelWrapper& InCtx, const struct FLimNativeInitConfig& InConfig);
	void SendVoiceMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMVoiceMessage& VoiceMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra);
	void SendTextWithAtMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMTextWithAtMessage& TextWithAtMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra);
	void SendTextMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMTextMessage& TextMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra);
	void SendShareMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMShareMessage& ShareMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra);
	void SendImageMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMImageMessage& ImageMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra);
	void SendEmotionMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMEmotionMessage& EmotionMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp, const class FString& Extra);
	void RevokeVoiceMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMVoiceMessage& VoiceMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp);
	void RevokeTextWithAtMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMTextWithAtMessage& TextWithAtMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp);
	void RevokeTextMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMTextMessage& TextMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp);
	void RevokeShareMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMShareMessage& ShareMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp);
	void RevokeImageMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMImageMessage& ImageMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp);
	void RevokeEmotionMsg(struct FLimNativeLowLevelWrapper& InCtx, struct FLimNativeIMEmotionMessage& EmotionMsg, const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Nonce, const class FString& Timestamp);
	void ReportMsg(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InType, const class FString& InMsg);
	void RemoveGroupMember(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid, const class FString& Memberid);
	void RemoveFromBlockee(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId);
	void RemoveFriend(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra);
	void RefuseFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra);
	void QuitGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid);
	void PostInitLIM(struct FLimNativeLowLevelWrapper& Ctx, const struct FLimNativeReportConfig& ReportConfig, const struct FLimNativeParkConfig& ParkConfig);
	void MsgsGetCommon(struct FLimNativeLowLevelWrapper& InCtx);
	void Logout(struct FLimNativeLowLevelWrapper& InCtx);
	void LoginV2(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InEnvId, const class FString& InRoleID);
	void Login(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InAppUserID, const class FString& InToken, const class FString& InRoleID, const class FString& InExtra);
	void LIMOnTranslateTextDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeTextTranslateCallBack& RetData);
	void LIMOnSetResDirDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeResDirConfig& RetData);
	void LIMOnSetReportConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeReportConfig& RetData);
	void LIMOnSetParkConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeParkConfig& RetData);
	void LIMOnSetMsgStateDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSetMsgStateCallBack& RetData);
	void LIMOnSetLanguageDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeLanguageConfig& RetData);
	void LIMOnSetGroupAttrDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupAttrSetCallBack& RetData);
	void LIMOnSetConvReadDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSetConvReadCallBack& RetData);
	void LIMOnSetAllConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeInitConfig& RetData);
	void LIMOnSendMsgDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSendMsgCallBack& RetData);
	void LIMOnRevokeMsgDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnRevokeMsgCallBack& RetData);
	void LIMOnReportMsgDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeDataCallBackBase& RetData);
	void LIMOnRemoveGroupMemberDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupMemberRemoveCallBack& RetData);
	void LIMOnRemoveFromBlockeeDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData);
	void LIMOnRemoveFriendDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData);
	void LIMOnRefuseFriendRequestDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData);
	void LIMOnQuitGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupQuitCallBack& RetData);
	void LIMOnNetConnectStateDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, int32 EventCode);
	void LIMOnMsgRevokedDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgRevokedEventCallBack& RetData);
	void LIMOnMsgReceivedDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgReceivedEventCallBack& RetData);
	void LIMOnMsgLogicReceivedDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgLogicReceivedEventCallBack& RetData);
	void LIMOnLogoutDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnLogoutCallBack& RetData);
	void LIMOnLoginDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnLoginCallBack& RetData);
	void LIMOnJoinGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupJoinCallBack& RetData);
	void LIMOnGetUsersStateDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUsersStateCallBack& RetData);
	void LIMOnGetUsersDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUsersCallBack& RetData);
	void LIMOnGetUserDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUserCallBack& RetData);
	void LIMOnGetOssTokenDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetOssTokenCallBack& RetData);
	void LIMOnGetMsgsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetMsgsCallBack& RetData);
	void LIMOnGetMiscConfigInfoDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetMiscConfigInfoCallBack& RetData);
	void LIMOnGetGroupsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupsGetCallBack& RetData);
	void LIMOnGetGroupMembersDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupMembersGetCallBack& RetData);
	void LIMOnGetGroupMemberDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupMemberGetCallBack& RetData);
	void LIMOnGetGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupGetCallBack& RetData);
	void LIMOnGetGroupAttrDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupAttrGetCallBack& RetData);
	void LIMOnGetGMETokenDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetGMETokenCallBack& RetData);
	void LIMOnGetFriendsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetFriendCallBack& RetData);
	void LIMOnGetFriendRequestsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetFriendRequestCallBack& RetData);
	void LIMOnGetConvChatLevelConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetConvChatLevelConfigCallBack& RetData);
	void LIMOnGetConnStateDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetConnStateCallBack& RetData);
	void LIMOnGetConfigDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetConfigCallBack& RetData);
	void LIMOnGetCommonMsgsDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetCommonMsgsCallBack& RetData);
	void LIMOnGetBlockeesDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetBlockeesCallBack& RetData);
	void LIMOnGetAllGroupAttrDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupAttrGetAllCallBack& RetData);
	void LIMOnDestoryGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupDestoryCallBack& RetData);
	void LIMOnCreateGroupDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnCreateGroupCallBack& RetData);
	void LIMOnCreateFriendRequestDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnCreateFriendRequestCallBack& RetData);
	void LIMOnConvsGetDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnConvsGetCallBack& RetData);
	void LIMOnConvHandleynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnConvHandleCallBack& RetData);
	void LIMOnCheckImageDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeDataCallBackBase& RetData);
	void LIMOnCancelFriendRequestDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData);
	void LIMOnAddToBlockeeDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData);
	void LIMOnAddGroupMemberDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGroupMemberAddCallBack& RetData);
	void LIMOnAcceptFriendRequestDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeFriendCommonCallBack& RetData);
	void LIMLogDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData);
	void LIMEventDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData);
	void JoinGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid);
	struct FLimNativeLowLevelWrapper InitLIM(const class FString& InServerEnvID, const struct FLimNativeInitConfig& InConfig);
	void GetUsersState(struct FLimNativeLowLevelWrapper& InCtx, TArray<class FString>& InUserIDs);
	void GetUsers(struct FLimNativeLowLevelWrapper& InCtx, struct FUidList& InUserIDs);
	void GetUser(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId);
	void GetResDir(struct FLimNativeLowLevelWrapper& InCtx);
	void GetOssToken(struct FLimNativeLowLevelWrapper& InCtx);
	void GetMiscConfigInfo(struct FLimNativeLowLevelWrapper& InCtx);
	void GetMessagesByID(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, const class FString& InFromMsgID, const class FString& InToMsgID);
	class FString GetLIMVersion();
	class ULimNative* GetLimNativeInstance();
	void GetLanguage(struct FLimNativeLowLevelWrapper& InCtx);
	void GetGroups(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Tag, const class FString& Size);
	void GetGroupMembers(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid, const class FString& Tag, const class FString& Size);
	void GetGroupAttr(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid, const class FString& Key);
	void GetGroupAllAttr(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid);
	void GetGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid);
	void GetGMEToken(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InUserId, const class FString& InRoomId);
	void GetFriendsV2(struct FLimNativeLowLevelWrapper& InCtx, bool InNeedPresence);
	void GetFriends(struct FLimNativeLowLevelWrapper& InCtx, int32 InTag, const class FString& InSize, const class FString& InExtra);
	void GetFriendRequests(struct FLimNativeLowLevelWrapper& InCtx, int32 InTag, const class FString& InSize, const class FString& InExtra);
	void GetConvChatLevelConfig(struct FLimNativeLowLevelWrapper& InCtx);
	void GetConnState(struct FLimNativeLowLevelWrapper& InCtx);
	void GetBlockees(struct FLimNativeLowLevelWrapper& InCtx, int32 InTag, const class FString& InSize, const class FString& InExtra);
	void GetBeforeMessages(struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, enum class ELimNativeConvType ConvType, int32 MsgId);
	void GetAfterMessages(struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, enum class ELimNativeConvType ConvType, int32 MsgId);
	void DestoryLimNativeInstance();
	void DestoryGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid);
	struct FLimNativeLowLevelWrapper CreateLIM(const class FString& InServerEnvID);
	void CreateGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Name, TArray<class FString>& Members, const class FString& Extra);
	void CreateFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra);
	void ConversationsGet(struct FLimNativeLowLevelWrapper& InCtx, int32 Size, const class FString& Extra);
	void ConversationSetSticky();
	void ConversationSetRead();
	void ConversationSetMute();
	void ConversationSetHide();
	void ConversationDiscard(struct FLimNativeLowLevelWrapper& InCtx, const class FString& ConvID, enum class ELimNativeConvType ConvType);
	void CheckImage(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUrl);
	void CancelFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InRequestID, const class FString& InExtra);
	void AddToBlockee(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId);
	void AddGroupMember(struct FLimNativeLowLevelWrapper& InCtx, const class FString& Groupid, const class FString& Memberid);
	void AcceptFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra);
};

// 0x0 (0x28 - 0x28)
// Class LimNative.LimNativeChatMsgReader
class ULimNativeChatMsgReader : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULimNativeChatMsgReader* GetDefaultObj();

	struct FLimNativeIMVoiceMessage GetVoiceMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo);
	struct FLimNativeIMTextMessage GetTextMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo);
	struct FLimNativeIMShareMessage GetShareMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo);
	struct FLimNativeIMNotificationMessage GetNotificationMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo);
	struct FLimNativeIMImageMessage GetImageMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo);
	struct FLimNativeIMEmotionMessage GetEmotionMessage(struct FLimNativeIMChatMessage& MsgStructWrapper, struct FLimNativeIMChatMessageInfo* MsgInfo);
};

// 0x0 (0x28 - 0x28)
// Class LimNative.LimNativeHelper
class ULimNativeHelper : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULimNativeHelper* GetDefaultObj();

	int32 NameStringToEnumValue(const class FString& Enum, const class FString& EnumName);
	class FString GetUE4LogFilePath();
	class FString GetSavedPath();
	class FString GetProjectPath();
	class FString GetProjectContentPath();
	class FString GetGamePersistentDownloadDir();
	class FString GetFileText(const class FString& Path);
	TArray<uint8> GetFileBinary(const class FString& Path);
	TArray<class FString> EnumToStringArray(const class FString& Enum, bool bExcludeHidden);
	class FString EnumToString(const class FString& Enum, int32 EnumValue);
	TArray<class FString> EnumToNameStringArray(const class FString& Enum, bool bExcludeHidden);
	class FString EnumToNameString(const class FString& Enum, int32 EnumValue);
};

// 0x3F0 (0x418 - 0x28)
// Class LimNative.LimNativeLowLevel
class ULimNativeLowLevel : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnEvent;                                           // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnLog;                                             // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnCall;                                            // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSetConfig;                                       // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSetAllConfigs;                                   // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetConfig;                                       // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetAllConfigs;                                   // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnLogin;                                           // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnLoginV2;                                         // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnLogout;                                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSendMsg;                                         // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnRevokeMsg;                                       // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetMsgs;                                         // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetMsgsV2;                                       // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSetMsgRead;                                      // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSetMsgState;                                     // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnCreateConv;                                      // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnDestroyConv;                                     // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnClearConv;                                       // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetConvs;                                        // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetConv;                                         // 0x168(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSetConvRead;                                     // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSetConvSticky;                                   // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSetConvMute;                                     // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetConvAttr;                                     // 0x1A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetConvAllAttrs;                                 // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSetConvAttr;                                     // 0x1C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnCreateGroup;                                     // 0x1D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnJoinGroup;                                       // 0x1E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnQuitGroup;                                       // 0x1F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnDestroyGroup;                                    // 0x208(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetGroup;                                        // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSetGroup;                                        // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetGroups;                                       // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetGroupAttr;                                    // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetGroupAllAttrs;                                // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSetGroupAttr;                                    // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetGroupMembers;                                 // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetGroupMember;                                  // 0x288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAddGroupMember;                                  // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnRemoveGroupMember;                               // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetFriends;                                      // 0x2B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnRemoveFriend;                                    // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetFriendRequests;                               // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnCreateFriendRequest;                             // 0x2E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAcceptFriendRequest;                             // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnRefuseFriendRequest;                             // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnCancelFriendRequest;                             // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetBlockees;                                     // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAddToBlockee;                                    // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnRemoveFromBlockee;                               // 0x348(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnBlockeeExists;                                   // 0x358(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetUser;                                         // 0x368(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetUsers;                                        // 0x378(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetUsersState;                                   // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetOssToken;                                     // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetGMEToken;                                     // 0x3A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnReportMsg;                                       // 0x3B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnTranslateText;                                   // 0x3C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnCheckImage;                                      // 0x3D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetMiscConfigInfo;                               // 0x3E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetConvChatLevelConfig;                          // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetConnState;                                    // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ULimNativeLowLevel* GetDefaultObj();

	void TranslateText(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InText, enum class ELimNativeSupportedLanguage InLang, const class FString& ExtraInfo);
	void SetMsgState(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsgParams);
	void SetMsgRead(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, const class FString& InMsgID, const class FString& InExtra);
	void SetLogHandler(struct FLimNativeLowLevelWrapper& InCtx);
	void SetGroupAttr(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InKey, const class FString& InValue);
	void SetGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InGroupName, const class FString& InExtra);
	void SetEventHandler(struct FLimNativeLowLevelWrapper& InCtx);
	void SetConvSticky(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, bool bSticky);
	void SetConvRead(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, const class FString& InMsgID, const class FString& InExtra);
	void SetConvMute(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, bool bMute);
	void SetConvAttr(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, const class FString& InKey, const class FString& InValue);
	void SetAllConfigs(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InJsonString);
	void SendMsg(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsg);
	void RevokeMsg(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsg);
	void Resume(struct FLimNativeLowLevelWrapper& InCtx);
	void ReportMsg(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InMsg);
	void RemoveGroupMember(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InMemberID);
	void RemoveFromBlockee(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId);
	void RemoveFriend(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra);
	void RefuseFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra);
	void QuitGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID);
	void Pause(struct FLimNativeLowLevelWrapper& InCtx);
	void Logout(struct FLimNativeLowLevelWrapper& InCtx);
	void LoginV2(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InEnv, const class FString& InRoleID);
	void Login(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InAppUserID, const class FString& InToken, const class FString& InRoleID, const class FString& InExtra);
	void LIMResultDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData);
	void LIMLogDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData);
	void LIMEventDynamicDelegate__DelegateSignature(struct FLimNativeLowLevelWrapper& InWrapper, const class FString& InData);
	void JoinGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID);
	void GetUsersState(struct FLimNativeLowLevelWrapper& InCtx, TArray<class FString>& InUserIDs);
	void GetUsers(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserIDs);
	void GetUser(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId);
	void GetOssToken(struct FLimNativeLowLevelWrapper& InCtx);
	void GetMsgsV2(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, const class FString& InFromMsgID, const class FString& InToMsgID);
	void GetMsgs(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, enum class ELimNativeMsgDirType InDir, const class FString& InMsgID, const class FString& InExtra);
	void GetMiscConfigInfo(struct FLimNativeLowLevelWrapper& InCtx);
	class FString GetLIMVersion();
	class ULimNativeLowLevel* GetInstance();
	void GetGroups(struct FLimNativeLowLevelWrapper& InCtx, int32 InTag, int32 InSize, const class FString& InExtra);
	void GetGroupMembers(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, int32 InTag, int32 InSize, const class FString& InExtra);
	void GetGroupMember(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InMemberID);
	void GetGroupAttr(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InKey);
	void GetGroupAllAttrs(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID);
	void GetGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID);
	void GetGMEToken(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InAppId, const class FString& InUserId, const class FString& InRoomId);
	void GetFriends(struct FLimNativeLowLevelWrapper& InCtx, int32 InTag, int32 InSize, const class FString& InExtra);
	void GetFriendRequests(struct FLimNativeLowLevelWrapper& InCtx, int32 InTag, int32 InSize, const class FString& InExtra);
	void GetConvs(struct FLimNativeLowLevelWrapper& InCtx, int32 InSize, const class FString& InExtra);
	void GetConvChatLevelConfig(struct FLimNativeLowLevelWrapper& InCtx);
	void GetConvAttr(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, const class FString& InKey);
	void GetConvAllAttrs(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType);
	void GetConv(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType);
	void GetConnState(struct FLimNativeLowLevelWrapper& InCtx);
	void GetBlockees(struct FLimNativeLowLevelWrapper& InCtx, int32 InTag, int32 InSize, const class FString& InExtra);
	void GetAllConfigs(struct FLimNativeLowLevelWrapper& InCtx);
	void DestroyGroup(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID);
	void DestroyConv(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType);
	void DestoryInstance();
	struct FLimNativeLowLevelWrapper CreateLIM(const class FString& InServerEnvID);
	void CreateGroup(struct FLimNativeLowLevelWrapper& InCtx, const TArray<class FString>& InMembers, const class FString& InGroupName, const class FString& InExtra);
	void CreateFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InExtra);
	void CreateConv(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType, const class FString& InExtra);
	void ClearConv(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InConvID, enum class ELimNativeConvType InConvType);
	void CheckImage(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUrl);
	void CancelFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId, const class FString& InRequestID, const class FString& InExtra);
	void Call(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InJsonString);
	void BlockeeExists(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId);
	void AddToBlockee(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InUserId);
	void AddGroupMember(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InGroupID, const class FString& InMemberID);
	void AcceptFriendRequest(struct FLimNativeLowLevelWrapper& InCtx, const class FString& InRequestID, const class FString& InExtra);
};

}



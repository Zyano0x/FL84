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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function LLHSDK.LLHSDKAppUtils.ShowSteamVirtualKeyboard
	 */
	struct ULLHSDKAppUtils_ShowSteamVirtualKeyboard_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.SDKConfigIsMultiDetect
	 */
	struct ULLHSDKAppUtils_SDKConfigIsMultiDetect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.SDKConfigIsDebug
	 */
	struct ULLHSDKAppUtils_SDKConfigIsDebug_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKAppUtils.OnSteamUserStatesUpdate__DelegateSignature
	 */
	struct ULLHSDKAppUtils_OnSteamUserStatesUpdate__DelegateSignature_Params
	{
	public:
		class FString                                              SteamId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsFriend;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Online;                                                  // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_68I8[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FriendName;                                              // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.IsSteamFriendOnline
	 */
	struct ULLHSDKAppUtils_IsSteamFriendOnline_Params
	{
	public:
		class FString                                              SteamId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.IsSimulator
	 */
	struct ULLHSDKAppUtils_IsSimulator_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.IsPlatformSteamDeck
	 */
	struct ULLHSDKAppUtils_IsPlatformSteamDeck_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.IsPackageInstalled
	 */
	struct ULLHSDKAppUtils_IsPackageInstalled_Params
	{
	public:
		class FString                                              InPackageName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.IsGrayRelease
	 */
	struct ULLHSDKAppUtils_IsGrayRelease_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.InviteSteamUserToGame
	 */
	struct ULLHSDKAppUtils_InviteSteamUserToGame_Params
	{
	public:
		class FString                                              SteamId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetVersionName
	 */
	struct ULLHSDKAppUtils_GetVersionName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetVersionCode
	 */
	struct ULLHSDKAppUtils_GetVersionCode_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetSteamFriendsOnlineList
	 */
	struct ULLHSDKAppUtils_GetSteamFriendsOnlineList_Params
	{
	public:
		TArray<bool>                                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetSteamFriendsNameList
	 */
	struct ULLHSDKAppUtils_GetSteamFriendsNameList_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetSteamFriendName
	 */
	struct ULLHSDKAppUtils_GetSteamFriendName_Params
	{
	public:
		class FString                                              SteamId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetSteamFriendIDList
	 */
	struct ULLHSDKAppUtils_GetSteamFriendIDList_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetSteamFriendCount
	 */
	struct ULLHSDKAppUtils_GetSteamFriendCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetSDKVersionName
	 */
	struct ULLHSDKAppUtils_GetSDKVersionName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetSDKVersionCode
	 */
	struct ULLHSDKAppUtils_GetSDKVersionCode_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetRunningProcessName
	 */
	struct ULLHSDKAppUtils_GetRunningProcessName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetOperatingSystemId
	 */
	struct ULLHSDKAppUtils_GetOperatingSystemId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetInstance
	 */
	struct ULLHSDKAppUtils_GetInstance_Params
	{
	public:
		class ULLHSDKAppUtils*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetGameTime
	 */
	struct ULLHSDKAppUtils_GetGameTime_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetGameID
	 */
	struct ULLHSDKAppUtils_GetGameID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetEnvId
	 */
	struct ULLHSDKAppUtils_GetEnvId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetDeviceUUID
	 */
	struct ULLHSDKAppUtils_GetDeviceUUID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetChannelID
	 */
	struct ULLHSDKAppUtils_GetChannelID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetBiosUUID
	 */
	struct ULLHSDKAppUtils_GetBiosUUID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetAppName
	 */
	struct ULLHSDKAppUtils_GetAppName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetAppIDRaw
	 */
	struct ULLHSDKAppUtils_GetAppIDRaw_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.GetAppID
	 */
	struct ULLHSDKAppUtils_GetAppID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.DoesDistributeForDomestic
	 */
	struct ULLHSDKAppUtils_DoesDistributeForDomestic_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.DismissSteamVirtualKeyboard
	 */
	struct ULLHSDKAppUtils_DismissSteamVirtualKeyboard_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.DestoryInstance
	 */
	struct ULLHSDKAppUtils_DestoryInstance_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKAppUtils.BindOnlineSubsystemSteamPresence
	 */
	struct ULLHSDKAppUtils_BindOnlineSubsystemSteamPresence_Params
	{	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKCommunity.OnInitCommunity__DelegateSignature
	 */
	struct ULLHSDKCommunity_OnInitCommunity__DelegateSignature_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKCommunity.OnImageDownload__DelegateSignature
	 */
	struct ULLHSDKCommunity_OnImageDownload__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKCommunity.OnGetCommunityRedhint__DelegateSignature
	 */
	struct ULLHSDKCommunity_OnGetCommunityRedhint__DelegateSignature_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKCommunity.OnExitCommunity__DelegateSignature
	 */
	struct ULLHSDKCommunity_OnExitCommunity__DelegateSignature_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKCommunity.OnClearCommunityRedhint__DelegateSignature
	 */
	struct ULLHSDKCommunity_OnClearCommunityRedhint__DelegateSignature_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKCommunity.InitCommunityConfig
	 */
	struct ULLHSDKCommunity_InitCommunityConfig_Params
	{
	public:
		class FString                                              UrlInfo;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReqMethod;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ExtraHttpParams;                                         // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKCommunity.GetInstance
	 */
	struct ULLHSDKCommunity_GetInstance_Params
	{
	public:
		class ULLHSDKCommunity*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKCommunity.GetCommunityRedHint
	 */
	struct ULLHSDKCommunity_GetCommunityRedHint_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReqMethod;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ExtraHttpParams;                                         // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKCommunity.ExitCommunity
	 */
	struct ULLHSDKCommunity_ExitCommunity_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReqMethod;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ExtraHttpParams;                                         // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKCommunity.DownloadImage
	 */
	struct ULLHSDKCommunity_DownloadImage_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FilePath;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKCommunity.DestoryInstance
	 */
	struct ULLHSDKCommunity_DestoryInstance_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKCommunity.ClearCommunityRedHint
	 */
	struct ULLHSDKCommunity_ClearCommunityRedHint_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReqMethod;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ExtraHttpParams;                                         // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKCustomerService.ShowCustomerServicePage
	 */
	struct ULLHSDKCustomerService_ShowCustomerServicePage_Params
	{
	public:
		class FString                                              ExtInfoStr;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKCustomerService.SetCustomerServiceDebug
	 */
	struct ULLHSDKCustomerService_SetCustomerServiceDebug_Params
	{
	public:
		bool                                                       bIsPspDebug;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q67B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PlayerId;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ServerId;                                                // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKCustomerService.OnReceiveNotification__DelegateSignature
	 */
	struct ULLHSDKCustomerService_OnReceiveNotification__DelegateSignature_Params
	{
	public:
		int32_t                                                    NotificationType;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKCustomerService.GetInstance
	 */
	struct ULLHSDKCustomerService_GetInstance_Params
	{
	public:
		class ULLHSDKCustomerService*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKCustomerService.DestoryInstance
	 */
	struct ULLHSDKCustomerService_DestoryInstance_Params
	{	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKDeviceUtils.OnGoogleAdID__DelegateSignature
	 */
	struct ULLHSDKDeviceUtils_OnGoogleAdID__DelegateSignature_Params
	{
	public:
		class FString                                              GoogleAdID;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKDeviceUtils.OnDeviceScore__DelegateSignature
	 */
	struct ULLHSDKDeviceUtils_OnDeviceScore__DelegateSignature_Params
	{
	public:
		int32_t                                                    DeviceScore;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.IsEmulator
	 */
	struct ULLHSDKDeviceUtils_IsEmulator_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetTotalRAM
	 */
	struct ULLHSDKDeviceUtils_GetTotalRAM_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetTotalMemorySize
	 */
	struct ULLHSDKDeviceUtils_GetTotalMemorySize_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetTimezoneName
	 */
	struct ULLHSDKDeviceUtils_GetTimezoneName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetOSVersion
	 */
	struct ULLHSDKDeviceUtils_GetOSVersion_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetNetworkTypeEnum
	 */
	struct ULLHSDKDeviceUtils_GetNetworkTypeEnum_Params
	{
	public:
		ELLHSDKNetworkType                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetNetworkType
	 */
	struct ULLHSDKDeviceUtils_GetNetworkType_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetMacAddress
	 */
	struct ULLHSDKDeviceUtils_GetMacAddress_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetInstance
	 */
	struct ULLHSDKDeviceUtils_GetInstance_Params
	{
	public:
		class ULLHSDKDeviceUtils*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetIMSI
	 */
	struct ULLHSDKDeviceUtils_GetIMSI_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetIDFA
	 */
	struct ULLHSDKDeviceUtils_GetIDFA_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetGoogleAdID
	 */
	struct ULLHSDKDeviceUtils_GetGoogleAdID_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetDisplayMetrics
	 */
	struct ULLHSDKDeviceUtils_GetDisplayMetrics_Params
	{
	public:
		TArray<float>                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetDisplayCutout
	 */
	struct ULLHSDKDeviceUtils_GetDisplayCutout_Params
	{
	public:
		TArray<float>                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetDeviceType
	 */
	struct ULLHSDKDeviceUtils_GetDeviceType_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetDeviceScore
	 */
	struct ULLHSDKDeviceUtils_GetDeviceScore_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetDeviceModel
	 */
	struct ULLHSDKDeviceUtils_GetDeviceModel_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetDeviceID
	 */
	struct ULLHSDKDeviceUtils_GetDeviceID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetDeviceCarrier
	 */
	struct ULLHSDKDeviceUtils_GetDeviceCarrier_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetDeviceBrand
	 */
	struct ULLHSDKDeviceUtils_GetDeviceBrand_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetDeviceAbi
	 */
	struct ULLHSDKDeviceUtils_GetDeviceAbi_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetCPUModel
	 */
	struct ULLHSDKDeviceUtils_GetCPUModel_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetCPUHardWareName
	 */
	struct ULLHSDKDeviceUtils_GetCPUHardWareName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetAvailableRAM
	 */
	struct ULLHSDKDeviceUtils_GetAvailableRAM_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.GetAndroidID
	 */
	struct ULLHSDKDeviceUtils_GetAndroidID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKDeviceUtils.DestoryInstance
	 */
	struct ULLHSDKDeviceUtils_DestoryInstance_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKLocalization.SetLocaleName
	 */
	struct ULLHSDKLocalization_SetLocaleName_Params
	{
	public:
		class FString                                              InLocale;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLocalization.SetLocale
	 */
	struct ULLHSDKLocalization_SetLocale_Params
	{
	public:
		ELLHSDKSupportedLanguage                                   InLocale;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLocalization.GetLocaleName
	 */
	struct ULLHSDKLocalization_GetLocaleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLocalization.GetLocaleInfo
	 */
	struct ULLHSDKLocalization_GetLocaleInfo_Params
	{
	public:
		struct FLLHSDKLocaleInfo                                   ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLocalization.GetLocaleEnum
	 */
	struct ULLHSDKLocalization_GetLocaleEnum_Params
	{
	public:
		ELLHSDKSupportedLanguage                                   ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLocalization.GetInstance
	 */
	struct ULLHSDKLocalization_GetInstance_Params
	{
	public:
		class ULLHSDKLocalization*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLocalization.DestoryInstance
	 */
	struct ULLHSDKLocalization_DestoryInstance_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKLogin.UpdateSteamCallBack
	 */
	struct ULLHSDKLogin_UpdateSteamCallBack_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKLogin.SwitchOrLinkAccount
	 */
	struct ULLHSDKLogin_SwitchOrLinkAccount_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKLogin.SteamRegister
	 */
	struct ULLHSDKLogin_SteamRegister_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.SteamLoginResultSet
	 */
	struct ULLHSDKLogin_SteamLoginResultSet_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.SteamGetAccountInfo
	 */
	struct ULLHSDKLogin_SteamGetAccountInfo_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.SteamFree
	 */
	struct ULLHSDKLogin_SteamFree_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKLogin.SteamBindUrlGet
	 */
	struct ULLHSDKLogin_SteamBindUrlGet_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.SteamAutoLogin
	 */
	struct ULLHSDKLogin_SteamAutoLogin_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.ShowProtocolViewV2Ok
	 */
	struct ULLHSDKLogin_ShowProtocolViewV2Ok_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKLogin.ShowProtocolViewV2Confirm
	 */
	struct ULLHSDKLogin_ShowProtocolViewV2Confirm_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKLogin.SetLimPCSDKLogHandler
	 */
	struct ULLHSDKLogin_SetLimPCSDKLogHandler_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.SetLimPCSDKEventHandler
	 */
	struct ULLHSDKLogin_SetLimPCSDKEventHandler_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.SetLimPCAlilogFieldsData
	 */
	struct ULLHSDKLogin_SetLimPCAlilogFieldsData_Params
	{
	public:
		class FString                                              LimPCAlilogFieldsStr;                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.QueryCurrentUserInfo
	 */
	struct ULLHSDKLogin_QueryCurrentUserInfo_Params
	{
	public:
		struct FLLHSDKLoginUserInfo                                ReturnValue;                                             // 0x0000(0x0140)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.QueryCurrentUser
	 */
	struct ULLHSDKLogin_QueryCurrentUser_Params
	{
	public:
		struct FLLHSDKLoginUser                                    ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.OpenSteamBindPage
	 */
	struct ULLHSDKLogin_OpenSteamBindPage_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.OpenLIMPCSwitchAccPage
	 */
	struct ULLHSDKLogin_OpenLIMPCSwitchAccPage_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.OpenLIMPCAccountPage
	 */
	struct ULLHSDKLogin_OpenLIMPCAccountPage_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKLogin.OnProtocolClick__DelegateSignature
	 */
	struct ULLHSDKLogin_OnProtocolClick__DelegateSignature_Params
	{
	public:
		bool                                                       bConfirmed;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKLogin.OnLoginFinish__DelegateSignature
	 */
	struct ULLHSDKLogin_OnLoginFinish__DelegateSignature_Params
	{
	public:
		class FString                                              AppUid;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppToken;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKLoginType                                           LoginType;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKLogin.OnLoginFailed__DelegateSignature
	 */
	struct ULLHSDKLogin_OnLoginFailed__DelegateSignature_Params
	{
	public:
		ELLHSDKLoginType                                           LoginType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5U2V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKLogin.OnInitFinish__DelegateSignature
	 */
	struct ULLHSDKLogin_OnInitFinish__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKLogin.OnBindFinish__DelegateSignature
	 */
	struct ULLHSDKLogin_OnBindFinish__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B3MS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AppUid;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppToken;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKLoginType                                           LoginType;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.NSLogout
	 */
	struct ULLHSDKLogin_NSLogout_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKLogin.NSLoginStart
	 */
	struct ULLHSDKLogin_NSLoginStart_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.NSFinalize
	 */
	struct ULLHSDKLogin_NSFinalize_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKLogin.NSAccountInfoGet
	 */
	struct ULLHSDKLogin_NSAccountInfoGet_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.LogoutLimPCSDK
	 */
	struct ULLHSDKLogin_LogoutLimPCSDK_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.Logout
	 */
	struct ULLHSDKLogin_Logout_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKLogin.LoginUserInfo_ToString
	 */
	struct ULLHSDKLogin_LoginUserInfo_ToString_Params
	{
	public:
		struct FLLHSDKLoginUserInfo                                InUserInfo;                                              // 0x0000(0x0140)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0140(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.LoginUser_ToString
	 */
	struct ULLHSDKLogin_LoginUser_ToString_Params
	{
	public:
		struct FLLHSDKLoginUser                                    InUser;                                                  // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.LoginLimPCSDK
	 */
	struct ULLHSDKLogin_LoginLimPCSDK_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.Login
	 */
	struct ULLHSDKLogin_Login_Params
	{	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKLogin.LimSteamSDKCallBack__DelegateSignature
	 */
	struct ULLHSDKLogin_LimSteamSDKCallBack__DelegateSignature_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKLogin.LimPCSDKCallBack__DelegateSignature
	 */
	struct ULLHSDKLogin_LimPCSDKCallBack__DelegateSignature_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKLogin.LimOnSteamLoginResultSet__DelegateSignature
	 */
	struct ULLHSDKLogin_LimOnSteamLoginResultSet__DelegateSignature_Params
	{
	public:
		class FString                                              AppUid;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppToken;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppId;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.IsInitFinish
	 */
	struct ULLHSDKLogin_IsInitFinish_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.IsCurrentUserNewReg
	 */
	struct ULLHSDKLogin_IsCurrentUserNewReg_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.InitNSSDK
	 */
	struct ULLHSDKLogin_InitNSSDK_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.InitLimSteamSDK
	 */
	struct ULLHSDKLogin_InitLimSteamSDK_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.InitLimPCSDK
	 */
	struct ULLHSDKLogin_InitLimPCSDK_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.GetSteamToken
	 */
	struct ULLHSDKLogin_GetSteamToken_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.GetSteamRegisterUrl
	 */
	struct ULLHSDKLogin_GetSteamRegisterUrl_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.GetLimPCUserInfo
	 */
	struct ULLHSDKLogin_GetLimPCUserInfo_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.GetLimPCAlilogFieldsData
	 */
	struct ULLHSDKLogin_GetLimPCAlilogFieldsData_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.GetLimPCAlilogFields
	 */
	struct ULLHSDKLogin_GetLimPCAlilogFields_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.GetInstance
	 */
	struct ULLHSDKLogin_GetInstance_Params
	{
	public:
		class ULLHSDKLogin*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.FreeLimPCSDK
	 */
	struct ULLHSDKLogin_FreeLimPCSDK_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKLogin.DoSteamBind
	 */
	struct ULLHSDKLogin_DoSteamBind_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.DestoryInstance
	 */
	struct ULLHSDKLogin_DestoryInstance_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKLogin.DAPLogAdd
	 */
	struct ULLHSDKLogin_DAPLogAdd_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.CommonReportLimPCPoint
	 */
	struct ULLHSDKLogin_CommonReportLimPCPoint_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.ClearAutoLogin
	 */
	struct ULLHSDKLogin_ClearAutoLogin_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.ChangeLIMPCLanguage
	 */
	struct ULLHSDKLogin_ChangeLIMPCLanguage_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.CanContinueLogin
	 */
	struct ULLHSDKLogin_CanContinueLogin_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKLogin.CancelSteamCallBack
	 */
	struct ULLHSDKLogin_CancelSteamCallBack_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKMisc.UpdateNetworkExtensions
	 */
	struct ULLHSDKMisc_UpdateNetworkExtensions_Params
	{
	public:
		class FString                                              InUserId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InDeviceID;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.TwitterShareText
	 */
	struct ULLHSDKMisc_TwitterShareText_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.TwitterSharePhoto
	 */
	struct ULLHSDKMisc_TwitterSharePhoto_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InFilePath;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.TryToEnableAndroidNotification
	 */
	struct ULLHSDKMisc_TryToEnableAndroidNotification_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKMisc.TcpPingDetect
	 */
	struct ULLHSDKMisc_TcpPingDetect_Params
	{
	public:
		class FString                                              InDomain;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Port;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.SystemShare
	 */
	struct ULLHSDKMisc_SystemShare_Params
	{
	public:
		int32_t                                                    ShareType;                                               // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T315[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Description;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FilePath;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.StartIOSFarlightBrowserWithOrientation
	 */
	struct ULLHSDKMisc_StartIOSFarlightBrowserWithOrientation_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Title;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKScreenOrientation                                   Orientation;                                             // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.StartBrowserWithOrientation
	 */
	struct ULLHSDKMisc_StartBrowserWithOrientation_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Title;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKScreenOrientation                                   Orientation;                                             // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.StartBrowser
	 */
	struct ULLHSDKMisc_StartBrowser_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Title;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.SetNetworkPolicyDomain
	 */
	struct ULLHSDKMisc_SetNetworkPolicyDomain_Params
	{
	public:
		class FString                                              InDomain;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.SetNetworkMultipleDetect
	 */
	struct ULLHSDKMisc_SetNetworkMultipleDetect_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.SetNetworkDiagnosisDeviceID
	 */
	struct ULLHSDKMisc_SetNetworkDiagnosisDeviceID_Params
	{
	public:
		class FString                                              InDeviceID;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.RestartApplication
	 */
	struct ULLHSDKMisc_RestartApplication_Params
	{
	public:
		class FString                                              IntentString;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.RefreshFirebaseMessagingToken
	 */
	struct ULLHSDKMisc_RefreshFirebaseMessagingToken_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKMisc.RefreshAndroidMediaScanner
	 */
	struct ULLHSDKMisc_RefreshAndroidMediaScanner_Params
	{
	public:
		class FString                                              InFullFilePath;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.QueryThirdPartUserInfo
	 */
	struct ULLHSDKMisc_QueryThirdPartUserInfo_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKMisc.PingDetect
	 */
	struct ULLHSDKMisc_PingDetect_Params
	{
	public:
		class FString                                              InDomain;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.PickFileFromAlbum
	 */
	struct ULLHSDKMisc_PickFileFromAlbum_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKMisc.OpenSteamPayWebPage
	 */
	struct ULLHSDKMisc_OpenSteamPayWebPage_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.OpenLimPCWebPage
	 */
	struct ULLHSDKMisc_OpenLimPCWebPage_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKMisc.OnSystemShared__DelegateSignature
	 */
	struct ULLHSDKMisc_OnSystemShared__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKMisc.OnScreenshotCapturedEvent__DelegateSignature
	 */
	struct ULLHSDKMisc_OnScreenshotCapturedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              FullPath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKMisc.OnRefreshFirebaseToken__DelegateSignature
	 */
	struct ULLHSDKMisc_OnRefreshFirebaseToken__DelegateSignature_Params
	{
	public:
		class FString                                              FirebaseToken;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKMisc.OnQueryThirdPartUserInfo__DelegateSignature
	 */
	struct ULLHSDKMisc_OnQueryThirdPartUserInfo__DelegateSignature_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HHE7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSDKSocialUserInfo>                          SocialUserInfoList;                                      // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKMisc.OnPickFileFromAlbumFinishEvent__DelegateSignature
	 */
	struct ULLHSDKMisc_OnPickFileFromAlbumFinishEvent__DelegateSignature_Params
	{
	public:
		class FString                                              PickFilePath;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ErrorCode;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCOpenWebview__DelegateSignature
	 */
	struct ULLHSDKMisc_OnLimPCOpenWebview__DelegateSignature_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCCloseWebview__DelegateSignature
	 */
	struct ULLHSDKMisc_OnLimPCCloseWebview__DelegateSignature_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKMisc.OnGetFacebookToken__DelegateSignature
	 */
	struct ULLHSDKMisc_OnGetFacebookToken__DelegateSignature_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4S73[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Token;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ApplicationId;                                           // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UserId;                                                  // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GraphDomain;                                             // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKMisc.OnFacebookPhotoShared__DelegateSignature
	 */
	struct ULLHSDKMisc_OnFacebookPhotoShared__DelegateSignature_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKMisc.OnBrowserClosed__DelegateSignature
	 */
	struct ULLHSDKMisc_OnBrowserClosed__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKMisc.NetworkDiagnosisCallback__DelegateSignature
	 */
	struct ULLHSDKMisc_NetworkDiagnosisCallback__DelegateSignature_Params
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Ret;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.MtrDetect
	 */
	struct ULLHSDKMisc_MtrDetect_Params
	{
	public:
		class FString                                              InDomain;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.JumpToMarket
	 */
	struct ULLHSDKMisc_JumpToMarket_Params
	{
	public:
		class FString                                              InAppPkg;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InMarketPkg;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.JumpToAppStore
	 */
	struct ULLHSDKMisc_JumpToAppStore_Params
	{
	public:
		class FString                                              AppStoreUrl;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.IsFacebookShareable
	 */
	struct ULLHSDKMisc_IsFacebookShareable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.IsAppRooted
	 */
	struct ULLHSDKMisc_IsAppRooted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.IsAndroidNotificationEnabled
	 */
	struct ULLHSDKMisc_IsAndroidNotificationEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.InitNetworkDiagnosis
	 */
	struct ULLHSDKMisc_InitNetworkDiagnosis_Params
	{
	public:
		class FString                                              InProject;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InSecretKey;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InEndPoint;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InAccessKeyId;                                           // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InAccessKeySecret;                                       // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InUid;                                                   // 0x0050(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InChannel;                                               // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.HttpDetect
	 */
	struct ULLHSDKMisc_HttpDetect_Params
	{
	public:
		class FString                                              InUrl;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.GetNetworkDiagnosisDeviceID
	 */
	struct ULLHSDKMisc_GetNetworkDiagnosisDeviceID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.GetInstance
	 */
	struct ULLHSDKMisc_GetInstance_Params
	{
	public:
		class ULLHSDKMisc*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.GetFirebaseMessagingToken
	 */
	struct ULLHSDKMisc_GetFirebaseMessagingToken_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.GetFacebookToken
	 */
	struct ULLHSDKMisc_GetFacebookToken_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKMisc.FacebookSharePhotoWithFileAndDescription
	 */
	struct ULLHSDKMisc_FacebookSharePhotoWithFileAndDescription_Params
	{
	public:
		class FString                                              Description;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FilePath;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.FacebookSharePhotoByPath
	 */
	struct ULLHSDKMisc_FacebookSharePhotoByPath_Params
	{
	public:
		class FString                                              InFilePath;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.FacebookSharePhoto
	 */
	struct ULLHSDKMisc_FacebookSharePhoto_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKMisc.FacebookShareLink
	 */
	struct ULLHSDKMisc_FacebookShareLink_Params
	{
	public:
		class FString                                              InLinkURL;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InPreviewURL;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InTitle;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InDesc;                                                  // 0x0030(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.DnsDetect
	 */
	struct ULLHSDKMisc_DnsDetect_Params
	{
	public:
		class FString                                              InServer;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InDomain;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKMisc.DestoryInstance
	 */
	struct ULLHSDKMisc_DestoryInstance_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKMisc.CloseLimPCWebPageAll
	 */
	struct ULLHSDKMisc_CloseLimPCWebPageAll_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKMisc.CheckGyroSensorSupport
	 */
	struct ULLHSDKMisc_CheckGyroSensorSupport_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Test_Google_SkuItemDetailsToString
	 */
	struct ULLHSDKPay_Test_Google_SkuItemDetailsToString_Params
	{
	public:
		struct FLLHSDKGenericSkuItemsDetailList                    InDetails;                                               // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayOrdersConsume__DelegateSignature
	 */
	struct ULLHSDKPay_SwitchSDKPayOrdersConsume__DelegateSignature_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayOrdersCheck__DelegateSignature
	 */
	struct ULLHSDKPay_SwitchSDKPayOrdersCheck__DelegateSignature_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayGetConsumables__DelegateSignature
	 */
	struct ULLHSDKPay_SwitchSDKPayGetConsumables__DelegateSignature_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayGetConsumableItems__DelegateSignature
	 */
	struct ULLHSDKPay_SwitchSDKPayGetConsumableItems__DelegateSignature_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.SwitchSDKPayEShopOpen__DelegateSignature
	 */
	struct ULLHSDKPay_SwitchSDKPayEShopOpen__DelegateSignature_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Switch_OrdersConsume
	 */
	struct ULLHSDKPay_Switch_OrdersConsume_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Switch_OrdersCheck
	 */
	struct ULLHSDKPay_Switch_OrdersCheck_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Switch_GetConsumables
	 */
	struct ULLHSDKPay_Switch_GetConsumables_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Switch_GetConsumableItems
	 */
	struct ULLHSDKPay_Switch_GetConsumableItems_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Switch_EShopOpen
	 */
	struct ULLHSDKPay_Switch_EShopOpen_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.SteamQuerySkus
	 */
	struct ULLHSDKPay_SteamQuerySkus_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Steam_StartPay
	 */
	struct ULLHSDKPay_Steam_StartPay_Params
	{
	public:
		class FString                                              SteamPayInfo;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.SetPayNotifyUrl
	 */
	struct ULLHSDKPay_SetPayNotifyUrl_Params
	{
	public:
		class FString                                              InNotifyUrl;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.OnLLHQuerySkus__DelegateSignature
	 */
	struct ULLHSDKPay_OnLLHQuerySkus__DelegateSignature_Params
	{
	public:
		struct FLLHSDKGenericSkuItemsDetailList                    ItemsDetailList;                                         // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		TArray<class FString>                                      InvalidProductIDs;                                       // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.OnLLHPayFinished__DelegateSignature
	 */
	struct ULLHSDKPay_OnLLHPayFinished__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7V0V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ErrorMsg;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PayValue;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MJFM[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ProductID;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKPayType                                             PayType;                                                 // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.OnGoogleQuerySkuSubItemDetails__DelegateSignature
	 */
	struct ULLHSDKPay_OnGoogleQuerySkuSubItemDetails__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_883I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ItemsDetailListJsonString;                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.OnGoogleQuerySkuItemDetails__DelegateSignature
	 */
	struct ULLHSDKPay_OnGoogleQuerySkuItemDetails__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VBH5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ItemsDetailListJsonString;                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.OnGooglePayFinished__DelegateSignature
	 */
	struct ULLHSDKPay_OnGooglePayFinished__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LWTA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Price;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X9ZR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ItemID;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKPayType                                             PayType;                                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.OnGetIOSPurchaseExtNull__DelegateSignature
	 */
	struct ULLHSDKPay_OnGetIOSPurchaseExtNull__DelegateSignature_Params
	{
	public:
		class FString                                              AppUid;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ProductID;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.OnGetGoogleConsumeGoods__DelegateSignature
	 */
	struct ULLHSDKPay_OnGetGoogleConsumeGoods__DelegateSignature_Params
	{
	public:
		TArray<class FString>                                      Skus;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.LSteamSDKQuerySkus__DelegateSignature
	 */
	struct ULLHSDKPay_LSteamSDKQuerySkus__DelegateSignature_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.LSteamSDKPayApplied__DelegateSignature
	 */
	struct ULLHSDKPay_LSteamSDKPayApplied__DelegateSignature_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.LimPCStartPay
	 */
	struct ULLHSDKPay_LimPCStartPay_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.LimPCSDKQueryPriceLadder__DelegateSignature
	 */
	struct ULLHSDKPay_LimPCSDKQueryPriceLadder__DelegateSignature_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction LLHSDK.LLHSDKPay.LimPCSDKPayApplied__DelegateSignature
	 */
	struct ULLHSDKPay_LimPCSDKPayApplied__DelegateSignature_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.LimPCQueryPriceLadderWithRegion
	 */
	struct ULLHSDKPay_LimPCQueryPriceLadderWithRegion_Params
	{
	public:
		class FString                                              Params;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.LimPCQueryPriceLadder
	 */
	struct ULLHSDKPay_LimPCQueryPriceLadder_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKPay.IOS_SetUserPayExtInCallback
	 */
	struct ULLHSDKPay_IOS_SetUserPayExtInCallback_Params
	{
	public:
		class FString                                              ProductID;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PayExt;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.IOS_SetUserPayExt
	 */
	struct ULLHSDKPay_IOS_SetUserPayExt_Params
	{
	public:
		class FString                                              PayExt;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.IOS_SetAutoPayExt
	 */
	struct ULLHSDKPay_IOS_SetAutoPayExt_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.IOS_QuerySkus
	 */
	struct ULLHSDKPay_IOS_QuerySkus_Params
	{
	public:
		TArray<class FString>                                      ProductIDs;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.IOS_LLHPay
	 */
	struct ULLHSDKPay_IOS_LLHPay_Params
	{
	public:
		class FString                                              ProductID;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PayExt;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.IOS_GetAutoPayExt
	 */
	struct ULLHSDKPay_IOS_GetAutoPayExt_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Google_StartPaySubscription
	 */
	struct ULLHSDKPay_Google_StartPaySubscription_Params
	{
	public:
		class FString                                              PayItemID;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PayContext;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Google_StartPay
	 */
	struct ULLHSDKPay_Google_StartPay_Params
	{
	public:
		class FString                                              PayItemID;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PayContext;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Google_QuerySkuItemDetailsSubscription
	 */
	struct ULLHSDKPay_Google_QuerySkuItemDetailsSubscription_Params
	{
	public:
		TArray<class FString>                                      Items;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Google_QuerySkuItemDetails
	 */
	struct ULLHSDKPay_Google_QuerySkuItemDetails_Params
	{
	public:
		TArray<class FString>                                      Items;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Google_HasConsumePointsGoods
	 */
	struct ULLHSDKPay_Google_HasConsumePointsGoods_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Google_HasConsumeGoods
	 */
	struct ULLHSDKPay_Google_HasConsumeGoods_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Google_GetConsumePointsGoods
	 */
	struct ULLHSDKPay_Google_GetConsumePointsGoods_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Google_GetConsumeGoods
	 */
	struct ULLHSDKPay_Google_GetConsumeGoods_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.Google_ConsumeGoods
	 */
	struct ULLHSDKPay_Google_ConsumeGoods_Params
	{
	public:
		TArray<class FString>                                      Skus;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      Contexts;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.GetInstance
	 */
	struct ULLHSDKPay_GetInstance_Params
	{
	public:
		class ULLHSDKPay*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKPay.DestoryInstance
	 */
	struct ULLHSDKPay_DestoryInstance_Params
	{	};

	/**
	 * Function LLHSDK.LLHSDKReport.ReportToThirdParty_TwoParams
	 */
	struct ULLHSDKReport_ReportToThirdParty_TwoParams_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter1;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter2;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKReport.ReportToThirdParty_ThreeParams
	 */
	struct ULLHSDKReport_ReportToThirdParty_ThreeParams_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter1;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter2;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter3;                                              // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKReport.ReportToThirdParty_OneParam
	 */
	struct ULLHSDKReport_ReportToThirdParty_OneParam_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKReport.ReportToThirdParty_FourParams
	 */
	struct ULLHSDKReport_ReportToThirdParty_FourParams_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter1;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter2;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter3;                                              // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter4;                                              // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKReport.ReportToThirdParty_FiveParams
	 */
	struct ULLHSDKReport_ReportToThirdParty_FiveParams_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter1;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter2;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter3;                                              // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter4;                                              // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter5;                                              // 0x0050(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKReport.ReportToThirdParty
	 */
	struct ULLHSDKReport_ReportToThirdParty_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_TwoParams
	 */
	struct ULLHSDKReport_ReportRevenueToThirdParty_TwoParams_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKReportCurrencyType                                  Currency;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A5CA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Revenue;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter1;                                              // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter2;                                              // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_ThreeParams
	 */
	struct ULLHSDKReport_ReportRevenueToThirdParty_ThreeParams_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKReportCurrencyType                                  Currency;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JS87[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Revenue;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter1;                                              // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter2;                                              // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter3;                                              // 0x0048(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_OneParam
	 */
	struct ULLHSDKReport_ReportRevenueToThirdParty_OneParam_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKReportCurrencyType                                  Currency;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9Z9V[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Revenue;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter;                                               // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_FourParams
	 */
	struct ULLHSDKReport_ReportRevenueToThirdParty_FourParams_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKReportCurrencyType                                  Currency;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y64N[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Revenue;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter1;                                              // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter2;                                              // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter3;                                              // 0x0048(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter4;                                              // 0x0058(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_FiveParams
	 */
	struct ULLHSDKReport_ReportRevenueToThirdParty_FiveParams_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKReportCurrencyType                                  Currency;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JLG5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Revenue;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter1;                                              // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter2;                                              // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter3;                                              // 0x0048(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter4;                                              // 0x0058(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Parameter5;                                              // 0x0068(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty
	 */
	struct ULLHSDKReport_ReportRevenueToThirdParty_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKReportCurrencyType                                  Currency;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HQII[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Revenue;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKReport.ReportJsonToLilithImmediate
	 */
	struct ULLHSDKReport_ReportJsonToLilithImmediate_Params
	{
	public:
		class FString                                              EventName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              JsonContentStr;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKReport.GetInstance
	 */
	struct ULLHSDKReport_GetInstance_Params
	{
	public:
		class ULLHSDKReport*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function LLHSDK.LLHSDKReport.DestoryInstance
	 */
	struct ULLHSDKReport_DestoryInstance_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

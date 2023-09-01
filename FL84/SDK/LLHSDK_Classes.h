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
	 * Class LLHSDK.LLHSDKAppUtils
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULLHSDKAppUtils : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSteamUserStatesUpdate;                                 // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool STATIC_SDKConfigIsMultiDetect();
		bool STATIC_SDKConfigIsDebug();
		void OnSteamUserStatesUpdate__DelegateSignature(const class FString& SteamId, bool IsFriend, bool Online, const class FString& FriendName);
		bool STATIC_IsSteamFriendOnline(const class FString& SteamId);
		bool STATIC_IsSimulator();
		bool STATIC_IsPackageInstalled(const class FString& InPackageName);
		bool STATIC_IsGrayRelease();
		bool STATIC_InviteSteamUserToGame(const class FString& SteamId);
		class FString STATIC_GetVersionName();
		class FString STATIC_GetVersionCode();
		TArray<bool> STATIC_GetSteamFriendsOnlineList();
		TArray<class FString> STATIC_GetSteamFriendsNameList();
		class FString STATIC_GetSteamFriendName(const class FString& SteamId);
		TArray<class FString> STATIC_GetSteamFriendIDList();
		int32_t STATIC_GetSteamFriendCount();
		class FString STATIC_GetSDKVersionName();
		class FString STATIC_GetSDKVersionCode();
		class FString STATIC_GetRunningProcessName();
		class FString STATIC_GetOperatingSystemId();
		class ULLHSDKAppUtils* STATIC_GetInstance();
		int64_t STATIC_GetGameTime();
		class FString STATIC_GetGameID();
		class FString STATIC_GetEnvId();
		class FString STATIC_GetDeviceUUID();
		class FString STATIC_GetChannelID();
		class FString STATIC_GetBiosUUID();
		class FString STATIC_GetAppName();
		class FString STATIC_GetAppIDRaw();
		class FString STATIC_GetAppID();
		void STATIC_DestoryInstance();
		void STATIC_BindOnlineSubsystemSteamPresence();
		static UClass* StaticClass();
	};

	/**
	 * Class LLHSDK.LLHSDKCommunity
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class ULLHSDKCommunity : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnInitCommunity;                                         // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitCommunity;                                         // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetCommunityRedhint;                                   // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnClearCommunityRedhint;                                 // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnImageDownload;                                         // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnInitCommunity__DelegateSignature(const class FString& ResultStr);
		void OnImageDownload__DelegateSignature(bool bSuccess);
		void OnGetCommunityRedhint__DelegateSignature(const class FString& ResultStr);
		void OnExitCommunity__DelegateSignature(const class FString& ResultStr);
		void OnClearCommunityRedhint__DelegateSignature(const class FString& ResultStr);
		void STATIC_InitCommunityConfig(const class FString& UrlInfo, const class FString& ReqMethod, const class FString& ExtraHttpParams);
		class ULLHSDKCommunity* STATIC_GetInstance();
		void STATIC_GetCommunityRedHint(const class FString& URL, const class FString& ReqMethod, const class FString& ExtraHttpParams);
		void STATIC_ExitCommunity(const class FString& URL, const class FString& ReqMethod, const class FString& ExtraHttpParams);
		void STATIC_DownloadImage(const class FString& URL, const class FString& FilePath);
		void STATIC_DestoryInstance();
		void STATIC_ClearCommunityRedHint(const class FString& URL, const class FString& ReqMethod, const class FString& ExtraHttpParams);
		static UClass* StaticClass();
	};

	/**
	 * Class LLHSDK.LLHSDKCustomerService
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class ULLHSDKCustomerService : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnReceiveNotification;                                   // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7H6J[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		void STATIC_ShowCustomerServicePage(const class FString& ExtInfoStr);
		void STATIC_SetCustomerServiceDebug(bool bIsPspDebug, const class FString& PlayerId, int64_t ServerId);
		void OnReceiveNotification__DelegateSignature(int32_t NotificationType);
		class ULLHSDKCustomerService* STATIC_GetInstance();
		void STATIC_DestoryInstance();
		static UClass* StaticClass();
	};

	/**
	 * Class LLHSDK.LLHSDKDeviceUtils
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class ULLHSDKDeviceUtils : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnGoogleAdID;                                            // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnDeviceScore;                                           // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected

	public:
		void OnGoogleAdID__DelegateSignature(const class FString& GoogleAdID);
		void OnDeviceScore__DelegateSignature(int32_t DeviceScore);
		bool STATIC_IsEmulator();
		class FString STATIC_GetTotalRAM();
		class FString STATIC_GetTotalMemorySize();
		class FString STATIC_GetTimezoneName();
		class FString STATIC_GetOSVersion();
		ELLHSDKNetworkType STATIC_GetNetworkTypeEnum();
		class FString STATIC_GetNetworkType();
		class FString STATIC_GetMacAddress();
		class ULLHSDKDeviceUtils* STATIC_GetInstance();
		class FString STATIC_GetIMSI();
		class FString STATIC_GetIDFA();
		void STATIC_GetGoogleAdID();
		TArray<float> STATIC_GetDisplayMetrics();
		TArray<float> STATIC_GetDisplayCutout();
		class FString STATIC_GetDeviceType();
		void STATIC_GetDeviceScore();
		class FString STATIC_GetDeviceModel();
		class FString STATIC_GetDeviceID();
		class FString STATIC_GetDeviceCarrier();
		class FString STATIC_GetDeviceBrand();
		class FString STATIC_GetDeviceAbi();
		class FString STATIC_GetCPUModel();
		class FString STATIC_GetCPUHardWareName();
		class FString STATIC_GetAvailableRAM();
		class FString STATIC_GetAndroidID();
		void STATIC_DestoryInstance();
		static UClass* StaticClass();
	};

	/**
	 * Class LLHSDK.LLHSDKLocalization
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULLHSDKLocalization : public UObject
	{
	public:
		void STATIC_SetLocaleName(const class FString& InLocale);
		void STATIC_SetLocale(ELLHSDKSupportedLanguage InLocale);
		class FString STATIC_GetLocaleName();
		struct FLLHSDKLocaleInfo STATIC_GetLocaleInfo();
		ELLHSDKSupportedLanguage STATIC_GetLocaleEnum();
		class ULLHSDKLocalization* STATIC_GetInstance();
		void STATIC_DestoryInstance();
		static UClass* StaticClass();
	};

	/**
	 * Class LLHSDK.LLHSDKLogin
	 * Size -> 0x01A0 (FullSize[0x01C8] - InheritedSize[0x0028])
	 */
	class ULLHSDKLogin : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnInitFinish;                                            // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLoginFinish;                                           // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLoginFailed;                                           // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnBindFinish;                                            // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSwitchAccountFinish;                                   // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSwitchAccountFailed;                                   // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnProtocolClick;                                         // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnLimSteamSDKInited;                                     // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamAutoLogin;                                        // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamRegister;                                         // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetSteamRegisterUrl;                                   // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetThirdPartyLoginResult;                              // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamBindUrlGet;                                       // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamLoginResultSet;                                   // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamGetAccountInfo;                                   // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSteamBindFinish;                                       // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLimPCSDKInited;                                        // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLimPCSDKEventCallback;                                 // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLimPCSDKLogin;                                         // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLimPCSDKLogout;                                        // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLimPCSDKOpenAccountPage;                               // 0x0168(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLimPCSDKOpenSwitchAccountPage;                         // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLimPCSDKLanguageChange;                                // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLimPCSDKGetUserInfo;                                   // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLimPCSDKCommonReportPoint;                             // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              LimPCAlilogFields;                                       // 0x01B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void STATIC_UpdateSteamCallBack();
		void STATIC_SwitchOrLinkAccount();
		bool STATIC_SteamRegister(const class FString& Params);
		bool STATIC_SteamLoginResultSet(const class FString& Params);
		bool STATIC_SteamGetAccountInfo(const class FString& Params);
		void STATIC_SteamFree();
		bool STATIC_SteamBindUrlGet(const class FString& Params);
		bool STATIC_SteamAutoLogin(const class FString& Params);
		void STATIC_ShowProtocolViewV2Ok();
		void STATIC_ShowProtocolViewV2Confirm();
		int32_t STATIC_SetLimPCSDKLogHandler();
		int32_t STATIC_SetLimPCSDKEventHandler();
		void STATIC_SetLimPCAlilogFieldsData(const class FString& LimPCAlilogFieldsStr);
		struct FLLHSDKLoginUserInfo STATIC_QueryCurrentUserInfo();
		struct FLLHSDKLoginUser STATIC_QueryCurrentUser();
		bool STATIC_OpenSteamBindPage(const class FString& URL);
		int32_t STATIC_OpenLIMPCSwitchAccPage();
		int32_t STATIC_OpenLIMPCAccountPage(const class FString& Params);
		void OnProtocolClick__DelegateSignature(bool bConfirmed);
		void OnLoginFinish__DelegateSignature(const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType);
		void OnLoginFailed__DelegateSignature(ELLHSDKLoginType LoginType, int32_t ErrorCode);
		void OnInitFinish__DelegateSignature();
		void OnBindFinish__DelegateSignature(bool bSuccess, const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType);
		int32_t STATIC_LogoutLimPCSDK();
		void STATIC_Logout();
		class FString STATIC_LoginUserInfo_ToString(const struct FLLHSDKLoginUserInfo& InUserInfo);
		class FString STATIC_LoginUser_ToString(const struct FLLHSDKLoginUser& InUser);
		int32_t STATIC_LoginLimPCSDK(const class FString& Params);
		void STATIC_Login();
		void LimSteamSDKCallBack__DelegateSignature(const class FString& Datas);
		void LimPCSDKCallBack__DelegateSignature(const class FString& Datas);
		void LimOnSteamLoginResultSet__DelegateSignature(const class FString& AppUid, const class FString& AppToken, const class FString& AppId);
		bool STATIC_IsInitFinish();
		bool STATIC_IsCurrentUserNewReg();
		bool STATIC_InitLimSteamSDK(const class FString& Params);
		int32_t STATIC_InitLimPCSDK(const class FString& Params);
		class FString STATIC_GetSteamToken();
		bool STATIC_GetSteamRegisterUrl(const class FString& Params);
		int32_t STATIC_GetLimPCUserInfo(const class FString& Params);
		class FString STATIC_GetLimPCAlilogFieldsData();
		int32_t STATIC_GetLimPCAlilogFields();
		class ULLHSDKLogin* STATIC_GetInstance();
		void STATIC_FreeLimPCSDK();
		bool STATIC_DoSteamBind(const class FString& URL);
		void STATIC_DestoryInstance();
		void STATIC_DAPLogAdd(const class FString& Params);
		int32_t STATIC_CommonReportLimPCPoint(const class FString& Params);
		bool STATIC_ClearAutoLogin();
		int32_t STATIC_ChangeLIMPCLanguage(const class FString& Params);
		bool STATIC_CanContinueLogin();
		void STATIC_CancelSteamCallBack();
		static UClass* StaticClass();
	};

	/**
	 * Class LLHSDK.LLHSDKMisc
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	class ULLHSDKMisc : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnBrowserClosed;                                         // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnScreenshotCaptured;                                    // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V0QJ[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFacebookPhotoShared;                                   // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_53HU[0x8];                                   // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSystemShared;                                          // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GAR2[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGetFacebookToken;                                      // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LNDR[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnQueryThirdPartyUserInfo;                               // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WUB6[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRefreshFirebaseToken;                                  // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JRTQ[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHttpDiagnosisCallBack;                                 // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPingDiagnosisCallBack;                                 // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTcpPingDiagnosisCallBack;                              // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMtrDiagnosisCallBack;                                  // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDnsDiagnosisCallBack;                                  // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLimPCOpenWebview;                                      // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLimPCCloseWebview;                                     // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void STATIC_UpdateNetworkExtensions(const class FString& InUserId, const class FString& InDeviceID);
		void STATIC_TwitterShareText(const class FString& InText);
		void STATIC_TwitterSharePhoto(const class FString& InText, const class FString& InFilePath);
		void STATIC_TryToEnableAndroidNotification();
		void STATIC_TcpPingDetect(const class FString& InDomain, int32_t Port);
		void STATIC_SystemShare(int32_t ShareType, const class FString& Description, const class FString& FilePath);
		void STATIC_StartIOSFarlightBrowserWithOrientation(const class FString& URL, const class FString& Title, ELLHSDKScreenOrientation Orientation);
		void STATIC_StartBrowserWithOrientation(const class FString& URL, const class FString& Title, ELLHSDKScreenOrientation Orientation);
		void STATIC_StartBrowser(const class FString& URL, const class FString& Title);
		void STATIC_SetNetworkPolicyDomain(const class FString& InDomain);
		void STATIC_SetNetworkMultipleDetect(bool InEnable);
		void STATIC_SetNetworkDiagnosisDeviceID(const class FString& InDeviceID);
		void STATIC_RestartApplication(const class FString& IntentString);
		void STATIC_RefreshFirebaseMessagingToken();
		void STATIC_RefreshAndroidMediaScanner(const class FString& InFullFilePath);
		void STATIC_QueryThirdPartUserInfo();
		void STATIC_PingDetect(const class FString& InDomain);
		void STATIC_OpenSteamPayWebPage(const class FString& URL);
		void STATIC_OpenLimPCWebPage(const class FString& Params);
		void OnSystemShared__DelegateSignature(bool bSuccess);
		void OnScreenshotCapturedEvent__DelegateSignature(const class FString& FullPath);
		void OnRefreshFirebaseToken__DelegateSignature(const class FString& FirebaseToken);
		void OnQueryThirdPartUserInfo__DelegateSignature(bool Success, int32_t ErrorCode, TArray<struct FSDKSocialUserInfo> SocialUserInfoList);
		void OnLimPCOpenWebview__DelegateSignature(const class FString& Params);
		void OnLimPCCloseWebview__DelegateSignature(const class FString& Params);
		void OnGetFacebookToken__DelegateSignature(bool Result, const class FString& Token, const class FString& ApplicationId, const class FString& UserId, const class FString& GraphDomain);
		void OnFacebookPhotoShared__DelegateSignature(const class FString& FilePath, bool bSuccess);
		void OnBrowserClosed__DelegateSignature();
		void NetworkDiagnosisCallback__DelegateSignature(const class FString& Type, const class FString& Ret);
		void STATIC_MtrDetect(const class FString& InDomain);
		void STATIC_JumpToMarket(const class FString& InAppPkg, const class FString& InMarketPkg);
		void STATIC_JumpToAppStore(const class FString& AppStoreUrl);
		bool STATIC_IsFacebookShareable();
		bool STATIC_IsAppRooted();
		bool STATIC_IsAndroidNotificationEnabled();
		void STATIC_InitNetworkDiagnosis(const class FString& InProject, const class FString& InSecretKey, const class FString& InEndPoint, const class FString& InAccessKeyId, const class FString& InAccessKeySecret, const class FString& InUid, const class FString& InChannel);
		void STATIC_HttpDetect(const class FString& InUrl);
		class FString STATIC_GetNetworkDiagnosisDeviceID();
		class ULLHSDKMisc* STATIC_GetInstance();
		class FString STATIC_GetFirebaseMessagingToken();
		void STATIC_GetFacebookToken();
		void STATIC_FacebookSharePhotoWithFileAndDescription(const class FString& Description, const class FString& FilePath);
		void STATIC_FacebookSharePhotoByPath(const class FString& InFilePath);
		void STATIC_FacebookSharePhoto();
		void STATIC_FacebookShareLink(const class FString& InLinkURL, const class FString& InPreviewURL, const class FString& InTitle, const class FString& InDesc);
		void STATIC_DnsDetect(const class FString& InServer, const class FString& InDomain);
		void STATIC_DestoryInstance();
		void STATIC_CloseLimPCWebPageAll();
		bool STATIC_CheckGyroSensorSupport();
		static UClass* StaticClass();
	};

	/**
	 * Class LLHSDK.LLHSDKPay
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class ULLHSDKPay : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnLSteamQuerySkus;                                       // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLSteamSDKPayApplied;                                   // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLimPCQueryPriceLadder;                                 // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLimPCQueryPriceLadderWithRegion;                       // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLimPCPayApplied;                                       // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGooglePayFinished;                                     // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGoogleQuerySkuItemDetails;                             // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGoogleQuerySkuItemDetailsSubscription;                 // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetGoogleConsumeGoods;                                 // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetGoogleConsumePointsGoods;                           // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnIOSQuerySkus;                                          // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnIOSLLHPayFinished;                                     // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnGetIOSPurchaseExtNull;                                 // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9H39[0x18];                                  // 0x00F8(0x0018) MISSED OFFSET (PADDING)

	public:
		class FString STATIC_Test_Google_SkuItemDetailsToString(const struct FLLHSDKGenericSkuItemsDetailList& InDetails);
		void STATIC_SteamQuerySkus(const class FString& Params);
		void STATIC_Steam_StartPay(const class FString& SteamPayInfo);
		void STATIC_SetPayNotifyUrl(const class FString& InNotifyUrl);
		void OnLLHQuerySkus__DelegateSignature(const struct FLLHSDKGenericSkuItemsDetailList& ItemsDetailList, TArray<class FString> InvalidProductIDs);
		void OnLLHPayFinished__DelegateSignature(bool bSuccess, int32_t ErrorCode, const class FString& ErrorMsg, int32_t PayValue, const class FString& ProductID, ELLHSDKPayType PayType);
		void OnGoogleQuerySkuSubItemDetails__DelegateSignature(bool bSuccess, int32_t ErrorCode, const class FString& ItemsDetailListJsonString);
		void OnGoogleQuerySkuItemDetails__DelegateSignature(bool bSuccess, int32_t ErrorCode, const class FString& ItemsDetailListJsonString);
		void OnGooglePayFinished__DelegateSignature(bool bSuccess, int32_t ErrorCode, int32_t Price, const class FString& ItemID, ELLHSDKPayType PayType);
		void OnGetIOSPurchaseExtNull__DelegateSignature(const class FString& AppUid, const class FString& ProductID);
		void OnGetGoogleConsumeGoods__DelegateSignature(TArray<class FString> Skus);
		void LSteamSDKQuerySkus__DelegateSignature(const class FString& Datas);
		void LSteamSDKPayApplied__DelegateSignature(const class FString& Datas);
		void STATIC_LimPCStartPay(const class FString& Params);
		void LimPCSDKQueryPriceLadder__DelegateSignature(const class FString& Datas);
		void LimPCSDKPayApplied__DelegateSignature(const class FString& Datas);
		void STATIC_LimPCQueryPriceLadderWithRegion(const class FString& Params);
		void STATIC_LimPCQueryPriceLadder();
		void STATIC_IOS_SetUserPayExtInCallback(const class FString& ProductID, const class FString& PayExt);
		void STATIC_IOS_SetUserPayExt(const class FString& PayExt);
		void STATIC_IOS_SetAutoPayExt(bool bEnabled);
		void STATIC_IOS_QuerySkus(TArray<class FString> ProductIDs);
		void STATIC_IOS_LLHPay(const class FString& ProductID, const class FString& PayExt);
		bool STATIC_IOS_GetAutoPayExt();
		void STATIC_Google_StartPaySubscription(const class FString& PayItemID, const class FString& PayContext);
		void STATIC_Google_StartPay(const class FString& PayItemID, const class FString& PayContext);
		void STATIC_Google_QuerySkuItemDetailsSubscription(TArray<class FString> Items);
		void STATIC_Google_QuerySkuItemDetails(TArray<class FString> Items);
		bool STATIC_Google_HasConsumePointsGoods();
		bool STATIC_Google_HasConsumeGoods();
		TArray<class FString> STATIC_Google_GetConsumePointsGoods();
		TArray<class FString> STATIC_Google_GetConsumeGoods();
		void STATIC_Google_ConsumeGoods(TArray<class FString> Skus, TArray<class FString> Contexts);
		class ULLHSDKPay* STATIC_GetInstance();
		void STATIC_DestoryInstance();
		static UClass* StaticClass();
	};

	/**
	 * Class LLHSDK.LLHSDKReport
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULLHSDKReport : public UObject
	{
	public:
		bool STATIC_ReportToThirdParty_TwoParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2);
		bool STATIC_ReportToThirdParty_ThreeParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3);
		bool STATIC_ReportToThirdParty_OneParam(const class FString& EventName, const class FString& Parameter);
		bool STATIC_ReportToThirdParty_FourParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4);
		bool STATIC_ReportToThirdParty_FiveParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4, const class FString& Parameter5);
		bool STATIC_ReportToThirdParty(const class FString& EventName);
		bool STATIC_ReportRevenueToThirdParty_TwoParams(const class FString& EventName, ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2);
		bool STATIC_ReportRevenueToThirdParty_ThreeParams(const class FString& EventName, ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3);
		bool STATIC_ReportRevenueToThirdParty_OneParam(const class FString& EventName, ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter);
		bool STATIC_ReportRevenueToThirdParty_FourParams(const class FString& EventName, ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4);
		bool STATIC_ReportRevenueToThirdParty_FiveParams(const class FString& EventName, ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4, const class FString& Parameter5);
		bool STATIC_ReportRevenueToThirdParty(const class FString& EventName, ELLHSDKReportCurrencyType Currency, const class FString& Revenue);
		bool STATIC_ReportJsonToLilithImmediate(const class FString& EventName, const class FString& JsonContentStr);
		class ULLHSDKReport* STATIC_GetInstance();
		void STATIC_DestoryInstance();
		static UClass* StaticClass();
	};

	/**
	 * Class LLHSDK.LLHSDKSettings
	 * Size -> 0x0268 (FullSize[0x02A0] - InheritedSize[0x0038])
	 */
	class ULLHSDKSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bHasFacebook;                                            // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasTiktok;                                              // 0x0039(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasFirebaseMessaging;                                   // 0x003A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSDKDebuggable;                                        // 0x003B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsGrayRelease;                                          // 0x003C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DYXX[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FacebookContentProviderForGrayRelease;                   // 0x0040(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FacebookAppIDForGrayRelease;                             // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SDKAppIdForGrayRelease;                                  // 0x0060(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SDKGameIdForGrayRelease;                                 // 0x0070(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PspAppIdForGrayRelease;                                  // 0x0080(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AndroidDebugParkwayEnvIdForGrayRelease;                  // 0x0090(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AndroidReleaseParkwayEnvIdForGrayRelease;                // 0x00A0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FacebookContentProvider;                                 // 0x00B0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FacebookAppID;                                           // 0x00C0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IOSFacebookContentProvider;                              // 0x00D0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IOSFacebookAppID;                                        // 0x00E0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SDKAppId;                                                // 0x00F0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SDKGameId;                                               // 0x0100(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PspAppId;                                                // 0x0110(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AndroidDebugParkwayEnvId;                                // 0x0120(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AndroidReleaseParkwayEnvId;                              // 0x0130(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IOSDebugParkwayEnvId;                                    // 0x0140(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IOSReleaseParkwayEnvId;                                  // 0x0150(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SteamDebugParkwayEnvId;                                  // 0x0160(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SteamReleaseParkwayEnvId;                                // 0x0170(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OffcialWinDebugParkwayEnvId;                             // 0x0180(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OffcialWinReleaseParkwayEnvId;                           // 0x0190(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EpicDebugParkwayEnvId;                                   // 0x01A0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EpicReleaseParkwayEnvId;                                 // 0x01B0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SDKGroupName;                                            // 0x01C0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SDKFeatureName;                                          // 0x01D0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SDKVersion;                                              // 0x01E0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAndroidXEnabled;                                        // 0x01F0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMultiDexEnabled;                                        // 0x01F1(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldUseOverridedConfig;                               // 0x01F2(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3SIR[0x5];                                   // 0x01F3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FirebaseCoreVersion;                                     // 0x01F8(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FirebaseMessagingVersion;                                // 0x0208(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GoogleServicesVersion;                                   // 0x0218(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayServicesBasementVersion;                             // 0x0228(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELLHSDKGravity                                             PlayPhoneGravity;                                        // 0x0238(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableAndroidScreenshotListener;                        // 0x0239(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableAndroidMultipleDetect;                            // 0x023A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowLogo;                                               // 0x023B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELLHSDKLoginUIStyle                                        LoginUIStyle;                                            // 0x023C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIOSShouldUseOverridedConfig;                            // 0x023D(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIOSShowTermsByServer;                                   // 0x023E(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1NE[0x1];                                   // 0x023F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FacebookDisplayName;                                     // 0x0240(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QQAppID;                                                 // 0x0250(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WechatAppID;                                             // 0x0260(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GoogleReversedClientID;                                  // 0x0270(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TwitterAPIKey;                                           // 0x0280(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultNSUserTrackingUsageDescription;                   // 0x0290(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

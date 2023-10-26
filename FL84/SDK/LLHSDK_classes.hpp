#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class LLHSDK.LLHSDKAppUtils
class ULLHSDKAppUtils : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSteamUserStatesUpdate;                           // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULLHSDKAppUtils* GetDefaultObj();

	bool ShowSteamVirtualKeyboard();
	bool SDKConfigIsMultiDetect();
	bool SDKConfigIsDebug();
	void OnSteamUserStatesUpdate__DelegateSignature(const class FString& SteamId, bool IsFriend, bool Online, const class FString& FriendName);
	bool IsSteamFriendOnline(const class FString& SteamId);
	bool IsSimulator();
	bool IsPlatformSteamDeck();
	bool IsPackageInstalled(const class FString& InPackageName);
	bool IsGrayRelease();
	bool InviteSteamUserToGame(const class FString& SteamId);
	class FString GetVersionName();
	class FString GetVersionCode();
	TArray<bool> GetSteamFriendsOnlineList();
	TArray<class FString> GetSteamFriendsNameList();
	class FString GetSteamFriendName(const class FString& SteamId);
	TArray<class FString> GetSteamFriendIDList();
	int32 GetSteamFriendCount();
	class FString GetSDKVersionName();
	class FString GetSDKVersionCode();
	class FString GetRunningProcessName();
	class FString GetOperatingSystemId();
	class ULLHSDKAppUtils* GetInstance();
	int64 GetGameTime();
	class FString GetGameID();
	class FString GetEnvId();
	class FString GetDeviceUUID();
	class FString GetChannelID();
	class FString GetBiosUUID();
	class FString GetAppName();
	class FString GetAppIDRaw();
	class FString GetAppID();
	bool DoesDistributeForDomestic();
	void DismissSteamVirtualKeyboard();
	void DestoryInstance();
	void BindOnlineSubsystemSteamPresence();
};

// 0x50 (0x78 - 0x28)
// Class LLHSDK.LLHSDKCommunity
class ULLHSDKCommunity : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnInitCommunity;                                   // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnExitCommunity;                                   // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetCommunityRedhint;                             // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnClearCommunityRedhint;                           // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnImageDownload;                                   // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULLHSDKCommunity* GetDefaultObj();

	void OnInitCommunity__DelegateSignature(const class FString& ResultStr);
	void OnImageDownload__DelegateSignature(bool bSuccess);
	void OnGetCommunityRedhint__DelegateSignature(const class FString& ResultStr);
	void OnExitCommunity__DelegateSignature(const class FString& ResultStr);
	void OnClearCommunityRedhint__DelegateSignature(const class FString& ResultStr);
	void InitCommunityConfig(const class FString& UrlInfo, const class FString& ReqMethod, const class FString& ExtraHttpParams);
	class ULLHSDKCommunity* GetInstance();
	void GetCommunityRedHint(const class FString& URL, const class FString& ReqMethod, const class FString& ExtraHttpParams);
	void ExitCommunity(const class FString& URL, const class FString& ReqMethod, const class FString& ExtraHttpParams);
	void DownloadImage(const class FString& URL, const class FString& FilePath);
	void DestoryInstance();
	void ClearCommunityRedHint(const class FString& URL, const class FString& ReqMethod, const class FString& ExtraHttpParams);
};

// 0x18 (0x40 - 0x28)
// Class LLHSDK.LLHSDKCustomerService
class ULLHSDKCustomerService : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnReceiveNotification;                             // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_905[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULLHSDKCustomerService* GetDefaultObj();

	void ShowCustomerServicePage(const class FString& ExtInfoStr);
	void SetCustomerServiceDebug(bool& bIsPspDebug, const class FString& PlayerId, int64 ServerId);
	void OnReceiveNotification__DelegateSignature(int32 NotificationType);
	class ULLHSDKCustomerService* GetInstance();
	void DestoryInstance();
};

// 0x20 (0x48 - 0x28)
// Class LLHSDK.LLHSDKDeviceUtils
class ULLHSDKDeviceUtils : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnGoogleAdID;                                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnDeviceScore;                                     // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ULLHSDKDeviceUtils* GetDefaultObj();

	void OnGoogleAdID__DelegateSignature(const class FString& GoogleAdID);
	void OnDeviceScore__DelegateSignature(int32 DeviceScore);
	bool IsEmulator();
	class FString GetTotalRAM();
	class FString GetTotalMemorySize();
	class FString GetTimezoneName();
	class FString GetOSVersion();
	enum class ELLHSDKNetworkType GetNetworkTypeEnum();
	class FString GetNetworkType();
	class FString GetMacAddress();
	class ULLHSDKDeviceUtils* GetInstance();
	class FString GetIMSI();
	class FString GetIDFA();
	void GetGoogleAdID();
	TArray<float> GetDisplayMetrics();
	TArray<float> GetDisplayCutout();
	class FString GetDeviceType();
	void GetDeviceScore();
	class FString GetDeviceModel();
	class FString GetDeviceID();
	class FString GetDeviceCarrier();
	class FString GetDeviceBrand();
	class FString GetDeviceAbi();
	class FString GetCPUModel();
	class FString GetCPUHardWareName();
	class FString GetAvailableRAM();
	class FString GetAndroidID();
	void DestoryInstance();
};

// 0x0 (0x28 - 0x28)
// Class LLHSDK.LLHSDKLocalization
class ULLHSDKLocalization : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULLHSDKLocalization* GetDefaultObj();

	void SetLocaleName(const class FString& InLocale);
	void SetLocale(enum class ELLHSDKSupportedLanguage InLocale);
	class FString GetLocaleName();
	struct FLLHSDKLocaleInfo GetLocaleInfo();
	enum class ELLHSDKSupportedLanguage GetLocaleEnum();
	class ULLHSDKLocalization* GetInstance();
	void DestoryInstance();
};

// 0x1D0 (0x1F8 - 0x28)
// Class LLHSDK.LLHSDKLogin
class ULLHSDKLogin : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnInitFinish;                                      // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoginFinish;                                     // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoginFailed;                                     // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnBindFinish;                                      // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSwitchAccountFinish;                             // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnSwitchAccountFailed;                             // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnProtocolClick;                                   // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnLimSteamSDKInited;                               // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSteamAutoLogin;                                  // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSteamRegister;                                   // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetSteamRegisterUrl;                             // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGetThirdPartyLoginResult;                        // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSteamBindUrlGet;                                 // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSteamLoginResultSet;                             // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSteamGetAccountInfo;                             // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSteamBindFinish;                                 // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNSSDKInited;                                     // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNSLoginStart;                                    // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNSAccountInfoGet;                                // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLimPCSDKInited;                                  // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLimPCSDKEventCallback;                           // 0x168(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLimPCSDKLogin;                                   // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLimPCSDKLogout;                                  // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLimPCSDKOpenAccountPage;                         // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLimPCSDKOpenSwitchAccountPage;                   // 0x1A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLimPCSDKLanguageChange;                          // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLimPCSDKGetUserInfo;                             // 0x1C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLimPCSDKCommonReportPoint;                       // 0x1D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                LimPCAlilogFields;                                 // 0x1E8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULLHSDKLogin* GetDefaultObj();

	void UpdateSteamCallBack();
	void SwitchOrLinkAccount();
	bool SteamRegister(const class FString& Params);
	bool SteamLoginResultSet(const class FString& Params);
	bool SteamGetAccountInfo(const class FString& Params);
	void SteamFree();
	bool SteamBindUrlGet(const class FString& Params);
	bool SteamAutoLogin(const class FString& Params);
	void ShowProtocolViewV2Ok();
	void ShowProtocolViewV2Confirm();
	int32 SetLimPCSDKLogHandler();
	int32 SetLimPCSDKEventHandler();
	void SetLimPCAlilogFieldsData(const class FString& LimPCAlilogFieldsStr);
	struct FLLHSDKLoginUserInfo QueryCurrentUserInfo();
	struct FLLHSDKLoginUser QueryCurrentUser();
	bool OpenSteamBindPage(const class FString& URL);
	int32 OpenLIMPCSwitchAccPage();
	int32 OpenLIMPCAccountPage(const class FString& Params);
	void OnProtocolClick__DelegateSignature(bool bConfirmed);
	void OnLoginFinish__DelegateSignature(const class FString& AppUid, const class FString& AppToken, enum class ELLHSDKLoginType LoginType);
	void OnLoginFailed__DelegateSignature(enum class ELLHSDKLoginType LoginType, int32 ErrorCode);
	void OnInitFinish__DelegateSignature();
	void OnBindFinish__DelegateSignature(bool bSuccess, const class FString& AppUid, const class FString& AppToken, enum class ELLHSDKLoginType LoginType);
	void NSLogout();
	bool NSLoginStart(const class FString& Params);
	void NSFinalize();
	bool NSAccountInfoGet(const class FString& Params);
	int32 LogoutLimPCSDK();
	void Logout();
	class FString LoginUserInfo_ToString(struct FLLHSDKLoginUserInfo& InUserInfo);
	class FString LoginUser_ToString(struct FLLHSDKLoginUser& InUser);
	int32 LoginLimPCSDK(const class FString& Params);
	void Login();
	void LimSteamSDKCallBack__DelegateSignature(const class FString& Datas);
	void LimPCSDKCallBack__DelegateSignature(const class FString& Datas);
	void LimOnSteamLoginResultSet__DelegateSignature(const class FString& AppUid, const class FString& AppToken, const class FString& AppId);
	bool IsInitFinish();
	bool IsCurrentUserNewReg();
	bool InitNSSDK(const class FString& Params);
	bool InitLimSteamSDK(const class FString& Params);
	int32 InitLimPCSDK(const class FString& Params);
	class FString GetSteamToken();
	bool GetSteamRegisterUrl(const class FString& Params);
	int32 GetLimPCUserInfo(const class FString& Params);
	class FString GetLimPCAlilogFieldsData();
	int32 GetLimPCAlilogFields();
	class ULLHSDKLogin* GetInstance();
	void FreeLimPCSDK();
	bool DoSteamBind(const class FString& URL);
	void DestoryInstance();
	void DAPLogAdd(const class FString& Params);
	int32 CommonReportLimPCPoint(const class FString& Params);
	bool ClearAutoLogin();
	int32 ChangeLIMPCLanguage(const class FString& Params);
	bool CanContinueLogin();
	void CancelSteamCallBack();
};

// 0x120 (0x148 - 0x28)
// Class LLHSDK.LLHSDKMisc
class ULLHSDKMisc : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnBrowserClosed;                                   // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnScreenshotCaptured;                              // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_98B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnFacebookPhotoShared;                             // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_98C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSystemShared;                                    // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_98D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnGetFacebookToken;                                // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_98E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnQueryThirdPartyUserInfo;                         // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_990[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRefreshFirebaseToken;                            // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_991[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHttpDiagnosisCallBack;                           // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPingDiagnosisCallBack;                           // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTcpPingDiagnosisCallBack;                        // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMtrDiagnosisCallBack;                            // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDnsDiagnosisCallBack;                            // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLimPCOpenWebview;                                // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLimPCCloseWebview;                               // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPickFileFromAlbumCallBack;                       // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULLHSDKMisc* GetDefaultObj();

	void UpdateNetworkExtensions(const class FString& InUserId, const class FString& InDeviceID);
	void TwitterShareText(const class FString& InText);
	void TwitterSharePhoto(const class FString& InText, const class FString& InFilePath);
	void TryToEnableAndroidNotification();
	void TcpPingDetect(const class FString& InDomain, int32 Port);
	void SystemShare(int32& ShareType, const class FString& Description, const class FString& FilePath);
	void StartIOSFarlightBrowserWithOrientation(const class FString& URL, const class FString& Title, enum class ELLHSDKScreenOrientation Orientation);
	void StartBrowserWithOrientation(const class FString& URL, const class FString& Title, enum class ELLHSDKScreenOrientation Orientation);
	void StartBrowser(const class FString& URL, const class FString& Title);
	void SetNetworkPolicyDomain(const class FString& InDomain);
	void SetNetworkMultipleDetect(bool InEnable);
	void SetNetworkDiagnosisDeviceID(const class FString& InDeviceID);
	void RestartApplication(const class FString& IntentString);
	void RefreshFirebaseMessagingToken();
	void RefreshAndroidMediaScanner(const class FString& InFullFilePath);
	void QueryThirdPartUserInfo();
	void PingDetect(const class FString& InDomain);
	void PickFileFromAlbum();
	void OpenSteamPayWebPage(const class FString& URL);
	void OpenLimPCWebPage(const class FString& Params);
	void OnSystemShared__DelegateSignature(bool bSuccess);
	void OnScreenshotCapturedEvent__DelegateSignature(const class FString& FullPath);
	void OnRefreshFirebaseToken__DelegateSignature(const class FString& FirebaseToken);
	void OnQueryThirdPartUserInfo__DelegateSignature(bool Success, int32 ErrorCode, const TArray<struct FSDKSocialUserInfo>& SocialUserInfoList);
	void OnPickFileFromAlbumFinishEvent__DelegateSignature(const class FString& PickFilePath, int32 ErrorCode);
	void OnLimPCOpenWebview__DelegateSignature(const class FString& Params);
	void OnLimPCCloseWebview__DelegateSignature(const class FString& Params);
	void OnGetFacebookToken__DelegateSignature(bool Result, const class FString& Token, const class FString& ApplicationId, const class FString& UserId, const class FString& GraphDomain);
	void OnFacebookPhotoShared__DelegateSignature(const class FString& FilePath, bool bSuccess);
	void OnBrowserClosed__DelegateSignature();
	void NetworkDiagnosisCallback__DelegateSignature(const class FString& Type, const class FString& Ret);
	void MtrDetect(const class FString& InDomain);
	void JumpToMarket(const class FString& InAppPkg, const class FString& InMarketPkg);
	void JumpToAppStore(const class FString& AppStoreUrl);
	bool IsFacebookShareable();
	bool IsAppRooted();
	bool IsAndroidNotificationEnabled();
	void InitNetworkDiagnosis(const class FString& InProject, const class FString& InSecretKey, const class FString& InEndPoint, const class FString& InAccessKeyId, const class FString& InAccessKeySecret, const class FString& InUid, const class FString& InChannel);
	void HttpDetect(const class FString& InUrl);
	class FString GetNetworkDiagnosisDeviceID();
	class ULLHSDKMisc* GetInstance();
	class FString GetFirebaseMessagingToken();
	void GetFacebookToken();
	void FacebookSharePhotoWithFileAndDescription(const class FString& Description, const class FString& FilePath);
	void FacebookSharePhotoByPath(const class FString& InFilePath);
	void FacebookSharePhoto();
	void FacebookShareLink(const class FString& InLinkURL, const class FString& InPreviewURL, const class FString& InTitle, const class FString& InDesc);
	void DnsDetect(const class FString& InServer, const class FString& InDomain);
	void DestoryInstance();
	void CloseLimPCWebPageAll();
	bool CheckGyroSensorSupport();
};

// 0x138 (0x160 - 0x28)
// Class LLHSDK.LLHSDKPay
class ULLHSDKPay : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnLSteamQuerySkus;                                 // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLSteamSDKPayApplied;                             // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLimPCQueryPriceLadder;                           // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLimPCQueryPriceLadderWithRegion;                 // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLimPCPayApplied;                                 // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSwitchSDKPayGetConsumables;                      // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSwitchSDKPayGetConsumableItems;                  // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSwitchSDKPayEShopOpen;                           // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSwitchSDKPayOrdersCheck;                         // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSwitchSDKPayOrdersConsume;                       // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGooglePayFinished;                               // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGoogleQuerySkuItemDetails;                       // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGoogleQuerySkuItemDetailsSubscription;           // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetGoogleConsumeGoods;                           // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetGoogleConsumePointsGoods;                     // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnIOSQuerySkus;                                    // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnIOSLLHPayFinished;                               // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnGetIOSPurchaseExtNull;                           // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_9FF[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULLHSDKPay* GetDefaultObj();

	class FString Test_Google_SkuItemDetailsToString(const struct FLLHSDKGenericSkuItemsDetailList& InDetails);
	void SwitchSDKPayOrdersConsume__DelegateSignature(const class FString& Datas);
	void SwitchSDKPayOrdersCheck__DelegateSignature(const class FString& Datas);
	void SwitchSDKPayGetConsumables__DelegateSignature(const class FString& Datas);
	void SwitchSDKPayGetConsumableItems__DelegateSignature(const class FString& Datas);
	void SwitchSDKPayEShopOpen__DelegateSignature(const class FString& Datas);
	void Switch_OrdersConsume(const class FString& Params);
	void Switch_OrdersCheck(const class FString& Params);
	void Switch_GetConsumables(const class FString& Params);
	void Switch_GetConsumableItems(const class FString& Params);
	void Switch_EShopOpen(const class FString& Params);
	void SteamQuerySkus(const class FString& Params);
	void Steam_StartPay(const class FString& SteamPayInfo);
	void SetPayNotifyUrl(const class FString& InNotifyUrl);
	void OnLLHQuerySkus__DelegateSignature(const struct FLLHSDKGenericSkuItemsDetailList& ItemsDetailList, TArray<class FString>& InvalidProductIDs);
	void OnLLHPayFinished__DelegateSignature(bool bSuccess, int32 ErrorCode, const class FString& ErrorMsg, int32 PayValue, const class FString& ProductID, enum class ELLHSDKPayType PayType);
	void OnGoogleQuerySkuSubItemDetails__DelegateSignature(bool bSuccess, int32 ErrorCode, const class FString& ItemsDetailListJsonString);
	void OnGoogleQuerySkuItemDetails__DelegateSignature(bool bSuccess, int32 ErrorCode, const class FString& ItemsDetailListJsonString);
	void OnGooglePayFinished__DelegateSignature(bool bSuccess, int32 ErrorCode, int32 Price, const class FString& ItemID, enum class ELLHSDKPayType PayType);
	void OnGetIOSPurchaseExtNull__DelegateSignature(const class FString& AppUid, const class FString& ProductID);
	void OnGetGoogleConsumeGoods__DelegateSignature(TArray<class FString>& Skus);
	void LSteamSDKQuerySkus__DelegateSignature(const class FString& Datas);
	void LSteamSDKPayApplied__DelegateSignature(const class FString& Datas);
	void LimPCStartPay(const class FString& Params);
	void LimPCSDKQueryPriceLadder__DelegateSignature(const class FString& Datas);
	void LimPCSDKPayApplied__DelegateSignature(const class FString& Datas);
	void LimPCQueryPriceLadderWithRegion(const class FString& Params);
	void LimPCQueryPriceLadder();
	void IOS_SetUserPayExtInCallback(const class FString& ProductID, const class FString& PayExt);
	void IOS_SetUserPayExt(const class FString& PayExt);
	void IOS_SetAutoPayExt(bool bEnabled);
	void IOS_QuerySkus(TArray<class FString>& ProductIDs);
	void IOS_LLHPay(const class FString& ProductID, const class FString& PayExt);
	bool IOS_GetAutoPayExt();
	void Google_StartPaySubscription(const class FString& PayItemID, const class FString& PayContext);
	void Google_StartPay(const class FString& PayItemID, const class FString& PayContext);
	void Google_QuerySkuItemDetailsSubscription(const TArray<class FString>& Items);
	void Google_QuerySkuItemDetails(const TArray<class FString>& Items);
	bool Google_HasConsumePointsGoods();
	bool Google_HasConsumeGoods();
	TArray<class FString> Google_GetConsumePointsGoods();
	TArray<class FString> Google_GetConsumeGoods();
	void Google_ConsumeGoods(const TArray<class FString>& Skus, const TArray<class FString>& Contexts);
	class ULLHSDKPay* GetInstance();
	void DestoryInstance();
};

// 0x0 (0x28 - 0x28)
// Class LLHSDK.LLHSDKReport
class ULLHSDKReport : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULLHSDKReport* GetDefaultObj();

	bool ReportToThirdParty_TwoParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2);
	bool ReportToThirdParty_ThreeParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3);
	bool ReportToThirdParty_OneParam(const class FString& EventName, const class FString& Parameter);
	bool ReportToThirdParty_FourParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4);
	bool ReportToThirdParty_FiveParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4, const class FString& Parameter5);
	bool ReportToThirdParty(const class FString& EventName);
	bool ReportRevenueToThirdParty_TwoParams(const class FString& EventName, enum class ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2);
	bool ReportRevenueToThirdParty_ThreeParams(const class FString& EventName, enum class ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3);
	bool ReportRevenueToThirdParty_OneParam(const class FString& EventName, enum class ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter);
	bool ReportRevenueToThirdParty_FourParams(const class FString& EventName, enum class ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4);
	bool ReportRevenueToThirdParty_FiveParams(const class FString& EventName, enum class ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4, const class FString& Parameter5);
	bool ReportRevenueToThirdParty(const class FString& EventName, enum class ELLHSDKReportCurrencyType Currency, const class FString& Revenue);
	bool ReportJsonToLilithImmediate(const class FString& EventName, const class FString& JsonContentStr);
	class ULLHSDKReport* GetInstance();
	void DestoryInstance();
};

// 0x300 (0x338 - 0x38)
// Class LLHSDK.LLHSDKSettings
class ULLHSDKSettings : public UDeveloperSettings
{
public:
	enum class EDistributionRegion               DistributionRegion;                                // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EReleaseType                      ReleaseType;                                       // 0x39(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSDKDebuggable;                                  // 0x3A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGrayRelease;                                    // 0x3B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A31[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SDKGroupName;                                      // 0x40(0x10)(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SDKFeatureName;                                    // 0x50(0x10)(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SDKVersion;                                        // 0x60(0x10)(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasFacebook;                                      // 0x70(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasTiktok;                                        // 0x71(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasFirebaseMessaging;                             // 0x72(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasJiGuangPush;                                   // 0x73(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A32[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SDKAppIdForGrayRelease;                            // 0x78(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SDKGameIdForGrayRelease;                           // 0x88(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PspAppIdForGrayRelease;                            // 0x98(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AndroidDebugParkwayEnvIdForGrayRelease;            // 0xA8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AndroidReleaseParkwayEnvIdForGrayRelease;          // 0xB8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FacebookAppIDForGrayRelease;                       // 0xC8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FacebookContentProviderForGrayRelease;             // 0xD8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SDKAppId;                                          // 0xE8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SDKGameId;                                         // 0xF8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FacebookContentProvider;                           // 0x108(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FacebookAppID;                                     // 0x118(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IOSFacebookContentProvider;                        // 0x128(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IOSFacebookAppID;                                  // 0x138(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PspAppId;                                          // 0x148(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AndroidDebugParkwayEnvId;                          // 0x158(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AndroidReleaseParkwayEnvId;                        // 0x168(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IOSDebugParkwayEnvId;                              // 0x178(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IOSReleaseParkwayEnvId;                            // 0x188(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SteamDebugParkwayEnvId;                            // 0x198(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SteamReleaseParkwayEnvId;                          // 0x1A8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OffcialWinDebugParkwayEnvId;                       // 0x1B8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OffcialWinReleaseParkwayEnvId;                     // 0x1C8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EpicDebugParkwayEnvId;                             // 0x1D8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EpicReleaseParkwayEnvId;                           // 0x1E8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SDKAppIdForDomesticRelease;                        // 0x1F8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SDKGameIdForDomesticRelease;                       // 0x208(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AndroidDebugParkwayEnvIdForDomesticRelease;        // 0x218(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AndroidReleaseParkwayEnvIdForDomesticRelease;      // 0x228(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IOSDebugParkwayEnvIdForDomesticRelease;            // 0x238(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IOSReleaseParkwayEnvIdForDomesticRelease;          // 0x248(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PspAppIdForDomesticRelease;                        // 0x258(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OffcialWinDebugParkwayEnvIdForDomesticRelease;     // 0x268(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OffcialWinReleaseParkwayEnvIdForDomesticRelease;   // 0x278(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAndroidXEnabled;                                  // 0x288(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMultiDexEnabled;                                  // 0x289(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldUseOverridedConfig;                         // 0x28A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A38[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FirebaseCoreVersion;                               // 0x290(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FirebaseMessagingVersion;                          // 0x2A0(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GoogleServicesVersion;                             // 0x2B0(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayServicesBasementVersion;                       // 0x2C0(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELLHSDKGravity                    PlayPhoneGravity;                                  // 0x2D0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAndroidScreenshotListener;                  // 0x2D1(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAndroidMultipleDetect;                      // 0x2D2(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowLogo;                                         // 0x2D3(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELLHSDKLoginUIStyle               LoginUIStyle;                                      // 0x2D4(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIOSShouldUseOverridedConfig;                      // 0x2D5(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIOSShowTermsByServer;                             // 0x2D6(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A39[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FacebookDisplayName;                               // 0x2D8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QQAppID;                                           // 0x2E8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WechatAppID;                                       // 0x2F8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GoogleReversedClientID;                            // 0x308(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TwitterAPIKey;                                     // 0x318(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultNSUserTrackingUsageDescription;             // 0x328(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULLHSDKSettings* GetDefaultObj();

};

}



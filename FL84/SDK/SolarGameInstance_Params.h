#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
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
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnRefreshFirebaseToken_1D76C2E74A6E9E102354B8956338E299
	 */
	struct USolarGameInstance_C_OnRefreshFirebaseToken_1D76C2E74A6E9E102354B8956338E299_Params
	{
	public:
		class FString                                              FirebaseToken;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnClearCommunityRedhint_389466704B7CD40524C72AAF907392B5
	 */
	struct USolarGameInstance_C_OnClearCommunityRedhint_389466704B7CD40524C72AAF907392B5_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnGetCommunityRedhint_828EE10646F0E9DFC7F520BCACBBF57D
	 */
	struct USolarGameInstance_C_OnGetCommunityRedhint_828EE10646F0E9DFC7F520BCACBBF57D_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnExitCommunity_6FD63F61420AAB5315E2B59ECA3A6368
	 */
	struct USolarGameInstance_C_OnExitCommunity_6FD63F61420AAB5315E2B59ECA3A6368_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnInitCommunity_204F062E4EDA3647DF45A5B3C17E7D40
	 */
	struct USolarGameInstance_C_OnInitCommunity_204F062E4EDA3647DF45A5B3C17E7D40_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnQueryThirdPartyUserInfo_21CBC7F7473DE6CF569D3891591FF893
	 */
	struct USolarGameInstance_C_OnQueryThirdPartyUserInfo_21CBC7F7473DE6CF569D3891591FF893_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DX78[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSDKSocialUserInfo>                          SocialUserInfoList;                                      // 0x0008(0x0010)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFailed_076E928B4FDA47E2ECB3E1BDE40E6184
	 */
	struct USolarGameInstance_C_OnSwitchAccountFailed_076E928B4FDA47E2ECB3E1BDE40E6184_Params
	{
	public:
		ELLHSDKLoginType                                           LoginType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WOHK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFinish_59159C34455A594D9382AAB6750ADF91
	 */
	struct USolarGameInstance_C_OnSwitchAccountFinish_59159C34455A594D9382AAB6750ADF91_Params
	{
	public:
		class FString                                              AppUid;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppToken;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKLoginType                                           LoginType;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnBindFinish_47C653AD4D4A97846E0042BEB2461280
	 */
	struct USolarGameInstance_C_OnBindFinish_47C653AD4D4A97846E0042BEB2461280_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NXTM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AppUid;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppToken;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKLoginType                                           LoginType;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamSDKPayApplied_4E6E1FDC4E96CA4F7AF67BAD5D83A59C
	 */
	struct USolarGameInstance_C_OnLSteamSDKPayApplied_4E6E1FDC4E96CA4F7AF67BAD5D83A59C_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamQuerySkus_94BE7DA746184A5073F4ABA5CED8697F
	 */
	struct USolarGameInstance_C_OnLSteamQuerySkus_94BE7DA746184A5073F4ABA5CED8697F_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.LuaStartGameFrameWork
	 */
	struct USolarGameInstance_C_LuaStartGameFrameWork_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.CheckSavedDirFiles
	 */
	struct USolarGameInstance_C_CheckSavedDirFiles_Params
	{
	public:
		TArray<class FString>                                      Files;                                                   // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ExecuteChangeAudioModeLuaCall
	 */
	struct USolarGameInstance_C_ExecuteChangeAudioModeLuaCall_Params
	{
	public:
		bool                                                       bTurnOn;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.OnScopeChanged
	 */
	struct USolarGameInstance_C_OnScopeChanged_Params
	{
	public:
		EScope                                                     InLastScope;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScope                                                     InCurScope;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ShutdownAnoSDK
	 */
	struct USolarGameInstance_C_ShutdownAnoSDK_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.InitLuaClasses
	 */
	struct USolarGameInstance_C_InitLuaClasses_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.SolarGM_LobbyLua
	 */
	struct USolarGameInstance_C_SolarGM_LobbyLua_Params
	{
	public:
		class FString                                              CmdName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      Params;                                                  // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ShutDownLimSdk
	 */
	struct USolarGameInstance_C_ShutDownLimSdk_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ReportLoadingInfoToBI
	 */
	struct USolarGameInstance_C_ReportLoadingInfoToBI_Params
	{
	public:
		TArray<class FString>                                      LoadingInfo;                                             // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LoadingTime;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsFinished;                                             // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.HandleNetworkError
	 */
	struct USolarGameInstance_C_HandleNetworkError_Params
	{
	public:
		ENetworkFailure                                            FailureType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsServer;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.GoHomeLuaCall
	 */
	struct USolarGameInstance_C_GoHomeLuaCall_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.RegisterNetworkManager
	 */
	struct USolarGameInstance_C_RegisterNetworkManager_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.OnDisconnect
	 */
	struct USolarGameInstance_C_OnDisconnect_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.LuaInitGameFrameWork
	 */
	struct USolarGameInstance_C_LuaInitGameFrameWork_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.SolarGM_TransmitGMLua
	 */
	struct USolarGameInstance_C_SolarGM_TransmitGMLua_Params
	{
	public:
		class FString                                              playerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      GmArray;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ShutDownPCSDK
	 */
	struct USolarGameInstance_C_ShutDownPCSDK_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ReceiveShutdown
	 */
	struct USolarGameInstance_C_ReceiveShutdown_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerNameCopy
	 */
	struct USolarGameInstance_C_LuaGetBroadcastPlayerNameCopy_Params
	{
	public:
		class FString                                              SolarPlayerID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              BroadcastPlayerName;                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddWeaponExpLua
	 */
	struct USolarGameInstance_C_SolarGM_AddWeaponExpLua_Params
	{
	public:
		int32_t                                                    weaponid;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    count;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.AsyncDownLoadConfigFile
	 */
	struct USolarGameInstance_C_AsyncDownLoadConfigFile_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              URL;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ExecuteBackKeyLuaCall
	 */
	struct USolarGameInstance_C_ExecuteBackKeyLuaCall_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroNameCopy
	 */
	struct USolarGameInstance_C_LuaGetBroadcastHeroNameCopy_Params
	{
	public:
		class FString                                              SolarPlayerID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              BroadcastPlayerName;                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddItemLua
	 */
	struct USolarGameInstance_C_SolarGM_AddItemLua_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    count;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.LuaOnBroadcastModeChanged
	 */
	struct USolarGameInstance_C_LuaOnBroadcastModeChanged_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerName
	 */
	struct USolarGameInstance_C_LuaGetBroadcastPlayerName_Params
	{
	public:
		class FString                                              SolarPlayerID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              BroadcastPlayerName;                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroName
	 */
	struct USolarGameInstance_C_LuaGetBroadcastHeroName_Params
	{
	public:
		class FString                                              SolarPlayerID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              BroadcastPlayerName;                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestCrashWithBP
	 */
	struct USolarGameInstance_C_SolarGM_TestCrashWithBP_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestEnsureMsgWithBP
	 */
	struct USolarGameInstance_C_SolarGM_TestEnsureMsgWithBP_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ExecuteUbergraph_SolarGameInstance
	 */
	struct USolarGameInstance_C_ExecuteUbergraph_SolarGameInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.OnBroadcastModeChanged__DelegateSignature
	 */
	struct USolarGameInstance_C_OnBroadcastModeChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

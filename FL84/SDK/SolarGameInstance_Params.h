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
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnRefreshFirebaseToken_2BCF16D844EFA36ECFB8EDA15D736B6B
	 */
	struct USolarGameInstance_C_OnRefreshFirebaseToken_2BCF16D844EFA36ECFB8EDA15D736B6B_Params
	{
	public:
		class FString                                              FirebaseToken;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnClearCommunityRedhint_927B8FA04C3C9D964218D7923BFE5791
	 */
	struct USolarGameInstance_C_OnClearCommunityRedhint_927B8FA04C3C9D964218D7923BFE5791_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnGetCommunityRedhint_E87BF1884D47AB515E9ABAA049E358E1
	 */
	struct USolarGameInstance_C_OnGetCommunityRedhint_E87BF1884D47AB515E9ABAA049E358E1_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnExitCommunity_4B55D5AD4FDCA6AD4BF96A8718129B43
	 */
	struct USolarGameInstance_C_OnExitCommunity_4B55D5AD4FDCA6AD4BF96A8718129B43_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnInitCommunity_283AB1AB49AA510537B1B3A4AD46E442
	 */
	struct USolarGameInstance_C_OnInitCommunity_283AB1AB49AA510537B1B3A4AD46E442_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnQueryThirdPartyUserInfo_DA3EEA2B4A173D537F4EBEA37D517875
	 */
	struct USolarGameInstance_C_OnQueryThirdPartyUserInfo_DA3EEA2B4A173D537F4EBEA37D517875_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y6RG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSDKSocialUserInfo>                          SocialUserInfoList;                                      // 0x0008(0x0010)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFailed_496102A84D8083018E91D7AE86F9F3A4
	 */
	struct USolarGameInstance_C_OnSwitchAccountFailed_496102A84D8083018E91D7AE86F9F3A4_Params
	{
	public:
		ELLHSDKLoginType                                           LoginType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1SBS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFinish_3FC7A335420721A8CAA8739CAF101CD1
	 */
	struct USolarGameInstance_C_OnSwitchAccountFinish_3FC7A335420721A8CAA8739CAF101CD1_Params
	{
	public:
		class FString                                              AppUid;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppToken;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKLoginType                                           LoginType;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnBindFinish_D2E90F0249EAAD1C48B2F7B1BABA5BEC
	 */
	struct USolarGameInstance_C_OnBindFinish_D2E90F0249EAAD1C48B2F7B1BABA5BEC_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_21R9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AppUid;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppToken;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKLoginType                                           LoginType;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamSDKPayApplied_8B17E7664740488E76970D97182DD76C
	 */
	struct USolarGameInstance_C_OnLSteamSDKPayApplied_8B17E7664740488E76970D97182DD76C_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamQuerySkus_77BEA62C4B5D75B3D8F160ACEDFD6B3C
	 */
	struct USolarGameInstance_C_OnLSteamQuerySkus_77BEA62C4B5D75B3D8F160ACEDFD6B3C_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function SolarGameInstance.SolarGameInstance_C.ShutDownPCSDK
	 */
	struct USolarGameInstance_C_ShutDownPCSDK_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.LuaStartGameFrameWork
	 */
	struct USolarGameInstance_C_LuaStartGameFrameWork_Params
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
	 * Function SolarGameInstance.SolarGameInstance_C.OnScopeChanged
	 */
	struct USolarGameInstance_C_OnScopeChanged_Params
	{
	public:
		EScope                                                     InLastScope;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScope                                                     InCurScope;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.RegisterNetworkManager
	 */
	struct USolarGameInstance_C_RegisterNetworkManager_Params
	{	};

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
	 * Function SolarGameInstance.SolarGameInstance_C.SolarGM_TransmitGMLua
	 */
	struct USolarGameInstance_C_SolarGM_TransmitGMLua_Params
	{
	public:
		class FString                                              playerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      GmArray;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ShutdownAnoSDK
	 */
	struct USolarGameInstance_C_ShutdownAnoSDK_Params
	{	};

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
	 * Function SolarGameInstance.SolarGameInstance_C.ExecuteBackKeyLuaCall
	 */
	struct USolarGameInstance_C_ExecuteBackKeyLuaCall_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.InitLuaClasses
	 */
	struct USolarGameInstance_C_InitLuaClasses_Params
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
	 * Function SolarGameInstance.SolarGameInstance_C.GoHomeLuaCall
	 */
	struct USolarGameInstance_C_GoHomeLuaCall_Params
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
	 * Function SolarGameInstance.SolarGameInstance_C.LuaInitGameFrameWork
	 */
	struct USolarGameInstance_C_LuaInitGameFrameWork_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ReceiveShutdown
	 */
	struct USolarGameInstance_C_ReceiveShutdown_Params
	{	};

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
	 * Function SolarGameInstance.SolarGameInstance_C.OnDisconnect
	 */
	struct USolarGameInstance_C_OnDisconnect_Params
	{	};

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

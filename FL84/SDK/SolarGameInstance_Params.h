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
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnRefreshFirebaseToken_9A108C3B42312804BEA9428C8599C9CF
	 */
	struct USolarGameInstance_C_OnRefreshFirebaseToken_9A108C3B42312804BEA9428C8599C9CF_Params
	{
	public:
		class FString                                              FirebaseToken;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnClearCommunityRedhint_F451C2F543D97010E5E74ABC300BDAD7
	 */
	struct USolarGameInstance_C_OnClearCommunityRedhint_F451C2F543D97010E5E74ABC300BDAD7_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnGetCommunityRedhint_1CFCCD694AFB0863B5AA2DA58A7A5438
	 */
	struct USolarGameInstance_C_OnGetCommunityRedhint_1CFCCD694AFB0863B5AA2DA58A7A5438_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnExitCommunity_2AA21A3F4B6A616DD66B81B8D0F30411
	 */
	struct USolarGameInstance_C_OnExitCommunity_2AA21A3F4B6A616DD66B81B8D0F30411_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnInitCommunity_86E4353A455718B55238688022762428
	 */
	struct USolarGameInstance_C_OnInitCommunity_86E4353A455718B55238688022762428_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnQueryThirdPartyUserInfo_605571A44F0BA6528479E083DA805DDC
	 */
	struct USolarGameInstance_C_OnQueryThirdPartyUserInfo_605571A44F0BA6528479E083DA805DDC_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VHKQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSDKSocialUserInfo>                          SocialUserInfoList;                                      // 0x0008(0x0010)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFailed_69E6F41D47598B88B83C99A9B5149D93
	 */
	struct USolarGameInstance_C_OnSwitchAccountFailed_69E6F41D47598B88B83C99A9B5149D93_Params
	{
	public:
		ELLHSDKLoginType                                           LoginType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MYUJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFinish_232E4CFD403B946F6F967697FF624DC8
	 */
	struct USolarGameInstance_C_OnSwitchAccountFinish_232E4CFD403B946F6F967697FF624DC8_Params
	{
	public:
		class FString                                              AppUid;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppToken;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKLoginType                                           LoginType;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnBindFinish_0B60F4FF4A403899BF1D68BC9E5B065D
	 */
	struct USolarGameInstance_C_OnBindFinish_0B60F4FF4A403899BF1D68BC9E5B065D_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0AZR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AppUid;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppToken;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKLoginType                                           LoginType;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamSDKPayApplied_E35970B2450F0863FE69978BF59CFFAA
	 */
	struct USolarGameInstance_C_OnLSteamSDKPayApplied_E35970B2450F0863FE69978BF59CFFAA_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamQuerySkus_33F1689F482FDD9C6B2A1BA7881C7002
	 */
	struct USolarGameInstance_C_OnLSteamQuerySkus_33F1689F482FDD9C6B2A1BA7881C7002_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ShutDownLimSdk
	 */
	struct USolarGameInstance_C_ShutDownLimSdk_Params
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
	 * Function SolarGameInstance.SolarGameInstance_C.RegisterNetworkManager
	 */
	struct USolarGameInstance_C_RegisterNetworkManager_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.InitLuaClasses
	 */
	struct USolarGameInstance_C_InitLuaClasses_Params
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
	 * Function SolarGameInstance.SolarGameInstance_C.HandleNetworkError
	 */
	struct USolarGameInstance_C_HandleNetworkError_Params
	{
	public:
		ENetworkFailure                                            FailureType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsServer;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

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
	 * Function SolarGameInstance.SolarGameInstance_C.GoHomeLuaCall
	 */
	struct USolarGameInstance_C_GoHomeLuaCall_Params
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
	 * Function SolarGameInstance.SolarGameInstance_C.ExecuteBackKeyLuaCall
	 */
	struct USolarGameInstance_C_ExecuteBackKeyLuaCall_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.LuaStartGameFrameWork
	 */
	struct USolarGameInstance_C_LuaStartGameFrameWork_Params
	{	};

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
	 * Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddItemLua
	 */
	struct USolarGameInstance_C_SolarGM_AddItemLua_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    count;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ShutDownPCSDK
	 */
	struct USolarGameInstance_C_ShutDownPCSDK_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ExecuteChangeAudioModeLuaCall
	 */
	struct USolarGameInstance_C_ExecuteChangeAudioModeLuaCall_Params
	{
	public:
		bool                                                       bTurnOn;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.CheckSavedDirFiles
	 */
	struct USolarGameInstance_C_CheckSavedDirFiles_Params
	{
	public:
		TArray<class FString>                                      Files;                                                   // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ShutdownAnoSDK
	 */
	struct USolarGameInstance_C_ShutdownAnoSDK_Params
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
	 * Function SolarGameInstance.SolarGameInstance_C.ReceiveShutdown
	 */
	struct USolarGameInstance_C_ReceiveShutdown_Params
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

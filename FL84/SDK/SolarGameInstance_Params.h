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
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnRefreshFirebaseToken_8DDF99514F5D85D08AA762AE19F178F7
	 */
	struct USolarGameInstance_C_OnRefreshFirebaseToken_8DDF99514F5D85D08AA762AE19F178F7_Params
	{
	public:
		class FString                                              FirebaseToken;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnClearCommunityRedhint_AFFD68F645C2622E1D10E7B4BB36FBC2
	 */
	struct USolarGameInstance_C_OnClearCommunityRedhint_AFFD68F645C2622E1D10E7B4BB36FBC2_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnGetCommunityRedhint_BC62BC8C4DE11E93F9E9BB8C07BEDE4C
	 */
	struct USolarGameInstance_C_OnGetCommunityRedhint_BC62BC8C4DE11E93F9E9BB8C07BEDE4C_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnExitCommunity_C786D46844454560C26D8BBCED11DE26
	 */
	struct USolarGameInstance_C_OnExitCommunity_C786D46844454560C26D8BBCED11DE26_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnInitCommunity_21C9BE2141F236D44D158E9BC5BDFF69
	 */
	struct USolarGameInstance_C_OnInitCommunity_21C9BE2141F236D44D158E9BC5BDFF69_Params
	{
	public:
		class FString                                              ResultStr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnQueryThirdPartyUserInfo_7AC8A253485E8BBA7160C980425F93AF
	 */
	struct USolarGameInstance_C_OnQueryThirdPartyUserInfo_7AC8A253485E8BBA7160C980425F93AF_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N1OD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSDKSocialUserInfo>                          SocialUserInfoList;                                      // 0x0008(0x0010)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFailed_8124623B45A7B6BF456C3F92939381B5
	 */
	struct USolarGameInstance_C_OnSwitchAccountFailed_8124623B45A7B6BF456C3F92939381B5_Params
	{
	public:
		ELLHSDKLoginType                                           LoginType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OJKJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFinish_0E9AF3BD403E53986AA41A97483D8E36
	 */
	struct USolarGameInstance_C_OnSwitchAccountFinish_0E9AF3BD403E53986AA41A97483D8E36_Params
	{
	public:
		class FString                                              AppUid;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppToken;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKLoginType                                           LoginType;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnBindFinish_D75FAD154DCC00FDE072B2852C207D84
	 */
	struct USolarGameInstance_C_OnBindFinish_D75FAD154DCC00FDE072B2852C207D84_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T7DZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AppUid;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AppToken;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ELLHSDKLoginType                                           LoginType;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamSDKPayApplied_71E7164347BC0E19189FB98F6B733C77
	 */
	struct USolarGameInstance_C_OnLSteamSDKPayApplied_71E7164347BC0E19189FB98F6B733C77_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamQuerySkus_A5B4CCE14AA5FBA454D29F805CB92AF9
	 */
	struct USolarGameInstance_C_OnLSteamQuerySkus_A5B4CCE14AA5FBA454D29F805CB92AF9_Params
	{
	public:
		class FString                                              Datas;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	 * Function SolarGameInstance.SolarGameInstance_C.CheckSavedDirFiles
	 */
	struct USolarGameInstance_C_CheckSavedDirFiles_Params
	{
	public:
		TArray<class FString>                                      Files;                                                   // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.LuaStartGameFrameWork
	 */
	struct USolarGameInstance_C_LuaStartGameFrameWork_Params
	{	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.ShutDownPCSDK
	 */
	struct USolarGameInstance_C_ShutDownPCSDK_Params
	{	};

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
	 * Function SolarGameInstance.SolarGameInstance_C.OnDisconnect
	 */
	struct USolarGameInstance_C_OnDisconnect_Params
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
	 * Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddItemLua
	 */
	struct USolarGameInstance_C_SolarGM_AddItemLua_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    count;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.RegisterNetworkManager
	 */
	struct USolarGameInstance_C_RegisterNetworkManager_Params
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
	 * Function SolarGameInstance.SolarGameInstance_C.OnScopeChanged
	 */
	struct USolarGameInstance_C_OnScopeChanged_Params
	{
	public:
		EScope                                                     InLastScope;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScope                                                     InCurScope;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SolarGameInstance.SolarGameInstance_C.GoHomeLuaCall
	 */
	struct USolarGameInstance_C_GoHomeLuaCall_Params
	{	};

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
	 * Function SolarGameInstance.SolarGameInstance_C.ExecuteBackKeyLuaCall
	 */
	struct USolarGameInstance_C_ExecuteBackKeyLuaCall_Params
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
	 * Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroNameCopy
	 */
	struct USolarGameInstance_C_LuaGetBroadcastHeroNameCopy_Params
	{
	public:
		class FString                                              SolarPlayerID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              BroadcastPlayerName;                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
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

#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA58 - 0xA40)
// BlueprintGeneratedClass SolarGameInstance.SolarGameInstance_C
class USolarGameInstance_C : public USolarGameInstanceBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA40(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnBroadcastModeChanged;                            // 0xA48(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class USolarGameInstance_C* GetDefaultObj();

	void OnRefreshFirebaseToken_621E0299461CEA370A1831B504104270(const class FString& FirebaseToken);
	void OnClearCommunityRedhint_8BB4D7814B20E67649CD17AEDA337DE7(const class FString& ResultStr);
	void OnGetCommunityRedhint_40DF37424B99C37CB85715830F6CB18B(const class FString& ResultStr);
	void OnExitCommunity_1A59F2F7403F2B37C9280A95C732B7A4(const class FString& ResultStr);
	void OnInitCommunity_9E05EFE04B312BA7D4851796B95BA672(const class FString& ResultStr);
	void OnQueryThirdPartyUserInfo_49364EA644970E82B95B4BA0887A8063(bool Success, int32 ErrorCode, const TArray<struct FSDKSocialUserInfo>& SocialUserInfoList);
	void OnSwitchAccountFailed_E24BA23E4FBBB28CA3CF539073DF99F0(enum class ELLHSDKLoginType LoginType, int32 ErrorCode);
	void OnSwitchAccountFinish_E2F904F54301309EAF38E1B8F2CE8C49(const class FString& AppUid, const class FString& AppToken, enum class ELLHSDKLoginType LoginType);
	void OnBindFinish_02FFE6684C62791BB58028BE578ED4BB(bool bSuccess, const class FString& AppUid, const class FString& AppToken, enum class ELLHSDKLoginType LoginType);
	void OnLSteamSDKPayApplied_C8AAE6AA48716E13C24C5A8D858BCBF6(const class FString& Datas);
	void OnLSteamQuerySkus_D53824DB445B32677B3020B13F104D90(const class FString& Datas);
	void ReceiveShutdown();
	void SolarGM_LobbyLua(const class FString& CmdName, TArray<class FString>& Params);
	void LuaInitGameFrameWork();
	void ExecuteBackKeyLuaCall();
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer);
	void LuaStartGameFrameWork();
	void OnDisconnect();
	void RegisterNetworkManager();
	void ShutDownLimSdk();
	void GoHomeLuaCall();
	void CheckSavedDirFiles(TArray<class FString>* Files);
	void SolarGM_TransmitGMLua(const class FString& PlayerName, TArray<class FString>& GmArray);
	void ExecuteChangeAudioModeLuaCall(bool bTurnOn);
	void ShutdownAnoSDK();
	void LuaGetBroadcastPlayerNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
	void InitLuaClasses();
	void SolarGM_AddItemLua(int32 ItemID, int32 Count);
	void ReportLoadingInfoToBI(TArray<class FString>* LoadingInfo, float LoadingTime, bool bIsFinished);
	void LuaGetBroadcastHeroNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
	void ShutDownPCSDK();
	void OnScopeChanged(enum class EScope InLastScope, enum class EScope InCurScope);
	void SolarGM_AddWeaponExpLua(int32 Weaponid, int32 Count);
	void LuaOnBroadcastModeChanged();
	void LuaGetBroadcastPlayerName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
	void LuaGetBroadcastHeroName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
	void SolarGM_TestCrashWithBP();
	void SolarGM_TestEnsureMsgWithBP();
	void ExecuteUbergraph_SolarGameInstance(int32 EntryPoint);
	void OnBroadcastModeChanged__DelegateSignature();
};

}



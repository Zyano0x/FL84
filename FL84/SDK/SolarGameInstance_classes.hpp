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

	void OnRefreshFirebaseToken_43AD298B4D9AA53426215AAAA8F4AE8D(const class FString& FirebaseToken);
	void OnClearCommunityRedhint_1E40B6C24E6081A20A059CAE5D73F90C(const class FString& ResultStr);
	void OnGetCommunityRedhint_F536BFE243B680EC41C84E83E37271E0(const class FString& ResultStr);
	void OnExitCommunity_7AAFD51249B9CA1DF091AF9775F4EC3F(const class FString& ResultStr);
	void OnInitCommunity_218E52FA4659652888D98AA6CAB701E8(const class FString& ResultStr);
	void OnQueryThirdPartyUserInfo_FFEF097A4F4731E6D58937BA9B1C545C(bool Success, int32 ErrorCode, const TArray<struct FSDKSocialUserInfo>& SocialUserInfoList);
	void OnSwitchAccountFailed_832F200344100743A868D4AEFA65D81F(enum class ELLHSDKLoginType LoginType, int32 ErrorCode);
	void OnSwitchAccountFinish_7AC3331C433DDF22565CC89667595182(const class FString& AppUid, const class FString& AppToken, enum class ELLHSDKLoginType LoginType);
	void OnBindFinish_86F02D61416335C191592983D17B87F7(bool bSuccess, const class FString& AppUid, const class FString& AppToken, enum class ELLHSDKLoginType LoginType);
	void OnLSteamSDKPayApplied_940506894F0595ACF1AAE8A7C169A764(const class FString& Datas);
	void OnLSteamQuerySkus_B2BBF52743882367CB5692AE0E63051D(const class FString& Datas);
	void SolarGM_AddItemLua(int32 ItemID, int32 Count);
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer);
	void LuaGetBroadcastHeroNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
	void LuaStartGameFrameWork();
	void ShutDownPCSDK();
	void SolarGM_AddWeaponExpLua(int32 Weaponid, int32 Count);
	void ReportLoadingInfoToBI(TArray<class FString>* LoadingInfo, float LoadingTime, bool bIsFinished);
	void ShutDownLimSdk();
	void GoHomeLuaCall();
	void ExecuteChangeAudioModeLuaCall(bool bTurnOn);
	void ExecuteBackKeyLuaCall();
	void RegisterNetworkManager();
	void InitLuaClasses();
	void ShutdownAnoSDK();
	void OnScopeChanged(enum class EScope InLastScope, enum class EScope InCurScope);
	void LuaInitGameFrameWork();
	void ReceiveShutdown();
	void LuaGetBroadcastPlayerNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
	void SolarGM_LobbyLua(const class FString& CmdName, TArray<class FString>& Params);
	void SolarGM_TransmitGMLua(const class FString& PlayerName, TArray<class FString>& GmArray);
	void CheckSavedDirFiles(TArray<class FString>* Files);
	void OnDisconnect();
	void LuaOnBroadcastModeChanged();
	void LuaGetBroadcastPlayerName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
	void LuaGetBroadcastHeroName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
	void SolarGM_TestCrashWithBP();
	void SolarGM_TestEnsureMsgWithBP();
	void ExecuteUbergraph_SolarGameInstance(int32 EntryPoint);
	void OnBroadcastModeChanged__DelegateSignature();
};

}



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

	void OnRefreshFirebaseToken_D26330CF4A5C97D39ED4019104AB1CED(const class FString& FirebaseToken);
	void OnClearCommunityRedhint_CA7AD73F4695A3CA84A8B1A4B37BDBE3(const class FString& ResultStr);
	void OnGetCommunityRedhint_29CA0E08465BB67B379E3C9372923A34(const class FString& ResultStr);
	void OnExitCommunity_97313330486EFD85E3699EA253488B31(const class FString& ResultStr);
	void OnInitCommunity_0DA9F6D14D84C412ACB88BB308FFEC66(const class FString& ResultStr);
	void OnQueryThirdPartyUserInfo_91CD94704EE345E09768829F654CA0D0(bool Success, int32 ErrorCode, const TArray<struct FSDKSocialUserInfo>& SocialUserInfoList);
	void OnSwitchAccountFailed_91DC53B9427B177E164AD7B40100BFD9(enum class ELLHSDKLoginType LoginType, int32 ErrorCode);
	void OnSwitchAccountFinish_E3ED595249623D73F22AE8A7EB1D871F(const class FString& AppUid, const class FString& AppToken, enum class ELLHSDKLoginType LoginType);
	void OnBindFinish_D15B146942898A4B0ABC16A3D3467930(bool bSuccess, const class FString& AppUid, const class FString& AppToken, enum class ELLHSDKLoginType LoginType);
	void OnLSteamSDKPayApplied_3EFCFFBD4B3473EEF02CA1B667556C6D(const class FString& Datas);
	void OnLSteamQuerySkus_F2AB076C4AEA7BD472FBA18C46F5F4D1(const class FString& Datas);
	void GoHomeLuaCall();
	void SolarGM_AddWeaponExpLua(int32 Weaponid, int32 Count);
	void ExecuteBackKeyLuaCall();
	void ShutDownPCSDK();
	void CheckSavedDirFiles(TArray<class FString>* Files);
	void LuaStartGameFrameWork();
	void LuaInitGameFrameWork();
	void SolarGM_AddItemLua(int32 ItemID, int32 Count);
	void LuaGetBroadcastHeroNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
	void ExecuteChangeAudioModeLuaCall(bool bTurnOn);
	void OnDisconnect();
	void LuaGetBroadcastPlayerNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
	void HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer);
	void InitLuaClasses();
	void ShutdownAnoSDK();
	void OnScopeChanged(enum class EScope InLastScope, enum class EScope InCurScope);
	void ReceiveShutdown();
	void SolarGM_TransmitGMLua(const class FString& PlayerName, TArray<class FString>& GmArray);
	void ReportLoadingInfoToBI(TArray<class FString>* LoadingInfo, float LoadingTime, bool bIsFinished);
	void SolarGM_LobbyLua(const class FString& CmdName, TArray<class FString>& Params);
	void ShutDownLimSdk();
	void RegisterNetworkManager();
	void LuaOnBroadcastModeChanged();
	void LuaGetBroadcastPlayerName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
	void LuaGetBroadcastHeroName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
	void SolarGM_TestCrashWithBP();
	void SolarGM_TestEnsureMsgWithBP();
	void ExecuteUbergraph_SolarGameInstance(int32 EntryPoint);
	void OnBroadcastModeChanged__DelegateSignature();
};

}



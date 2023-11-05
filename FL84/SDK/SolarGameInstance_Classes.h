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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass SolarGameInstance.SolarGameInstance_C
	 * Size -> 0x0018 (FullSize[0x0A58] - InheritedSize[0x0A40])
	 */
	class USolarGameInstance_C : public USolarGameInstanceBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A40(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnBroadcastModeChanged;                                  // 0x0A48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnRefreshFirebaseToken_2BCF16D844EFA36ECFB8EDA15D736B6B(const class FString& FirebaseToken);
		void OnClearCommunityRedhint_927B8FA04C3C9D964218D7923BFE5791(const class FString& ResultStr);
		void OnGetCommunityRedhint_E87BF1884D47AB515E9ABAA049E358E1(const class FString& ResultStr);
		void OnExitCommunity_4B55D5AD4FDCA6AD4BF96A8718129B43(const class FString& ResultStr);
		void OnInitCommunity_283AB1AB49AA510537B1B3A4AD46E442(const class FString& ResultStr);
		void OnQueryThirdPartyUserInfo_DA3EEA2B4A173D537F4EBEA37D517875(bool Success, int32_t ErrorCode, TArray<struct FSDKSocialUserInfo> SocialUserInfoList);
		void OnSwitchAccountFailed_496102A84D8083018E91D7AE86F9F3A4(ELLHSDKLoginType LoginType, int32_t ErrorCode);
		void OnSwitchAccountFinish_3FC7A335420721A8CAA8739CAF101CD1(const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType);
		void OnBindFinish_D2E90F0249EAAD1C48B2F7B1BABA5BEC(bool bSuccess, const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType);
		void OnLSteamSDKPayApplied_8B17E7664740488E76970D97182DD76C(const class FString& Datas);
		void OnLSteamQuerySkus_77BEA62C4B5D75B3D8F160ACEDFD6B3C(const class FString& Datas);
		void ExecuteChangeAudioModeLuaCall(bool bTurnOn);
		void ShutDownPCSDK();
		void LuaStartGameFrameWork();
		void LuaGetBroadcastPlayerNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
		void OnScopeChanged(EScope InLastScope, EScope InCurScope);
		void RegisterNetworkManager();
		void SolarGM_AddItemLua(int32_t ItemID, int32_t count);
		void SolarGM_TransmitGMLua(const class FString& playerName, TArray<class FString> GmArray);
		void ShutdownAnoSDK();
		void HandleNetworkError(ENetworkFailure FailureType, bool bIsServer);
		void ReportLoadingInfoToBI(TArray<class FString>* LoadingInfo, float LoadingTime, bool bIsFinished);
		void SolarGM_LobbyLua(const class FString& CmdName, TArray<class FString> Params);
		void ShutDownLimSdk();
		void ExecuteBackKeyLuaCall();
		void InitLuaClasses();
		void CheckSavedDirFiles(TArray<class FString>* Files);
		void GoHomeLuaCall();
		void LuaGetBroadcastHeroNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
		void LuaInitGameFrameWork();
		void ReceiveShutdown();
		void SolarGM_AddWeaponExpLua(int32_t weaponid, int32_t count);
		void OnDisconnect();
		void LuaOnBroadcastModeChanged();
		void LuaGetBroadcastPlayerName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
		void LuaGetBroadcastHeroName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
		void SolarGM_TestCrashWithBP();
		void SolarGM_TestEnsureMsgWithBP();
		void ExecuteUbergraph_SolarGameInstance(int32_t EntryPoint);
		void OnBroadcastModeChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

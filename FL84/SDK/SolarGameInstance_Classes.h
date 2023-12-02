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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass SolarGameInstance.SolarGameInstance_C
	 * Size -> 0x0018 (FullSize[0x0A78] - InheritedSize[0x0A60])
	 */
	class USolarGameInstance_C : public USolarGameInstanceBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A60(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnBroadcastModeChanged;                                  // 0x0A68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnRefreshFirebaseToken_1D76C2E74A6E9E102354B8956338E299(const class FString& FirebaseToken);
		void OnClearCommunityRedhint_389466704B7CD40524C72AAF907392B5(const class FString& ResultStr);
		void OnGetCommunityRedhint_828EE10646F0E9DFC7F520BCACBBF57D(const class FString& ResultStr);
		void OnExitCommunity_6FD63F61420AAB5315E2B59ECA3A6368(const class FString& ResultStr);
		void OnInitCommunity_204F062E4EDA3647DF45A5B3C17E7D40(const class FString& ResultStr);
		void OnQueryThirdPartyUserInfo_21CBC7F7473DE6CF569D3891591FF893(bool Success, int32_t ErrorCode, TArray<struct FSDKSocialUserInfo> SocialUserInfoList);
		void OnSwitchAccountFailed_076E928B4FDA47E2ECB3E1BDE40E6184(ELLHSDKLoginType LoginType, int32_t ErrorCode);
		void OnSwitchAccountFinish_59159C34455A594D9382AAB6750ADF91(const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType);
		void OnBindFinish_47C653AD4D4A97846E0042BEB2461280(bool bSuccess, const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType);
		void OnLSteamSDKPayApplied_4E6E1FDC4E96CA4F7AF67BAD5D83A59C(const class FString& Datas);
		void OnLSteamQuerySkus_94BE7DA746184A5073F4ABA5CED8697F(const class FString& Datas);
		void LuaStartGameFrameWork();
		void CheckSavedDirFiles(TArray<class FString>* Files);
		void ExecuteChangeAudioModeLuaCall(bool bTurnOn);
		void OnScopeChanged(EScope InLastScope, EScope InCurScope);
		void ShutdownAnoSDK();
		void InitLuaClasses();
		void SolarGM_LobbyLua(const class FString& CmdName, TArray<class FString> Params);
		void ShutDownLimSdk();
		void ReportLoadingInfoToBI(TArray<class FString>* LoadingInfo, float LoadingTime, bool bIsFinished);
		void HandleNetworkError(ENetworkFailure FailureType, bool bIsServer);
		void GoHomeLuaCall();
		void RegisterNetworkManager();
		void OnDisconnect();
		void LuaInitGameFrameWork();
		void SolarGM_TransmitGMLua(const class FString& playerName, TArray<class FString> GmArray);
		void ShutDownPCSDK();
		void ReceiveShutdown();
		void LuaGetBroadcastPlayerNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
		void SolarGM_AddWeaponExpLua(int32_t weaponid, int32_t count);
		void AsyncDownLoadConfigFile(int64_t TaskID, const class FString& URL);
		void ExecuteBackKeyLuaCall();
		void LuaGetBroadcastHeroNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
		void SolarGM_AddItemLua(int32_t ItemID, int32_t count);
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

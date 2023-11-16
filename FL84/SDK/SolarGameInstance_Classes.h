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
		void OnRefreshFirebaseToken_8DDF99514F5D85D08AA762AE19F178F7(const class FString& FirebaseToken);
		void OnClearCommunityRedhint_AFFD68F645C2622E1D10E7B4BB36FBC2(const class FString& ResultStr);
		void OnGetCommunityRedhint_BC62BC8C4DE11E93F9E9BB8C07BEDE4C(const class FString& ResultStr);
		void OnExitCommunity_C786D46844454560C26D8BBCED11DE26(const class FString& ResultStr);
		void OnInitCommunity_21C9BE2141F236D44D158E9BC5BDFF69(const class FString& ResultStr);
		void OnQueryThirdPartyUserInfo_7AC8A253485E8BBA7160C980425F93AF(bool Success, int32_t ErrorCode, TArray<struct FSDKSocialUserInfo> SocialUserInfoList);
		void OnSwitchAccountFailed_8124623B45A7B6BF456C3F92939381B5(ELLHSDKLoginType LoginType, int32_t ErrorCode);
		void OnSwitchAccountFinish_0E9AF3BD403E53986AA41A97483D8E36(const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType);
		void OnBindFinish_D75FAD154DCC00FDE072B2852C207D84(bool bSuccess, const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType);
		void OnLSteamSDKPayApplied_71E7164347BC0E19189FB98F6B733C77(const class FString& Datas);
		void OnLSteamQuerySkus_A5B4CCE14AA5FBA454D29F805CB92AF9(const class FString& Datas);
		void SolarGM_TransmitGMLua(const class FString& playerName, TArray<class FString> GmArray);
		void CheckSavedDirFiles(TArray<class FString>* Files);
		void LuaStartGameFrameWork();
		void ShutDownPCSDK();
		void LuaInitGameFrameWork();
		void ReceiveShutdown();
		void InitLuaClasses();
		void SolarGM_LobbyLua(const class FString& CmdName, TArray<class FString> Params);
		void OnDisconnect();
		void LuaGetBroadcastPlayerNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
		void ShutdownAnoSDK();
		void HandleNetworkError(ENetworkFailure FailureType, bool bIsServer);
		void SolarGM_AddItemLua(int32_t ItemID, int32_t count);
		void RegisterNetworkManager();
		void SolarGM_AddWeaponExpLua(int32_t weaponid, int32_t count);
		void OnScopeChanged(EScope InLastScope, EScope InCurScope);
		void GoHomeLuaCall();
		void ShutDownLimSdk();
		void ReportLoadingInfoToBI(TArray<class FString>* LoadingInfo, float LoadingTime, bool bIsFinished);
		void ExecuteBackKeyLuaCall();
		void ExecuteChangeAudioModeLuaCall(bool bTurnOn);
		void LuaGetBroadcastHeroNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
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

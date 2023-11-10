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
		void OnRefreshFirebaseToken_9A108C3B42312804BEA9428C8599C9CF(const class FString& FirebaseToken);
		void OnClearCommunityRedhint_F451C2F543D97010E5E74ABC300BDAD7(const class FString& ResultStr);
		void OnGetCommunityRedhint_1CFCCD694AFB0863B5AA2DA58A7A5438(const class FString& ResultStr);
		void OnExitCommunity_2AA21A3F4B6A616DD66B81B8D0F30411(const class FString& ResultStr);
		void OnInitCommunity_86E4353A455718B55238688022762428(const class FString& ResultStr);
		void OnQueryThirdPartyUserInfo_605571A44F0BA6528479E083DA805DDC(bool Success, int32_t ErrorCode, TArray<struct FSDKSocialUserInfo> SocialUserInfoList);
		void OnSwitchAccountFailed_69E6F41D47598B88B83C99A9B5149D93(ELLHSDKLoginType LoginType, int32_t ErrorCode);
		void OnSwitchAccountFinish_232E4CFD403B946F6F967697FF624DC8(const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType);
		void OnBindFinish_0B60F4FF4A403899BF1D68BC9E5B065D(bool bSuccess, const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType);
		void OnLSteamSDKPayApplied_E35970B2450F0863FE69978BF59CFFAA(const class FString& Datas);
		void OnLSteamQuerySkus_33F1689F482FDD9C6B2A1BA7881C7002(const class FString& Datas);
		void ShutDownLimSdk();
		void LuaGetBroadcastPlayerNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
		void ReportLoadingInfoToBI(TArray<class FString>* LoadingInfo, float LoadingTime, bool bIsFinished);
		void RegisterNetworkManager();
		void InitLuaClasses();
		void SolarGM_AddWeaponExpLua(int32_t weaponid, int32_t count);
		void OnDisconnect();
		void HandleNetworkError(ENetworkFailure FailureType, bool bIsServer);
		void LuaGetBroadcastHeroNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
		void GoHomeLuaCall();
		void SolarGM_LobbyLua(const class FString& CmdName, TArray<class FString> Params);
		void ExecuteBackKeyLuaCall();
		void LuaStartGameFrameWork();
		void OnScopeChanged(EScope InLastScope, EScope InCurScope);
		void SolarGM_AddItemLua(int32_t ItemID, int32_t count);
		void ShutDownPCSDK();
		void ExecuteChangeAudioModeLuaCall(bool bTurnOn);
		void CheckSavedDirFiles(TArray<class FString>* Files);
		void ShutdownAnoSDK();
		void LuaInitGameFrameWork();
		void SolarGM_TransmitGMLua(const class FString& playerName, TArray<class FString> GmArray);
		void ReceiveShutdown();
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

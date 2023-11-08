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
		void OnRefreshFirebaseToken_45F5E6464AD7CE552AD40E86573CFD3F(const class FString& FirebaseToken);
		void OnClearCommunityRedhint_CD5F6FBE4F6B9F84F882B1B6BBA79552(const class FString& ResultStr);
		void OnGetCommunityRedhint_91AFE95F48FE071705E6C2B8EC1F039D(const class FString& ResultStr);
		void OnExitCommunity_EA611FB6489B33AEBE3A03A882524BE8(const class FString& ResultStr);
		void OnInitCommunity_AAB93EEF46C6EAC3FC559D90728C0CC2(const class FString& ResultStr);
		void OnLimPCSDKLanguageChange_1170F2024D0543E3ED12298B9C8F7F97(const class FString& Datas);
		void OnLimPCSDKLogout_EB1D2F6A485162AB25AEF7A85F953AD9(const class FString& Datas);
		void OnLimPCSDKLogin_80F8FBC240DEBE0BA287EF91CD89186F(const class FString& Datas);
		void OnLimPCSDKEventCallback_647026E6486AC48AF5DDF1B80E32E1B4(const class FString& Datas);
		void OnLimPCSDKInited_0B55AD8F46E687BEC58C379A13B5FC5B(const class FString& Datas);
		void OnLimPCPayApplied_7215EAEE4F7A4B0F290D8087192DB42B(const class FString& Datas);
		void OnLimPCQueryPriceLadder_78D88F11411D0B8ACE78FDA0E07B7C3C(const class FString& Datas);
		void OnDisconnect();
		void CheckSavedDirFiles(TArray<class FString>* Files);
		void LuaGetBroadcastHeroNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
		void OnScopeChanged(EScope InLastScope, EScope InCurScope);
		void ShutDownPCSDK();
		void ShutdownAnoSDK();
		void InitLuaClasses();
		void RegisterNetworkManager();
		void ExecuteChangeAudioModeLuaCall(bool bTurnOn);
		void LuaStartGameFrameWork();
		void HandleNetworkError(ENetworkFailure FailureType, bool bIsServer);
		void SolarGM_LobbyLua(const class FString& CmdName, TArray<class FString> Params);
		void LuaInitGameFrameWork();
		void SolarGM_TransmitGMLua(const class FString& playerName, TArray<class FString> GmArray);
		void SolarGM_AddWeaponExpLua(int32_t weaponid, int32_t count);
		void ShutDownLimSdk();
		void GoHomeLuaCall();
		void SolarGM_AddItemLua(int32_t ItemID, int32_t count);
		void ReceiveShutdown();
		void ExecuteBackKeyLuaCall();
		void ReportLoadingInfoToBI(TArray<class FString>* LoadingInfo, float LoadingTime, bool bIsFinished);
		void LuaGetBroadcastPlayerNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
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

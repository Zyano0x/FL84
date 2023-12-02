/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnRefreshFirebaseToken_1D76C2E74A6E9E102354B8956338E299
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      FirebaseToken                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnRefreshFirebaseToken_1D76C2E74A6E9E102354B8956338E299(const class FString& FirebaseToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnRefreshFirebaseToken_1D76C2E74A6E9E102354B8956338E299"));
		
		USolarGameInstance_C_OnRefreshFirebaseToken_1D76C2E74A6E9E102354B8956338E299_Params params {};
		params.FirebaseToken = FirebaseToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnClearCommunityRedhint_389466704B7CD40524C72AAF907392B5
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      ResultStr                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnClearCommunityRedhint_389466704B7CD40524C72AAF907392B5(const class FString& ResultStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnClearCommunityRedhint_389466704B7CD40524C72AAF907392B5"));
		
		USolarGameInstance_C_OnClearCommunityRedhint_389466704B7CD40524C72AAF907392B5_Params params {};
		params.ResultStr = ResultStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnGetCommunityRedhint_828EE10646F0E9DFC7F520BCACBBF57D
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      ResultStr                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnGetCommunityRedhint_828EE10646F0E9DFC7F520BCACBBF57D(const class FString& ResultStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnGetCommunityRedhint_828EE10646F0E9DFC7F520BCACBBF57D"));
		
		USolarGameInstance_C_OnGetCommunityRedhint_828EE10646F0E9DFC7F520BCACBBF57D_Params params {};
		params.ResultStr = ResultStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnExitCommunity_6FD63F61420AAB5315E2B59ECA3A6368
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      ResultStr                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnExitCommunity_6FD63F61420AAB5315E2B59ECA3A6368(const class FString& ResultStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnExitCommunity_6FD63F61420AAB5315E2B59ECA3A6368"));
		
		USolarGameInstance_C_OnExitCommunity_6FD63F61420AAB5315E2B59ECA3A6368_Params params {};
		params.ResultStr = ResultStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnInitCommunity_204F062E4EDA3647DF45A5B3C17E7D40
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      ResultStr                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnInitCommunity_204F062E4EDA3647DF45A5B3C17E7D40(const class FString& ResultStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnInitCommunity_204F062E4EDA3647DF45A5B3C17E7D40"));
		
		USolarGameInstance_C_OnInitCommunity_204F062E4EDA3647DF45A5B3C17E7D40_Params params {};
		params.ResultStr = ResultStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnQueryThirdPartyUserInfo_21CBC7F7473DE6CF569D3891591FF893
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSDKSocialUserInfo>                  SocialUserInfoList                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnQueryThirdPartyUserInfo_21CBC7F7473DE6CF569D3891591FF893(bool Success, int32_t ErrorCode, TArray<struct FSDKSocialUserInfo> SocialUserInfoList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnQueryThirdPartyUserInfo_21CBC7F7473DE6CF569D3891591FF893"));
		
		USolarGameInstance_C_OnQueryThirdPartyUserInfo_21CBC7F7473DE6CF569D3891591FF893_Params params {};
		params.Success = Success;
		params.ErrorCode = ErrorCode;
		params.SocialUserInfoList = SocialUserInfoList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFailed_076E928B4FDA47E2ECB3E1BDE40E6184
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		ELLHSDKLoginType                                   LoginType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnSwitchAccountFailed_076E928B4FDA47E2ECB3E1BDE40E6184(ELLHSDKLoginType LoginType, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFailed_076E928B4FDA47E2ECB3E1BDE40E6184"));
		
		USolarGameInstance_C_OnSwitchAccountFailed_076E928B4FDA47E2ECB3E1BDE40E6184_Params params {};
		params.LoginType = LoginType;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFinish_59159C34455A594D9382AAB6750ADF91
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      AppUid                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppToken                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKLoginType                                   LoginType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnSwitchAccountFinish_59159C34455A594D9382AAB6750ADF91(const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFinish_59159C34455A594D9382AAB6750ADF91"));
		
		USolarGameInstance_C_OnSwitchAccountFinish_59159C34455A594D9382AAB6750ADF91_Params params {};
		params.AppUid = AppUid;
		params.AppToken = AppToken;
		params.LoginType = LoginType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnBindFinish_47C653AD4D4A97846E0042BEB2461280
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppUid                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppToken                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKLoginType                                   LoginType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnBindFinish_47C653AD4D4A97846E0042BEB2461280(bool bSuccess, const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnBindFinish_47C653AD4D4A97846E0042BEB2461280"));
		
		USolarGameInstance_C_OnBindFinish_47C653AD4D4A97846E0042BEB2461280_Params params {};
		params.bSuccess = bSuccess;
		params.AppUid = AppUid;
		params.AppToken = AppToken;
		params.LoginType = LoginType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamSDKPayApplied_4E6E1FDC4E96CA4F7AF67BAD5D83A59C
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnLSteamSDKPayApplied_4E6E1FDC4E96CA4F7AF67BAD5D83A59C(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamSDKPayApplied_4E6E1FDC4E96CA4F7AF67BAD5D83A59C"));
		
		USolarGameInstance_C_OnLSteamSDKPayApplied_4E6E1FDC4E96CA4F7AF67BAD5D83A59C_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamQuerySkus_94BE7DA746184A5073F4ABA5CED8697F
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnLSteamQuerySkus_94BE7DA746184A5073F4ABA5CED8697F(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamQuerySkus_94BE7DA746184A5073F4ABA5CED8697F"));
		
		USolarGameInstance_C_OnLSteamQuerySkus_94BE7DA746184A5073F4ABA5CED8697F_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.LuaStartGameFrameWork
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USolarGameInstance_C::LuaStartGameFrameWork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.LuaStartGameFrameWork"));
		
		USolarGameInstance_C_LuaStartGameFrameWork_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.CheckSavedDirFiles
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              Files                                                      (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::CheckSavedDirFiles(TArray<class FString>* Files)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.CheckSavedDirFiles"));
		
		USolarGameInstance_C_CheckSavedDirFiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Files != nullptr)
			*Files = params.Files;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.ExecuteChangeAudioModeLuaCall
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bTurnOn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::ExecuteChangeAudioModeLuaCall(bool bTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.ExecuteChangeAudioModeLuaCall"));
		
		USolarGameInstance_C_ExecuteChangeAudioModeLuaCall_Params params {};
		params.bTurnOn = bTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.OnScopeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EScope                                             InLastScope                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EScope                                             InCurScope                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnScopeChanged(EScope InLastScope, EScope InCurScope)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.OnScopeChanged"));
		
		USolarGameInstance_C_OnScopeChanged_Params params {};
		params.InLastScope = InLastScope;
		params.InCurScope = InCurScope;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.ShutdownAnoSDK
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USolarGameInstance_C::ShutdownAnoSDK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.ShutdownAnoSDK"));
		
		USolarGameInstance_C_ShutdownAnoSDK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.InitLuaClasses
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USolarGameInstance_C::InitLuaClasses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.InitLuaClasses"));
		
		USolarGameInstance_C_InitLuaClasses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.SolarGM_LobbyLua
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      CmdName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::SolarGM_LobbyLua(const class FString& CmdName, TArray<class FString> Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.SolarGM_LobbyLua"));
		
		USolarGameInstance_C_SolarGM_LobbyLua_Params params {};
		params.CmdName = CmdName;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.ShutDownLimSdk
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USolarGameInstance_C::ShutDownLimSdk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.ShutDownLimSdk"));
		
		USolarGameInstance_C_ShutDownLimSdk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.ReportLoadingInfoToBI
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              LoadingInfo                                                (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LoadingTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsFinished                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::ReportLoadingInfoToBI(TArray<class FString>* LoadingInfo, float LoadingTime, bool bIsFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.ReportLoadingInfoToBI"));
		
		USolarGameInstance_C_ReportLoadingInfoToBI_Params params {};
		params.LoadingTime = LoadingTime;
		params.bIsFinished = bIsFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoadingInfo != nullptr)
			*LoadingInfo = params.LoadingInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.HandleNetworkError
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		ENetworkFailure                                    FailureType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsServer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::HandleNetworkError(ENetworkFailure FailureType, bool bIsServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.HandleNetworkError"));
		
		USolarGameInstance_C_HandleNetworkError_Params params {};
		params.FailureType = FailureType;
		params.bIsServer = bIsServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.GoHomeLuaCall
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USolarGameInstance_C::GoHomeLuaCall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.GoHomeLuaCall"));
		
		USolarGameInstance_C_GoHomeLuaCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.RegisterNetworkManager
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USolarGameInstance_C::RegisterNetworkManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.RegisterNetworkManager"));
		
		USolarGameInstance_C_RegisterNetworkManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.OnDisconnect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USolarGameInstance_C::OnDisconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.OnDisconnect"));
		
		USolarGameInstance_C_OnDisconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.LuaInitGameFrameWork
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USolarGameInstance_C::LuaInitGameFrameWork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.LuaInitGameFrameWork"));
		
		USolarGameInstance_C_LuaInitGameFrameWork_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.SolarGM_TransmitGMLua
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      playerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              GmArray                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::SolarGM_TransmitGMLua(const class FString& playerName, TArray<class FString> GmArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.SolarGM_TransmitGMLua"));
		
		USolarGameInstance_C_SolarGM_TransmitGMLua_Params params {};
		params.playerName = playerName;
		params.GmArray = GmArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.ShutDownPCSDK
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USolarGameInstance_C::ShutDownPCSDK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.ShutDownPCSDK"));
		
		USolarGameInstance_C_ShutDownPCSDK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.ReceiveShutdown
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USolarGameInstance_C::ReceiveShutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.ReceiveShutdown"));
		
		USolarGameInstance_C_ReceiveShutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerNameCopy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SolarPlayerID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      BroadcastPlayerName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USolarGameInstance_C::LuaGetBroadcastPlayerNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerNameCopy"));
		
		USolarGameInstance_C_LuaGetBroadcastPlayerNameCopy_Params params {};
		params.SolarPlayerID = SolarPlayerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BroadcastPlayerName != nullptr)
			*BroadcastPlayerName = params.BroadcastPlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddWeaponExpLua
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            weaponid                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::SolarGM_AddWeaponExpLua(int32_t weaponid, int32_t count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddWeaponExpLua"));
		
		USolarGameInstance_C_SolarGM_AddWeaponExpLua_Params params {};
		params.weaponid = weaponid;
		params.count = count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.AsyncDownLoadConfigFile
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int64_t                                            TaskID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::AsyncDownLoadConfigFile(int64_t TaskID, const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.AsyncDownLoadConfigFile"));
		
		USolarGameInstance_C_AsyncDownLoadConfigFile_Params params {};
		params.TaskID = TaskID;
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.ExecuteBackKeyLuaCall
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USolarGameInstance_C::ExecuteBackKeyLuaCall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.ExecuteBackKeyLuaCall"));
		
		USolarGameInstance_C_ExecuteBackKeyLuaCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroNameCopy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SolarPlayerID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      BroadcastPlayerName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USolarGameInstance_C::LuaGetBroadcastHeroNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroNameCopy"));
		
		USolarGameInstance_C_LuaGetBroadcastHeroNameCopy_Params params {};
		params.SolarPlayerID = SolarPlayerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BroadcastPlayerName != nullptr)
			*BroadcastPlayerName = params.BroadcastPlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddItemLua
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ItemID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::SolarGM_AddItemLua(int32_t ItemID, int32_t count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddItemLua"));
		
		USolarGameInstance_C_SolarGM_AddItemLua_Params params {};
		params.ItemID = ItemID;
		params.count = count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.LuaOnBroadcastModeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USolarGameInstance_C::LuaOnBroadcastModeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.LuaOnBroadcastModeChanged"));
		
		USolarGameInstance_C_LuaOnBroadcastModeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SolarPlayerID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      BroadcastPlayerName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USolarGameInstance_C::LuaGetBroadcastPlayerName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerName"));
		
		USolarGameInstance_C_LuaGetBroadcastPlayerName_Params params {};
		params.SolarPlayerID = SolarPlayerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BroadcastPlayerName != nullptr)
			*BroadcastPlayerName = params.BroadcastPlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SolarPlayerID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      BroadcastPlayerName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USolarGameInstance_C::LuaGetBroadcastHeroName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroName"));
		
		USolarGameInstance_C_LuaGetBroadcastHeroName_Params params {};
		params.SolarPlayerID = SolarPlayerID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BroadcastPlayerName != nullptr)
			*BroadcastPlayerName = params.BroadcastPlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestCrashWithBP
	 * 		Flags  -> (Exec, Event, Public, BlueprintEvent)
	 */
	void USolarGameInstance_C::SolarGM_TestCrashWithBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestCrashWithBP"));
		
		USolarGameInstance_C_SolarGM_TestCrashWithBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestEnsureMsgWithBP
	 * 		Flags  -> (Exec, Event, Public, BlueprintEvent)
	 */
	void USolarGameInstance_C::SolarGM_TestEnsureMsgWithBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestEnsureMsgWithBP"));
		
		USolarGameInstance_C_SolarGM_TestEnsureMsgWithBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.ExecuteUbergraph_SolarGameInstance
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USolarGameInstance_C::ExecuteUbergraph_SolarGameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.ExecuteUbergraph_SolarGameInstance"));
		
		USolarGameInstance_C_ExecuteUbergraph_SolarGameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SolarGameInstance.SolarGameInstance_C.OnBroadcastModeChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void USolarGameInstance_C::OnBroadcastModeChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SolarGameInstance.SolarGameInstance_C.OnBroadcastModeChanged__DelegateSignature"));
		
		USolarGameInstance_C_OnBroadcastModeChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USolarGameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USolarGameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass SolarGameInstance.SolarGameInstance_C"));
		return ptr;
	}

}



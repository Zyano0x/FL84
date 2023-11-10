/**
 * Name: FL84
 * Version: 15.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnRefreshFirebaseToken_9A108C3B42312804BEA9428C8599C9CF
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      FirebaseToken                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnRefreshFirebaseToken_9A108C3B42312804BEA9428C8599C9CF(const class FString& FirebaseToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnRefreshFirebaseToken_9A108C3B42312804BEA9428C8599C9CF"));
		
		USolarGameInstance_C_OnRefreshFirebaseToken_9A108C3B42312804BEA9428C8599C9CF_Params params {};
		params.FirebaseToken = FirebaseToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnClearCommunityRedhint_F451C2F543D97010E5E74ABC300BDAD7
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      ResultStr                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnClearCommunityRedhint_F451C2F543D97010E5E74ABC300BDAD7(const class FString& ResultStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnClearCommunityRedhint_F451C2F543D97010E5E74ABC300BDAD7"));
		
		USolarGameInstance_C_OnClearCommunityRedhint_F451C2F543D97010E5E74ABC300BDAD7_Params params {};
		params.ResultStr = ResultStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnGetCommunityRedhint_1CFCCD694AFB0863B5AA2DA58A7A5438
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      ResultStr                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnGetCommunityRedhint_1CFCCD694AFB0863B5AA2DA58A7A5438(const class FString& ResultStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnGetCommunityRedhint_1CFCCD694AFB0863B5AA2DA58A7A5438"));
		
		USolarGameInstance_C_OnGetCommunityRedhint_1CFCCD694AFB0863B5AA2DA58A7A5438_Params params {};
		params.ResultStr = ResultStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnExitCommunity_2AA21A3F4B6A616DD66B81B8D0F30411
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      ResultStr                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnExitCommunity_2AA21A3F4B6A616DD66B81B8D0F30411(const class FString& ResultStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnExitCommunity_2AA21A3F4B6A616DD66B81B8D0F30411"));
		
		USolarGameInstance_C_OnExitCommunity_2AA21A3F4B6A616DD66B81B8D0F30411_Params params {};
		params.ResultStr = ResultStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnInitCommunity_86E4353A455718B55238688022762428
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      ResultStr                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnInitCommunity_86E4353A455718B55238688022762428(const class FString& ResultStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnInitCommunity_86E4353A455718B55238688022762428"));
		
		USolarGameInstance_C_OnInitCommunity_86E4353A455718B55238688022762428_Params params {};
		params.ResultStr = ResultStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnQueryThirdPartyUserInfo_605571A44F0BA6528479E083DA805DDC
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSDKSocialUserInfo>                  SocialUserInfoList                                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnQueryThirdPartyUserInfo_605571A44F0BA6528479E083DA805DDC(bool Success, int32_t ErrorCode, TArray<struct FSDKSocialUserInfo> SocialUserInfoList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnQueryThirdPartyUserInfo_605571A44F0BA6528479E083DA805DDC"));
		
		USolarGameInstance_C_OnQueryThirdPartyUserInfo_605571A44F0BA6528479E083DA805DDC_Params params {};
		params.Success = Success;
		params.ErrorCode = ErrorCode;
		params.SocialUserInfoList = SocialUserInfoList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFailed_69E6F41D47598B88B83C99A9B5149D93
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		ELLHSDKLoginType                                   LoginType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnSwitchAccountFailed_69E6F41D47598B88B83C99A9B5149D93(ELLHSDKLoginType LoginType, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFailed_69E6F41D47598B88B83C99A9B5149D93"));
		
		USolarGameInstance_C_OnSwitchAccountFailed_69E6F41D47598B88B83C99A9B5149D93_Params params {};
		params.LoginType = LoginType;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFinish_232E4CFD403B946F6F967697FF624DC8
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      AppUid                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppToken                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKLoginType                                   LoginType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnSwitchAccountFinish_232E4CFD403B946F6F967697FF624DC8(const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFinish_232E4CFD403B946F6F967697FF624DC8"));
		
		USolarGameInstance_C_OnSwitchAccountFinish_232E4CFD403B946F6F967697FF624DC8_Params params {};
		params.AppUid = AppUid;
		params.AppToken = AppToken;
		params.LoginType = LoginType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnBindFinish_0B60F4FF4A403899BF1D68BC9E5B065D
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppUid                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppToken                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELLHSDKLoginType                                   LoginType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnBindFinish_0B60F4FF4A403899BF1D68BC9E5B065D(bool bSuccess, const class FString& AppUid, const class FString& AppToken, ELLHSDKLoginType LoginType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnBindFinish_0B60F4FF4A403899BF1D68BC9E5B065D"));
		
		USolarGameInstance_C_OnBindFinish_0B60F4FF4A403899BF1D68BC9E5B065D_Params params {};
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
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamSDKPayApplied_E35970B2450F0863FE69978BF59CFFAA
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnLSteamSDKPayApplied_E35970B2450F0863FE69978BF59CFFAA(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamSDKPayApplied_E35970B2450F0863FE69978BF59CFFAA"));
		
		USolarGameInstance_C_OnLSteamSDKPayApplied_E35970B2450F0863FE69978BF59CFFAA_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamQuerySkus_33F1689F482FDD9C6B2A1BA7881C7002
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class FString                                      Datas                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolarGameInstance_C::OnLSteamQuerySkus_33F1689F482FDD9C6B2A1BA7881C7002(const class FString& Datas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamQuerySkus_33F1689F482FDD9C6B2A1BA7881C7002"));
		
		USolarGameInstance_C_OnLSteamQuerySkus_33F1689F482FDD9C6B2A1BA7881C7002_Params params {};
		params.Datas = Datas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x02D64A40
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x02D64A40
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x02D64A40
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x00B6A060
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
	 * 		RVA    -> 0x02D64A40
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
	 * 		RVA    -> 0x02D64A40
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
	 * 		RVA    -> 0x02D64A40
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
	 * 		RVA    -> 0x02D64A40
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



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SolarGameInstance.SolarGameInstance_C
// (None)

class UClass* USolarGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarGameInstance_C");

	return Clss;
}


// SolarGameInstance_C SolarGameInstance.Default__SolarGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USolarGameInstance_C* USolarGameInstance_C::GetDefaultObj()
{
	static class USolarGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarGameInstance_C*>(USolarGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnRefreshFirebaseToken_D26330CF4A5C97D39ED4019104AB1CED
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      FirebaseToken                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::OnRefreshFirebaseToken_D26330CF4A5C97D39ED4019104AB1CED(const class FString& FirebaseToken)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnRefreshFirebaseToken_D26330CF4A5C97D39ED4019104AB1CED");

	Params::USolarGameInstance_C_OnRefreshFirebaseToken_D26330CF4A5C97D39ED4019104AB1CED_Params Parms{};

	Parms.FirebaseToken = FirebaseToken;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnClearCommunityRedhint_CA7AD73F4695A3CA84A8B1A4B37BDBE3
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      ResultStr                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::OnClearCommunityRedhint_CA7AD73F4695A3CA84A8B1A4B37BDBE3(const class FString& ResultStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnClearCommunityRedhint_CA7AD73F4695A3CA84A8B1A4B37BDBE3");

	Params::USolarGameInstance_C_OnClearCommunityRedhint_CA7AD73F4695A3CA84A8B1A4B37BDBE3_Params Parms{};

	Parms.ResultStr = ResultStr;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnGetCommunityRedhint_29CA0E08465BB67B379E3C9372923A34
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      ResultStr                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::OnGetCommunityRedhint_29CA0E08465BB67B379E3C9372923A34(const class FString& ResultStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnGetCommunityRedhint_29CA0E08465BB67B379E3C9372923A34");

	Params::USolarGameInstance_C_OnGetCommunityRedhint_29CA0E08465BB67B379E3C9372923A34_Params Parms{};

	Parms.ResultStr = ResultStr;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnExitCommunity_97313330486EFD85E3699EA253488B31
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      ResultStr                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::OnExitCommunity_97313330486EFD85E3699EA253488B31(const class FString& ResultStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnExitCommunity_97313330486EFD85E3699EA253488B31");

	Params::USolarGameInstance_C_OnExitCommunity_97313330486EFD85E3699EA253488B31_Params Parms{};

	Parms.ResultStr = ResultStr;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnInitCommunity_0DA9F6D14D84C412ACB88BB308FFEC66
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      ResultStr                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::OnInitCommunity_0DA9F6D14D84C412ACB88BB308FFEC66(const class FString& ResultStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnInitCommunity_0DA9F6D14D84C412ACB88BB308FFEC66");

	Params::USolarGameInstance_C_OnInitCommunity_0DA9F6D14D84C412ACB88BB308FFEC66_Params Parms{};

	Parms.ResultStr = ResultStr;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnQueryThirdPartyUserInfo_91CD94704EE345E09768829F654CA0D0
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               Success                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ErrorCode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSDKSocialUserInfo>  SocialUserInfoList                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::OnQueryThirdPartyUserInfo_91CD94704EE345E09768829F654CA0D0(bool Success, int32 ErrorCode, const TArray<struct FSDKSocialUserInfo>& SocialUserInfoList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnQueryThirdPartyUserInfo_91CD94704EE345E09768829F654CA0D0");

	Params::USolarGameInstance_C_OnQueryThirdPartyUserInfo_91CD94704EE345E09768829F654CA0D0_Params Parms{};

	Parms.Success = Success;
	Parms.ErrorCode = ErrorCode;
	Parms.SocialUserInfoList = SocialUserInfoList;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFailed_91DC53B9427B177E164AD7B40100BFD9
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class ELLHSDKLoginType        LoginType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ErrorCode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::OnSwitchAccountFailed_91DC53B9427B177E164AD7B40100BFD9(enum class ELLHSDKLoginType LoginType, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnSwitchAccountFailed_91DC53B9427B177E164AD7B40100BFD9");

	Params::USolarGameInstance_C_OnSwitchAccountFailed_91DC53B9427B177E164AD7B40100BFD9_Params Parms{};

	Parms.LoginType = LoginType;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFinish_E3ED595249623D73F22AE8A7EB1D871F
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      AppUid                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AppToken                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELLHSDKLoginType        LoginType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::OnSwitchAccountFinish_E3ED595249623D73F22AE8A7EB1D871F(const class FString& AppUid, const class FString& AppToken, enum class ELLHSDKLoginType LoginType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnSwitchAccountFinish_E3ED595249623D73F22AE8A7EB1D871F");

	Params::USolarGameInstance_C_OnSwitchAccountFinish_E3ED595249623D73F22AE8A7EB1D871F_Params Parms{};

	Parms.AppUid = AppUid;
	Parms.AppToken = AppToken;
	Parms.LoginType = LoginType;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnBindFinish_D15B146942898A4B0ABC16A3D3467930
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      AppUid                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AppToken                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELLHSDKLoginType        LoginType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::OnBindFinish_D15B146942898A4B0ABC16A3D3467930(bool bSuccess, const class FString& AppUid, const class FString& AppToken, enum class ELLHSDKLoginType LoginType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnBindFinish_D15B146942898A4B0ABC16A3D3467930");

	Params::USolarGameInstance_C_OnBindFinish_D15B146942898A4B0ABC16A3D3467930_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.AppUid = AppUid;
	Parms.AppToken = AppToken;
	Parms.LoginType = LoginType;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamSDKPayApplied_3EFCFFBD4B3473EEF02CA1B667556C6D
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      Datas                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::OnLSteamSDKPayApplied_3EFCFFBD4B3473EEF02CA1B667556C6D(const class FString& Datas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnLSteamSDKPayApplied_3EFCFFBD4B3473EEF02CA1B667556C6D");

	Params::USolarGameInstance_C_OnLSteamSDKPayApplied_3EFCFFBD4B3473EEF02CA1B667556C6D_Params Parms{};

	Parms.Datas = Datas;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamQuerySkus_F2AB076C4AEA7BD472FBA18C46F5F4D1
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      Datas                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::OnLSteamQuerySkus_F2AB076C4AEA7BD472FBA18C46F5F4D1(const class FString& Datas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnLSteamQuerySkus_F2AB076C4AEA7BD472FBA18C46F5F4D1");

	Params::USolarGameInstance_C_OnLSteamQuerySkus_F2AB076C4AEA7BD472FBA18C46F5F4D1_Params Parms{};

	Parms.Datas = Datas;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SolarGameInstance.SolarGameInstance_C.GoHomeLuaCall
// (Event, Public, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::GoHomeLuaCall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "GoHomeLuaCall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddWeaponExpLua
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Weaponid                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::SolarGM_AddWeaponExpLua(int32 Weaponid, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "SolarGM_AddWeaponExpLua");

	Params::USolarGameInstance_C_SolarGM_AddWeaponExpLua_Params Parms{};

	Parms.Weaponid = Weaponid;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SolarGameInstance.SolarGameInstance_C.ExecuteBackKeyLuaCall
// (Event, Public, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::ExecuteBackKeyLuaCall()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "ExecuteBackKeyLuaCall");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.ShutDownPCSDK
// (Event, Protected, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::ShutDownPCSDK()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "ShutDownPCSDK");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.CheckSavedDirFiles
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FString>              Files                                                            (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::CheckSavedDirFiles(TArray<class FString>* Files)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "CheckSavedDirFiles");

	Params::USolarGameInstance_C_CheckSavedDirFiles_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Files != nullptr)
		*Files = std::move(Parms.Files);

}


// Function SolarGameInstance.SolarGameInstance_C.LuaStartGameFrameWork
// (Event, Protected, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::LuaStartGameFrameWork()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "LuaStartGameFrameWork");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.LuaInitGameFrameWork
// (Event, Protected, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::LuaInitGameFrameWork()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "LuaInitGameFrameWork");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddItemLua
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              ItemID                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::SolarGM_AddItemLua(int32 ItemID, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "SolarGM_AddItemLua");

	Params::USolarGameInstance_C_SolarGM_AddItemLua_Params Parms{};

	Parms.ItemID = ItemID;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroNameCopy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SolarPlayerID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      BroadcastPlayerName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void USolarGameInstance_C::LuaGetBroadcastHeroNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "LuaGetBroadcastHeroNameCopy");

	Params::USolarGameInstance_C_LuaGetBroadcastHeroNameCopy_Params Parms{};

	Parms.SolarPlayerID = SolarPlayerID;

	UObject::ProcessEvent(Func, &Parms);

	if (BroadcastPlayerName != nullptr)
		*BroadcastPlayerName = std::move(Parms.BroadcastPlayerName);

}


// Function SolarGameInstance.SolarGameInstance_C.ExecuteChangeAudioModeLuaCall
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bTurnOn                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void USolarGameInstance_C::ExecuteChangeAudioModeLuaCall(bool bTurnOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "ExecuteChangeAudioModeLuaCall");

	Params::USolarGameInstance_C_ExecuteChangeAudioModeLuaCall_Params Parms{};

	Parms.bTurnOn = bTurnOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SolarGameInstance.SolarGameInstance_C.OnDisconnect
// (Event, Public, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::OnDisconnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnDisconnect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerNameCopy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SolarPlayerID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      BroadcastPlayerName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void USolarGameInstance_C::LuaGetBroadcastPlayerNameCopy(const class FString& SolarPlayerID, class FString* BroadcastPlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "LuaGetBroadcastPlayerNameCopy");

	Params::USolarGameInstance_C_LuaGetBroadcastPlayerNameCopy_Params Parms{};

	Parms.SolarPlayerID = SolarPlayerID;

	UObject::ProcessEvent(Func, &Parms);

	if (BroadcastPlayerName != nullptr)
		*BroadcastPlayerName = std::move(Parms.BroadcastPlayerName);

}


// Function SolarGameInstance.SolarGameInstance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ENetworkFailure         FailureType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsServer                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void USolarGameInstance_C::HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "HandleNetworkError");

	Params::USolarGameInstance_C_HandleNetworkError_Params Parms{};

	Parms.FailureType = FailureType;
	Parms.bIsServer = bIsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SolarGameInstance.SolarGameInstance_C.InitLuaClasses
// (Event, Protected, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::InitLuaClasses()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "InitLuaClasses");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.ShutdownAnoSDK
// (Event, Protected, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::ShutdownAnoSDK()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "ShutdownAnoSDK");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.OnScopeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EScope                  InLastScope                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EScope                  InCurScope                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::OnScopeChanged(enum class EScope InLastScope, enum class EScope InCurScope)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnScopeChanged");

	Params::USolarGameInstance_C_OnScopeChanged_Params Parms{};

	Parms.InLastScope = InLastScope;
	Parms.InCurScope = InCurScope;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SolarGameInstance.SolarGameInstance_C.ReceiveShutdown
// (Event, Public, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::ReceiveShutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "ReceiveShutdown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.SolarGM_TransmitGMLua
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              GmArray                                                          (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::SolarGM_TransmitGMLua(const class FString& PlayerName, TArray<class FString>& GmArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "SolarGM_TransmitGMLua");

	Params::USolarGameInstance_C_SolarGM_TransmitGMLua_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.GmArray = GmArray;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SolarGameInstance.SolarGameInstance_C.ReportLoadingInfoToBI
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FString>              LoadingInfo                                                      (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LoadingTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsFinished                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void USolarGameInstance_C::ReportLoadingInfoToBI(TArray<class FString>* LoadingInfo, float LoadingTime, bool bIsFinished)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "ReportLoadingInfoToBI");

	Params::USolarGameInstance_C_ReportLoadingInfoToBI_Params Parms{};

	Parms.LoadingTime = LoadingTime;
	Parms.bIsFinished = bIsFinished;

	UObject::ProcessEvent(Func, &Parms);

	if (LoadingInfo != nullptr)
		*LoadingInfo = std::move(Parms.LoadingInfo);

}


// Function SolarGameInstance.SolarGameInstance_C.SolarGM_LobbyLua
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FString                      CmdName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Params                                                           (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USolarGameInstance_C::SolarGM_LobbyLua(const class FString& CmdName, TArray<class FString>& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "SolarGM_LobbyLua");

	Params::USolarGameInstance_C_SolarGM_LobbyLua_Params Parms{};

	Parms.CmdName = CmdName;
	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SolarGameInstance.SolarGameInstance_C.ShutDownLimSdk
// (Event, Protected, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::ShutDownLimSdk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "ShutDownLimSdk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.RegisterNetworkManager
// (Event, Protected, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::RegisterNetworkManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "RegisterNetworkManager");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.LuaOnBroadcastModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::LuaOnBroadcastModeChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "LuaOnBroadcastModeChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SolarPlayerID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      BroadcastPlayerName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void USolarGameInstance_C::LuaGetBroadcastPlayerName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "LuaGetBroadcastPlayerName");

	Params::USolarGameInstance_C_LuaGetBroadcastPlayerName_Params Parms{};

	Parms.SolarPlayerID = SolarPlayerID;

	UObject::ProcessEvent(Func, &Parms);

	if (BroadcastPlayerName != nullptr)
		*BroadcastPlayerName = std::move(Parms.BroadcastPlayerName);

}


// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SolarPlayerID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      BroadcastPlayerName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void USolarGameInstance_C::LuaGetBroadcastHeroName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "LuaGetBroadcastHeroName");

	Params::USolarGameInstance_C_LuaGetBroadcastHeroName_Params Parms{};

	Parms.SolarPlayerID = SolarPlayerID;

	UObject::ProcessEvent(Func, &Parms);

	if (BroadcastPlayerName != nullptr)
		*BroadcastPlayerName = std::move(Parms.BroadcastPlayerName);

}


// Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestCrashWithBP
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::SolarGM_TestCrashWithBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "SolarGM_TestCrashWithBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.SolarGM_TestEnsureMsgWithBP
// (Exec, Event, Public, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::SolarGM_TestEnsureMsgWithBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "SolarGM_TestEnsureMsgWithBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SolarGameInstance.SolarGameInstance_C.ExecuteUbergraph_SolarGameInstance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USolarGameInstance_C::ExecuteUbergraph_SolarGameInstance(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "ExecuteUbergraph_SolarGameInstance");

	Params::USolarGameInstance_C_ExecuteUbergraph_SolarGameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SolarGameInstance.SolarGameInstance_C.OnBroadcastModeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void USolarGameInstance_C::OnBroadcastModeChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarGameInstance_C", "OnBroadcastModeChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



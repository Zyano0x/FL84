#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LLHSDK.LLHSDKAppUtils
// (None)

class UClass* ULLHSDKAppUtils::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LLHSDKAppUtils");

	return Clss;
}


// LLHSDKAppUtils LLHSDK.Default__LLHSDKAppUtils
// (Public, ClassDefaultObject, ArchetypeObject)

class ULLHSDKAppUtils* ULLHSDKAppUtils::GetDefaultObj()
{
	static class ULLHSDKAppUtils* Default = nullptr;

	if (!Default)
		Default = static_cast<ULLHSDKAppUtils*>(ULLHSDKAppUtils::StaticClass()->DefaultObject);

	return Default;
}


// Function LLHSDK.LLHSDKAppUtils.SDKConfigIsMultiDetect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKAppUtils::SDKConfigIsMultiDetect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "SDKConfigIsMultiDetect");

	Params::ULLHSDKAppUtils_SDKConfigIsMultiDetect_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.SDKConfigIsDebug
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKAppUtils::SDKConfigIsDebug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "SDKConfigIsDebug");

	Params::ULLHSDKAppUtils_SDKConfigIsDebug_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction LLHSDK.LLHSDKAppUtils.OnSteamUserStatesUpdate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      SteamId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsFriend                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Online                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FriendName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKAppUtils::OnSteamUserStatesUpdate__DelegateSignature(const class FString& SteamId, bool IsFriend, bool Online, const class FString& FriendName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "OnSteamUserStatesUpdate__DelegateSignature");

	Params::ULLHSDKAppUtils_OnSteamUserStatesUpdate__DelegateSignature_Params Parms{};

	Parms.SteamId = SteamId;
	Parms.IsFriend = IsFriend;
	Parms.Online = Online;
	Parms.FriendName = FriendName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LLHSDK.LLHSDKAppUtils.IsSteamFriendOnline
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SteamId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKAppUtils::IsSteamFriendOnline(const class FString& SteamId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "IsSteamFriendOnline");

	Params::ULLHSDKAppUtils_IsSteamFriendOnline_Params Parms{};

	Parms.SteamId = SteamId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.IsSimulator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKAppUtils::IsSimulator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "IsSimulator");

	Params::ULLHSDKAppUtils_IsSimulator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.IsPackageInstalled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InPackageName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKAppUtils::IsPackageInstalled(const class FString& InPackageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "IsPackageInstalled");

	Params::ULLHSDKAppUtils_IsPackageInstalled_Params Parms{};

	Parms.InPackageName = InPackageName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.IsGrayRelease
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKAppUtils::IsGrayRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "IsGrayRelease");

	Params::ULLHSDKAppUtils_IsGrayRelease_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.InviteSteamUserToGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SteamId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKAppUtils::InviteSteamUserToGame(const class FString& SteamId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "InviteSteamUserToGame");

	Params::ULLHSDKAppUtils_InviteSteamUserToGame_Params Parms{};

	Parms.SteamId = SteamId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetVersionName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetVersionName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetVersionName");

	Params::ULLHSDKAppUtils_GetVersionName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetVersionCode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetVersionCode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetVersionCode");

	Params::ULLHSDKAppUtils_GetVersionCode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetSteamFriendsOnlineList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<bool>                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<bool> ULLHSDKAppUtils::GetSteamFriendsOnlineList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetSteamFriendsOnlineList");

	Params::ULLHSDKAppUtils_GetSteamFriendsOnlineList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetSteamFriendsNameList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> ULLHSDKAppUtils::GetSteamFriendsNameList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetSteamFriendsNameList");

	Params::ULLHSDKAppUtils_GetSteamFriendsNameList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetSteamFriendName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SteamId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetSteamFriendName(const class FString& SteamId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetSteamFriendName");

	Params::ULLHSDKAppUtils_GetSteamFriendName_Params Parms{};

	Parms.SteamId = SteamId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetSteamFriendIDList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> ULLHSDKAppUtils::GetSteamFriendIDList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetSteamFriendIDList");

	Params::ULLHSDKAppUtils_GetSteamFriendIDList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetSteamFriendCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULLHSDKAppUtils::GetSteamFriendCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetSteamFriendCount");

	Params::ULLHSDKAppUtils_GetSteamFriendCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetSDKVersionName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetSDKVersionName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetSDKVersionName");

	Params::ULLHSDKAppUtils_GetSDKVersionName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetSDKVersionCode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetSDKVersionCode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetSDKVersionCode");

	Params::ULLHSDKAppUtils_GetSDKVersionCode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetRunningProcessName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetRunningProcessName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetRunningProcessName");

	Params::ULLHSDKAppUtils_GetRunningProcessName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetOperatingSystemId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetOperatingSystemId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetOperatingSystemId");

	Params::ULLHSDKAppUtils_GetOperatingSystemId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULLHSDKAppUtils*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULLHSDKAppUtils* ULLHSDKAppUtils::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetInstance");

	Params::ULLHSDKAppUtils_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetGameTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 ULLHSDKAppUtils::GetGameTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetGameTime");

	Params::ULLHSDKAppUtils_GetGameTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetGameID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetGameID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetGameID");

	Params::ULLHSDKAppUtils_GetGameID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetEnvId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetEnvId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetEnvId");

	Params::ULLHSDKAppUtils_GetEnvId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetDeviceUUID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetDeviceUUID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetDeviceUUID");

	Params::ULLHSDKAppUtils_GetDeviceUUID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetChannelID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetChannelID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetChannelID");

	Params::ULLHSDKAppUtils_GetChannelID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetBiosUUID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetBiosUUID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetBiosUUID");

	Params::ULLHSDKAppUtils_GetBiosUUID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetAppName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetAppName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetAppName");

	Params::ULLHSDKAppUtils_GetAppName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetAppIDRaw
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetAppIDRaw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetAppIDRaw");

	Params::ULLHSDKAppUtils_GetAppIDRaw_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.GetAppID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKAppUtils::GetAppID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "GetAppID");

	Params::ULLHSDKAppUtils_GetAppID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKAppUtils.DestoryInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKAppUtils::DestoryInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "DestoryInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKAppUtils.BindOnlineSubsystemSteamPresence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKAppUtils::BindOnlineSubsystemSteamPresence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKAppUtils", "BindOnlineSubsystemSteamPresence");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class LLHSDK.LLHSDKCommunity
// (None)

class UClass* ULLHSDKCommunity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LLHSDKCommunity");

	return Clss;
}


// LLHSDKCommunity LLHSDK.Default__LLHSDKCommunity
// (Public, ClassDefaultObject, ArchetypeObject)

class ULLHSDKCommunity* ULLHSDKCommunity::GetDefaultObj()
{
	static class ULLHSDKCommunity* Default = nullptr;

	if (!Default)
		Default = static_cast<ULLHSDKCommunity*>(ULLHSDKCommunity::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction LLHSDK.LLHSDKCommunity.OnInitCommunity__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      ResultStr                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKCommunity::OnInitCommunity__DelegateSignature(const class FString& ResultStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCommunity", "OnInitCommunity__DelegateSignature");

	Params::ULLHSDKCommunity_OnInitCommunity__DelegateSignature_Params Parms{};

	Parms.ResultStr = ResultStr;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKCommunity.OnImageDownload__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKCommunity::OnImageDownload__DelegateSignature(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCommunity", "OnImageDownload__DelegateSignature");

	Params::ULLHSDKCommunity_OnImageDownload__DelegateSignature_Params Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKCommunity.OnGetCommunityRedhint__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      ResultStr                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKCommunity::OnGetCommunityRedhint__DelegateSignature(const class FString& ResultStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCommunity", "OnGetCommunityRedhint__DelegateSignature");

	Params::ULLHSDKCommunity_OnGetCommunityRedhint__DelegateSignature_Params Parms{};

	Parms.ResultStr = ResultStr;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKCommunity.OnExitCommunity__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      ResultStr                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKCommunity::OnExitCommunity__DelegateSignature(const class FString& ResultStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCommunity", "OnExitCommunity__DelegateSignature");

	Params::ULLHSDKCommunity_OnExitCommunity__DelegateSignature_Params Parms{};

	Parms.ResultStr = ResultStr;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKCommunity.OnClearCommunityRedhint__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      ResultStr                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKCommunity::OnClearCommunityRedhint__DelegateSignature(const class FString& ResultStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCommunity", "OnClearCommunityRedhint__DelegateSignature");

	Params::ULLHSDKCommunity_OnClearCommunityRedhint__DelegateSignature_Params Parms{};

	Parms.ResultStr = ResultStr;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LLHSDK.LLHSDKCommunity.InitCommunityConfig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      UrlInfo                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReqMethod                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExtraHttpParams                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKCommunity::InitCommunityConfig(const class FString& UrlInfo, const class FString& ReqMethod, const class FString& ExtraHttpParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCommunity", "InitCommunityConfig");

	Params::ULLHSDKCommunity_InitCommunityConfig_Params Parms{};

	Parms.UrlInfo = UrlInfo;
	Parms.ReqMethod = ReqMethod;
	Parms.ExtraHttpParams = ExtraHttpParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKCommunity.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULLHSDKCommunity*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULLHSDKCommunity* ULLHSDKCommunity::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCommunity", "GetInstance");

	Params::ULLHSDKCommunity_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKCommunity.GetCommunityRedHint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReqMethod                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExtraHttpParams                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKCommunity::GetCommunityRedHint(const class FString& URL, const class FString& ReqMethod, const class FString& ExtraHttpParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCommunity", "GetCommunityRedHint");

	Params::ULLHSDKCommunity_GetCommunityRedHint_Params Parms{};

	Parms.URL = URL;
	Parms.ReqMethod = ReqMethod;
	Parms.ExtraHttpParams = ExtraHttpParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKCommunity.ExitCommunity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReqMethod                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExtraHttpParams                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKCommunity::ExitCommunity(const class FString& URL, const class FString& ReqMethod, const class FString& ExtraHttpParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCommunity", "ExitCommunity");

	Params::ULLHSDKCommunity_ExitCommunity_Params Parms{};

	Parms.URL = URL;
	Parms.ReqMethod = ReqMethod;
	Parms.ExtraHttpParams = ExtraHttpParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKCommunity.DownloadImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKCommunity::DownloadImage(const class FString& URL, const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCommunity", "DownloadImage");

	Params::ULLHSDKCommunity_DownloadImage_Params Parms{};

	Parms.URL = URL;
	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKCommunity.DestoryInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKCommunity::DestoryInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCommunity", "DestoryInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKCommunity.ClearCommunityRedHint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReqMethod                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExtraHttpParams                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKCommunity::ClearCommunityRedHint(const class FString& URL, const class FString& ReqMethod, const class FString& ExtraHttpParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCommunity", "ClearCommunityRedHint");

	Params::ULLHSDKCommunity_ClearCommunityRedHint_Params Parms{};

	Parms.URL = URL;
	Parms.ReqMethod = ReqMethod;
	Parms.ExtraHttpParams = ExtraHttpParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LLHSDK.LLHSDKCustomerService
// (None)

class UClass* ULLHSDKCustomerService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LLHSDKCustomerService");

	return Clss;
}


// LLHSDKCustomerService LLHSDK.Default__LLHSDKCustomerService
// (Public, ClassDefaultObject, ArchetypeObject)

class ULLHSDKCustomerService* ULLHSDKCustomerService::GetDefaultObj()
{
	static class ULLHSDKCustomerService* Default = nullptr;

	if (!Default)
		Default = static_cast<ULLHSDKCustomerService*>(ULLHSDKCustomerService::StaticClass()->DefaultObject);

	return Default;
}


// Function LLHSDK.LLHSDKCustomerService.ShowCustomerServicePage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ExtInfoStr                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKCustomerService::ShowCustomerServicePage(const class FString& ExtInfoStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCustomerService", "ShowCustomerServicePage");

	Params::ULLHSDKCustomerService_ShowCustomerServicePage_Params Parms{};

	Parms.ExtInfoStr = ExtInfoStr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKCustomerService.SetCustomerServiceDebug
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bIsPspDebug                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PlayerId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ServerId                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKCustomerService::SetCustomerServiceDebug(bool& bIsPspDebug, const class FString& PlayerId, int64 ServerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCustomerService", "SetCustomerServiceDebug");

	Params::ULLHSDKCustomerService_SetCustomerServiceDebug_Params Parms{};

	Parms.bIsPspDebug = bIsPspDebug;
	Parms.PlayerId = PlayerId;
	Parms.ServerId = ServerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LLHSDK.LLHSDKCustomerService.OnReceiveNotification__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              NotificationType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKCustomerService::OnReceiveNotification__DelegateSignature(int32 NotificationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCustomerService", "OnReceiveNotification__DelegateSignature");

	Params::ULLHSDKCustomerService_OnReceiveNotification__DelegateSignature_Params Parms{};

	Parms.NotificationType = NotificationType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LLHSDK.LLHSDKCustomerService.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULLHSDKCustomerService*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULLHSDKCustomerService* ULLHSDKCustomerService::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCustomerService", "GetInstance");

	Params::ULLHSDKCustomerService_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKCustomerService.DestoryInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKCustomerService::DestoryInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKCustomerService", "DestoryInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class LLHSDK.LLHSDKDeviceUtils
// (None)

class UClass* ULLHSDKDeviceUtils::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LLHSDKDeviceUtils");

	return Clss;
}


// LLHSDKDeviceUtils LLHSDK.Default__LLHSDKDeviceUtils
// (Public, ClassDefaultObject, ArchetypeObject)

class ULLHSDKDeviceUtils* ULLHSDKDeviceUtils::GetDefaultObj()
{
	static class ULLHSDKDeviceUtils* Default = nullptr;

	if (!Default)
		Default = static_cast<ULLHSDKDeviceUtils*>(ULLHSDKDeviceUtils::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction LLHSDK.LLHSDKDeviceUtils.OnGoogleAdID__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      GoogleAdID                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKDeviceUtils::OnGoogleAdID__DelegateSignature(const class FString& GoogleAdID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "OnGoogleAdID__DelegateSignature");

	Params::ULLHSDKDeviceUtils_OnGoogleAdID__DelegateSignature_Params Parms{};

	Parms.GoogleAdID = GoogleAdID;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKDeviceUtils.OnDeviceScore__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              DeviceScore                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKDeviceUtils::OnDeviceScore__DelegateSignature(int32 DeviceScore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "OnDeviceScore__DelegateSignature");

	Params::ULLHSDKDeviceUtils_OnDeviceScore__DelegateSignature_Params Parms{};

	Parms.DeviceScore = DeviceScore;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LLHSDK.LLHSDKDeviceUtils.IsEmulator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKDeviceUtils::IsEmulator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "IsEmulator");

	Params::ULLHSDKDeviceUtils_IsEmulator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetTotalRAM
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetTotalRAM()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetTotalRAM");

	Params::ULLHSDKDeviceUtils_GetTotalRAM_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetTotalMemorySize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetTotalMemorySize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetTotalMemorySize");

	Params::ULLHSDKDeviceUtils_GetTotalMemorySize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetTimezoneName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetTimezoneName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetTimezoneName");

	Params::ULLHSDKDeviceUtils_GetTimezoneName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetOSVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetOSVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetOSVersion");

	Params::ULLHSDKDeviceUtils_GetOSVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetNetworkTypeEnum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELLHSDKNetworkType      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ELLHSDKNetworkType ULLHSDKDeviceUtils::GetNetworkTypeEnum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetNetworkTypeEnum");

	Params::ULLHSDKDeviceUtils_GetNetworkTypeEnum_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetNetworkType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetNetworkType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetNetworkType");

	Params::ULLHSDKDeviceUtils_GetNetworkType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetMacAddress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetMacAddress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetMacAddress");

	Params::ULLHSDKDeviceUtils_GetMacAddress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULLHSDKDeviceUtils*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULLHSDKDeviceUtils* ULLHSDKDeviceUtils::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetInstance");

	Params::ULLHSDKDeviceUtils_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetIMSI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetIMSI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetIMSI");

	Params::ULLHSDKDeviceUtils_GetIMSI_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetIDFA
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetIDFA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetIDFA");

	Params::ULLHSDKDeviceUtils_GetIDFA_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetGoogleAdID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKDeviceUtils::GetGoogleAdID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetGoogleAdID");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetDisplayMetrics
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<float> ULLHSDKDeviceUtils::GetDisplayMetrics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetDisplayMetrics");

	Params::ULLHSDKDeviceUtils_GetDisplayMetrics_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetDisplayCutout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<float> ULLHSDKDeviceUtils::GetDisplayCutout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetDisplayCutout");

	Params::ULLHSDKDeviceUtils_GetDisplayCutout_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetDeviceType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetDeviceType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetDeviceType");

	Params::ULLHSDKDeviceUtils_GetDeviceType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetDeviceScore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKDeviceUtils::GetDeviceScore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetDeviceScore");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetDeviceModel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetDeviceModel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetDeviceModel");

	Params::ULLHSDKDeviceUtils_GetDeviceModel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetDeviceID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetDeviceID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetDeviceID");

	Params::ULLHSDKDeviceUtils_GetDeviceID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetDeviceCarrier
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetDeviceCarrier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetDeviceCarrier");

	Params::ULLHSDKDeviceUtils_GetDeviceCarrier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetDeviceBrand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetDeviceBrand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetDeviceBrand");

	Params::ULLHSDKDeviceUtils_GetDeviceBrand_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetDeviceAbi
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetDeviceAbi()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetDeviceAbi");

	Params::ULLHSDKDeviceUtils_GetDeviceAbi_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetCPUModel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetCPUModel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetCPUModel");

	Params::ULLHSDKDeviceUtils_GetCPUModel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetCPUHardWareName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetCPUHardWareName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetCPUHardWareName");

	Params::ULLHSDKDeviceUtils_GetCPUHardWareName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetAvailableRAM
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetAvailableRAM()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetAvailableRAM");

	Params::ULLHSDKDeviceUtils_GetAvailableRAM_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.GetAndroidID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKDeviceUtils::GetAndroidID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "GetAndroidID");

	Params::ULLHSDKDeviceUtils_GetAndroidID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKDeviceUtils.DestoryInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKDeviceUtils::DestoryInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKDeviceUtils", "DestoryInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class LLHSDK.LLHSDKLocalization
// (None)

class UClass* ULLHSDKLocalization::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LLHSDKLocalization");

	return Clss;
}


// LLHSDKLocalization LLHSDK.Default__LLHSDKLocalization
// (Public, ClassDefaultObject, ArchetypeObject)

class ULLHSDKLocalization* ULLHSDKLocalization::GetDefaultObj()
{
	static class ULLHSDKLocalization* Default = nullptr;

	if (!Default)
		Default = static_cast<ULLHSDKLocalization*>(ULLHSDKLocalization::StaticClass()->DefaultObject);

	return Default;
}


// Function LLHSDK.LLHSDKLocalization.SetLocaleName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InLocale                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKLocalization::SetLocaleName(const class FString& InLocale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLocalization", "SetLocaleName");

	Params::ULLHSDKLocalization_SetLocaleName_Params Parms{};

	Parms.InLocale = InLocale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKLocalization.SetLocale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELLHSDKSupportedLanguageInLocale                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKLocalization::SetLocale(enum class ELLHSDKSupportedLanguage InLocale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLocalization", "SetLocale");

	Params::ULLHSDKLocalization_SetLocale_Params Parms{};

	Parms.InLocale = InLocale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKLocalization.GetLocaleName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKLocalization::GetLocaleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLocalization", "GetLocaleName");

	Params::ULLHSDKLocalization_GetLocaleName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLocalization.GetLocaleInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLLHSDKLocaleInfo           ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLLHSDKLocaleInfo ULLHSDKLocalization::GetLocaleInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLocalization", "GetLocaleInfo");

	Params::ULLHSDKLocalization_GetLocaleInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLocalization.GetLocaleEnum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELLHSDKSupportedLanguageReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ELLHSDKSupportedLanguage ULLHSDKLocalization::GetLocaleEnum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLocalization", "GetLocaleEnum");

	Params::ULLHSDKLocalization_GetLocaleEnum_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLocalization.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULLHSDKLocalization*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULLHSDKLocalization* ULLHSDKLocalization::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLocalization", "GetInstance");

	Params::ULLHSDKLocalization_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLocalization.DestoryInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKLocalization::DestoryInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLocalization", "DestoryInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class LLHSDK.LLHSDKLogin
// (None)

class UClass* ULLHSDKLogin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LLHSDKLogin");

	return Clss;
}


// LLHSDKLogin LLHSDK.Default__LLHSDKLogin
// (Public, ClassDefaultObject, ArchetypeObject)

class ULLHSDKLogin* ULLHSDKLogin::GetDefaultObj()
{
	static class ULLHSDKLogin* Default = nullptr;

	if (!Default)
		Default = static_cast<ULLHSDKLogin*>(ULLHSDKLogin::StaticClass()->DefaultObject);

	return Default;
}


// Function LLHSDK.LLHSDKLogin.UpdateSteamCallBack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKLogin::UpdateSteamCallBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "UpdateSteamCallBack");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKLogin.SwitchOrLinkAccount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKLogin::SwitchOrLinkAccount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "SwitchOrLinkAccount");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKLogin.SteamRegister
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKLogin::SteamRegister(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "SteamRegister");

	Params::ULLHSDKLogin_SteamRegister_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.SteamLoginResultSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKLogin::SteamLoginResultSet(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "SteamLoginResultSet");

	Params::ULLHSDKLogin_SteamLoginResultSet_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.SteamGetAccountInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKLogin::SteamGetAccountInfo(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "SteamGetAccountInfo");

	Params::ULLHSDKLogin_SteamGetAccountInfo_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.SteamFree
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKLogin::SteamFree()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "SteamFree");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKLogin.SteamBindUrlGet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKLogin::SteamBindUrlGet(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "SteamBindUrlGet");

	Params::ULLHSDKLogin_SteamBindUrlGet_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.SteamAutoLogin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKLogin::SteamAutoLogin(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "SteamAutoLogin");

	Params::ULLHSDKLogin_SteamAutoLogin_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.ShowProtocolViewV2Ok
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKLogin::ShowProtocolViewV2Ok()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "ShowProtocolViewV2Ok");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKLogin.ShowProtocolViewV2Confirm
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKLogin::ShowProtocolViewV2Confirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "ShowProtocolViewV2Confirm");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKLogin.SetLimPCSDKLogHandler
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULLHSDKLogin::SetLimPCSDKLogHandler()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "SetLimPCSDKLogHandler");

	Params::ULLHSDKLogin_SetLimPCSDKLogHandler_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.SetLimPCSDKEventHandler
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULLHSDKLogin::SetLimPCSDKEventHandler()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "SetLimPCSDKEventHandler");

	Params::ULLHSDKLogin_SetLimPCSDKEventHandler_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.SetLimPCAlilogFieldsData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      LimPCAlilogFieldsStr                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKLogin::SetLimPCAlilogFieldsData(const class FString& LimPCAlilogFieldsStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "SetLimPCAlilogFieldsData");

	Params::ULLHSDKLogin_SetLimPCAlilogFieldsData_Params Parms{};

	Parms.LimPCAlilogFieldsStr = LimPCAlilogFieldsStr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKLogin.QueryCurrentUserInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLLHSDKLoginUserInfo        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLLHSDKLoginUserInfo ULLHSDKLogin::QueryCurrentUserInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "QueryCurrentUserInfo");

	Params::ULLHSDKLogin_QueryCurrentUserInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.QueryCurrentUser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLLHSDKLoginUser            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FLLHSDKLoginUser ULLHSDKLogin::QueryCurrentUser()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "QueryCurrentUser");

	Params::ULLHSDKLogin_QueryCurrentUser_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.OpenSteamBindPage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKLogin::OpenSteamBindPage(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "OpenSteamBindPage");

	Params::ULLHSDKLogin_OpenSteamBindPage_Params Parms{};

	Parms.URL = URL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.OpenLIMPCSwitchAccPage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULLHSDKLogin::OpenLIMPCSwitchAccPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "OpenLIMPCSwitchAccPage");

	Params::ULLHSDKLogin_OpenLIMPCSwitchAccPage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.OpenLIMPCAccountPage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULLHSDKLogin::OpenLIMPCAccountPage(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "OpenLIMPCAccountPage");

	Params::ULLHSDKLogin_OpenLIMPCAccountPage_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction LLHSDK.LLHSDKLogin.OnProtocolClick__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bConfirmed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKLogin::OnProtocolClick__DelegateSignature(bool bConfirmed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "OnProtocolClick__DelegateSignature");

	Params::ULLHSDKLogin_OnProtocolClick__DelegateSignature_Params Parms{};

	Parms.bConfirmed = bConfirmed;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKLogin.OnLoginFinish__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      AppUid                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AppToken                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELLHSDKLoginType        LoginType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKLogin::OnLoginFinish__DelegateSignature(const class FString& AppUid, const class FString& AppToken, enum class ELLHSDKLoginType LoginType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "OnLoginFinish__DelegateSignature");

	Params::ULLHSDKLogin_OnLoginFinish__DelegateSignature_Params Parms{};

	Parms.AppUid = AppUid;
	Parms.AppToken = AppToken;
	Parms.LoginType = LoginType;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKLogin.OnLoginFailed__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class ELLHSDKLoginType        LoginType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ErrorCode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKLogin::OnLoginFailed__DelegateSignature(enum class ELLHSDKLoginType LoginType, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "OnLoginFailed__DelegateSignature");

	Params::ULLHSDKLogin_OnLoginFailed__DelegateSignature_Params Parms{};

	Parms.LoginType = LoginType;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKLogin.OnInitFinish__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void ULLHSDKLogin::OnInitFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "OnInitFinish__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction LLHSDK.LLHSDKLogin.OnBindFinish__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AppUid                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AppToken                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELLHSDKLoginType        LoginType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKLogin::OnBindFinish__DelegateSignature(bool bSuccess, const class FString& AppUid, const class FString& AppToken, enum class ELLHSDKLoginType LoginType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "OnBindFinish__DelegateSignature");

	Params::ULLHSDKLogin_OnBindFinish__DelegateSignature_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.AppUid = AppUid;
	Parms.AppToken = AppToken;
	Parms.LoginType = LoginType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LLHSDK.LLHSDKLogin.LogoutLimPCSDK
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULLHSDKLogin::LogoutLimPCSDK()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "LogoutLimPCSDK");

	Params::ULLHSDKLogin_LogoutLimPCSDK_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.Logout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKLogin::Logout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "Logout");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKLogin.LoginUserInfo_ToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLLHSDKLoginUserInfo        InUserInfo                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKLogin::LoginUserInfo_ToString(struct FLLHSDKLoginUserInfo& InUserInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "LoginUserInfo_ToString");

	Params::ULLHSDKLogin_LoginUserInfo_ToString_Params Parms{};

	Parms.InUserInfo = InUserInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.LoginUser_ToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLLHSDKLoginUser            InUser                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKLogin::LoginUser_ToString(struct FLLHSDKLoginUser& InUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "LoginUser_ToString");

	Params::ULLHSDKLogin_LoginUser_ToString_Params Parms{};

	Parms.InUser = InUser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.LoginLimPCSDK
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULLHSDKLogin::LoginLimPCSDK(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "LoginLimPCSDK");

	Params::ULLHSDKLogin_LoginLimPCSDK_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.Login
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKLogin::Login()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "Login");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LLHSDK.LLHSDKLogin.LimSteamSDKCallBack__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      Datas                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKLogin::LimSteamSDKCallBack__DelegateSignature(const class FString& Datas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "LimSteamSDKCallBack__DelegateSignature");

	Params::ULLHSDKLogin_LimSteamSDKCallBack__DelegateSignature_Params Parms{};

	Parms.Datas = Datas;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKLogin.LimPCSDKCallBack__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      Datas                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKLogin::LimPCSDKCallBack__DelegateSignature(const class FString& Datas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "LimPCSDKCallBack__DelegateSignature");

	Params::ULLHSDKLogin_LimPCSDKCallBack__DelegateSignature_Params Parms{};

	Parms.Datas = Datas;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKLogin.LimOnSteamLoginResultSet__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      AppUid                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AppToken                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AppId                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKLogin::LimOnSteamLoginResultSet__DelegateSignature(const class FString& AppUid, const class FString& AppToken, const class FString& AppId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "LimOnSteamLoginResultSet__DelegateSignature");

	Params::ULLHSDKLogin_LimOnSteamLoginResultSet__DelegateSignature_Params Parms{};

	Parms.AppUid = AppUid;
	Parms.AppToken = AppToken;
	Parms.AppId = AppId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LLHSDK.LLHSDKLogin.IsInitFinish
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKLogin::IsInitFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "IsInitFinish");

	Params::ULLHSDKLogin_IsInitFinish_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.IsCurrentUserNewReg
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKLogin::IsCurrentUserNewReg()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "IsCurrentUserNewReg");

	Params::ULLHSDKLogin_IsCurrentUserNewReg_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.InitLimSteamSDK
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKLogin::InitLimSteamSDK(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "InitLimSteamSDK");

	Params::ULLHSDKLogin_InitLimSteamSDK_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.InitLimPCSDK
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULLHSDKLogin::InitLimPCSDK(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "InitLimPCSDK");

	Params::ULLHSDKLogin_InitLimPCSDK_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.GetSteamToken
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKLogin::GetSteamToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "GetSteamToken");

	Params::ULLHSDKLogin_GetSteamToken_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.GetSteamRegisterUrl
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKLogin::GetSteamRegisterUrl(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "GetSteamRegisterUrl");

	Params::ULLHSDKLogin_GetSteamRegisterUrl_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.GetLimPCUserInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULLHSDKLogin::GetLimPCUserInfo(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "GetLimPCUserInfo");

	Params::ULLHSDKLogin_GetLimPCUserInfo_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.GetLimPCAlilogFieldsData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKLogin::GetLimPCAlilogFieldsData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "GetLimPCAlilogFieldsData");

	Params::ULLHSDKLogin_GetLimPCAlilogFieldsData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.GetLimPCAlilogFields
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULLHSDKLogin::GetLimPCAlilogFields()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "GetLimPCAlilogFields");

	Params::ULLHSDKLogin_GetLimPCAlilogFields_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULLHSDKLogin*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULLHSDKLogin* ULLHSDKLogin::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "GetInstance");

	Params::ULLHSDKLogin_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.FreeLimPCSDK
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKLogin::FreeLimPCSDK()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "FreeLimPCSDK");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKLogin.DoSteamBind
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKLogin::DoSteamBind(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "DoSteamBind");

	Params::ULLHSDKLogin_DoSteamBind_Params Parms{};

	Parms.URL = URL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.DestoryInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKLogin::DestoryInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "DestoryInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKLogin.DAPLogAdd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKLogin::DAPLogAdd(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "DAPLogAdd");

	Params::ULLHSDKLogin_DAPLogAdd_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKLogin.CommonReportLimPCPoint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULLHSDKLogin::CommonReportLimPCPoint(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "CommonReportLimPCPoint");

	Params::ULLHSDKLogin_CommonReportLimPCPoint_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.ClearAutoLogin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKLogin::ClearAutoLogin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "ClearAutoLogin");

	Params::ULLHSDKLogin_ClearAutoLogin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.ChangeLIMPCLanguage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULLHSDKLogin::ChangeLIMPCLanguage(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "ChangeLIMPCLanguage");

	Params::ULLHSDKLogin_ChangeLIMPCLanguage_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.CanContinueLogin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKLogin::CanContinueLogin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "CanContinueLogin");

	Params::ULLHSDKLogin_CanContinueLogin_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKLogin.CancelSteamCallBack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKLogin::CancelSteamCallBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKLogin", "CancelSteamCallBack");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class LLHSDK.LLHSDKMisc
// (None)

class UClass* ULLHSDKMisc::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LLHSDKMisc");

	return Clss;
}


// LLHSDKMisc LLHSDK.Default__LLHSDKMisc
// (Public, ClassDefaultObject, ArchetypeObject)

class ULLHSDKMisc* ULLHSDKMisc::GetDefaultObj()
{
	static class ULLHSDKMisc* Default = nullptr;

	if (!Default)
		Default = static_cast<ULLHSDKMisc*>(ULLHSDKMisc::StaticClass()->DefaultObject);

	return Default;
}


// Function LLHSDK.LLHSDKMisc.UpdateNetworkExtensions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InDeviceID                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::UpdateNetworkExtensions(const class FString& InUserId, const class FString& InDeviceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "UpdateNetworkExtensions");

	Params::ULLHSDKMisc_UpdateNetworkExtensions_Params Parms{};

	Parms.InUserId = InUserId;
	Parms.InDeviceID = InDeviceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.TwitterShareText
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InText                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::TwitterShareText(const class FString& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "TwitterShareText");

	Params::ULLHSDKMisc_TwitterShareText_Params Parms{};

	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.TwitterSharePhoto
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InText                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InFilePath                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::TwitterSharePhoto(const class FString& InText, const class FString& InFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "TwitterSharePhoto");

	Params::ULLHSDKMisc_TwitterSharePhoto_Params Parms{};

	Parms.InText = InText;
	Parms.InFilePath = InFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.TryToEnableAndroidNotification
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKMisc::TryToEnableAndroidNotification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "TryToEnableAndroidNotification");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.TcpPingDetect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InDomain                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Port                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::TcpPingDetect(const class FString& InDomain, int32 Port)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "TcpPingDetect");

	Params::ULLHSDKMisc_TcpPingDetect_Params Parms{};

	Parms.InDomain = InDomain;
	Parms.Port = Port;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.SystemShare
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              ShareType                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::SystemShare(int32& ShareType, const class FString& Description, const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "SystemShare");

	Params::ULLHSDKMisc_SystemShare_Params Parms{};

	Parms.ShareType = ShareType;
	Parms.Description = Description;
	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.StartIOSFarlightBrowserWithOrientation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Title                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELLHSDKScreenOrientationOrientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::StartIOSFarlightBrowserWithOrientation(const class FString& URL, const class FString& Title, enum class ELLHSDKScreenOrientation Orientation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "StartIOSFarlightBrowserWithOrientation");

	Params::ULLHSDKMisc_StartIOSFarlightBrowserWithOrientation_Params Parms{};

	Parms.URL = URL;
	Parms.Title = Title;
	Parms.Orientation = Orientation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.StartBrowserWithOrientation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Title                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELLHSDKScreenOrientationOrientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::StartBrowserWithOrientation(const class FString& URL, const class FString& Title, enum class ELLHSDKScreenOrientation Orientation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "StartBrowserWithOrientation");

	Params::ULLHSDKMisc_StartBrowserWithOrientation_Params Parms{};

	Parms.URL = URL;
	Parms.Title = Title;
	Parms.Orientation = Orientation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.StartBrowser
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Title                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::StartBrowser(const class FString& URL, const class FString& Title)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "StartBrowser");

	Params::ULLHSDKMisc_StartBrowser_Params Parms{};

	Parms.URL = URL;
	Parms.Title = Title;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.SetNetworkPolicyDomain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InDomain                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::SetNetworkPolicyDomain(const class FString& InDomain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "SetNetworkPolicyDomain");

	Params::ULLHSDKMisc_SetNetworkPolicyDomain_Params Parms{};

	Parms.InDomain = InDomain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.SetNetworkMultipleDetect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               InEnable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::SetNetworkMultipleDetect(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "SetNetworkMultipleDetect");

	Params::ULLHSDKMisc_SetNetworkMultipleDetect_Params Parms{};

	Parms.InEnable = InEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.SetNetworkDiagnosisDeviceID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InDeviceID                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::SetNetworkDiagnosisDeviceID(const class FString& InDeviceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "SetNetworkDiagnosisDeviceID");

	Params::ULLHSDKMisc_SetNetworkDiagnosisDeviceID_Params Parms{};

	Parms.InDeviceID = InDeviceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.RestartApplication
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      IntentString                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::RestartApplication(const class FString& IntentString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "RestartApplication");

	Params::ULLHSDKMisc_RestartApplication_Params Parms{};

	Parms.IntentString = IntentString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.RefreshFirebaseMessagingToken
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKMisc::RefreshFirebaseMessagingToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "RefreshFirebaseMessagingToken");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.RefreshAndroidMediaScanner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFullFilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::RefreshAndroidMediaScanner(const class FString& InFullFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "RefreshAndroidMediaScanner");

	Params::ULLHSDKMisc_RefreshAndroidMediaScanner_Params Parms{};

	Parms.InFullFilePath = InFullFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.QueryThirdPartUserInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKMisc::QueryThirdPartUserInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "QueryThirdPartUserInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.PingDetect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InDomain                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::PingDetect(const class FString& InDomain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "PingDetect");

	Params::ULLHSDKMisc_PingDetect_Params Parms{};

	Parms.InDomain = InDomain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.PickFileFromAlbum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKMisc::PickFileFromAlbum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "PickFileFromAlbum");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.OpenSteamPayWebPage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::OpenSteamPayWebPage(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "OpenSteamPayWebPage");

	Params::ULLHSDKMisc_OpenSteamPayWebPage_Params Parms{};

	Parms.URL = URL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.OpenLimPCWebPage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::OpenLimPCWebPage(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "OpenLimPCWebPage");

	Params::ULLHSDKMisc_OpenLimPCWebPage_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LLHSDK.LLHSDKMisc.OnSystemShared__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::OnSystemShared__DelegateSignature(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "OnSystemShared__DelegateSignature");

	Params::ULLHSDKMisc_OnSystemShared__DelegateSignature_Params Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKMisc.OnScreenshotCapturedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      FullPath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::OnScreenshotCapturedEvent__DelegateSignature(const class FString& FullPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "OnScreenshotCapturedEvent__DelegateSignature");

	Params::ULLHSDKMisc_OnScreenshotCapturedEvent__DelegateSignature_Params Parms{};

	Parms.FullPath = FullPath;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKMisc.OnRefreshFirebaseToken__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      FirebaseToken                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::OnRefreshFirebaseToken__DelegateSignature(const class FString& FirebaseToken)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "OnRefreshFirebaseToken__DelegateSignature");

	Params::ULLHSDKMisc_OnRefreshFirebaseToken__DelegateSignature_Params Parms{};

	Parms.FirebaseToken = FirebaseToken;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKMisc.OnQueryThirdPartUserInfo__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               Success                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ErrorCode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSDKSocialUserInfo>  SocialUserInfoList                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::OnQueryThirdPartUserInfo__DelegateSignature(bool Success, int32 ErrorCode, const TArray<struct FSDKSocialUserInfo>& SocialUserInfoList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "OnQueryThirdPartUserInfo__DelegateSignature");

	Params::ULLHSDKMisc_OnQueryThirdPartUserInfo__DelegateSignature_Params Parms{};

	Parms.Success = Success;
	Parms.ErrorCode = ErrorCode;
	Parms.SocialUserInfoList = SocialUserInfoList;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKMisc.OnPickFileFromAlbumFinishEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      PickFilePath                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ErrorCode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::OnPickFileFromAlbumFinishEvent__DelegateSignature(const class FString& PickFilePath, int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "OnPickFileFromAlbumFinishEvent__DelegateSignature");

	Params::ULLHSDKMisc_OnPickFileFromAlbumFinishEvent__DelegateSignature_Params Parms{};

	Parms.PickFilePath = PickFilePath;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCOpenWebview__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::OnLimPCOpenWebview__DelegateSignature(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "OnLimPCOpenWebview__DelegateSignature");

	Params::ULLHSDKMisc_OnLimPCOpenWebview__DelegateSignature_Params Parms{};

	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKMisc.OnLimPCCloseWebview__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::OnLimPCCloseWebview__DelegateSignature(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "OnLimPCCloseWebview__DelegateSignature");

	Params::ULLHSDKMisc_OnLimPCCloseWebview__DelegateSignature_Params Parms{};

	Parms.Params = Params;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKMisc.OnGetFacebookToken__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Token                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ApplicationId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserId                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      GraphDomain                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::OnGetFacebookToken__DelegateSignature(bool Result, const class FString& Token, const class FString& ApplicationId, const class FString& UserId, const class FString& GraphDomain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "OnGetFacebookToken__DelegateSignature");

	Params::ULLHSDKMisc_OnGetFacebookToken__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Token = Token;
	Parms.ApplicationId = ApplicationId;
	Parms.UserId = UserId;
	Parms.GraphDomain = GraphDomain;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKMisc.OnFacebookPhotoShared__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::OnFacebookPhotoShared__DelegateSignature(const class FString& FilePath, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "OnFacebookPhotoShared__DelegateSignature");

	Params::ULLHSDKMisc_OnFacebookPhotoShared__DelegateSignature_Params Parms{};

	Parms.FilePath = FilePath;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKMisc.OnBrowserClosed__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void ULLHSDKMisc::OnBrowserClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "OnBrowserClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction LLHSDK.LLHSDKMisc.NetworkDiagnosisCallback__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      Type                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ret                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::NetworkDiagnosisCallback__DelegateSignature(const class FString& Type, const class FString& Ret)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "NetworkDiagnosisCallback__DelegateSignature");

	Params::ULLHSDKMisc_NetworkDiagnosisCallback__DelegateSignature_Params Parms{};

	Parms.Type = Type;
	Parms.Ret = Ret;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LLHSDK.LLHSDKMisc.MtrDetect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InDomain                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::MtrDetect(const class FString& InDomain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "MtrDetect");

	Params::ULLHSDKMisc_MtrDetect_Params Parms{};

	Parms.InDomain = InDomain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.JumpToMarket
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InAppPkg                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InMarketPkg                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::JumpToMarket(const class FString& InAppPkg, const class FString& InMarketPkg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "JumpToMarket");

	Params::ULLHSDKMisc_JumpToMarket_Params Parms{};

	Parms.InAppPkg = InAppPkg;
	Parms.InMarketPkg = InMarketPkg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.JumpToAppStore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AppStoreUrl                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::JumpToAppStore(const class FString& AppStoreUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "JumpToAppStore");

	Params::ULLHSDKMisc_JumpToAppStore_Params Parms{};

	Parms.AppStoreUrl = AppStoreUrl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.IsFacebookShareable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKMisc::IsFacebookShareable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "IsFacebookShareable");

	Params::ULLHSDKMisc_IsFacebookShareable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKMisc.IsAppRooted
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKMisc::IsAppRooted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "IsAppRooted");

	Params::ULLHSDKMisc_IsAppRooted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKMisc.IsAndroidNotificationEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKMisc::IsAndroidNotificationEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "IsAndroidNotificationEnabled");

	Params::ULLHSDKMisc_IsAndroidNotificationEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKMisc.InitNetworkDiagnosis
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InProject                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InSecretKey                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InEndPoint                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InAccessKeyId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InAccessKeySecret                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InUid                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InChannel                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::InitNetworkDiagnosis(const class FString& InProject, const class FString& InSecretKey, const class FString& InEndPoint, const class FString& InAccessKeyId, const class FString& InAccessKeySecret, const class FString& InUid, const class FString& InChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "InitNetworkDiagnosis");

	Params::ULLHSDKMisc_InitNetworkDiagnosis_Params Parms{};

	Parms.InProject = InProject;
	Parms.InSecretKey = InSecretKey;
	Parms.InEndPoint = InEndPoint;
	Parms.InAccessKeyId = InAccessKeyId;
	Parms.InAccessKeySecret = InAccessKeySecret;
	Parms.InUid = InUid;
	Parms.InChannel = InChannel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.HttpDetect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InUrl                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::HttpDetect(const class FString& InUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "HttpDetect");

	Params::ULLHSDKMisc_HttpDetect_Params Parms{};

	Parms.InUrl = InUrl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.GetNetworkDiagnosisDeviceID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKMisc::GetNetworkDiagnosisDeviceID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "GetNetworkDiagnosisDeviceID");

	Params::ULLHSDKMisc_GetNetworkDiagnosisDeviceID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKMisc.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULLHSDKMisc*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULLHSDKMisc* ULLHSDKMisc::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "GetInstance");

	Params::ULLHSDKMisc_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKMisc.GetFirebaseMessagingToken
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKMisc::GetFirebaseMessagingToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "GetFirebaseMessagingToken");

	Params::ULLHSDKMisc_GetFirebaseMessagingToken_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKMisc.GetFacebookToken
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKMisc::GetFacebookToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "GetFacebookToken");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.FacebookSharePhotoWithFileAndDescription
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Description                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::FacebookSharePhotoWithFileAndDescription(const class FString& Description, const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "FacebookSharePhotoWithFileAndDescription");

	Params::ULLHSDKMisc_FacebookSharePhotoWithFileAndDescription_Params Parms{};

	Parms.Description = Description;
	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.FacebookSharePhotoByPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFilePath                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::FacebookSharePhotoByPath(const class FString& InFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "FacebookSharePhotoByPath");

	Params::ULLHSDKMisc_FacebookSharePhotoByPath_Params Parms{};

	Parms.InFilePath = InFilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.FacebookSharePhoto
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKMisc::FacebookSharePhoto()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "FacebookSharePhoto");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.FacebookShareLink
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InLinkURL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InPreviewURL                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InTitle                                                          (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InDesc                                                           (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::FacebookShareLink(const class FString& InLinkURL, const class FString& InPreviewURL, const class FString& InTitle, const class FString& InDesc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "FacebookShareLink");

	Params::ULLHSDKMisc_FacebookShareLink_Params Parms{};

	Parms.InLinkURL = InLinkURL;
	Parms.InPreviewURL = InPreviewURL;
	Parms.InTitle = InTitle;
	Parms.InDesc = InDesc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.DnsDetect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InServer                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InDomain                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKMisc::DnsDetect(const class FString& InServer, const class FString& InDomain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "DnsDetect");

	Params::ULLHSDKMisc_DnsDetect_Params Parms{};

	Parms.InServer = InServer;
	Parms.InDomain = InDomain;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.DestoryInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKMisc::DestoryInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "DestoryInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.CloseLimPCWebPageAll
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKMisc::CloseLimPCWebPageAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "CloseLimPCWebPageAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKMisc.CheckGyroSensorSupport
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKMisc::CheckGyroSensorSupport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKMisc", "CheckGyroSensorSupport");

	Params::ULLHSDKMisc_CheckGyroSensorSupport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LLHSDK.LLHSDKPay
// (None)

class UClass* ULLHSDKPay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LLHSDKPay");

	return Clss;
}


// LLHSDKPay LLHSDK.Default__LLHSDKPay
// (Public, ClassDefaultObject, ArchetypeObject)

class ULLHSDKPay* ULLHSDKPay::GetDefaultObj()
{
	static class ULLHSDKPay* Default = nullptr;

	if (!Default)
		Default = static_cast<ULLHSDKPay*>(ULLHSDKPay::StaticClass()->DefaultObject);

	return Default;
}


// Function LLHSDK.LLHSDKPay.Test_Google_SkuItemDetailsToString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLLHSDKGenericSkuItemsDetailListInDetails                                                        (Parm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULLHSDKPay::Test_Google_SkuItemDetailsToString(const struct FLLHSDKGenericSkuItemsDetailList& InDetails)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "Test_Google_SkuItemDetailsToString");

	Params::ULLHSDKPay_Test_Google_SkuItemDetailsToString_Params Parms{};

	Parms.InDetails = InDetails;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKPay.SteamQuerySkus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::SteamQuerySkus(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "SteamQuerySkus");

	Params::ULLHSDKPay_SteamQuerySkus_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKPay.Steam_StartPay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SteamPayInfo                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::Steam_StartPay(const class FString& SteamPayInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "Steam_StartPay");

	Params::ULLHSDKPay_Steam_StartPay_Params Parms{};

	Parms.SteamPayInfo = SteamPayInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKPay.SetPayNotifyUrl
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InNotifyUrl                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::SetPayNotifyUrl(const class FString& InNotifyUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "SetPayNotifyUrl");

	Params::ULLHSDKPay_SetPayNotifyUrl_Params Parms{};

	Parms.InNotifyUrl = InNotifyUrl;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LLHSDK.LLHSDKPay.OnLLHQuerySkus__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FLLHSDKGenericSkuItemsDetailListItemsDetailList                                                  (Parm, NativeAccessSpecifierPublic)
// TArray<class FString>              InvalidProductIDs                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::OnLLHQuerySkus__DelegateSignature(const struct FLLHSDKGenericSkuItemsDetailList& ItemsDetailList, TArray<class FString>& InvalidProductIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "OnLLHQuerySkus__DelegateSignature");

	Params::ULLHSDKPay_OnLLHQuerySkus__DelegateSignature_Params Parms{};

	Parms.ItemsDetailList = ItemsDetailList;
	Parms.InvalidProductIDs = InvalidProductIDs;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKPay.OnLLHPayFinished__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ErrorCode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ErrorMsg                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PayValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ProductID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELLHSDKPayType          PayType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::OnLLHPayFinished__DelegateSignature(bool bSuccess, int32 ErrorCode, const class FString& ErrorMsg, int32 PayValue, const class FString& ProductID, enum class ELLHSDKPayType PayType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "OnLLHPayFinished__DelegateSignature");

	Params::ULLHSDKPay_OnLLHPayFinished__DelegateSignature_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.ErrorCode = ErrorCode;
	Parms.ErrorMsg = ErrorMsg;
	Parms.PayValue = PayValue;
	Parms.ProductID = ProductID;
	Parms.PayType = PayType;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKPay.OnGoogleQuerySkuSubItemDetails__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ErrorCode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ItemsDetailListJsonString                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::OnGoogleQuerySkuSubItemDetails__DelegateSignature(bool bSuccess, int32 ErrorCode, const class FString& ItemsDetailListJsonString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "OnGoogleQuerySkuSubItemDetails__DelegateSignature");

	Params::ULLHSDKPay_OnGoogleQuerySkuSubItemDetails__DelegateSignature_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.ErrorCode = ErrorCode;
	Parms.ItemsDetailListJsonString = ItemsDetailListJsonString;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKPay.OnGoogleQuerySkuItemDetails__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ErrorCode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ItemsDetailListJsonString                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::OnGoogleQuerySkuItemDetails__DelegateSignature(bool bSuccess, int32 ErrorCode, const class FString& ItemsDetailListJsonString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "OnGoogleQuerySkuItemDetails__DelegateSignature");

	Params::ULLHSDKPay_OnGoogleQuerySkuItemDetails__DelegateSignature_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.ErrorCode = ErrorCode;
	Parms.ItemsDetailListJsonString = ItemsDetailListJsonString;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKPay.OnGooglePayFinished__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ErrorCode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Price                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ItemID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELLHSDKPayType          PayType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::OnGooglePayFinished__DelegateSignature(bool bSuccess, int32 ErrorCode, int32 Price, const class FString& ItemID, enum class ELLHSDKPayType PayType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "OnGooglePayFinished__DelegateSignature");

	Params::ULLHSDKPay_OnGooglePayFinished__DelegateSignature_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.ErrorCode = ErrorCode;
	Parms.Price = Price;
	Parms.ItemID = ItemID;
	Parms.PayType = PayType;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKPay.OnGetIOSPurchaseExtNull__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      AppUid                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ProductID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::OnGetIOSPurchaseExtNull__DelegateSignature(const class FString& AppUid, const class FString& ProductID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "OnGetIOSPurchaseExtNull__DelegateSignature");

	Params::ULLHSDKPay_OnGetIOSPurchaseExtNull__DelegateSignature_Params Parms{};

	Parms.AppUid = AppUid;
	Parms.ProductID = ProductID;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKPay.OnGetGoogleConsumeGoods__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<class FString>              Skus                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::OnGetGoogleConsumeGoods__DelegateSignature(TArray<class FString>& Skus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "OnGetGoogleConsumeGoods__DelegateSignature");

	Params::ULLHSDKPay_OnGetGoogleConsumeGoods__DelegateSignature_Params Parms{};

	Parms.Skus = Skus;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKPay.LSteamSDKQuerySkus__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      Datas                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::LSteamSDKQuerySkus__DelegateSignature(const class FString& Datas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "LSteamSDKQuerySkus__DelegateSignature");

	Params::ULLHSDKPay_LSteamSDKQuerySkus__DelegateSignature_Params Parms{};

	Parms.Datas = Datas;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKPay.LSteamSDKPayApplied__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      Datas                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::LSteamSDKPayApplied__DelegateSignature(const class FString& Datas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "LSteamSDKPayApplied__DelegateSignature");

	Params::ULLHSDKPay_LSteamSDKPayApplied__DelegateSignature_Params Parms{};

	Parms.Datas = Datas;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LLHSDK.LLHSDKPay.LimPCStartPay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::LimPCStartPay(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "LimPCStartPay");

	Params::ULLHSDKPay_LimPCStartPay_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LLHSDK.LLHSDKPay.LimPCSDKQueryPriceLadder__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      Datas                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::LimPCSDKQueryPriceLadder__DelegateSignature(const class FString& Datas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "LimPCSDKQueryPriceLadder__DelegateSignature");

	Params::ULLHSDKPay_LimPCSDKQueryPriceLadder__DelegateSignature_Params Parms{};

	Parms.Datas = Datas;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LLHSDK.LLHSDKPay.LimPCSDKPayApplied__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      Datas                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::LimPCSDKPayApplied__DelegateSignature(const class FString& Datas)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "LimPCSDKPayApplied__DelegateSignature");

	Params::ULLHSDKPay_LimPCSDKPayApplied__DelegateSignature_Params Parms{};

	Parms.Datas = Datas;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LLHSDK.LLHSDKPay.LimPCQueryPriceLadderWithRegion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Params                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::LimPCQueryPriceLadderWithRegion(const class FString& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "LimPCQueryPriceLadderWithRegion");

	Params::ULLHSDKPay_LimPCQueryPriceLadderWithRegion_Params Parms{};

	Parms.Params = Params;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKPay.LimPCQueryPriceLadder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKPay::LimPCQueryPriceLadder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "LimPCQueryPriceLadder");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKPay.IOS_SetUserPayExtInCallback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ProductID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PayExt                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::IOS_SetUserPayExtInCallback(const class FString& ProductID, const class FString& PayExt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "IOS_SetUserPayExtInCallback");

	Params::ULLHSDKPay_IOS_SetUserPayExtInCallback_Params Parms{};

	Parms.ProductID = ProductID;
	Parms.PayExt = PayExt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKPay.IOS_SetUserPayExt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      PayExt                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::IOS_SetUserPayExt(const class FString& PayExt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "IOS_SetUserPayExt");

	Params::ULLHSDKPay_IOS_SetUserPayExt_Params Parms{};

	Parms.PayExt = PayExt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKPay.IOS_SetAutoPayExt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::IOS_SetAutoPayExt(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "IOS_SetAutoPayExt");

	Params::ULLHSDKPay_IOS_SetAutoPayExt_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKPay.IOS_QuerySkus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              ProductIDs                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::IOS_QuerySkus(TArray<class FString>& ProductIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "IOS_QuerySkus");

	Params::ULLHSDKPay_IOS_QuerySkus_Params Parms{};

	Parms.ProductIDs = ProductIDs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKPay.IOS_LLHPay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ProductID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PayExt                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::IOS_LLHPay(const class FString& ProductID, const class FString& PayExt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "IOS_LLHPay");

	Params::ULLHSDKPay_IOS_LLHPay_Params Parms{};

	Parms.ProductID = ProductID;
	Parms.PayExt = PayExt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKPay.IOS_GetAutoPayExt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKPay::IOS_GetAutoPayExt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "IOS_GetAutoPayExt");

	Params::ULLHSDKPay_IOS_GetAutoPayExt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKPay.Google_StartPaySubscription
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      PayItemID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PayContext                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::Google_StartPaySubscription(const class FString& PayItemID, const class FString& PayContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "Google_StartPaySubscription");

	Params::ULLHSDKPay_Google_StartPaySubscription_Params Parms{};

	Parms.PayItemID = PayItemID;
	Parms.PayContext = PayContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKPay.Google_StartPay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      PayItemID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PayContext                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::Google_StartPay(const class FString& PayItemID, const class FString& PayContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "Google_StartPay");

	Params::ULLHSDKPay_Google_StartPay_Params Parms{};

	Parms.PayItemID = PayItemID;
	Parms.PayContext = PayContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKPay.Google_QuerySkuItemDetailsSubscription
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              Items                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::Google_QuerySkuItemDetailsSubscription(const TArray<class FString>& Items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "Google_QuerySkuItemDetailsSubscription");

	Params::ULLHSDKPay_Google_QuerySkuItemDetailsSubscription_Params Parms{};

	Parms.Items = Items;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKPay.Google_QuerySkuItemDetails
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              Items                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::Google_QuerySkuItemDetails(const TArray<class FString>& Items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "Google_QuerySkuItemDetails");

	Params::ULLHSDKPay_Google_QuerySkuItemDetails_Params Parms{};

	Parms.Items = Items;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKPay.Google_HasConsumePointsGoods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKPay::Google_HasConsumePointsGoods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "Google_HasConsumePointsGoods");

	Params::ULLHSDKPay_Google_HasConsumePointsGoods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKPay.Google_HasConsumeGoods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKPay::Google_HasConsumeGoods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "Google_HasConsumeGoods");

	Params::ULLHSDKPay_Google_HasConsumeGoods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKPay.Google_GetConsumePointsGoods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> ULLHSDKPay::Google_GetConsumePointsGoods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "Google_GetConsumePointsGoods");

	Params::ULLHSDKPay_Google_GetConsumePointsGoods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKPay.Google_GetConsumeGoods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> ULLHSDKPay::Google_GetConsumeGoods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "Google_GetConsumeGoods");

	Params::ULLHSDKPay_Google_GetConsumeGoods_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKPay.Google_ConsumeGoods
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              Skus                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Contexts                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULLHSDKPay::Google_ConsumeGoods(const TArray<class FString>& Skus, const TArray<class FString>& Contexts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "Google_ConsumeGoods");

	Params::ULLHSDKPay_Google_ConsumeGoods_Params Parms{};

	Parms.Skus = Skus;
	Parms.Contexts = Contexts;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LLHSDK.LLHSDKPay.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULLHSDKPay*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULLHSDKPay* ULLHSDKPay::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "GetInstance");

	Params::ULLHSDKPay_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKPay.DestoryInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKPay::DestoryInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKPay", "DestoryInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class LLHSDK.LLHSDKReport
// (None)

class UClass* ULLHSDKReport::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LLHSDKReport");

	return Clss;
}


// LLHSDKReport LLHSDK.Default__LLHSDKReport
// (Public, ClassDefaultObject, ArchetypeObject)

class ULLHSDKReport* ULLHSDKReport::GetDefaultObj()
{
	static class ULLHSDKReport* Default = nullptr;

	if (!Default)
		Default = static_cast<ULLHSDKReport*>(ULLHSDKReport::StaticClass()->DefaultObject);

	return Default;
}


// Function LLHSDK.LLHSDKReport.ReportToThirdParty_TwoParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter1                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter2                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKReport::ReportToThirdParty_TwoParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "ReportToThirdParty_TwoParams");

	Params::ULLHSDKReport_ReportToThirdParty_TwoParams_Params Parms{};

	Parms.EventName = EventName;
	Parms.Parameter1 = Parameter1;
	Parms.Parameter2 = Parameter2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKReport.ReportToThirdParty_ThreeParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter1                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter2                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter3                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKReport::ReportToThirdParty_ThreeParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "ReportToThirdParty_ThreeParams");

	Params::ULLHSDKReport_ReportToThirdParty_ThreeParams_Params Parms{};

	Parms.EventName = EventName;
	Parms.Parameter1 = Parameter1;
	Parms.Parameter2 = Parameter2;
	Parms.Parameter3 = Parameter3;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKReport.ReportToThirdParty_OneParam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKReport::ReportToThirdParty_OneParam(const class FString& EventName, const class FString& Parameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "ReportToThirdParty_OneParam");

	Params::ULLHSDKReport_ReportToThirdParty_OneParam_Params Parms{};

	Parms.EventName = EventName;
	Parms.Parameter = Parameter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKReport.ReportToThirdParty_FourParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter1                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter2                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter3                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter4                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKReport::ReportToThirdParty_FourParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "ReportToThirdParty_FourParams");

	Params::ULLHSDKReport_ReportToThirdParty_FourParams_Params Parms{};

	Parms.EventName = EventName;
	Parms.Parameter1 = Parameter1;
	Parms.Parameter2 = Parameter2;
	Parms.Parameter3 = Parameter3;
	Parms.Parameter4 = Parameter4;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKReport.ReportToThirdParty_FiveParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter1                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter2                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter3                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter4                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter5                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKReport::ReportToThirdParty_FiveParams(const class FString& EventName, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4, const class FString& Parameter5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "ReportToThirdParty_FiveParams");

	Params::ULLHSDKReport_ReportToThirdParty_FiveParams_Params Parms{};

	Parms.EventName = EventName;
	Parms.Parameter1 = Parameter1;
	Parms.Parameter2 = Parameter2;
	Parms.Parameter3 = Parameter3;
	Parms.Parameter4 = Parameter4;
	Parms.Parameter5 = Parameter5;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKReport.ReportToThirdParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKReport::ReportToThirdParty(const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "ReportToThirdParty");

	Params::ULLHSDKReport_ReportToThirdParty_Params Parms{};

	Parms.EventName = EventName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_TwoParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELLHSDKReportCurrencyTypeCurrency                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Revenue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter1                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter2                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKReport::ReportRevenueToThirdParty_TwoParams(const class FString& EventName, enum class ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "ReportRevenueToThirdParty_TwoParams");

	Params::ULLHSDKReport_ReportRevenueToThirdParty_TwoParams_Params Parms{};

	Parms.EventName = EventName;
	Parms.Currency = Currency;
	Parms.Revenue = Revenue;
	Parms.Parameter1 = Parameter1;
	Parms.Parameter2 = Parameter2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_ThreeParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELLHSDKReportCurrencyTypeCurrency                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Revenue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter1                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter2                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter3                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKReport::ReportRevenueToThirdParty_ThreeParams(const class FString& EventName, enum class ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "ReportRevenueToThirdParty_ThreeParams");

	Params::ULLHSDKReport_ReportRevenueToThirdParty_ThreeParams_Params Parms{};

	Parms.EventName = EventName;
	Parms.Currency = Currency;
	Parms.Revenue = Revenue;
	Parms.Parameter1 = Parameter1;
	Parms.Parameter2 = Parameter2;
	Parms.Parameter3 = Parameter3;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_OneParam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELLHSDKReportCurrencyTypeCurrency                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Revenue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKReport::ReportRevenueToThirdParty_OneParam(const class FString& EventName, enum class ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "ReportRevenueToThirdParty_OneParam");

	Params::ULLHSDKReport_ReportRevenueToThirdParty_OneParam_Params Parms{};

	Parms.EventName = EventName;
	Parms.Currency = Currency;
	Parms.Revenue = Revenue;
	Parms.Parameter = Parameter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_FourParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELLHSDKReportCurrencyTypeCurrency                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Revenue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter1                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter2                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter3                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter4                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKReport::ReportRevenueToThirdParty_FourParams(const class FString& EventName, enum class ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "ReportRevenueToThirdParty_FourParams");

	Params::ULLHSDKReport_ReportRevenueToThirdParty_FourParams_Params Parms{};

	Parms.EventName = EventName;
	Parms.Currency = Currency;
	Parms.Revenue = Revenue;
	Parms.Parameter1 = Parameter1;
	Parms.Parameter2 = Parameter2;
	Parms.Parameter3 = Parameter3;
	Parms.Parameter4 = Parameter4;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty_FiveParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELLHSDKReportCurrencyTypeCurrency                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Revenue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter1                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter2                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter3                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter4                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Parameter5                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKReport::ReportRevenueToThirdParty_FiveParams(const class FString& EventName, enum class ELLHSDKReportCurrencyType Currency, const class FString& Revenue, const class FString& Parameter1, const class FString& Parameter2, const class FString& Parameter3, const class FString& Parameter4, const class FString& Parameter5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "ReportRevenueToThirdParty_FiveParams");

	Params::ULLHSDKReport_ReportRevenueToThirdParty_FiveParams_Params Parms{};

	Parms.EventName = EventName;
	Parms.Currency = Currency;
	Parms.Revenue = Revenue;
	Parms.Parameter1 = Parameter1;
	Parms.Parameter2 = Parameter2;
	Parms.Parameter3 = Parameter3;
	Parms.Parameter4 = Parameter4;
	Parms.Parameter5 = Parameter5;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKReport.ReportRevenueToThirdParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELLHSDKReportCurrencyTypeCurrency                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Revenue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKReport::ReportRevenueToThirdParty(const class FString& EventName, enum class ELLHSDKReportCurrencyType Currency, const class FString& Revenue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "ReportRevenueToThirdParty");

	Params::ULLHSDKReport_ReportRevenueToThirdParty_Params Parms{};

	Parms.EventName = EventName;
	Parms.Currency = Currency;
	Parms.Revenue = Revenue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKReport.ReportJsonToLilithImmediate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      JsonContentStr                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULLHSDKReport::ReportJsonToLilithImmediate(const class FString& EventName, const class FString& JsonContentStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "ReportJsonToLilithImmediate");

	Params::ULLHSDKReport_ReportJsonToLilithImmediate_Params Parms{};

	Parms.EventName = EventName;
	Parms.JsonContentStr = JsonContentStr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKReport.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULLHSDKReport*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULLHSDKReport* ULLHSDKReport::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "GetInstance");

	Params::ULLHSDKReport_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LLHSDK.LLHSDKReport.DestoryInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULLHSDKReport::DestoryInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LLHSDKReport", "DestoryInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class LLHSDK.LLHSDKSettings
// (None)

class UClass* ULLHSDKSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LLHSDKSettings");

	return Clss;
}


// LLHSDKSettings LLHSDK.Default__LLHSDKSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULLHSDKSettings* ULLHSDKSettings::GetDefaultObj()
{
	static class ULLHSDKSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULLHSDKSettings*>(ULLHSDKSettings::StaticClass()->DefaultObject);

	return Default;
}

}



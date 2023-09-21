#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnoSDK.AnoSDK
// (None)

class UClass* UAnoSDK::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnoSDK");

	return Clss;
}


// AnoSDK AnoSDK.Default__AnoSDK
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnoSDK* UAnoSDK::GetDefaultObj()
{
	static class UAnoSDK* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnoSDK*>(UAnoSDK::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction AnoSDK.AnoSDK.OnAnoSentAntiData__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FAnoSDKAntiData             AntiData                                                         (Parm, NativeAccessSpecifierPublic)

void UAnoSDK::OnAnoSentAntiData__DelegateSignature(const struct FAnoSDKAntiData& AntiData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "OnAnoSentAntiData__DelegateSignature");

	Params::UAnoSDK_OnAnoSentAntiData__DelegateSignature_Params Parms{};

	Parms.AntiData = AntiData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction AnoSDK.AnoSDK.OnAnoRecvAntiData__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AntiData                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnoSDK::OnAnoRecvAntiData__DelegateSignature(int32 Type, const class FString& AntiData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "OnAnoRecvAntiData__DelegateSignature");

	Params::UAnoSDK_OnAnoRecvAntiData__DelegateSignature_Params Parms{};

	Parms.Type = Type;
	Parms.AntiData = AntiData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnoSDK.AnoSDK.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnoSDK*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnoSDK* UAnoSDK::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "GetInstance");

	Params::UAnoSDK_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnoSDK.AnoSDK.DestoryInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAnoSDK::DestoryInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "DestoryInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKSetUserInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ETssSDKEntryId          EntryId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OpenId                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnoSDK::AnoUESDKSetUserInfo(enum class ETssSDKEntryId EntryId, const class FString& OpenId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKSetUserInfo");

	Params::UAnoSDK_AnoUESDKSetUserInfo_Params Parms{};

	Parms.EntryId = EntryId;
	Parms.OpenId = OpenId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKSetCSChannelDomain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      DomainName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnoSDK::AnoUESDKSetCSChannelDomain(const class FString& DomainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKSetCSChannelDomain");

	Params::UAnoSDK_AnoUESDKSetCSChannelDomain_Params Parms{};

	Parms.DomainName = DomainName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKSetChannelIP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      IP                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnoSDK::AnoUESDKSetChannelIP(const class FString& IP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKSetChannelIP");

	Params::UAnoSDK_AnoUESDKSetChannelIP_Params Parms{};

	Parms.IP = IP;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKSendSDKCoreData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAnoSDK::AnoUESDKSendSDKCoreData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKSendSDKCoreData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKSendDataToSvr
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAnoSDK::AnoUESDKSendDataToSvr()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKSendDataToSvr");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKSendCoreTimeData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAnoSDK::AnoUESDKSendCoreTimeData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKSendCoreTimeData");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKReportThreadShutDown
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAnoSDK::AnoUESDKReportThreadShutDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKReportThreadShutDown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKReportThreadInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAnoSDK::AnoUESDKReportThreadInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKReportThreadInit");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKRegistInfoListener
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAnoSDK::AnoUESDKRegistInfoListener()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKRegistInfoListener");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKOnResume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAnoSDK::AnoUESDKOnResume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKOnResume");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKOnRecvSignature
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Buf                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Len                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Crc                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnoSDK::AnoUESDKOnRecvSignature(const class FString& Name, const class FString& Buf, int32 Len, int32 Crc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKOnRecvSignature");

	Params::UAnoSDK_AnoUESDKOnRecvSignature_Params Parms{};

	Parms.Name = Name;
	Parms.Buf = Buf;
	Parms.Len = Len;
	Parms.Crc = Crc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKOnRecvData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Data                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnoSDK::AnoUESDKOnRecvData(const class FString& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKOnRecvData");

	Params::UAnoSDK_AnoUESDKOnRecvData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKOnPause
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAnoSDK::AnoUESDKOnPause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKOnPause");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKIoctl
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Request                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Cmd                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnoSDK::AnoUESDKIoctl(int32 Request, const class FString& Cmd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKIoctl");

	Params::UAnoSDK_AnoUESDKIoctl_Params Parms{};

	Parms.Request = Request;
	Parms.Cmd = Cmd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnoSDK.AnoSDK.AnoUESDKInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              GameID                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Appkey                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnoSDK::AnoUESDKInit(int32 GameID, const class FString& Appkey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnoSDK", "AnoUESDKInit");

	Params::UAnoSDK_AnoUESDKInit_Params Parms{};

	Parms.GameID = GameID;
	Parms.Appkey = Appkey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AnoSDK.AnoSDKSettings
// (None)

class UClass* UAnoSDKSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnoSDKSettings");

	return Clss;
}


// AnoSDKSettings AnoSDK.Default__AnoSDKSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnoSDKSettings* UAnoSDKSettings::GetDefaultObj()
{
	static class UAnoSDKSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnoSDKSettings*>(UAnoSDKSettings::StaticClass()->DefaultObject);

	return Default;
}

}



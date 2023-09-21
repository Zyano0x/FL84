#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SolarTCPSocket.SolarTCPSocketClient
// (Actor)

class UClass* ASolarTCPSocketClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarTCPSocketClient");

	return Clss;
}


// SolarTCPSocketClient SolarTCPSocket.Default__SolarTCPSocketClient
// (Public, ClassDefaultObject, ArchetypeObject)

class ASolarTCPSocketClient* ASolarTCPSocketClient::GetDefaultObj()
{
	static class ASolarTCPSocketClient* Default = nullptr;

	if (!Default)
		Default = static_cast<ASolarTCPSocketClient*>(ASolarTCPSocketClient::StaticClass()->DefaultObject);

	return Default;
}


// Function SolarTCPSocket.SolarTCPSocketClient.SendData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ConnectionId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Data                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ASolarTCPSocketClient::SendData(int32 ConnectionId, const TArray<uint8>& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarTCPSocketClient", "SendData");

	Params::ASolarTCPSocketClient_SendData_Params Parms{};

	Parms.ConnectionId = ConnectionId;
	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SolarTCPSocket.SolarTCPSocketClient.Disconnect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ConnectionId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASolarTCPSocketClient::Disconnect(int32 ConnectionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarTCPSocketClient", "Disconnect");

	Params::ASolarTCPSocketClient_Disconnect_Params Parms{};

	Parms.ConnectionId = ConnectionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SolarTCPSocket.SolarTCPSocketClient.Connect
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      IP                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Port                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnConnected                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnDisconnected                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnMessageReceived                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ConnectionId                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASolarTCPSocketClient::Connect(const class FString& IP, int32 Port, FDelegateProperty_& OnConnected, FDelegateProperty_& OnDisconnected, FDelegateProperty_& OnMessageReceived, int32* ConnectionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarTCPSocketClient", "Connect");

	Params::ASolarTCPSocketClient_Connect_Params Parms{};

	Parms.IP = IP;
	Parms.Port = Port;
	Parms.OnConnected = OnConnected;
	Parms.OnDisconnected = OnDisconnected;
	Parms.OnMessageReceived = OnMessageReceived;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ConnectionId != nullptr)
		*ConnectionId = Parms.ConnectionId;

}

}



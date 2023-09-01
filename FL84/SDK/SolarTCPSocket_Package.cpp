/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x016B7710
	 * 		Name   -> Function SolarTCPSocket.SolarTCPSocketClient.SendData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ConnectionId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASolarTCPSocketClient::SendData(int32_t ConnectionId, TArray<unsigned char> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarTCPSocket.SolarTCPSocketClient.SendData");
		
		ASolarTCPSocketClient_SendData_Params params {};
		params.ConnectionId = ConnectionId;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016B7680
	 * 		Name   -> Function SolarTCPSocket.SolarTCPSocketClient.Disconnect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ConnectionId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASolarTCPSocketClient::Disconnect(int32_t ConnectionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarTCPSocket.SolarTCPSocketClient.Disconnect");
		
		ASolarTCPSocketClient_Disconnect_Params params {};
		params.ConnectionId = ConnectionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016B7410
	 * 		Name   -> Function SolarTCPSocket.SolarTCPSocketClient.Connect
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IP                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnConnected                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnDisconnected                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnMessageReceived                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ConnectionId                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASolarTCPSocketClient::Connect(const class FString& IP, int32_t Port, const class FScriptDelegate& OnConnected, const class FScriptDelegate& OnDisconnected, const class FScriptDelegate& OnMessageReceived, int32_t* ConnectionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SolarTCPSocket.SolarTCPSocketClient.Connect");
		
		ASolarTCPSocketClient_Connect_Params params {};
		params.IP = IP;
		params.Port = Port;
		params.OnConnected = OnConnected;
		params.OnDisconnected = OnDisconnected;
		params.OnMessageReceived = OnMessageReceived;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConnectionId != nullptr)
			*ConnectionId = params.ConnectionId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASolarTCPSocketClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASolarTCPSocketClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SolarTCPSocket.SolarTCPSocketClient");
		return ptr;
	}

}



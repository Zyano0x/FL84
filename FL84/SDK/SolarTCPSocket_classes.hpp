#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2B8 - 0x228)
// Class SolarTCPSocket.SolarTCPSocketClient
class ASolarTCPSocketClient : public AActor
{
public:
	int32                                        SendBufferSize;                                    // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReceiveBufferSize;                                 // 0x22C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeBetweenTicks;                                  // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F63[0x84];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASolarTCPSocketClient* GetDefaultObj();

	bool SendData(int32 ConnectionId, const TArray<uint8>& Data);
	void Disconnect(int32 ConnectionId);
	void Connect(const class FString& IP, int32 Port, FDelegateProperty_& OnConnected, FDelegateProperty_& OnDisconnected, FDelegateProperty_& OnMessageReceived, int32* ConnectionId);
};

}



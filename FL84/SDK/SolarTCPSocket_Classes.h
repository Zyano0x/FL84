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
	 * Class SolarTCPSocket.SolarTCPSocketClient
	 * Size -> 0x0090 (FullSize[0x02B8] - InheritedSize[0x0228])
	 */
	class ASolarTCPSocketClient : public AActor
	{
	public:
		int32_t                                                    SendBufferSize;                                          // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReceiveBufferSize;                                       // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBetweenTicks;                                        // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3T5M[0x84];                                  // 0x0234(0x0084) MISSED OFFSET (PADDING)

	public:
		bool SendData(int32_t ConnectionId, TArray<unsigned char> Data);
		void Disconnect(int32_t ConnectionId);
		void Connect(const class FString& IP, int32_t Port, const class FScriptDelegate& OnConnected, const class FScriptDelegate& OnDisconnected, const class FScriptDelegate& OnMessageReceived, int32_t* ConnectionId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x88 - 0x28)
// Class AnoSDK.AnoSDK
class UAnoSDK : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnAnoRecvAntiData;                                 // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E89[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAnoSentDataToSvr;                                // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAnoSentCoreData;                                 // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAnoSentCoreTimeData;                             // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnoSDK* GetDefaultObj();

	void OnAnoSentAntiData__DelegateSignature(const struct FAnoSDKAntiData& AntiData);
	void OnAnoRecvAntiData__DelegateSignature(int32 Type, const class FString& AntiData);
	class UAnoSDK* GetInstance();
	void DestoryInstance();
	void AnoUESDKSetUserInfo(enum class ETssSDKEntryId EntryId, const class FString& OpenId);
	void AnoUESDKSetCSChannelDomain(const class FString& DomainName);
	void AnoUESDKSetChannelIP(const class FString& IP);
	void AnoUESDKSendSDKCoreData();
	void AnoUESDKSendDataToSvr();
	void AnoUESDKSendCoreTimeData();
	void AnoUESDKReportThreadShutDown();
	void AnoUESDKReportThreadInit();
	void AnoUESDKRegistInfoListener();
	void AnoUESDKOnResume();
	void AnoUESDKOnRecvSignature(const class FString& Name, const class FString& Buf, int32 Len, int32 Crc);
	void AnoUESDKOnRecvData(const class FString& Data);
	void AnoUESDKOnPause();
	void AnoUESDKIoctl(int32 Request, const class FString& Cmd);
	void AnoUESDKInit(int32 GameID, const class FString& Appkey);
};

// 0x8 (0x40 - 0x38)
// Class AnoSDK.AnoSDKSettings
class UAnoSDKSettings : public UDeveloperSettings
{
public:
	bool                                         bEnableAnoSDK;                                     // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnoSDKSettings* GetDefaultObj();

};

}



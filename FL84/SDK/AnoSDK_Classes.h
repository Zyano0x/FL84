#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
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
	 * Class AnoSDK.AnoSDK
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UAnoSDK : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnAnoRecvAntiData;                                       // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9PM[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAnoSentDataToSvr;                                      // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNS9[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAnoSentCoreData;                                       // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DJJ[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAnoSentCoreTimeData;                                   // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BW2I[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnAnoSentAntiData__DelegateSignature(const struct FAnoSDKAntiData& AntiData);
		void OnAnoRecvAntiData__DelegateSignature(int32_t Type, const class FString& AntiData);
		class UAnoSDK* STATIC_GetInstance();
		void STATIC_DestoryInstance();
		void STATIC_AnoUESDKSetUserInfo(ETssSDKEntryId EntryId, const class FString& OpenId);
		void STATIC_AnoUESDKSetCSChannelDomain(const class FString& DomainName);
		void STATIC_AnoUESDKSetChannelIP(const class FString& IP);
		void STATIC_AnoUESDKSendSDKCoreData();
		void STATIC_AnoUESDKSendDataToSvr();
		void STATIC_AnoUESDKSendCoreTimeData();
		void STATIC_AnoUESDKReportThreadShutDown();
		void STATIC_AnoUESDKReportThreadInit();
		void STATIC_AnoUESDKRegistInfoListener();
		void STATIC_AnoUESDKOnResume();
		void STATIC_AnoUESDKOnRecvSignature(const class FString& Name, const class FString& Buf, int32_t Len, int32_t Crc);
		void STATIC_AnoUESDKOnRecvData(const class FString& Data);
		void STATIC_AnoUESDKOnPause();
		void STATIC_AnoUESDKIoctl(int32_t Request, const class FString& Cmd);
		void STATIC_AnoUESDKInit(int32_t GameID, const class FString& Appkey);
		static UClass* StaticClass();
	};

	/**
	 * Class AnoSDK.AnoSDKSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UAnoSDKSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bEnableAnoSDK;                                           // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86RL[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

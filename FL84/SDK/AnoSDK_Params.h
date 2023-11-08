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
	// # Structs
	// --------------------------------------------------
	/**
	 * DelegateFunction AnoSDK.AnoSDK.OnAnoSentAntiData__DelegateSignature
	 */
	struct UAnoSDK_OnAnoSentAntiData__DelegateSignature_Params
	{
	public:
		struct FAnoSDKAntiData                                     AntiData;                                                // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction AnoSDK.AnoSDK.OnAnoRecvAntiData__DelegateSignature
	 */
	struct UAnoSDK_OnAnoRecvAntiData__DelegateSignature_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9NUO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AntiData;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnoSDK.AnoSDK.GetInstance
	 */
	struct UAnoSDK_GetInstance_Params
	{
	public:
		class UAnoSDK*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnoSDK.AnoSDK.DestoryInstance
	 */
	struct UAnoSDK_DestoryInstance_Params
	{	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKSetUserInfo
	 */
	struct UAnoSDK_AnoUESDKSetUserInfo_Params
	{
	public:
		ETssSDKEntryId                                             EntryId;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C0I4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OpenId;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKSetCSChannelDomain
	 */
	struct UAnoSDK_AnoUESDKSetCSChannelDomain_Params
	{
	public:
		class FString                                              DomainName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKSetChannelIP
	 */
	struct UAnoSDK_AnoUESDKSetChannelIP_Params
	{
	public:
		class FString                                              IP;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKSendSDKCoreData
	 */
	struct UAnoSDK_AnoUESDKSendSDKCoreData_Params
	{	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKSendDataToSvr
	 */
	struct UAnoSDK_AnoUESDKSendDataToSvr_Params
	{	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKSendCoreTimeData
	 */
	struct UAnoSDK_AnoUESDKSendCoreTimeData_Params
	{	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKReportThreadShutDown
	 */
	struct UAnoSDK_AnoUESDKReportThreadShutDown_Params
	{	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKReportThreadInit
	 */
	struct UAnoSDK_AnoUESDKReportThreadInit_Params
	{	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKRegistInfoListener
	 */
	struct UAnoSDK_AnoUESDKRegistInfoListener_Params
	{	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKOnResume
	 */
	struct UAnoSDK_AnoUESDKOnResume_Params
	{	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKOnRecvSignature
	 */
	struct UAnoSDK_AnoUESDKOnRecvSignature_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Buf;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Len;                                                     // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Crc;                                                     // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKOnRecvData
	 */
	struct UAnoSDK_AnoUESDKOnRecvData_Params
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKOnPause
	 */
	struct UAnoSDK_AnoUESDKOnPause_Params
	{	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKIoctl
	 */
	struct UAnoSDK_AnoUESDKIoctl_Params
	{
	public:
		int32_t                                                    Request;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KJUR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Cmd;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AnoSDK.AnoSDK.AnoUESDKInit
	 */
	struct UAnoSDK_AnoUESDKInit_Params
	{
	public:
		int32_t                                                    GameID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VJB7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Appkey;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

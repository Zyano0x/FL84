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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum DownloaderTool.ERawDataAction
	 */
	enum class ERawDataAction : uint8_t
	{
		Default              = 0,
		UTF8String           = 1,
		ReverseDecryptString = 2,
		Texture2DDynamic     = 3,
		MAX                  = 4
	};

	/**
	 * Enum DownloaderTool.EDownloaderFailedType
	 */
	enum class EDownloaderFailedType : uint8_t
	{
		ConnectFailed          = 0,
		RequestHeadFailed      = 1,
		CreateFileFailed       = 2,
		DownloadFailed         = 3,
		WriteFailed            = 4,
		DeleteOldFailed        = 5,
		MoveFailed             = 6,
		CreateDownloadTaskFail = 7,
		GetPlatformFileFail    = 8,
		GetWrongJsonFormat     = 9,
		RequestTimeOut         = 10,
		RequestInvalid         = 11,
		ResponseInvalid        = 12,
		RequestCanceled        = 13,
		ResponseNoContent      = 14,
		TaskHasCompleted       = 15,
		FileIODownloadFailed   = 16,
		MAX                    = 17
	};

	/**
	 * Enum DownloaderTool.EServerInfoState
	 */
	enum class EServerInfoState : uint8_t
	{
		ESIS_NotReady    = 0,
		ESIS_Downloading = 1,
		ESIS_Ready       = 2,
		ESIS_Failed      = 3,
		ESIS_OutOfDate   = 4,
		ESIS_MAX         = 5
	};

	/**
	 * Enum DownloaderTool.EDownloaderState
	 */
	enum class EDownloaderState : uint8_t
	{
		NotStart    = 0,
		Downloading = 1,
		Pausing     = 2,
		Completed   = 3,
		MAX         = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DownloaderTool.DownloaderResponse
	 * Size -> 0x0048
	 */
	struct FDownloaderResponse
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ErrorCode;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X966[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      Data;                                                    // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasSuccessful;                                          // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z5CU[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ContentLength;                                           // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataLength;                                              // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EI1K[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    Timestamp;                                               // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERawDataAction                                             RawDataAction;                                           // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SUTC[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DownloaderTool.DownloaderTaskInfo
	 * Size -> 0x0070
	 */
	struct FDownloaderTaskInfo
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              JsonRequestStr;                                          // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompleted;                                              // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EOFW[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    CompleteTimeStamp;                                       // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsingResumeTrans;                                       // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceRedownload;                                        // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSaveToCache;                                            // 0x0032(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BVOM[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FileDirectory;                                           // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FileExtension;                                           // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERawDataAction                                             RawDataAction;                                           // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXID[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

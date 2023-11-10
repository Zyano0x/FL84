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
	 * Function DownloaderTool.DownloaderUtils.StringFileRawData
	 */
	struct UDownloaderUtils_StringFileRawData_Params
	{
	public:
		struct FDownloaderResponse                                 InResponse;                                              // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DownloaderTool.DownloaderUtils.SaveResponseToCache
	 */
	struct UDownloaderUtils_SaveResponseToCache_Params
	{
	public:
		struct FDownloaderResponse                                 InResponse;                                              // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              CachePath;                                               // 0x0048(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DownloaderTool.DownloaderUtils.GetVerbFromJsonRequestStr
	 */
	struct UDownloaderUtils_GetVerbFromJsonRequestStr_Params
	{
	public:
		class FString                                              JsonRequestStr;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DownloaderTool.DownloaderUtils.GetResponseFromCache
	 */
	struct UDownloaderUtils_GetResponseFromCache_Params
	{
	public:
		class FString                                              InUrl;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CachePath;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDownloaderResponse                                 ReturnValue;                                             // 0x0020(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DownloaderTool.DownloaderUtils.GetHeadersFromJsonRequestStr
	 */
	struct UDownloaderUtils_GetHeadersFromJsonRequestStr_Params
	{
	public:
		class FString                                              JsonRequestStr;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>                         ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DownloaderTool.DownloaderUtils.execConvertRawDataToTexture
	 */
	struct UDownloaderUtils_execConvertRawDataToTexture_Params
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DataLength;                                              // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OKMT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2DDynamic*                                   ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DownloaderTool.DownloaderUtils.DecodeFileRawData
	 */
	struct UDownloaderUtils_DecodeFileRawData_Params
	{
	public:
		struct FDownloaderResponse                                 InResponse;                                              // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

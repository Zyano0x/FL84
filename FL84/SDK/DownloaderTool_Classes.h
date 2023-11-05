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
	 * Class DownloaderTool.DownloaderHttpTask
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UDownloaderHttpTask : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnTaskProgress;                                          // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTaskSuccess;                                           // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTaskFailed;                                            // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_REWW[0x70];                                  // 0x0058(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DownloaderTool.DownloaderUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDownloaderUtils : public UObject
	{
	public:
		class FString STATIC_StringFileRawData(const struct FDownloaderResponse& InResponse);
		void STATIC_SaveResponseToCache(const struct FDownloaderResponse& InResponse, const class FString& CachePath);
		class FString STATIC_GetVerbFromJsonRequestStr(const class FString& JsonRequestStr);
		struct FDownloaderResponse STATIC_GetResponseFromCache(const class FString& InUrl, const class FString& CachePath);
		TMap<class FString, class FString> STATIC_GetHeadersFromJsonRequestStr(const class FString& JsonRequestStr);
		class UTexture2DDynamic* STATIC_execConvertRawDataToTexture(TArray<unsigned char> Data, int32_t DataLength);
		class FString STATIC_DecodeFileRawData(const struct FDownloaderResponse& InResponse);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

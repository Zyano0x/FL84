#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xC8 - 0x28)
// Class DownloaderTool.DownloaderHttpTask
class UDownloaderHttpTask : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnTaskProgress;                                    // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTaskSuccess;                                     // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTaskFailed;                                      // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_63E[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDownloaderHttpTask* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DownloaderTool.DownloaderUtils
class UDownloaderUtils : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDownloaderUtils* GetDefaultObj();

	class FString StringFileRawData(struct FDownloaderResponse& InResponse);
	void SaveResponseToCache(struct FDownloaderResponse& InResponse, const class FString& CachePath);
	class FString GetVerbFromJsonRequestStr(const class FString& JsonRequestStr);
	struct FDownloaderResponse GetResponseFromCache(const class FString& InUrl, const class FString& CachePath);
	TMap<class FString, class FString> GetHeadersFromJsonRequestStr(const class FString& JsonRequestStr);
	class UTexture2DDynamic* ExecConvertRawDataToTexture(TArray<uint8>& Data, int32& DataLength);
	class FString DecodeFileRawData(struct FDownloaderResponse& InResponse);
};

}



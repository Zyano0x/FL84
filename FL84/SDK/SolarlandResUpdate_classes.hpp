#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xD8 - 0x28)
// Class SolarlandResUpdate.DownloadFileTask
class UDownloadFileTask : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnDownloadComplete;                                // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDownloadProgress;                                // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDownloadFailed;                                  // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_148D[0x80];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDownloadFileTask* GetDefaultObj();

	void StartDownload();
	void SetSaveToFile(bool InSet);
	void SetNeedDecode(bool InNeedDecode);
	void SetForceRedownload(bool InForceRedownload);
	class FString GetUrl();
	class UDownloadFileTask* CreateNoFile(const class FString& URL, bool bByChunk);
	class UDownloadFileTask* Create(const class FString& URL, const class FString& FileDirectory, const class FString& Filename, bool bByChunk, bool bForceWrite);
};

// 0xD8 (0x100 - 0x28)
// Class SolarlandResUpdate.SolarlandResUpdater
class USolarlandResUpdater : public UObject
{
public:
	uint8                                        Pad_148F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPakFileEntry>                 ToDownloadPakList;                                 // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FDelegateProperty_                           OnPatchPrompt;                                     // 0x40(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnPatchComplete;                                   // 0x50(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnPatchFailed;                                     // 0x60(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnCDNDownloadFailed;                               // 0x70(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnPatchProgress;                                   // 0x80(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnDownloadServerList;                              // 0x90(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnServerClose;                                     // 0xA0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnBackdoorComplete;                                // 0xB0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnBackdoorFaild;                                   // 0xC0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnBackdoorProgress;                                // 0xD0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnAnnouncementGet;                                 // 0xE0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnAnnouncementGetFail;                             // 0xF0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USolarlandResUpdater* GetDefaultObj();

};

}



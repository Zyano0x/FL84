#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xC8 - 0x28)
// Class SolarlandResUpdate.DownloadFileTask
class UDownloadFileTask : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnDownloadComplete;                                // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDownloadProgress;                                // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDownloadFailed;                                  // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_169C[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDownloadFileTask* GetDefaultObj();

	void StartDownload();
	void SetSaveToFile(bool InSet);
	void SetForceRedownload(bool InForceRedownload);
	class FString GetUrl();
	class UDownloadFileTask* CreateNoFile(const class FString& URL, bool bByChunk);
	class UDownloadFileTask* Create(const class FString& URL, const class FString& FileDirectory, const class FString& Filename, bool bByChunk, bool bForceWrite);
};

// 0xB8 (0xE0 - 0x28)
// Class SolarlandResUpdate.SolarlandResUpdater
class USolarlandResUpdater : public UObject
{
public:
	uint8                                        Pad_169E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnPatchPrompt;                                     // 0x30(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnPatchComplete;                                   // 0x40(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnPatchFailed;                                     // 0x50(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnCDNDownloadFailed;                               // 0x60(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnPatchProgress;                                   // 0x70(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnServerClose;                                     // 0x80(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnBackdoorComplete;                                // 0x90(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnBackdoorFaild;                                   // 0xA0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnBackdoorProgress;                                // 0xB0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnAnnouncementGet;                                 // 0xC0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnAnnouncementGetFail;                             // 0xD0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USolarlandResUpdater* GetDefaultObj();

};

}



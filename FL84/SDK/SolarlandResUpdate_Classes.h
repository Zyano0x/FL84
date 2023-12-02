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
	 * Class SolarlandResUpdate.DownloadFileTask
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UDownloadFileTask : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnDownloadComplete;                                      // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDownloadProgress;                                      // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDownloadFailed;                                        // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MQL[0x70];                                  // 0x0058(0x0070) MISSED OFFSET (PADDING)

	public:
		void StartDownload();
		void SetSaveToFile(bool InSet);
		void SetForceRedownload(bool inForceRedownload);
		class FString GetUrl();
		class UDownloadFileTask* STATIC_CreateNoFile(const class FString& URL, bool bByChunk);
		class UDownloadFileTask* STATIC_Create(const class FString& URL, const class FString& FileDirectory, const class FString& Filename, bool bByChunk, bool bForceWrite);
		static UClass* StaticClass();
	};

	/**
	 * Class SolarlandResUpdate.SolarlandResUpdater
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class USolarlandResUpdater : public UObject
	{
	public:
		unsigned char                                              UnknownData_WIBA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnPatchPrompt;                                           // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnPatchComplete;                                         // 0x0040(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnPatchFailed;                                           // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnCDNDownloadFailed;                                     // 0x0060(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnPatchProgress;                                         // 0x0070(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnServerClose;                                           // 0x0080(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnBackdoorComplete;                                      // 0x0090(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnBackdoorFaild;                                         // 0x00A0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnBackdoorProgress;                                      // 0x00B0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnAnnouncementGet;                                       // 0x00C0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnAnnouncementGetFail;                                   // 0x00D0(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

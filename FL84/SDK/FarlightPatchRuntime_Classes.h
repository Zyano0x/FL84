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
	 * Class FarlightPatchRuntime.PakHelper
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPakHelper : public UObject
	{
	public:
		void STATIC_ReloadRedirectSettingsFromIni(const class FString& IniPath);
		bool STATIC_ReloadIniFile(const class FString& StrippedConfigFileName, const class FString& FilePath);
		void STATIC_ReloadGameUserSettings();
		void STATIC_ReloadDeviceProfiles();
		void STATIC_ReloadCVarSettingsFromIni();
		void STATIC_OpenShaderPatchLibrary(const class FString& ShaderPatchLibraryName, const class FString& LibraryDir, bool bShaderPatchLibUnique);
		bool STATIC_MountPak(const class FString& InPakFilename, int32_t PakOrder);
		class FString STATIC_GetStrippedConfigFileName(const class FString& IniName);
		class FString STATIC_GetProjectName();
		class UPakWriter* STATIC_CreatePakWriter(const class FString& InFilename, const class FString& InMountPoint);
		class UPakReader* STATIC_CreatePakReader(const class FString& InFilename, bool bLoadIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class FarlightPatchRuntime.PakReader
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UPakReader : public UObject
	{
	public:
		unsigned char                                              UnknownData_GNYP[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		int64_t GetTotalSize();
		TArray<struct FPakEntryInfo> GetPakIndex();
		void Close();
		static UClass* StaticClass();
	};

	/**
	 * Class FarlightPatchRuntime.PakWriter
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UPakWriter : public UObject
	{
	public:
		unsigned char                                              UnknownData_58VW[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

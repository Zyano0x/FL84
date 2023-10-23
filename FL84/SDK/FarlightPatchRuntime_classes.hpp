#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class FarlightPatchRuntime.PakHelper
class UPakHelper : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPakHelper* GetDefaultObj();

	bool ReloadIniFile(const class FString& StrippedConfigFileName, const class FString& FilePath);
	void ReloadGameUserSettings();
	void ReloadDeviceProfiles();
	void ReloadCVarSettingsFromIni();
	void OpenShaderPatchLibrary(const class FString& ShaderPatchLibraryName, const class FString& LibraryDir, bool& bShaderPatchLibUnique);
	bool MountPak(const class FString& InPakFilename, int32 PakOrder);
	class FString GetStrippedConfigFileName(const class FString& IniName);
	class FString GetProjectName();
	class UPakWriter* CreatePakWriter(const class FString& InFilename, const class FString& InMountPoint);
	class UPakReader* CreatePakReader(const class FString& InFilename, bool bLoadIndex);
};

// 0x28 (0x50 - 0x28)
// Class FarlightPatchRuntime.PakReader
class UPakReader : public UObject
{
public:
	uint8                                        Pad_A22[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPakReader* GetDefaultObj();

	int64 GetTotalSize();
	TArray<struct FPakEntryInfo> GetPakIndex();
	void Close();
};

// 0x98 (0xC0 - 0x28)
// Class FarlightPatchRuntime.PakWriter
class UPakWriter : public UObject
{
public:
	uint8                                        Pad_A23[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPakWriter* GetDefaultObj();

};

}



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
	 * Function FarlightPatchRuntime.PakHelper.ReloadRedirectSettingsFromIni
	 */
	struct UPakHelper_ReloadRedirectSettingsFromIni_Params
	{
	public:
		class FString                                              IniPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FarlightPatchRuntime.PakHelper.ReloadIniFile
	 */
	struct UPakHelper_ReloadIniFile_Params
	{
	public:
		class FString                                              StrippedConfigFileName;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FilePath;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FarlightPatchRuntime.PakHelper.ReloadGameUserSettings
	 */
	struct UPakHelper_ReloadGameUserSettings_Params
	{	};

	/**
	 * Function FarlightPatchRuntime.PakHelper.ReloadDeviceProfiles
	 */
	struct UPakHelper_ReloadDeviceProfiles_Params
	{	};

	/**
	 * Function FarlightPatchRuntime.PakHelper.ReloadCVarSettingsFromIni
	 */
	struct UPakHelper_ReloadCVarSettingsFromIni_Params
	{	};

	/**
	 * Function FarlightPatchRuntime.PakHelper.OpenShaderPatchLibrary
	 */
	struct UPakHelper_OpenShaderPatchLibrary_Params
	{
	public:
		class FString                                              ShaderPatchLibraryName;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LibraryDir;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShaderPatchLibUnique;                                   // 0x0020(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FarlightPatchRuntime.PakHelper.MountPak
	 */
	struct UPakHelper_MountPak_Params
	{
	public:
		class FString                                              InPakFilename;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PakOrder;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FarlightPatchRuntime.PakHelper.GetStrippedConfigFileName
	 */
	struct UPakHelper_GetStrippedConfigFileName_Params
	{
	public:
		class FString                                              IniName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FarlightPatchRuntime.PakHelper.GetProjectName
	 */
	struct UPakHelper_GetProjectName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FarlightPatchRuntime.PakHelper.CreatePakWriter
	 */
	struct UPakHelper_CreatePakWriter_Params
	{
	public:
		class FString                                              InFilename;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InMountPoint;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPakWriter*                                          ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FarlightPatchRuntime.PakHelper.CreatePakReader
	 */
	struct UPakHelper_CreatePakReader_Params
	{
	public:
		class FString                                              InFilename;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLoadIndex;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G8JH[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPakReader*                                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FarlightPatchRuntime.PakReader.GetTotalSize
	 */
	struct UPakReader_GetTotalSize_Params
	{
	public:
		int64_t                                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FarlightPatchRuntime.PakReader.GetPakIndex
	 */
	struct UPakReader_GetPakIndex_Params
	{
	public:
		TArray<struct FPakEntryInfo>                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FarlightPatchRuntime.PakReader.Close
	 */
	struct UPakReader_Close_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

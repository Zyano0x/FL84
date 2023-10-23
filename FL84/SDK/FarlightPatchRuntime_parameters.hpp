#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// Function FarlightPatchRuntime.PakHelper.ReloadIniFile
struct UPakHelper_ReloadIniFile_Params
{
public:
	class FString                                StrippedConfigFileName;                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FilePath;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function FarlightPatchRuntime.PakHelper.OpenShaderPatchLibrary
struct UPakHelper_OpenShaderPatchLibrary_Params
{
public:
	class FString                                ShaderPatchLibraryName;                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LibraryDir;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShaderPatchLibUnique;                             // 0x20(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function FarlightPatchRuntime.PakHelper.MountPak
struct UPakHelper_MountPak_Params
{
public:
	class FString                                InPakFilename;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PakOrder;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1C[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function FarlightPatchRuntime.PakHelper.GetStrippedConfigFileName
struct UPakHelper_GetStrippedConfigFileName_Params
{
public:
	class FString                                IniName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FarlightPatchRuntime.PakHelper.GetProjectName
struct UPakHelper_GetProjectName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function FarlightPatchRuntime.PakHelper.CreatePakWriter
struct UPakHelper_CreatePakWriter_Params
{
public:
	class FString                                InFilename;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InMountPoint;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPakWriter*                            ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function FarlightPatchRuntime.PakHelper.CreatePakReader
struct UPakHelper_CreatePakReader_Params
{
public:
	class FString                                InFilename;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoadIndex;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A21[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPakReader*                            ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function FarlightPatchRuntime.PakReader.GetTotalSize
struct UPakReader_GetTotalSize_Params
{
public:
	int64                                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function FarlightPatchRuntime.PakReader.GetPakIndex
struct UPakReader_GetPakIndex_Params
{
public:
	TArray<struct FPakEntryInfo>                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}



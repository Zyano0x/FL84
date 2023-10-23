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

// 0x1 (0x1 - 0x0)
// Function SolarlandResUpdate.DownloadFileTask.SetSaveToFile
struct UDownloadFileTask_SetSaveToFile_Params
{
public:
	bool                                         InSet;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SolarlandResUpdate.DownloadFileTask.SetNeedDecode
struct UDownloadFileTask_SetNeedDecode_Params
{
public:
	bool                                         InNeedDecode;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SolarlandResUpdate.DownloadFileTask.SetForceRedownload
struct UDownloadFileTask_SetForceRedownload_Params
{
public:
	bool                                         InForceRedownload;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SolarlandResUpdate.DownloadFileTask.GetUrl
struct UDownloadFileTask_GetUrl_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SolarlandResUpdate.DownloadFileTask.CreateNoFile
struct UDownloadFileTask_CreateNoFile_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bByChunk;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDownloadFileTask*                     ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SolarlandResUpdate.DownloadFileTask.Create
struct UDownloadFileTask_Create_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FileDirectory;                                     // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bByChunk;                                          // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceWrite;                                       // 0x31(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDownloadFileTask*                     ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}



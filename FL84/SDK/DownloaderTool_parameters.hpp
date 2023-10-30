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

// 0x58 (0x58 - 0x0)
// Function DownloaderTool.DownloaderUtils.StringFileRawData
struct UDownloaderUtils_StringFileRawData_Params
{
public:
	struct FDownloaderResponse                   InResponse;                                        // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function DownloaderTool.DownloaderUtils.SaveResponseToCache
struct UDownloaderUtils_SaveResponseToCache_Params
{
public:
	struct FDownloaderResponse                   InResponse;                                        // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                CachePath;                                         // 0x48(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function DownloaderTool.DownloaderUtils.GetVerbFromJsonRequestStr
struct UDownloaderUtils_GetVerbFromJsonRequestStr_Params
{
public:
	class FString                                JsonRequestStr;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function DownloaderTool.DownloaderUtils.GetResponseFromCache
struct UDownloaderUtils_GetResponseFromCache_Params
{
public:
	class FString                                InUrl;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CachePath;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDownloaderResponse                   ReturnValue;                                       // 0x20(0x48)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function DownloaderTool.DownloaderUtils.GetHeadersFromJsonRequestStr
struct UDownloaderUtils_GetHeadersFromJsonRequestStr_Params
{
public:
	class FString                                JsonRequestStr;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           ReturnValue;                                       // 0x10(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function DownloaderTool.DownloaderUtils.execConvertRawDataToTexture
struct UDownloaderUtils_ExecConvertRawDataToTexture_Params
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataLength;                                        // 0x10(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_400[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2DDynamic*                     ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function DownloaderTool.DownloaderUtils.DecodeFileRawData
struct UDownloaderUtils_DecodeFileRawData_Params
{
public:
	struct FDownloaderResponse                   InResponse;                                        // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}



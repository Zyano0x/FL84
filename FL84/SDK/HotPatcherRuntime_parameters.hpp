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
// Function HotPatcherRuntime.FlibAssetManageHelper.SaveStringToFile
struct UFlibAssetManageHelper_SaveStringToFile_Params
{
public:
	class FString                                InFile;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InString;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1026[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.PackagePathToFilename
struct UFlibAssetManageHelper_PackagePathToFilename_Params
{
public:
	class FString                                InPackagePath;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.ModuleIsEnabled
struct UFlibAssetManageHelper_ModuleIsEnabled_Params
{
public:
	class FString                                InModuleName;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_102A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.LongPackageNameToPackagePath
struct UFlibAssetManageHelper_LongPackageNameToPackagePath_Params
{
public:
	class FString                                InLongPackageName;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.LoadFileToString
struct UFlibAssetManageHelper_LoadFileToString_Params
{
public:
	class FString                                InFile;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutString;                                         // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1032[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.GetSpecifyAssetDetail
struct UFlibAssetManageHelper_GetSpecifyAssetDetail_Params
{
public:
	class FString                                InLongPackageName;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAssetDetail                          OutAssetDetail;                                    // 0x10(0x18)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1033[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.GetRedirectorList
struct UFlibAssetManageHelper_GetRedirectorList_Params
{
public:
	TArray<class FString>                        InFilterPackagePaths;                              // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetDetail>                  OutRedirector;                                     // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1034[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.GetPluginModuleAbsDir
struct UFlibAssetManageHelper_GetPluginModuleAbsDir_Params
{
public:
	class FString                                InPluginModuleName;                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutPath;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1035[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.GetModuleNameByRelativePath
struct UFlibAssetManageHelper_GetModuleNameByRelativePath_Params
{
public:
	class FString                                InRelativePath;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutModuleName;                                     // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1037[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.GetEnableModuleAbsDir
struct UFlibAssetManageHelper_GetEnableModuleAbsDir_Params
{
public:
	class FString                                InModuleName;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutPath;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1038[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.GetAssetReferenceEx
struct UFlibAssetManageHelper_GetAssetReferenceEx_Params
{
public:
	struct FAssetDetail                          InAsset;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<enum class EAssetRegistryDependencyTypeEx> SearchAssetDepTypes;                               // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetDetail>                  OutRefAsset;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_103E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.GetAssetPackageGUID
struct UFlibAssetManageHelper_GetAssetPackageGUID_Params
{
public:
	class FString                                InPackagePath;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OutGUID;                                           // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1042[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.GetAllEnabledModuleName
struct UFlibAssetManageHelper_GetAllEnabledModuleName_Params
{
public:
	TMap<class FString, class FString>           OutModules;                                        // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.FindFilesRecursive
struct UFlibAssetManageHelper_FindFilesRecursive_Params
{
public:
	class FString                                InStartDir;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        OutFileList;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InRecursive;                                       // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1045[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.FilterNoRefAssetsWithIgnoreFilter
struct UFlibAssetManageHelper_FilterNoRefAssetsWithIgnoreFilter_Params
{
public:
	TArray<struct FAssetDetail>                  InAssetsDetail;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        InIgnoreFilters;                                   // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetDetail>                  OutHasRefAssetsDetail;                             // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetDetail>                  OutDontHasRefAssetsDetail;                         // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.FilterNoRefAssets
struct UFlibAssetManageHelper_FilterNoRefAssets_Params
{
public:
	TArray<struct FAssetDetail>                  InAssetsDetail;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetDetail>                  OutHasRefAssetsDetail;                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetDetail>                  OutDontHasRefAssetsDetail;                         // 0x20(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.FilenameToPackagePath
struct UFlibAssetManageHelper_FilenameToPackagePath_Params
{
public:
	class FString                                InAbsPath;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutPackagePath;                                    // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1047[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.ExportCookPakCommandToFile
struct UFlibAssetManageHelper_ExportCookPakCommandToFile_Params
{
public:
	TArray<class FString>                        InCommand;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InFile;                                            // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1049[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.ConvRelativeDirToAbsDir
struct UFlibAssetManageHelper_ConvRelativeDirToAbsDir_Params
{
public:
	class FString                                InRelativePath;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutAbsPath;                                        // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_104D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.ConvLongPackageNameToCookedPath
struct UFlibAssetManageHelper_ConvLongPackageNameToCookedPath_Params
{
public:
	class FString                                InProjectAbsDir;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InPlatformName;                                    // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InLongPackageName;                                 // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        OutCookedAssetPath;                                // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        OutCookedAssetRelativePath;                        // 0x40(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1050[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.CombineAssetsDetailAsFAssetDepenInfo
struct UFlibAssetManageHelper_CombineAssetsDetailAsFAssetDepenInfo_Params
{
public:
	TArray<struct FAssetDetail>                  InAssetsDetailList;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAssetDependenciesInfo                OutAssetInfo;                                      // 0x10(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1051[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// Function HotPatcherRuntime.FlibAssetManageHelper.CombineAssetDependencies
struct UFlibAssetManageHelper_CombineAssetDependencies_Params
{
public:
	struct FAssetDependenciesInfo                A;                                                 // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAssetDependenciesInfo                B;                                                 // 0x50(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAssetDependenciesInfo                ReturnValue;                                       // 0xA0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HotPatcherRuntime.FlibPakHelper.UnMountPak
struct UFlibPakHelper_UnMountPak_Params
{
public:
	class FString                                PakPath;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1056[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function HotPatcherRuntime.FlibPakHelper.ScanPlatformDirectory
struct UFlibPakHelper_ScanPlatformDirectory_Params
{
public:
	class FString                                InRelativePath;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeFile;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeDir;                                       // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursively;                                      // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1059[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        OutResault;                                        // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function HotPatcherRuntime.FlibPakHelper.ScanExtenPakFiles
struct UFlibPakHelper_ScanExtenPakFiles_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function HotPatcherRuntime.FlibPakHelper.ScanExtenFilesInDirectory
struct UFlibPakHelper_ScanExtenFilesInDirectory_Params
{
public:
	class FString                                InRelativePath;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InExtenPostfix;                                    // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InRecursively;                                     // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        OutFiles;                                          // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function HotPatcherRuntime.FlibPakHelper.ScanAllVersionDescribleFiles
struct UFlibPakHelper_ScanAllVersionDescribleFiles_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HotPatcherRuntime.FlibPakHelper.OpenPSO
struct UFlibPakHelper_OpenPSO_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1061[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function HotPatcherRuntime.FlibPakHelper.MountPak
struct UFlibPakHelper_MountPak_Params
{
public:
	class FString                                PakPath;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PakOrder;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1062[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InMountPoint;                                      // 0x18(0x10)(Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1063[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibPakHelper.LoadShaderbytecode
struct UFlibPakHelper_LoadShaderbytecode_Params
{
public:
	class FString                                LibraryName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LibraryDir;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1064[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibPakHelper.LoadAssetRegistry
struct UFlibPakHelper_LoadAssetRegistry_Params
{
public:
	class FString                                LibraryName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LibraryDir;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1067[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function HotPatcherRuntime.FlibPakHelper.GetPakOrderByPakPath
struct UFlibPakHelper_GetPakOrderByPakPath_Params
{
public:
	class FString                                PakFile;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1068[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function HotPatcherRuntime.FlibPakHelper.GetAllMountedPaks
struct UFlibPakHelper_GetAllMountedPaks_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibPakHelper.ExecMountPak
struct UFlibPakHelper_ExecMountPak_Params
{
public:
	class FString                                InPakPath;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InPakOrder;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1069[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                InMountPoint;                                      // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibPakHelper.CreateFileByBytes
struct UFlibPakHelper_CreateFileByBytes_Params
{
public:
	class FString                                InFile;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                InBytes;                                           // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InWriteFlag;                                       // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_106A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function HotPatcherRuntime.FlibPakHelper.CloseShaderbytecode
struct UFlibPakHelper_CloseShaderbytecode_Params
{
public:
	class FString                                LibraryName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.LoadShaderbytecode
struct UFlibPatchParserHelper_LoadShaderbytecode_Params
{
public:
	class FString                                LibraryName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LibraryDir;                                        // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_106B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.HashStringWithSHA1
struct UFlibPatchParserHelper_HashStringWithSHA1_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectName
struct UFlibPatchParserHelper_GetProjectName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectIniFiles
struct UFlibPatchParserHelper_GetProjectIniFiles_Params
{
public:
	class FString                                InProjectDir;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InPlatformName;                                    // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectFilePath
struct UFlibPatchParserHelper_GetProjectFilePath_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.GetPakFileInfo
struct UFlibPatchParserHelper_GetPakFileInfo_Params
{
public:
	class FString                                InFile;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPakFileInfo                          OutFileInfo;                                       // 0x10(0x28)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_106D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.GetIniConfigs
struct UFlibPatchParserHelper_GetIniConfigs_Params
{
public:
	class FString                                InSearchDir;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InPlatformName;                                    // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.GetEngineConfigs
struct UFlibPatchParserHelper_GetEngineConfigs_Params
{
public:
	class FString                                InPlatformName;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.GetEnabledPluginConfigs
struct UFlibPatchParserHelper_GetEnabledPluginConfigs_Params
{
public:
	class FString                                InPlatformName;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedShaderBytecodeFiles
struct UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Params
{
public:
	class FString                                InProjectAbsDir;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InProjectName;                                     // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InPlatformName;                                    // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InGalobalBytecode;                                 // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InProjectBytecode;                                 // 0x31(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1070[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        OutFiles;                                          // 0x38(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1071[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedGlobalShaderCacheFiles
struct UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Params
{
public:
	class FString                                InProjectDir;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InPlatformName;                                    // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedAssetRegistryFiles
struct UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Params
{
public:
	class FString                                InProjectAbsDir;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InProjectName;                                     // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InPlatformName;                                    // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutFiles;                                          // 0x30(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1075[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.GetAvailableMaps
struct UFlibPatchParserHelper_GetAvailableMaps_Params
{
public:
	class FString                                GameName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IncludeEngineMaps;                                 // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IncludePluginMaps;                                 // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Sorted;                                            // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1078[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.GetAllExFilesByPlatform
struct UFlibPatchParserHelper_GetAllExFilesByPlatform_Params
{
public:
	struct FPlatformExternAssets                 InPlatformConf;                                    // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         InGeneratedHash;                                   // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_107B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlatformExternFiles                  ReturnValue;                                       // 0x30(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x198 (0x198 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAssets
struct UFlibPatchParserHelper_DiffVersionAssets_Params
{
public:
	struct FAssetDependenciesInfo                InNewVersion;                                      // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAssetDependenciesInfo                InBaseVersion;                                     // 0x50(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAssetDependenciesInfo                OutAddAsset;                                       // 0xA0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FAssetDependenciesInfo                OutModifyAsset;                                    // 0xF0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FAssetDependenciesInfo                OutDeleteAsset;                                    // 0x140(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x190(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1080[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x288 (0x288 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAllPlatformExFiles
struct UFlibPatchParserHelper_DiffVersionAllPlatformExFiles_Params
{
public:
	struct FHotPatcherVersion                    InBaseVersion;                                     // 0x0(0x118)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FHotPatcherVersion                    InNewVersion;                                      // 0x118(0x118)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<enum class ETargetPlatform, struct FPatchVersionExternDiff> OutDiff;                                           // 0x230(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x280(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1081[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function HotPatcherRuntime.FlibPatchParserHelper.CloseShaderbytecode
struct UFlibPatchParserHelper_CloseShaderbytecode_Params
{
public:
	class FString                                LibraryName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.SavePipelineFileCache
struct UFlibShaderPipelineCacheHelper_SavePipelineFileCache_Params
{
public:
	enum class EPSOSaveMode                      Mode;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.LoadShaderPipelineCache
struct UFlibShaderPipelineCacheHelper_LoadShaderPipelineCache_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1082[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledUsePSO
struct UFlibShaderPipelineCacheHelper_IsEnabledUsePSO_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledSaveBoundPSOLog
struct UFlibShaderPipelineCacheHelper_IsEnabledSaveBoundPSOLog_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledLogPSO
struct UFlibShaderPipelineCacheHelper_IsEnabledLogPSO_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableShaderPipelineCache
struct UFlibShaderPipelineCacheHelper_EnableShaderPipelineCache_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableSaveBoundPSOLog
struct UFlibShaderPipelineCacheHelper_EnableSaveBoundPSOLog_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableLogPSO
struct UFlibShaderPipelineCacheHelper_EnableLogPSO_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}



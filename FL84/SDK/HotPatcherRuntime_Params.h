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
	 * Function HotPatcherRuntime.FlibAssetManageHelper.SaveStringToFile
	 */
	struct UFlibAssetManageHelper_SaveStringToFile_Params
	{
	public:
		class FString                                              InFile;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              inString;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.PackagePathToFilename
	 */
	struct UFlibAssetManageHelper_PackagePathToFilename_Params
	{
	public:
		class FString                                              InPackagePath;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.ModuleIsEnabled
	 */
	struct UFlibAssetManageHelper_ModuleIsEnabled_Params
	{
	public:
		class FString                                              InModuleName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.LongPackageNameToPackagePath
	 */
	struct UFlibAssetManageHelper_LongPackageNameToPackagePath_Params
	{
	public:
		class FString                                              InLongPackageName;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.LoadFileToString
	 */
	struct UFlibAssetManageHelper_LoadFileToString_Params
	{
	public:
		class FString                                              InFile;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutString;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.GetSpecifyAssetDetail
	 */
	struct UFlibAssetManageHelper_GetSpecifyAssetDetail_Params
	{
	public:
		class FString                                              InLongPackageName;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAssetDetail                                        OutAssetDetail;                                          // 0x0010(0x0018)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.GetRedirectorList
	 */
	struct UFlibAssetManageHelper_GetRedirectorList_Params
	{
	public:
		TArray<class FString>                                      InFilterPackagePaths;                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAssetDetail>                                OutRedirector;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.GetPluginModuleAbsDir
	 */
	struct UFlibAssetManageHelper_GetPluginModuleAbsDir_Params
	{
	public:
		class FString                                              InPluginModuleName;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutPath;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.GetModuleNameByRelativePath
	 */
	struct UFlibAssetManageHelper_GetModuleNameByRelativePath_Params
	{
	public:
		class FString                                              InRelativePath;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutModuleName;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.GetEnableModuleAbsDir
	 */
	struct UFlibAssetManageHelper_GetEnableModuleAbsDir_Params
	{
	public:
		class FString                                              InModuleName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutPath;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.GetAssetReferenceEx
	 */
	struct UFlibAssetManageHelper_GetAssetReferenceEx_Params
	{
	public:
		struct FAssetDetail                                        InAsset;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		TArray<EAssetRegistryDependencyTypeEx>                     SearchAssetDepTypes;                                     // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAssetDetail>                                OutRefAsset;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.GetAssetPackageGUID
	 */
	struct UFlibAssetManageHelper_GetAssetPackageGUID_Params
	{
	public:
		class FString                                              InPackagePath;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OutGUID;                                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.GetAllEnabledModuleName
	 */
	struct UFlibAssetManageHelper_GetAllEnabledModuleName_Params
	{
	public:
		TMap<class FString, class FString>                         OutModules;                                              // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.FindFilesRecursive
	 */
	struct UFlibAssetManageHelper_FindFilesRecursive_Params
	{
	public:
		class FString                                              InStartDir;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      OutFileList;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InRecursive;                                             // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.FilterNoRefAssetsWithIgnoreFilter
	 */
	struct UFlibAssetManageHelper_FilterNoRefAssetsWithIgnoreFilter_Params
	{
	public:
		TArray<struct FAssetDetail>                                InAssetsDetail;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      InIgnoreFilters;                                         // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAssetDetail>                                OutHasRefAssetsDetail;                                   // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAssetDetail>                                OutDontHasRefAssetsDetail;                               // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.FilterNoRefAssets
	 */
	struct UFlibAssetManageHelper_FilterNoRefAssets_Params
	{
	public:
		TArray<struct FAssetDetail>                                InAssetsDetail;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAssetDetail>                                OutHasRefAssetsDetail;                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAssetDetail>                                OutDontHasRefAssetsDetail;                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.FilenameToPackagePath
	 */
	struct UFlibAssetManageHelper_FilenameToPackagePath_Params
	{
	public:
		class FString                                              InAbsPath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutPackagePath;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.ExportCookPakCommandToFile
	 */
	struct UFlibAssetManageHelper_ExportCookPakCommandToFile_Params
	{
	public:
		TArray<class FString>                                      InCommand;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InFile;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.ConvRelativeDirToAbsDir
	 */
	struct UFlibAssetManageHelper_ConvRelativeDirToAbsDir_Params
	{
	public:
		class FString                                              InRelativePath;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutAbsPath;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.ConvLongPackageNameToCookedPath
	 */
	struct UFlibAssetManageHelper_ConvLongPackageNameToCookedPath_Params
	{
	public:
		class FString                                              InProjectAbsDir;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InPlatformName;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InLongPackageName;                                       // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      OutCookedAssetPath;                                      // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      OutCookedAssetRelativePath;                              // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.CombineAssetsDetailAsFAssetDepenInfo
	 */
	struct UFlibAssetManageHelper_CombineAssetsDetailAsFAssetDepenInfo_Params
	{
	public:
		TArray<struct FAssetDetail>                                InAssetsDetailList;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAssetDependenciesInfo                              OutAssetInfo;                                            // 0x0010(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibAssetManageHelper.CombineAssetDependencies
	 */
	struct UFlibAssetManageHelper_CombineAssetDependencies_Params
	{
	public:
		struct FAssetDependenciesInfo                              A;                                                       // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAssetDependenciesInfo                              B;                                                       // 0x0050(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAssetDependenciesInfo                              ReturnValue;                                             // 0x00A0(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.UnMountPak
	 */
	struct UFlibPakHelper_UnMountPak_Params
	{
	public:
		class FString                                              PakPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.ScanPlatformDirectory
	 */
	struct UFlibPakHelper_ScanPlatformDirectory_Params
	{
	public:
		class FString                                              InRelativePath;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeFile;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIncludeDir;                                             // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRecursively;                                            // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E4SP[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      OutResault;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.ScanExtenPakFiles
	 */
	struct UFlibPakHelper_ScanExtenPakFiles_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.ScanExtenFilesInDirectory
	 */
	struct UFlibPakHelper_ScanExtenFilesInDirectory_Params
	{
	public:
		class FString                                              InRelativePath;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InExtenPostfix;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InRecursively;                                           // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AJUX[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      OutFiles;                                                // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.ScanAllVersionDescribleFiles
	 */
	struct UFlibPakHelper_ScanAllVersionDescribleFiles_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.ReloadShaderbytecode
	 */
	struct UFlibPakHelper_ReloadShaderbytecode_Params
	{	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.OpenPSO
	 */
	struct UFlibPakHelper_OpenPSO_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.MountPak
	 */
	struct UFlibPakHelper_MountPak_Params
	{
	public:
		class FString                                              PakPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PakOrder;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C2OO[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InMountPoint;                                            // 0x0018(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.LoadShaderbytecode
	 */
	struct UFlibPakHelper_LoadShaderbytecode_Params
	{
	public:
		class FString                                              LibraryName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LibraryDir;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.LoadAssetRegistry
	 */
	struct UFlibPakHelper_LoadAssetRegistry_Params
	{
	public:
		class FString                                              LibraryName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LibraryDir;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.GetPakOrderByPakPath
	 */
	struct UFlibPakHelper_GetPakOrderByPakPath_Params
	{
	public:
		class FString                                              PakFile;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.GetAllMountedPaks
	 */
	struct UFlibPakHelper_GetAllMountedPaks_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.ExecMountPak
	 */
	struct UFlibPakHelper_ExecMountPak_Params
	{
	public:
		class FString                                              InPakPath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InPakOrder;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6NJB[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InMountPoint;                                            // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.CreateFileByBytes
	 */
	struct UFlibPakHelper_CreateFileByBytes_Params
	{
	public:
		class FString                                              InFile;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<unsigned char>                                      InBytes;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InWriteFlag;                                             // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPakHelper.CloseShaderbytecode
	 */
	struct UFlibPakHelper_CloseShaderbytecode_Params
	{
	public:
		class FString                                              LibraryName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.ReloadShaderbytecode
	 */
	struct UFlibPatchParserHelper_ReloadShaderbytecode_Params
	{	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.LoadShaderbytecode
	 */
	struct UFlibPatchParserHelper_LoadShaderbytecode_Params
	{
	public:
		class FString                                              LibraryName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              LibraryDir;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.HashStringWithSHA1
	 */
	struct UFlibPatchParserHelper_HashStringWithSHA1_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectName
	 */
	struct UFlibPatchParserHelper_GetProjectName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectIniFiles
	 */
	struct UFlibPatchParserHelper_GetProjectIniFiles_Params
	{
	public:
		class FString                                              InProjectDir;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InPlatformName;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectFilePath
	 */
	struct UFlibPatchParserHelper_GetProjectFilePath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.GetPakFileInfo
	 */
	struct UFlibPatchParserHelper_GetPakFileInfo_Params
	{
	public:
		class FString                                              InFile;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPakFileInfo                                        OutFileInfo;                                             // 0x0010(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.GetIniConfigs
	 */
	struct UFlibPatchParserHelper_GetIniConfigs_Params
	{
	public:
		class FString                                              InSearchDir;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InPlatformName;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.GetEngineConfigs
	 */
	struct UFlibPatchParserHelper_GetEngineConfigs_Params
	{
	public:
		class FString                                              InPlatformName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.GetEnabledPluginConfigs
	 */
	struct UFlibPatchParserHelper_GetEnabledPluginConfigs_Params
	{
	public:
		class FString                                              InPlatformName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedShaderBytecodeFiles
	 */
	struct UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Params
	{
	public:
		class FString                                              InProjectAbsDir;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InProjectName;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InPlatformName;                                          // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InGalobalBytecode;                                       // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InProjectBytecode;                                       // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6LCA[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      OutFiles;                                                // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedGlobalShaderCacheFiles
	 */
	struct UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Params
	{
	public:
		class FString                                              InProjectDir;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InPlatformName;                                          // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedAssetRegistryFiles
	 */
	struct UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Params
	{
	public:
		class FString                                              InProjectAbsDir;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InProjectName;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InPlatformName;                                          // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OutFiles;                                                // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.GetAvailableMaps
	 */
	struct UFlibPatchParserHelper_GetAvailableMaps_Params
	{
	public:
		class FString                                              GameName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IncludeEngineMaps;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IncludePluginMaps;                                       // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Sorted;                                                  // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AVUD[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.GetAllExFilesByPlatform
	 */
	struct UFlibPatchParserHelper_GetAllExFilesByPlatform_Params
	{
	public:
		struct FPlatformExternAssets                               InPlatformConf;                                          // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       InGeneratedHash;                                         // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0WIZ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlatformExternFiles                                ReturnValue;                                             // 0x0030(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAssets
	 */
	struct UFlibPatchParserHelper_DiffVersionAssets_Params
	{
	public:
		struct FAssetDependenciesInfo                              InNewVersion;                                            // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAssetDependenciesInfo                              InBaseVersion;                                           // 0x0050(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAssetDependenciesInfo                              OutAddAsset;                                             // 0x00A0(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FAssetDependenciesInfo                              OutModifyAsset;                                          // 0x00F0(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FAssetDependenciesInfo                              OutDeleteAsset;                                          // 0x0140(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0190(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAllPlatformExFiles
	 */
	struct UFlibPatchParserHelper_DiffVersionAllPlatformExFiles_Params
	{
	public:
		struct FHotPatcherVersion                                  InBaseVersion;                                           // 0x0000(0x0118)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FHotPatcherVersion                                  InNewVersion;                                            // 0x0118(0x0118)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<ETargetPlatform, struct FPatchVersionExternDiff>      OutDiff;                                                 // 0x0230(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0280(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibPatchParserHelper.CloseShaderbytecode
	 */
	struct UFlibPatchParserHelper_CloseShaderbytecode_Params
	{
	public:
		class FString                                              LibraryName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.SavePipelineFileCache
	 */
	struct UFlibShaderPipelineCacheHelper_SavePipelineFileCache_Params
	{
	public:
		EPSOSaveMode                                               Mode;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.LoadShaderPipelineCache
	 */
	struct UFlibShaderPipelineCacheHelper_LoadShaderPipelineCache_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledUsePSO
	 */
	struct UFlibShaderPipelineCacheHelper_IsEnabledUsePSO_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledSaveBoundPSOLog
	 */
	struct UFlibShaderPipelineCacheHelper_IsEnabledSaveBoundPSOLog_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledLogPSO
	 */
	struct UFlibShaderPipelineCacheHelper_IsEnabledLogPSO_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableShaderPipelineCache
	 */
	struct UFlibShaderPipelineCacheHelper_EnableShaderPipelineCache_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableSaveBoundPSOLog
	 */
	struct UFlibShaderPipelineCacheHelper_EnableSaveBoundPSOLog_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableLogPSO
	 */
	struct UFlibShaderPipelineCacheHelper_EnableLogPSO_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HotPatcherRuntime.MountListener.Init
	 */
	struct UMountListener_Init_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

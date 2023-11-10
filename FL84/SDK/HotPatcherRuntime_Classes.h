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
	 * Class HotPatcherRuntime.FlibAssetManageHelper
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFlibAssetManageHelper : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SaveStringToFile(const class FString& InFile, const class FString& inString);
		class FString STATIC_PackagePathToFilename(const class FString& InPackagePath);
		bool STATIC_ModuleIsEnabled(const class FString& InModuleName);
		class FString STATIC_LongPackageNameToPackagePath(const class FString& InLongPackageName);
		bool STATIC_LoadFileToString(const class FString& InFile, class FString* OutString);
		bool STATIC_GetSpecifyAssetDetail(const class FString& InLongPackageName, struct FAssetDetail* OutAssetDetail);
		bool STATIC_GetRedirectorList(TArray<class FString> InFilterPackagePaths, TArray<struct FAssetDetail>* OutRedirector);
		bool STATIC_GetPluginModuleAbsDir(const class FString& InPluginModuleName, class FString* OutPath);
		bool STATIC_GetModuleNameByRelativePath(const class FString& InRelativePath, class FString* OutModuleName);
		bool STATIC_GetEnableModuleAbsDir(const class FString& InModuleName, class FString* OutPath);
		bool STATIC_GetAssetReferenceEx(const struct FAssetDetail& InAsset, TArray<EAssetRegistryDependencyTypeEx> SearchAssetDepTypes, TArray<struct FAssetDetail>* OutRefAsset);
		bool STATIC_GetAssetPackageGUID(const class FString& InPackagePath, class FName* OutGUID);
		void STATIC_GetAllEnabledModuleName(TMap<class FString, class FString>* OutModules);
		bool STATIC_FindFilesRecursive(const class FString& InStartDir, TArray<class FString>* OutFileList, bool InRecursive);
		void STATIC_FilterNoRefAssetsWithIgnoreFilter(TArray<struct FAssetDetail> InAssetsDetail, TArray<class FString> InIgnoreFilters, TArray<struct FAssetDetail>* OutHasRefAssetsDetail, TArray<struct FAssetDetail>* OutDontHasRefAssetsDetail);
		void STATIC_FilterNoRefAssets(TArray<struct FAssetDetail> InAssetsDetail, TArray<struct FAssetDetail>* OutHasRefAssetsDetail, TArray<struct FAssetDetail>* OutDontHasRefAssetsDetail);
		bool STATIC_FilenameToPackagePath(const class FString& InAbsPath, class FString* OutPackagePath);
		bool STATIC_ExportCookPakCommandToFile(TArray<class FString> InCommand, const class FString& InFile);
		bool STATIC_ConvRelativeDirToAbsDir(const class FString& InRelativePath, class FString* OutAbsPath);
		bool STATIC_ConvLongPackageNameToCookedPath(const class FString& InProjectAbsDir, const class FString& InPlatformName, const class FString& InLongPackageName, TArray<class FString>* OutCookedAssetPath, TArray<class FString>* OutCookedAssetRelativePath);
		bool STATIC_CombineAssetsDetailAsFAssetDepenInfo(TArray<struct FAssetDetail> InAssetsDetailList, struct FAssetDependenciesInfo* OutAssetInfo);
		struct FAssetDependenciesInfo STATIC_CombineAssetDependencies(const struct FAssetDependenciesInfo& A, const struct FAssetDependenciesInfo& B);
		static UClass* StaticClass();
	};

	/**
	 * Class HotPatcherRuntime.FlibPakHelper
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFlibPakHelper : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_UnMountPak(const class FString& PakPath);
		bool STATIC_ScanPlatformDirectory(const class FString& InRelativePath, bool bIncludeFile, bool bIncludeDir, bool bRecursively, TArray<class FString>* OutResault);
		TArray<class FString> STATIC_ScanExtenPakFiles();
		bool STATIC_ScanExtenFilesInDirectory(const class FString& InRelativePath, const class FString& InExtenPostfix, bool InRecursively, TArray<class FString>* OutFiles);
		TArray<class FString> STATIC_ScanAllVersionDescribleFiles();
		void STATIC_ReloadShaderbytecode();
		bool STATIC_OpenPSO(const class FString& Name);
		bool STATIC_MountPak(const class FString& PakPath, int32_t PakOrder, const class FString& InMountPoint);
		bool STATIC_LoadShaderbytecode(const class FString& LibraryName, const class FString& LibraryDir);
		bool STATIC_LoadAssetRegistry(const class FString& LibraryName, const class FString& LibraryDir);
		int32_t STATIC_GetPakOrderByPakPath(const class FString& PakFile);
		TArray<class FString> STATIC_GetAllMountedPaks();
		void STATIC_ExecMountPak(const class FString& InPakPath, int32_t InPakOrder, const class FString& InMountPoint);
		bool STATIC_CreateFileByBytes(const class FString& InFile, TArray<unsigned char> InBytes, int32_t InWriteFlag);
		void STATIC_CloseShaderbytecode(const class FString& LibraryName);
		static UClass* StaticClass();
	};

	/**
	 * Class HotPatcherRuntime.FlibPatchParserHelper
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFlibPatchParserHelper : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ReloadShaderbytecode();
		bool STATIC_LoadShaderbytecode(const class FString& LibraryName, const class FString& LibraryDir);
		class FString STATIC_HashStringWithSHA1(const class FString& inString);
		class FString STATIC_GetProjectName();
		TArray<class FString> STATIC_GetProjectIniFiles(const class FString& InProjectDir, const class FString& InPlatformName);
		class FString STATIC_GetProjectFilePath();
		bool STATIC_GetPakFileInfo(const class FString& InFile, struct FPakFileInfo* OutFileInfo);
		TArray<class FString> STATIC_GetIniConfigs(const class FString& InSearchDir, const class FString& InPlatformName);
		TArray<class FString> STATIC_GetEngineConfigs(const class FString& InPlatformName);
		TArray<class FString> STATIC_GetEnabledPluginConfigs(const class FString& InPlatformName);
		bool STATIC_GetCookedShaderBytecodeFiles(const class FString& InProjectAbsDir, const class FString& InProjectName, const class FString& InPlatformName, bool InGalobalBytecode, bool InProjectBytecode, TArray<class FString>* OutFiles);
		TArray<class FString> STATIC_GetCookedGlobalShaderCacheFiles(const class FString& InProjectDir, const class FString& InPlatformName);
		bool STATIC_GetCookedAssetRegistryFiles(const class FString& InProjectAbsDir, const class FString& InProjectName, const class FString& InPlatformName, class FString* OutFiles);
		TArray<class FString> STATIC_GetAvailableMaps(const class FString& GameName, bool IncludeEngineMaps, bool IncludePluginMaps, bool Sorted);
		struct FPlatformExternFiles STATIC_GetAllExFilesByPlatform(const struct FPlatformExternAssets& InPlatformConf, bool InGeneratedHash);
		bool STATIC_DiffVersionAssets(const struct FAssetDependenciesInfo& InNewVersion, const struct FAssetDependenciesInfo& InBaseVersion, struct FAssetDependenciesInfo* OutAddAsset, struct FAssetDependenciesInfo* OutModifyAsset, struct FAssetDependenciesInfo* OutDeleteAsset);
		bool STATIC_DiffVersionAllPlatformExFiles(const struct FHotPatcherVersion& InBaseVersion, const struct FHotPatcherVersion& InNewVersion, TMap<ETargetPlatform, struct FPatchVersionExternDiff>* OutDiff);
		void STATIC_CloseShaderbytecode(const class FString& LibraryName);
		static UClass* StaticClass();
	};

	/**
	 * Class HotPatcherRuntime.FlibShaderPipelineCacheHelper
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFlibShaderPipelineCacheHelper : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SavePipelineFileCache(EPSOSaveMode Mode);
		bool STATIC_LoadShaderPipelineCache(const class FString& Name);
		bool STATIC_IsEnabledUsePSO();
		bool STATIC_IsEnabledSaveBoundPSOLog();
		bool STATIC_IsEnabledLogPSO();
		bool STATIC_EnableShaderPipelineCache(bool bEnable);
		bool STATIC_EnableSaveBoundPSOLog(bool bEnable);
		bool STATIC_EnableLogPSO(bool bEnable);
		static UClass* StaticClass();
	};

	/**
	 * Class HotPatcherRuntime.MountListener
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UMountListener : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnMountPakDelegate;                                      // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnMountPakDelegate;                                    // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QDRF[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		void Init();
		static UClass* StaticClass();
	};

	/**
	 * Class HotPatcherRuntime.ScopedSlowTaskContext
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UScopedSlowTaskContext : public UObject
	{
	public:
		unsigned char                                              UnknownData_F44I[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

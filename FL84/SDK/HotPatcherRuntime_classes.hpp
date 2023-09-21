#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class HotPatcherRuntime.FlibAssetManageHelper
class UFlibAssetManageHelper : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFlibAssetManageHelper* GetDefaultObj();

	bool SaveStringToFile(const class FString& InFile, const class FString& InString);
	class FString PackagePathToFilename(const class FString& InPackagePath);
	bool ModuleIsEnabled(const class FString& InModuleName);
	class FString LongPackageNameToPackagePath(const class FString& InLongPackageName);
	bool LoadFileToString(const class FString& InFile, class FString* OutString);
	bool GetSpecifyAssetDetail(const class FString& InLongPackageName, struct FAssetDetail* OutAssetDetail);
	bool GetRedirectorList(TArray<class FString>& InFilterPackagePaths, TArray<struct FAssetDetail>* OutRedirector);
	bool GetPluginModuleAbsDir(const class FString& InPluginModuleName, class FString* OutPath);
	bool GetModuleNameByRelativePath(const class FString& InRelativePath, class FString* OutModuleName);
	bool GetEnableModuleAbsDir(const class FString& InModuleName, class FString* OutPath);
	bool GetAssetReferenceEx(struct FAssetDetail& InAsset, TArray<enum class EAssetRegistryDependencyTypeEx>& SearchAssetDepTypes, TArray<struct FAssetDetail>* OutRefAsset);
	bool GetAssetPackageGUID(const class FString& InPackagePath, class FName* OutGUID);
	void GetAllEnabledModuleName(TMap<class FString, class FString>* OutModules);
	bool FindFilesRecursive(const class FString& InStartDir, TArray<class FString>* OutFileList, bool InRecursive);
	void FilterNoRefAssetsWithIgnoreFilter(TArray<struct FAssetDetail>& InAssetsDetail, TArray<class FString>& InIgnoreFilters, TArray<struct FAssetDetail>* OutHasRefAssetsDetail, TArray<struct FAssetDetail>* OutDontHasRefAssetsDetail);
	void FilterNoRefAssets(TArray<struct FAssetDetail>& InAssetsDetail, TArray<struct FAssetDetail>* OutHasRefAssetsDetail, TArray<struct FAssetDetail>* OutDontHasRefAssetsDetail);
	bool FilenameToPackagePath(const class FString& InAbsPath, class FString* OutPackagePath);
	bool ExportCookPakCommandToFile(TArray<class FString>& InCommand, const class FString& InFile);
	bool ConvRelativeDirToAbsDir(const class FString& InRelativePath, class FString* OutAbsPath);
	bool ConvLongPackageNameToCookedPath(const class FString& InProjectAbsDir, const class FString& InPlatformName, const class FString& InLongPackageName, TArray<class FString>* OutCookedAssetPath, TArray<class FString>* OutCookedAssetRelativePath);
	bool CombineAssetsDetailAsFAssetDepenInfo(TArray<struct FAssetDetail>& InAssetsDetailList, struct FAssetDependenciesInfo* OutAssetInfo);
	struct FAssetDependenciesInfo CombineAssetDependencies(struct FAssetDependenciesInfo& A, struct FAssetDependenciesInfo& B);
};

// 0x0 (0x28 - 0x28)
// Class HotPatcherRuntime.FlibPakHelper
class UFlibPakHelper : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFlibPakHelper* GetDefaultObj();

	bool UnMountPak(const class FString& PakPath);
	bool ScanPlatformDirectory(const class FString& InRelativePath, bool bIncludeFile, bool bIncludeDir, bool bRecursively, TArray<class FString>* OutResault);
	TArray<class FString> ScanExtenPakFiles();
	bool ScanExtenFilesInDirectory(const class FString& InRelativePath, const class FString& InExtenPostfix, bool InRecursively, TArray<class FString>* OutFiles);
	TArray<class FString> ScanAllVersionDescribleFiles();
	void ReloadShaderbytecode();
	bool OpenPSO(const class FString& Name);
	bool MountPak(const class FString& PakPath, int32 PakOrder, const class FString& InMountPoint);
	bool LoadShaderbytecode(const class FString& LibraryName, const class FString& LibraryDir);
	bool LoadAssetRegistry(const class FString& LibraryName, const class FString& LibraryDir);
	int32 GetPakOrderByPakPath(const class FString& PakFile);
	TArray<class FString> GetAllMountedPaks();
	void ExecMountPak(const class FString& InPakPath, int32 InPakOrder, const class FString& InMountPoint);
	bool CreateFileByBytes(const class FString& InFile, TArray<uint8>& InBytes, int32 InWriteFlag);
	void CloseShaderbytecode(const class FString& LibraryName);
};

// 0x0 (0x28 - 0x28)
// Class HotPatcherRuntime.FlibPatchParserHelper
class UFlibPatchParserHelper : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFlibPatchParserHelper* GetDefaultObj();

	void ReloadShaderbytecode();
	bool LoadShaderbytecode(const class FString& LibraryName, const class FString& LibraryDir);
	class FString HashStringWithSHA1(const class FString& InString);
	class FString GetProjectName();
	TArray<class FString> GetProjectIniFiles(const class FString& InProjectDir, const class FString& InPlatformName);
	class FString GetProjectFilePath();
	bool GetPakFileInfo(const class FString& InFile, struct FPakFileInfo* OutFileInfo);
	TArray<class FString> GetIniConfigs(const class FString& InSearchDir, const class FString& InPlatformName);
	TArray<class FString> GetEngineConfigs(const class FString& InPlatformName);
	TArray<class FString> GetEnabledPluginConfigs(const class FString& InPlatformName);
	bool GetCookedShaderBytecodeFiles(const class FString& InProjectAbsDir, const class FString& InProjectName, const class FString& InPlatformName, bool InGalobalBytecode, bool InProjectBytecode, TArray<class FString>* OutFiles);
	TArray<class FString> GetCookedGlobalShaderCacheFiles(const class FString& InProjectDir, const class FString& InPlatformName);
	bool GetCookedAssetRegistryFiles(const class FString& InProjectAbsDir, const class FString& InProjectName, const class FString& InPlatformName, class FString* OutFiles);
	TArray<class FString> GetAvailableMaps(const class FString& GameName, bool IncludeEngineMaps, bool IncludePluginMaps, bool Sorted);
	struct FPlatformExternFiles GetAllExFilesByPlatform(struct FPlatformExternAssets& InPlatformConf, bool InGeneratedHash);
	bool DiffVersionAssets(struct FAssetDependenciesInfo& InNewVersion, struct FAssetDependenciesInfo& InBaseVersion, struct FAssetDependenciesInfo* OutAddAsset, struct FAssetDependenciesInfo* OutModifyAsset, struct FAssetDependenciesInfo* OutDeleteAsset);
	bool DiffVersionAllPlatformExFiles(struct FHotPatcherVersion& InBaseVersion, struct FHotPatcherVersion& InNewVersion, TMap<enum class ETargetPlatform, struct FPatchVersionExternDiff>* OutDiff);
	void CloseShaderbytecode(const class FString& LibraryName);
};

// 0x0 (0x28 - 0x28)
// Class HotPatcherRuntime.FlibShaderPipelineCacheHelper
class UFlibShaderPipelineCacheHelper : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFlibShaderPipelineCacheHelper* GetDefaultObj();

	bool SavePipelineFileCache(enum class EPSOSaveMode Mode);
	bool LoadShaderPipelineCache(const class FString& Name);
	bool IsEnabledUsePSO();
	bool IsEnabledSaveBoundPSOLog();
	bool IsEnabledLogPSO();
	bool EnableShaderPipelineCache(bool bEnable);
	bool EnableSaveBoundPSOLog(bool bEnable);
	bool EnableLogPSO(bool bEnable);
};

// 0x70 (0x98 - 0x28)
// Class HotPatcherRuntime.MountListener
class UMountListener : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnMountPakDelegate;                                // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUnMountPakDelegate;                              // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FBA[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMountListener* GetDefaultObj();

	void Init();
};

// 0x8 (0x30 - 0x28)
// Class HotPatcherRuntime.ScopedSlowTaskContext
class UScopedSlowTaskContext : public UObject
{
public:
	uint8                                        Pad_FBD[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UScopedSlowTaskContext* GetDefaultObj();

};

}



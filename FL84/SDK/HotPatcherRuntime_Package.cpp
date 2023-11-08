/**
 * Name: FL84
 * Version: 15.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01CD9F80
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.SaveStringToFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InFile                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_SaveStringToFile(const class FString& InFile, const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.SaveStringToFile"));
		
		UFlibAssetManageHelper_SaveStringToFile_Params params {};
		params.InFile = InFile;
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD9EA0
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.PackagePathToFilename
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InPackagePath                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFlibAssetManageHelper::STATIC_PackagePathToFilename(const class FString& InPackagePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.PackagePathToFilename"));
		
		UFlibAssetManageHelper_PackagePathToFilename_Params params {};
		params.InPackagePath = InPackagePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD9E00
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.ModuleIsEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InModuleName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_ModuleIsEnabled(const class FString& InModuleName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.ModuleIsEnabled"));
		
		UFlibAssetManageHelper_ModuleIsEnabled_Params params {};
		params.InModuleName = InModuleName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD9D20
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.LongPackageNameToPackagePath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InLongPackageName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFlibAssetManageHelper::STATIC_LongPackageNameToPackagePath(const class FString& InLongPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.LongPackageNameToPackagePath"));
		
		UFlibAssetManageHelper_LongPackageNameToPackagePath_Params params {};
		params.InLongPackageName = InLongPackageName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD9C20
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.LoadFileToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InFile                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_LoadFileToString(const class FString& InFile, class FString* OutString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.LoadFileToString"));
		
		UFlibAssetManageHelper_LoadFileToString_Params params {};
		params.InFile = InFile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutString != nullptr)
			*OutString = params.OutString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD9B30
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.GetSpecifyAssetDetail
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      InLongPackageName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAssetDetail                                OutAssetDetail                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_GetSpecifyAssetDetail(const class FString& InLongPackageName, struct FAssetDetail* OutAssetDetail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.GetSpecifyAssetDetail"));
		
		UFlibAssetManageHelper_GetSpecifyAssetDetail_Params params {};
		params.InLongPackageName = InLongPackageName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAssetDetail != nullptr)
			*OutAssetDetail = params.OutAssetDetail;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD99F0
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.GetRedirectorList
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              InFilterPackagePaths                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAssetDetail>                        OutRedirector                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_GetRedirectorList(TArray<class FString> InFilterPackagePaths, TArray<struct FAssetDetail>* OutRedirector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.GetRedirectorList"));
		
		UFlibAssetManageHelper_GetRedirectorList_Params params {};
		params.InFilterPackagePaths = InFilterPackagePaths;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRedirector != nullptr)
			*OutRedirector = params.OutRedirector;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD98F0
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.GetPluginModuleAbsDir
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InPluginModuleName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutPath                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_GetPluginModuleAbsDir(const class FString& InPluginModuleName, class FString* OutPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.GetPluginModuleAbsDir"));
		
		UFlibAssetManageHelper_GetPluginModuleAbsDir_Params params {};
		params.InPluginModuleName = InPluginModuleName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPath != nullptr)
			*OutPath = params.OutPath;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD97F0
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.GetModuleNameByRelativePath
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InRelativePath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutModuleName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_GetModuleNameByRelativePath(const class FString& InRelativePath, class FString* OutModuleName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.GetModuleNameByRelativePath"));
		
		UFlibAssetManageHelper_GetModuleNameByRelativePath_Params params {};
		params.InRelativePath = InRelativePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutModuleName != nullptr)
			*OutModuleName = params.OutModuleName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD96F0
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.GetEnableModuleAbsDir
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InModuleName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutPath                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_GetEnableModuleAbsDir(const class FString& InModuleName, class FString* OutPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.GetEnableModuleAbsDir"));
		
		UFlibAssetManageHelper_GetEnableModuleAbsDir_Params params {};
		params.InModuleName = InModuleName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPath != nullptr)
			*OutPath = params.OutPath;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD9570
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.GetAssetReferenceEx
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAssetDetail                                InAsset                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<EAssetRegistryDependencyTypeEx>             SearchAssetDepTypes                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAssetDetail>                        OutRefAsset                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_GetAssetReferenceEx(const struct FAssetDetail& InAsset, TArray<EAssetRegistryDependencyTypeEx> SearchAssetDepTypes, TArray<struct FAssetDetail>* OutRefAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.GetAssetReferenceEx"));
		
		UFlibAssetManageHelper_GetAssetReferenceEx_Params params {};
		params.InAsset = InAsset;
		params.SearchAssetDepTypes = SearchAssetDepTypes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRefAsset != nullptr)
			*OutRefAsset = params.OutRefAsset;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD9480
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.GetAssetPackageGUID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InPackagePath                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OutGUID                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_GetAssetPackageGUID(const class FString& InPackagePath, class FName* OutGUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.GetAssetPackageGUID"));
		
		UFlibAssetManageHelper_GetAssetPackageGUID_Params params {};
		params.InPackagePath = InPackagePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGUID != nullptr)
			*OutGUID = params.OutGUID;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD9380
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.GetAllEnabledModuleName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, class FString>                 OutModules                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UFlibAssetManageHelper::STATIC_GetAllEnabledModuleName(TMap<class FString, class FString>* OutModules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.GetAllEnabledModuleName"));
		
		UFlibAssetManageHelper_GetAllEnabledModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutModules != nullptr)
			*OutModules = params.OutModules;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD9200
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.FindFilesRecursive
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InStartDir                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutFileList                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InRecursive                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_FindFilesRecursive(const class FString& InStartDir, TArray<class FString>* OutFileList, bool InRecursive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.FindFilesRecursive"));
		
		UFlibAssetManageHelper_FindFilesRecursive_Params params {};
		params.InStartDir = InStartDir;
		params.InRecursive = InRecursive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFileList != nullptr)
			*OutFileList = params.OutFileList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD9010
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.FilterNoRefAssetsWithIgnoreFilter
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FAssetDetail>                        InAssetsDetail                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              InIgnoreFilters                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAssetDetail>                        OutHasRefAssetsDetail                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAssetDetail>                        OutDontHasRefAssetsDetail                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlibAssetManageHelper::STATIC_FilterNoRefAssetsWithIgnoreFilter(TArray<struct FAssetDetail> InAssetsDetail, TArray<class FString> InIgnoreFilters, TArray<struct FAssetDetail>* OutHasRefAssetsDetail, TArray<struct FAssetDetail>* OutDontHasRefAssetsDetail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.FilterNoRefAssetsWithIgnoreFilter"));
		
		UFlibAssetManageHelper_FilterNoRefAssetsWithIgnoreFilter_Params params {};
		params.InAssetsDetail = InAssetsDetail;
		params.InIgnoreFilters = InIgnoreFilters;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHasRefAssetsDetail != nullptr)
			*OutHasRefAssetsDetail = params.OutHasRefAssetsDetail;
		if (OutDontHasRefAssetsDetail != nullptr)
			*OutDontHasRefAssetsDetail = params.OutDontHasRefAssetsDetail;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD8E90
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.FilterNoRefAssets
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FAssetDetail>                        InAssetsDetail                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAssetDetail>                        OutHasRefAssetsDetail                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAssetDetail>                        OutDontHasRefAssetsDetail                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlibAssetManageHelper::STATIC_FilterNoRefAssets(TArray<struct FAssetDetail> InAssetsDetail, TArray<struct FAssetDetail>* OutHasRefAssetsDetail, TArray<struct FAssetDetail>* OutDontHasRefAssetsDetail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.FilterNoRefAssets"));
		
		UFlibAssetManageHelper_FilterNoRefAssets_Params params {};
		params.InAssetsDetail = InAssetsDetail;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHasRefAssetsDetail != nullptr)
			*OutHasRefAssetsDetail = params.OutHasRefAssetsDetail;
		if (OutDontHasRefAssetsDetail != nullptr)
			*OutDontHasRefAssetsDetail = params.OutDontHasRefAssetsDetail;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD8D90
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.FilenameToPackagePath
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InAbsPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutPackagePath                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_FilenameToPackagePath(const class FString& InAbsPath, class FString* OutPackagePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.FilenameToPackagePath"));
		
		UFlibAssetManageHelper_FilenameToPackagePath_Params params {};
		params.InAbsPath = InAbsPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPackagePath != nullptr)
			*OutPackagePath = params.OutPackagePath;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD8C60
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.ExportCookPakCommandToFile
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              InCommand                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InFile                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_ExportCookPakCommandToFile(TArray<class FString> InCommand, const class FString& InFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.ExportCookPakCommandToFile"));
		
		UFlibAssetManageHelper_ExportCookPakCommandToFile_Params params {};
		params.InCommand = InCommand;
		params.InFile = InFile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD8B60
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.ConvRelativeDirToAbsDir
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InRelativePath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutAbsPath                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_ConvRelativeDirToAbsDir(const class FString& InRelativePath, class FString* OutAbsPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.ConvRelativeDirToAbsDir"));
		
		UFlibAssetManageHelper_ConvRelativeDirToAbsDir_Params params {};
		params.InRelativePath = InRelativePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAbsPath != nullptr)
			*OutAbsPath = params.OutAbsPath;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD8900
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.ConvLongPackageNameToCookedPath
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InProjectAbsDir                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InPlatformName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InLongPackageName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutCookedAssetPath                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutCookedAssetRelativePath                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_ConvLongPackageNameToCookedPath(const class FString& InProjectAbsDir, const class FString& InPlatformName, const class FString& InLongPackageName, TArray<class FString>* OutCookedAssetPath, TArray<class FString>* OutCookedAssetRelativePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.ConvLongPackageNameToCookedPath"));
		
		UFlibAssetManageHelper_ConvLongPackageNameToCookedPath_Params params {};
		params.InProjectAbsDir = InProjectAbsDir;
		params.InPlatformName = InPlatformName;
		params.InLongPackageName = InLongPackageName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCookedAssetPath != nullptr)
			*OutCookedAssetPath = params.OutCookedAssetPath;
		if (OutCookedAssetRelativePath != nullptr)
			*OutCookedAssetRelativePath = params.OutCookedAssetRelativePath;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD8770
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.CombineAssetsDetailAsFAssetDepenInfo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FAssetDetail>                        InAssetsDetailList                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAssetDependenciesInfo                      OutAssetInfo                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UFlibAssetManageHelper::STATIC_CombineAssetsDetailAsFAssetDepenInfo(TArray<struct FAssetDetail> InAssetsDetailList, struct FAssetDependenciesInfo* OutAssetInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.CombineAssetsDetailAsFAssetDepenInfo"));
		
		UFlibAssetManageHelper_CombineAssetsDetailAsFAssetDepenInfo_Params params {};
		params.InAssetsDetailList = InAssetsDetailList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAssetInfo != nullptr)
			*OutAssetInfo = params.OutAssetInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CD8530
	 * 		Name   -> Function HotPatcherRuntime.FlibAssetManageHelper.CombineAssetDependencies
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FAssetDependenciesInfo                      A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAssetDependenciesInfo                      B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FAssetDependenciesInfo UFlibAssetManageHelper::STATIC_CombineAssetDependencies(const struct FAssetDependenciesInfo& A, const struct FAssetDependenciesInfo& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibAssetManageHelper.CombineAssetDependencies"));
		
		UFlibAssetManageHelper_CombineAssetDependencies_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlibAssetManageHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlibAssetManageHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class HotPatcherRuntime.FlibAssetManageHelper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDFFB0
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.UnMountPak
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PakPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibPakHelper::STATIC_UnMountPak(const class FString& PakPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.UnMountPak"));
		
		UFlibPakHelper_UnMountPak_Params params {};
		params.PakPath = PakPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDFDB0
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.ScanPlatformDirectory
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InRelativePath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeFile                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeDir                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRecursively                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutResault                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibPakHelper::STATIC_ScanPlatformDirectory(const class FString& InRelativePath, bool bIncludeFile, bool bIncludeDir, bool bRecursively, TArray<class FString>* OutResault)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.ScanPlatformDirectory"));
		
		UFlibPakHelper_ScanPlatformDirectory_Params params {};
		params.InRelativePath = InRelativePath;
		params.bIncludeFile = bIncludeFile;
		params.bIncludeDir = bIncludeDir;
		params.bRecursively = bRecursively;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutResault != nullptr)
			*OutResault = params.OutResault;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDFD30
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.ScanExtenPakFiles
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class FString> UFlibPakHelper::STATIC_ScanExtenPakFiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.ScanExtenPakFiles"));
		
		UFlibPakHelper_ScanExtenPakFiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDFB70
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.ScanExtenFilesInDirectory
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InRelativePath                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InExtenPostfix                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InRecursively                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutFiles                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibPakHelper::STATIC_ScanExtenFilesInDirectory(const class FString& InRelativePath, const class FString& InExtenPostfix, bool InRecursively, TArray<class FString>* OutFiles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.ScanExtenFilesInDirectory"));
		
		UFlibPakHelper_ScanExtenFilesInDirectory_Params params {};
		params.InRelativePath = InRelativePath;
		params.InExtenPostfix = InExtenPostfix;
		params.InRecursively = InRecursively;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFiles != nullptr)
			*OutFiles = params.OutFiles;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDFAF0
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.ScanAllVersionDescribleFiles
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class FString> UFlibPakHelper::STATIC_ScanAllVersionDescribleFiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.ScanAllVersionDescribleFiles"));
		
		UFlibPakHelper_ScanAllVersionDescribleFiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDFA50
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.ReloadShaderbytecode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UFlibPakHelper::STATIC_ReloadShaderbytecode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.ReloadShaderbytecode"));
		
		UFlibPakHelper_ReloadShaderbytecode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF780
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.OpenPSO
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibPakHelper::STATIC_OpenPSO(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.OpenPSO"));
		
		UFlibPakHelper_OpenPSO_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF910
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.MountPak
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PakPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PakOrder                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMountPoint                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibPakHelper::STATIC_MountPak(const class FString& PakPath, int32_t PakOrder, const class FString& InMountPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.MountPak"));
		
		UFlibPakHelper_MountPak_Params params {};
		params.PakPath = PakPath;
		params.PakOrder = PakOrder;
		params.InMountPoint = InMountPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF820
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.LoadShaderbytecode
	 * 		Flags  -> (Final, Exec, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      LibraryName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LibraryDir                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibPakHelper::STATIC_LoadShaderbytecode(const class FString& LibraryName, const class FString& LibraryDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.LoadShaderbytecode"));
		
		UFlibPakHelper_LoadShaderbytecode_Params params {};
		params.LibraryName = LibraryName;
		params.LibraryDir = LibraryDir;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF690
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.LoadAssetRegistry
	 * 		Flags  -> (Final, Exec, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      LibraryName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LibraryDir                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibPakHelper::STATIC_LoadAssetRegistry(const class FString& LibraryName, const class FString& LibraryDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.LoadAssetRegistry"));
		
		UFlibPakHelper_LoadAssetRegistry_Params params {};
		params.LibraryName = LibraryName;
		params.LibraryDir = LibraryDir;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF2C0
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.GetPakOrderByPakPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      PakFile                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UFlibPakHelper::STATIC_GetPakOrderByPakPath(const class FString& PakFile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.GetPakOrderByPakPath"));
		
		UFlibPakHelper_GetPakOrderByPakPath_Params params {};
		params.PakFile = PakFile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDE6D0
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.GetAllMountedPaks
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	TArray<class FString> UFlibPakHelper::STATIC_GetAllMountedPaks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.GetAllMountedPaks"));
		
		UFlibPakHelper_GetAllMountedPaks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDE310
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.ExecMountPak
	 * 		Flags  -> (Final, Exec, Native, Static, Public)
	 * Parameters:
	 * 		class FString                                      InPakPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InPakOrder                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InMountPoint                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlibPakHelper::STATIC_ExecMountPak(const class FString& InPakPath, int32_t InPakOrder, const class FString& InMountPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.ExecMountPak"));
		
		UFlibPakHelper_ExecMountPak_Params params {};
		params.InPakPath = InPakPath;
		params.InPakOrder = InPakOrder;
		params.InMountPoint = InMountPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDD590
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.CreateFileByBytes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InFile                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              InBytes                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InWriteFlag                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibPakHelper::STATIC_CreateFileByBytes(const class FString& InFile, TArray<unsigned char> InBytes, int32_t InWriteFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.CreateFileByBytes"));
		
		UFlibPakHelper_CreateFileByBytes_Params params {};
		params.InFile = InFile;
		params.InBytes = InBytes;
		params.InWriteFlag = InWriteFlag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDD500
	 * 		Name   -> Function HotPatcherRuntime.FlibPakHelper.CloseShaderbytecode
	 * 		Flags  -> (Final, Exec, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      LibraryName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlibPakHelper::STATIC_CloseShaderbytecode(const class FString& LibraryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPakHelper.CloseShaderbytecode"));
		
		UFlibPakHelper_CloseShaderbytecode_Params params {};
		params.LibraryName = LibraryName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlibPakHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlibPakHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class HotPatcherRuntime.FlibPakHelper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDFA50
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.ReloadShaderbytecode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UFlibPatchParserHelper::STATIC_ReloadShaderbytecode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.ReloadShaderbytecode"));
		
		UFlibPatchParserHelper_ReloadShaderbytecode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF820
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.LoadShaderbytecode
	 * 		Flags  -> (Final, Exec, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      LibraryName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LibraryDir                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibPatchParserHelper::STATIC_LoadShaderbytecode(const class FString& LibraryName, const class FString& LibraryDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.LoadShaderbytecode"));
		
		UFlibPatchParserHelper_LoadShaderbytecode_Params params {};
		params.LibraryName = LibraryName;
		params.LibraryDir = LibraryDir;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF520
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.HashStringWithSHA1
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UFlibPatchParserHelper::STATIC_HashStringWithSHA1(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.HashStringWithSHA1"));
		
		UFlibPatchParserHelper_HashStringWithSHA1_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CB7CD0
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString UFlibPatchParserHelper::STATIC_GetProjectName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectName"));
		
		UFlibPatchParserHelper_GetProjectName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF3E0
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectIniFiles
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InProjectDir                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InPlatformName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UFlibPatchParserHelper::STATIC_GetProjectIniFiles(const class FString& InProjectDir, const class FString& InPlatformName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectIniFiles"));
		
		UFlibPatchParserHelper_GetProjectIniFiles_Params params {};
		params.InProjectDir = InProjectDir;
		params.InPlatformName = InPlatformName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF360
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectFilePath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString UFlibPatchParserHelper::STATIC_GetProjectFilePath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectFilePath"));
		
		UFlibPatchParserHelper_GetProjectFilePath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF1A0
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.GetPakFileInfo
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InFile                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPakFileInfo                                OutFileInfo                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UFlibPatchParserHelper::STATIC_GetPakFileInfo(const class FString& InFile, struct FPakFileInfo* OutFileInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.GetPakFileInfo"));
		
		UFlibPatchParserHelper_GetPakFileInfo_Params params {};
		params.InFile = InFile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFileInfo != nullptr)
			*OutFileInfo = params.OutFileInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF060
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.GetIniConfigs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InSearchDir                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InPlatformName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UFlibPatchParserHelper::STATIC_GetIniConfigs(const class FString& InSearchDir, const class FString& InPlatformName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.GetIniConfigs"));
		
		UFlibPatchParserHelper_GetIniConfigs_Params params {};
		params.InSearchDir = InSearchDir;
		params.InPlatformName = InPlatformName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDEF80
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.GetEngineConfigs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InPlatformName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UFlibPatchParserHelper::STATIC_GetEngineConfigs(const class FString& InPlatformName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.GetEngineConfigs"));
		
		UFlibPatchParserHelper_GetEngineConfigs_Params params {};
		params.InPlatformName = InPlatformName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDEEA0
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.GetEnabledPluginConfigs
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InPlatformName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UFlibPatchParserHelper::STATIC_GetEnabledPluginConfigs(const class FString& InPlatformName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.GetEnabledPluginConfigs"));
		
		UFlibPatchParserHelper_GetEnabledPluginConfigs_Params params {};
		params.InPlatformName = InPlatformName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDEC40
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedShaderBytecodeFiles
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InProjectAbsDir                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InProjectName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InPlatformName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InGalobalBytecode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InProjectBytecode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutFiles                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibPatchParserHelper::STATIC_GetCookedShaderBytecodeFiles(const class FString& InProjectAbsDir, const class FString& InProjectName, const class FString& InPlatformName, bool InGalobalBytecode, bool InProjectBytecode, TArray<class FString>* OutFiles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedShaderBytecodeFiles"));
		
		UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Params params {};
		params.InProjectAbsDir = InProjectAbsDir;
		params.InProjectName = InProjectName;
		params.InPlatformName = InPlatformName;
		params.InGalobalBytecode = InGalobalBytecode;
		params.InProjectBytecode = InProjectBytecode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFiles != nullptr)
			*OutFiles = params.OutFiles;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDEB00
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedGlobalShaderCacheFiles
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InProjectDir                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InPlatformName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UFlibPatchParserHelper::STATIC_GetCookedGlobalShaderCacheFiles(const class FString& InProjectDir, const class FString& InPlatformName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedGlobalShaderCacheFiles"));
		
		UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Params params {};
		params.InProjectDir = InProjectDir;
		params.InPlatformName = InPlatformName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDE950
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedAssetRegistryFiles
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InProjectAbsDir                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InProjectName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InPlatformName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OutFiles                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibPatchParserHelper::STATIC_GetCookedAssetRegistryFiles(const class FString& InProjectAbsDir, const class FString& InProjectName, const class FString& InPlatformName, class FString* OutFiles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedAssetRegistryFiles"));
		
		UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Params params {};
		params.InProjectAbsDir = InProjectAbsDir;
		params.InProjectName = InProjectName;
		params.InPlatformName = InPlatformName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFiles != nullptr)
			*OutFiles = params.OutFiles;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDE750
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.GetAvailableMaps
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GameName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludeEngineMaps                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludePluginMaps                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Sorted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UFlibPatchParserHelper::STATIC_GetAvailableMaps(const class FString& GameName, bool IncludeEngineMaps, bool IncludePluginMaps, bool Sorted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.GetAvailableMaps"));
		
		UFlibPatchParserHelper_GetAvailableMaps_Params params {};
		params.GameName = GameName;
		params.IncludeEngineMaps = IncludeEngineMaps;
		params.IncludePluginMaps = IncludePluginMaps;
		params.Sorted = Sorted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDE4B0
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.GetAllExFilesByPlatform
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		struct FPlatformExternAssets                       InPlatformConf                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               InGeneratedHash                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPlatformExternFiles UFlibPatchParserHelper::STATIC_GetAllExFilesByPlatform(const struct FPlatformExternAssets& InPlatformConf, bool InGeneratedHash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.GetAllExFilesByPlatform"));
		
		UFlibPatchParserHelper_GetAllExFilesByPlatform_Params params {};
		params.InPlatformConf = InPlatformConf;
		params.InGeneratedHash = InGeneratedHash;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDDD20
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAssets
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAssetDependenciesInfo                      InNewVersion                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAssetDependenciesInfo                      InBaseVersion                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAssetDependenciesInfo                      OutAddAsset                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FAssetDependenciesInfo                      OutModifyAsset                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FAssetDependenciesInfo                      OutDeleteAsset                                             (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UFlibPatchParserHelper::STATIC_DiffVersionAssets(const struct FAssetDependenciesInfo& InNewVersion, const struct FAssetDependenciesInfo& InBaseVersion, struct FAssetDependenciesInfo* OutAddAsset, struct FAssetDependenciesInfo* OutModifyAsset, struct FAssetDependenciesInfo* OutDeleteAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAssets"));
		
		UFlibPatchParserHelper_DiffVersionAssets_Params params {};
		params.InNewVersion = InNewVersion;
		params.InBaseVersion = InBaseVersion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAddAsset != nullptr)
			*OutAddAsset = params.OutAddAsset;
		if (OutModifyAsset != nullptr)
			*OutModifyAsset = params.OutModifyAsset;
		if (OutDeleteAsset != nullptr)
			*OutDeleteAsset = params.OutDeleteAsset;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDD6E0
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAllPlatformExFiles
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		struct FHotPatcherVersion                          InBaseVersion                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FHotPatcherVersion                          InNewVersion                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<ETargetPlatform, struct FPatchVersionExternDiff> OutDiff                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UFlibPatchParserHelper::STATIC_DiffVersionAllPlatformExFiles(const struct FHotPatcherVersion& InBaseVersion, const struct FHotPatcherVersion& InNewVersion, TMap<ETargetPlatform, struct FPatchVersionExternDiff>* OutDiff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAllPlatformExFiles"));
		
		UFlibPatchParserHelper_DiffVersionAllPlatformExFiles_Params params {};
		params.InBaseVersion = InBaseVersion;
		params.InNewVersion = InNewVersion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDiff != nullptr)
			*OutDiff = params.OutDiff;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDD500
	 * 		Name   -> Function HotPatcherRuntime.FlibPatchParserHelper.CloseShaderbytecode
	 * 		Flags  -> (Final, Exec, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      LibraryName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlibPatchParserHelper::STATIC_CloseShaderbytecode(const class FString& LibraryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibPatchParserHelper.CloseShaderbytecode"));
		
		UFlibPatchParserHelper_CloseShaderbytecode_Params params {};
		params.LibraryName = LibraryName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlibPatchParserHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlibPatchParserHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class HotPatcherRuntime.FlibPatchParserHelper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDFA70
	 * 		Name   -> Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.SavePipelineFileCache
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EPSOSaveMode                                       Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibShaderPipelineCacheHelper::STATIC_SavePipelineFileCache(EPSOSaveMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.SavePipelineFileCache"));
		
		UFlibShaderPipelineCacheHelper_SavePipelineFileCache_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF780
	 * 		Name   -> Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.LoadShaderPipelineCache
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibShaderPipelineCacheHelper::STATIC_LoadShaderPipelineCache(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.LoadShaderPipelineCache"));
		
		UFlibShaderPipelineCacheHelper_LoadShaderPipelineCache_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF660
	 * 		Name   -> Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledUsePSO
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UFlibShaderPipelineCacheHelper::STATIC_IsEnabledUsePSO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledUsePSO"));
		
		UFlibShaderPipelineCacheHelper_IsEnabledUsePSO_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF630
	 * 		Name   -> Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledSaveBoundPSOLog
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UFlibShaderPipelineCacheHelper::STATIC_IsEnabledSaveBoundPSOLog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledSaveBoundPSOLog"));
		
		UFlibShaderPipelineCacheHelper_IsEnabledSaveBoundPSOLog_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDF600
	 * 		Name   -> Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledLogPSO
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UFlibShaderPipelineCacheHelper::STATIC_IsEnabledLogPSO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledLogPSO"));
		
		UFlibShaderPipelineCacheHelper_IsEnabledLogPSO_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDE280
	 * 		Name   -> Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableShaderPipelineCache
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibShaderPipelineCacheHelper::STATIC_EnableShaderPipelineCache(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableShaderPipelineCache"));
		
		UFlibShaderPipelineCacheHelper_EnableShaderPipelineCache_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDE1F0
	 * 		Name   -> Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableSaveBoundPSOLog
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibShaderPipelineCacheHelper::STATIC_EnableSaveBoundPSOLog(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableSaveBoundPSOLog"));
		
		UFlibShaderPipelineCacheHelper_EnableSaveBoundPSOLog_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CDE160
	 * 		Name   -> Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableLogPSO
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UFlibShaderPipelineCacheHelper::STATIC_EnableLogPSO(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableLogPSO"));
		
		UFlibShaderPipelineCacheHelper_EnableLogPSO_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlibShaderPipelineCacheHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlibShaderPipelineCacheHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class HotPatcherRuntime.FlibShaderPipelineCacheHelper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CE1FF0
	 * 		Name   -> Function HotPatcherRuntime.MountListener.Init
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMountListener::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HotPatcherRuntime.MountListener.Init"));
		
		UMountListener_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMountListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMountListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class HotPatcherRuntime.MountListener"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScopedSlowTaskContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScopedSlowTaskContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class HotPatcherRuntime.ScopedSlowTaskContext"));
		return ptr;
	}

}



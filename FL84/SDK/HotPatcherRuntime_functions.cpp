#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HotPatcherRuntime.FlibAssetManageHelper
// (None)

class UClass* UFlibAssetManageHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlibAssetManageHelper");

	return Clss;
}


// FlibAssetManageHelper HotPatcherRuntime.Default__FlibAssetManageHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UFlibAssetManageHelper* UFlibAssetManageHelper::GetDefaultObj()
{
	static class UFlibAssetManageHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlibAssetManageHelper*>(UFlibAssetManageHelper::StaticClass()->DefaultObject);

	return Default;
}


// Function HotPatcherRuntime.FlibAssetManageHelper.SaveStringToFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::SaveStringToFile(const class FString& InFile, const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "SaveStringToFile");

	Params::UFlibAssetManageHelper_SaveStringToFile_Params Parms{};

	Parms.InFile = InFile;
	Parms.InString = InString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.PackagePathToFilename
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InPackagePath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFlibAssetManageHelper::PackagePathToFilename(const class FString& InPackagePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "PackagePathToFilename");

	Params::UFlibAssetManageHelper_PackagePathToFilename_Params Parms{};

	Parms.InPackagePath = InPackagePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.ModuleIsEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InModuleName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::ModuleIsEnabled(const class FString& InModuleName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "ModuleIsEnabled");

	Params::UFlibAssetManageHelper_ModuleIsEnabled_Params Parms{};

	Parms.InModuleName = InModuleName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.LongPackageNameToPackagePath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InLongPackageName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFlibAssetManageHelper::LongPackageNameToPackagePath(const class FString& InLongPackageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "LongPackageNameToPackagePath");

	Params::UFlibAssetManageHelper_LongPackageNameToPackagePath_Params Parms{};

	Parms.InLongPackageName = InLongPackageName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.LoadFileToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutString                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::LoadFileToString(const class FString& InFile, class FString* OutString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "LoadFileToString");

	Params::UFlibAssetManageHelper_LoadFileToString_Params Parms{};

	Parms.InFile = InFile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.GetSpecifyAssetDetail
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      InLongPackageName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetDetail                OutAssetDetail                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::GetSpecifyAssetDetail(const class FString& InLongPackageName, struct FAssetDetail* OutAssetDetail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "GetSpecifyAssetDetail");

	Params::UFlibAssetManageHelper_GetSpecifyAssetDetail_Params Parms{};

	Parms.InLongPackageName = InLongPackageName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAssetDetail != nullptr)
		*OutAssetDetail = std::move(Parms.OutAssetDetail);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.GetRedirectorList
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              InFilterPackagePaths                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetDetail>        OutRedirector                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::GetRedirectorList(TArray<class FString>& InFilterPackagePaths, TArray<struct FAssetDetail>* OutRedirector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "GetRedirectorList");

	Params::UFlibAssetManageHelper_GetRedirectorList_Params Parms{};

	Parms.InFilterPackagePaths = InFilterPackagePaths;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRedirector != nullptr)
		*OutRedirector = std::move(Parms.OutRedirector);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.GetPluginModuleAbsDir
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InPluginModuleName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutPath                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::GetPluginModuleAbsDir(const class FString& InPluginModuleName, class FString* OutPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "GetPluginModuleAbsDir");

	Params::UFlibAssetManageHelper_GetPluginModuleAbsDir_Params Parms{};

	Parms.InPluginModuleName = InPluginModuleName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPath != nullptr)
		*OutPath = std::move(Parms.OutPath);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.GetModuleNameByRelativePath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InRelativePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutModuleName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::GetModuleNameByRelativePath(const class FString& InRelativePath, class FString* OutModuleName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "GetModuleNameByRelativePath");

	Params::UFlibAssetManageHelper_GetModuleNameByRelativePath_Params Parms{};

	Parms.InRelativePath = InRelativePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutModuleName != nullptr)
		*OutModuleName = std::move(Parms.OutModuleName);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.GetEnableModuleAbsDir
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InModuleName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutPath                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::GetEnableModuleAbsDir(const class FString& InModuleName, class FString* OutPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "GetEnableModuleAbsDir");

	Params::UFlibAssetManageHelper_GetEnableModuleAbsDir_Params Parms{};

	Parms.InModuleName = InModuleName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPath != nullptr)
		*OutPath = std::move(Parms.OutPath);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.GetAssetReferenceEx
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetDetail                InAsset                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<enum class EAssetRegistryDependencyTypeEx>SearchAssetDepTypes                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetDetail>        OutRefAsset                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::GetAssetReferenceEx(struct FAssetDetail& InAsset, TArray<enum class EAssetRegistryDependencyTypeEx>& SearchAssetDepTypes, TArray<struct FAssetDetail>* OutRefAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "GetAssetReferenceEx");

	Params::UFlibAssetManageHelper_GetAssetReferenceEx_Params Parms{};

	Parms.InAsset = InAsset;
	Parms.SearchAssetDepTypes = SearchAssetDepTypes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRefAsset != nullptr)
		*OutRefAsset = std::move(Parms.OutRefAsset);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.GetAssetPackageGUID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InPackagePath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OutGUID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::GetAssetPackageGUID(const class FString& InPackagePath, class FName* OutGUID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "GetAssetPackageGUID");

	Params::UFlibAssetManageHelper_GetAssetPackageGUID_Params Parms{};

	Parms.InPackagePath = InPackagePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutGUID != nullptr)
		*OutGUID = Parms.OutGUID;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.GetAllEnabledModuleName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> OutModules                                                       (Parm, OutParm, NativeAccessSpecifierPublic)

void UFlibAssetManageHelper::GetAllEnabledModuleName(TMap<class FString, class FString>* OutModules)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "GetAllEnabledModuleName");

	Params::UFlibAssetManageHelper_GetAllEnabledModuleName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutModules != nullptr)
		*OutModules = Parms.OutModules;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.FindFilesRecursive
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InStartDir                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OutFileList                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InRecursive                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::FindFilesRecursive(const class FString& InStartDir, TArray<class FString>* OutFileList, bool InRecursive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "FindFilesRecursive");

	Params::UFlibAssetManageHelper_FindFilesRecursive_Params Parms{};

	Parms.InStartDir = InStartDir;
	Parms.InRecursive = InRecursive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFileList != nullptr)
		*OutFileList = std::move(Parms.OutFileList);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.FilterNoRefAssetsWithIgnoreFilter
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAssetDetail>        InAssetsDetail                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              InIgnoreFilters                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetDetail>        OutHasRefAssetsDetail                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetDetail>        OutDontHasRefAssetsDetail                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFlibAssetManageHelper::FilterNoRefAssetsWithIgnoreFilter(TArray<struct FAssetDetail>& InAssetsDetail, TArray<class FString>& InIgnoreFilters, TArray<struct FAssetDetail>* OutHasRefAssetsDetail, TArray<struct FAssetDetail>* OutDontHasRefAssetsDetail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "FilterNoRefAssetsWithIgnoreFilter");

	Params::UFlibAssetManageHelper_FilterNoRefAssetsWithIgnoreFilter_Params Parms{};

	Parms.InAssetsDetail = InAssetsDetail;
	Parms.InIgnoreFilters = InIgnoreFilters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHasRefAssetsDetail != nullptr)
		*OutHasRefAssetsDetail = std::move(Parms.OutHasRefAssetsDetail);

	if (OutDontHasRefAssetsDetail != nullptr)
		*OutDontHasRefAssetsDetail = std::move(Parms.OutDontHasRefAssetsDetail);

}


// Function HotPatcherRuntime.FlibAssetManageHelper.FilterNoRefAssets
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAssetDetail>        InAssetsDetail                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetDetail>        OutHasRefAssetsDetail                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAssetDetail>        OutDontHasRefAssetsDetail                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFlibAssetManageHelper::FilterNoRefAssets(TArray<struct FAssetDetail>& InAssetsDetail, TArray<struct FAssetDetail>* OutHasRefAssetsDetail, TArray<struct FAssetDetail>* OutDontHasRefAssetsDetail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "FilterNoRefAssets");

	Params::UFlibAssetManageHelper_FilterNoRefAssets_Params Parms{};

	Parms.InAssetsDetail = InAssetsDetail;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHasRefAssetsDetail != nullptr)
		*OutHasRefAssetsDetail = std::move(Parms.OutHasRefAssetsDetail);

	if (OutDontHasRefAssetsDetail != nullptr)
		*OutDontHasRefAssetsDetail = std::move(Parms.OutDontHasRefAssetsDetail);

}


// Function HotPatcherRuntime.FlibAssetManageHelper.FilenameToPackagePath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InAbsPath                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutPackagePath                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::FilenameToPackagePath(const class FString& InAbsPath, class FString* OutPackagePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "FilenameToPackagePath");

	Params::UFlibAssetManageHelper_FilenameToPackagePath_Params Parms{};

	Parms.InAbsPath = InAbsPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPackagePath != nullptr)
		*OutPackagePath = std::move(Parms.OutPackagePath);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.ExportCookPakCommandToFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InCommand                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::ExportCookPakCommandToFile(TArray<class FString>& InCommand, const class FString& InFile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "ExportCookPakCommandToFile");

	Params::UFlibAssetManageHelper_ExportCookPakCommandToFile_Params Parms{};

	Parms.InCommand = InCommand;
	Parms.InFile = InFile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.ConvRelativeDirToAbsDir
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InRelativePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutAbsPath                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::ConvRelativeDirToAbsDir(const class FString& InRelativePath, class FString* OutAbsPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "ConvRelativeDirToAbsDir");

	Params::UFlibAssetManageHelper_ConvRelativeDirToAbsDir_Params Parms{};

	Parms.InRelativePath = InRelativePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAbsPath != nullptr)
		*OutAbsPath = std::move(Parms.OutAbsPath);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.ConvLongPackageNameToCookedPath
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InProjectAbsDir                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InPlatformName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InLongPackageName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OutCookedAssetPath                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OutCookedAssetRelativePath                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::ConvLongPackageNameToCookedPath(const class FString& InProjectAbsDir, const class FString& InPlatformName, const class FString& InLongPackageName, TArray<class FString>* OutCookedAssetPath, TArray<class FString>* OutCookedAssetRelativePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "ConvLongPackageNameToCookedPath");

	Params::UFlibAssetManageHelper_ConvLongPackageNameToCookedPath_Params Parms{};

	Parms.InProjectAbsDir = InProjectAbsDir;
	Parms.InPlatformName = InPlatformName;
	Parms.InLongPackageName = InLongPackageName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutCookedAssetPath != nullptr)
		*OutCookedAssetPath = std::move(Parms.OutCookedAssetPath);

	if (OutCookedAssetRelativePath != nullptr)
		*OutCookedAssetRelativePath = std::move(Parms.OutCookedAssetRelativePath);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.CombineAssetsDetailAsFAssetDepenInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FAssetDetail>        InAssetsDetailList                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAssetDependenciesInfo      OutAssetInfo                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibAssetManageHelper::CombineAssetsDetailAsFAssetDepenInfo(TArray<struct FAssetDetail>& InAssetsDetailList, struct FAssetDependenciesInfo* OutAssetInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "CombineAssetsDetailAsFAssetDepenInfo");

	Params::UFlibAssetManageHelper_CombineAssetsDetailAsFAssetDepenInfo_Params Parms{};

	Parms.InAssetsDetailList = InAssetsDetailList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAssetInfo != nullptr)
		*OutAssetInfo = std::move(Parms.OutAssetInfo);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibAssetManageHelper.CombineAssetDependencies
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetDependenciesInfo      A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAssetDependenciesInfo      B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAssetDependenciesInfo      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAssetDependenciesInfo UFlibAssetManageHelper::CombineAssetDependencies(struct FAssetDependenciesInfo& A, struct FAssetDependenciesInfo& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibAssetManageHelper", "CombineAssetDependencies");

	Params::UFlibAssetManageHelper_CombineAssetDependencies_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HotPatcherRuntime.FlibPakHelper
// (None)

class UClass* UFlibPakHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlibPakHelper");

	return Clss;
}


// FlibPakHelper HotPatcherRuntime.Default__FlibPakHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UFlibPakHelper* UFlibPakHelper::GetDefaultObj()
{
	static class UFlibPakHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlibPakHelper*>(UFlibPakHelper::StaticClass()->DefaultObject);

	return Default;
}


// Function HotPatcherRuntime.FlibPakHelper.UnMountPak
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      PakPath                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibPakHelper::UnMountPak(const class FString& PakPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "UnMountPak");

	Params::UFlibPakHelper_UnMountPak_Params Parms{};

	Parms.PakPath = PakPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPakHelper.ScanPlatformDirectory
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InRelativePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeFile                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDir                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRecursively                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OutResault                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibPakHelper::ScanPlatformDirectory(const class FString& InRelativePath, bool bIncludeFile, bool bIncludeDir, bool bRecursively, TArray<class FString>* OutResault)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "ScanPlatformDirectory");

	Params::UFlibPakHelper_ScanPlatformDirectory_Params Parms{};

	Parms.InRelativePath = InRelativePath;
	Parms.bIncludeFile = bIncludeFile;
	Parms.bIncludeDir = bIncludeDir;
	Parms.bRecursively = bRecursively;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResault != nullptr)
		*OutResault = std::move(Parms.OutResault);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPakHelper.ScanExtenPakFiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> UFlibPakHelper::ScanExtenPakFiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "ScanExtenPakFiles");

	Params::UFlibPakHelper_ScanExtenPakFiles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPakHelper.ScanExtenFilesInDirectory
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InRelativePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtenPostfix                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InRecursively                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OutFiles                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibPakHelper::ScanExtenFilesInDirectory(const class FString& InRelativePath, const class FString& InExtenPostfix, bool InRecursively, TArray<class FString>* OutFiles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "ScanExtenFilesInDirectory");

	Params::UFlibPakHelper_ScanExtenFilesInDirectory_Params Parms{};

	Parms.InRelativePath = InRelativePath;
	Parms.InExtenPostfix = InExtenPostfix;
	Parms.InRecursively = InRecursively;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFiles != nullptr)
		*OutFiles = std::move(Parms.OutFiles);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPakHelper.ScanAllVersionDescribleFiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> UFlibPakHelper::ScanAllVersionDescribleFiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "ScanAllVersionDescribleFiles");

	Params::UFlibPakHelper_ScanAllVersionDescribleFiles_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPakHelper.ReloadShaderbytecode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UFlibPakHelper::ReloadShaderbytecode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "ReloadShaderbytecode");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HotPatcherRuntime.FlibPakHelper.OpenPSO
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibPakHelper::OpenPSO(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "OpenPSO");

	Params::UFlibPakHelper_OpenPSO_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPakHelper.MountPak
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      PakPath                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PakOrder                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InMountPoint                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibPakHelper::MountPak(const class FString& PakPath, int32 PakOrder, const class FString& InMountPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "MountPak");

	Params::UFlibPakHelper_MountPak_Params Parms{};

	Parms.PakPath = PakPath;
	Parms.PakOrder = PakOrder;
	Parms.InMountPoint = InMountPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPakHelper.LoadShaderbytecode
// (Final, Exec, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      LibraryName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LibraryDir                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibPakHelper::LoadShaderbytecode(const class FString& LibraryName, const class FString& LibraryDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "LoadShaderbytecode");

	Params::UFlibPakHelper_LoadShaderbytecode_Params Parms{};

	Parms.LibraryName = LibraryName;
	Parms.LibraryDir = LibraryDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPakHelper.LoadAssetRegistry
// (Final, Exec, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      LibraryName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LibraryDir                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibPakHelper::LoadAssetRegistry(const class FString& LibraryName, const class FString& LibraryDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "LoadAssetRegistry");

	Params::UFlibPakHelper_LoadAssetRegistry_Params Parms{};

	Parms.LibraryName = LibraryName;
	Parms.LibraryDir = LibraryDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPakHelper.GetPakOrderByPakPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      PakFile                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFlibPakHelper::GetPakOrderByPakPath(const class FString& PakFile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "GetPakOrderByPakPath");

	Params::UFlibPakHelper_GetPakOrderByPakPath_Params Parms{};

	Parms.PakFile = PakFile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPakHelper.GetAllMountedPaks
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> UFlibPakHelper::GetAllMountedPaks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "GetAllMountedPaks");

	Params::UFlibPakHelper_GetAllMountedPaks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPakHelper.ExecMountPak
// (Final, Exec, Native, Static, Public)
// Parameters:
// class FString                      InPakPath                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InPakOrder                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InMountPoint                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFlibPakHelper::ExecMountPak(const class FString& InPakPath, int32 InPakOrder, const class FString& InMountPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "ExecMountPak");

	Params::UFlibPakHelper_ExecMountPak_Params Parms{};

	Parms.InPakPath = InPakPath;
	Parms.InPakOrder = InPakOrder;
	Parms.InMountPoint = InMountPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function HotPatcherRuntime.FlibPakHelper.CreateFileByBytes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      InBytes                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InWriteFlag                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibPakHelper::CreateFileByBytes(const class FString& InFile, TArray<uint8>& InBytes, int32 InWriteFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "CreateFileByBytes");

	Params::UFlibPakHelper_CreateFileByBytes_Params Parms{};

	Parms.InFile = InFile;
	Parms.InBytes = InBytes;
	Parms.InWriteFlag = InWriteFlag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPakHelper.CloseShaderbytecode
// (Final, Exec, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      LibraryName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFlibPakHelper::CloseShaderbytecode(const class FString& LibraryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPakHelper", "CloseShaderbytecode");

	Params::UFlibPakHelper_CloseShaderbytecode_Params Parms{};

	Parms.LibraryName = LibraryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class HotPatcherRuntime.FlibPatchParserHelper
// (None)

class UClass* UFlibPatchParserHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlibPatchParserHelper");

	return Clss;
}


// FlibPatchParserHelper HotPatcherRuntime.Default__FlibPatchParserHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UFlibPatchParserHelper* UFlibPatchParserHelper::GetDefaultObj()
{
	static class UFlibPatchParserHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlibPatchParserHelper*>(UFlibPatchParserHelper::StaticClass()->DefaultObject);

	return Default;
}


// Function HotPatcherRuntime.FlibPatchParserHelper.ReloadShaderbytecode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UFlibPatchParserHelper::ReloadShaderbytecode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "ReloadShaderbytecode");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.LoadShaderbytecode
// (Final, Exec, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      LibraryName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LibraryDir                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibPatchParserHelper::LoadShaderbytecode(const class FString& LibraryName, const class FString& LibraryDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "LoadShaderbytecode");

	Params::UFlibPatchParserHelper_LoadShaderbytecode_Params Parms{};

	Parms.LibraryName = LibraryName;
	Parms.LibraryDir = LibraryDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.HashStringWithSHA1
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFlibPatchParserHelper::HashStringWithSHA1(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "HashStringWithSHA1");

	Params::UFlibPatchParserHelper_HashStringWithSHA1_Params Parms{};

	Parms.InString = InString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFlibPatchParserHelper::GetProjectName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "GetProjectName");

	Params::UFlibPatchParserHelper_GetProjectName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectIniFiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InProjectDir                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InPlatformName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> UFlibPatchParserHelper::GetProjectIniFiles(const class FString& InProjectDir, const class FString& InPlatformName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "GetProjectIniFiles");

	Params::UFlibPatchParserHelper_GetProjectIniFiles_Params Parms{};

	Parms.InProjectDir = InProjectDir;
	Parms.InPlatformName = InPlatformName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.GetProjectFilePath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFlibPatchParserHelper::GetProjectFilePath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "GetProjectFilePath");

	Params::UFlibPatchParserHelper_GetProjectFilePath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.GetPakFileInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InFile                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPakFileInfo                OutFileInfo                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibPatchParserHelper::GetPakFileInfo(const class FString& InFile, struct FPakFileInfo* OutFileInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "GetPakFileInfo");

	Params::UFlibPatchParserHelper_GetPakFileInfo_Params Parms{};

	Parms.InFile = InFile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFileInfo != nullptr)
		*OutFileInfo = std::move(Parms.OutFileInfo);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.GetIniConfigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InSearchDir                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InPlatformName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> UFlibPatchParserHelper::GetIniConfigs(const class FString& InSearchDir, const class FString& InPlatformName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "GetIniConfigs");

	Params::UFlibPatchParserHelper_GetIniConfigs_Params Parms{};

	Parms.InSearchDir = InSearchDir;
	Parms.InPlatformName = InPlatformName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.GetEngineConfigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InPlatformName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> UFlibPatchParserHelper::GetEngineConfigs(const class FString& InPlatformName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "GetEngineConfigs");

	Params::UFlibPatchParserHelper_GetEngineConfigs_Params Parms{};

	Parms.InPlatformName = InPlatformName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.GetEnabledPluginConfigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InPlatformName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> UFlibPatchParserHelper::GetEnabledPluginConfigs(const class FString& InPlatformName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "GetEnabledPluginConfigs");

	Params::UFlibPatchParserHelper_GetEnabledPluginConfigs_Params Parms{};

	Parms.InPlatformName = InPlatformName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedShaderBytecodeFiles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InProjectAbsDir                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InProjectName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InPlatformName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InGalobalBytecode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InProjectBytecode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OutFiles                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibPatchParserHelper::GetCookedShaderBytecodeFiles(const class FString& InProjectAbsDir, const class FString& InProjectName, const class FString& InPlatformName, bool InGalobalBytecode, bool InProjectBytecode, TArray<class FString>* OutFiles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "GetCookedShaderBytecodeFiles");

	Params::UFlibPatchParserHelper_GetCookedShaderBytecodeFiles_Params Parms{};

	Parms.InProjectAbsDir = InProjectAbsDir;
	Parms.InProjectName = InProjectName;
	Parms.InPlatformName = InPlatformName;
	Parms.InGalobalBytecode = InGalobalBytecode;
	Parms.InProjectBytecode = InProjectBytecode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFiles != nullptr)
		*OutFiles = std::move(Parms.OutFiles);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedGlobalShaderCacheFiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InProjectDir                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InPlatformName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> UFlibPatchParserHelper::GetCookedGlobalShaderCacheFiles(const class FString& InProjectDir, const class FString& InPlatformName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "GetCookedGlobalShaderCacheFiles");

	Params::UFlibPatchParserHelper_GetCookedGlobalShaderCacheFiles_Params Parms{};

	Parms.InProjectDir = InProjectDir;
	Parms.InPlatformName = InPlatformName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.GetCookedAssetRegistryFiles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      InProjectAbsDir                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InProjectName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InPlatformName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutFiles                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibPatchParserHelper::GetCookedAssetRegistryFiles(const class FString& InProjectAbsDir, const class FString& InProjectName, const class FString& InPlatformName, class FString* OutFiles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "GetCookedAssetRegistryFiles");

	Params::UFlibPatchParserHelper_GetCookedAssetRegistryFiles_Params Parms{};

	Parms.InProjectAbsDir = InProjectAbsDir;
	Parms.InProjectName = InProjectName;
	Parms.InPlatformName = InPlatformName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFiles != nullptr)
		*OutFiles = std::move(Parms.OutFiles);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.GetAvailableMaps
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      GameName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IncludeEngineMaps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IncludePluginMaps                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Sorted                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FString> UFlibPatchParserHelper::GetAvailableMaps(const class FString& GameName, bool IncludeEngineMaps, bool IncludePluginMaps, bool Sorted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "GetAvailableMaps");

	Params::UFlibPatchParserHelper_GetAvailableMaps_Params Parms{};

	Parms.GameName = GameName;
	Parms.IncludeEngineMaps = IncludeEngineMaps;
	Parms.IncludePluginMaps = IncludePluginMaps;
	Parms.Sorted = Sorted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.GetAllExFilesByPlatform
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FPlatformExternAssets       InPlatformConf                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               InGeneratedHash                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlatformExternFiles        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FPlatformExternFiles UFlibPatchParserHelper::GetAllExFilesByPlatform(struct FPlatformExternAssets& InPlatformConf, bool InGeneratedHash)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "GetAllExFilesByPlatform");

	Params::UFlibPatchParserHelper_GetAllExFilesByPlatform_Params Parms{};

	Parms.InPlatformConf = InPlatformConf;
	Parms.InGeneratedHash = InGeneratedHash;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAssets
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAssetDependenciesInfo      InNewVersion                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAssetDependenciesInfo      InBaseVersion                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAssetDependenciesInfo      OutAddAsset                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FAssetDependenciesInfo      OutModifyAsset                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FAssetDependenciesInfo      OutDeleteAsset                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibPatchParserHelper::DiffVersionAssets(struct FAssetDependenciesInfo& InNewVersion, struct FAssetDependenciesInfo& InBaseVersion, struct FAssetDependenciesInfo* OutAddAsset, struct FAssetDependenciesInfo* OutModifyAsset, struct FAssetDependenciesInfo* OutDeleteAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "DiffVersionAssets");

	Params::UFlibPatchParserHelper_DiffVersionAssets_Params Parms{};

	Parms.InNewVersion = InNewVersion;
	Parms.InBaseVersion = InBaseVersion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAddAsset != nullptr)
		*OutAddAsset = std::move(Parms.OutAddAsset);

	if (OutModifyAsset != nullptr)
		*OutModifyAsset = std::move(Parms.OutModifyAsset);

	if (OutDeleteAsset != nullptr)
		*OutDeleteAsset = std::move(Parms.OutDeleteAsset);

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.DiffVersionAllPlatformExFiles
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FHotPatcherVersion          InBaseVersion                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FHotPatcherVersion          InNewVersion                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TMap<enum class ETargetPlatform, struct FPatchVersionExternDiff>OutDiff                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibPatchParserHelper::DiffVersionAllPlatformExFiles(struct FHotPatcherVersion& InBaseVersion, struct FHotPatcherVersion& InNewVersion, TMap<enum class ETargetPlatform, struct FPatchVersionExternDiff>* OutDiff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "DiffVersionAllPlatformExFiles");

	Params::UFlibPatchParserHelper_DiffVersionAllPlatformExFiles_Params Parms{};

	Parms.InBaseVersion = InBaseVersion;
	Parms.InNewVersion = InNewVersion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDiff != nullptr)
		*OutDiff = Parms.OutDiff;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibPatchParserHelper.CloseShaderbytecode
// (Final, Exec, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      LibraryName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFlibPatchParserHelper::CloseShaderbytecode(const class FString& LibraryName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibPatchParserHelper", "CloseShaderbytecode");

	Params::UFlibPatchParserHelper_CloseShaderbytecode_Params Parms{};

	Parms.LibraryName = LibraryName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class HotPatcherRuntime.FlibShaderPipelineCacheHelper
// (None)

class UClass* UFlibShaderPipelineCacheHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FlibShaderPipelineCacheHelper");

	return Clss;
}


// FlibShaderPipelineCacheHelper HotPatcherRuntime.Default__FlibShaderPipelineCacheHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UFlibShaderPipelineCacheHelper* UFlibShaderPipelineCacheHelper::GetDefaultObj()
{
	static class UFlibShaderPipelineCacheHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlibShaderPipelineCacheHelper*>(UFlibShaderPipelineCacheHelper::StaticClass()->DefaultObject);

	return Default;
}


// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.SavePipelineFileCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EPSOSaveMode            Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibShaderPipelineCacheHelper::SavePipelineFileCache(enum class EPSOSaveMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibShaderPipelineCacheHelper", "SavePipelineFileCache");

	Params::UFlibShaderPipelineCacheHelper_SavePipelineFileCache_Params Parms{};

	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.LoadShaderPipelineCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibShaderPipelineCacheHelper::LoadShaderPipelineCache(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibShaderPipelineCacheHelper", "LoadShaderPipelineCache");

	Params::UFlibShaderPipelineCacheHelper_LoadShaderPipelineCache_Params Parms{};

	Parms.Name = Name;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledUsePSO
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibShaderPipelineCacheHelper::IsEnabledUsePSO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibShaderPipelineCacheHelper", "IsEnabledUsePSO");

	Params::UFlibShaderPipelineCacheHelper_IsEnabledUsePSO_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledSaveBoundPSOLog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibShaderPipelineCacheHelper::IsEnabledSaveBoundPSOLog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibShaderPipelineCacheHelper", "IsEnabledSaveBoundPSOLog");

	Params::UFlibShaderPipelineCacheHelper_IsEnabledSaveBoundPSOLog_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.IsEnabledLogPSO
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibShaderPipelineCacheHelper::IsEnabledLogPSO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibShaderPipelineCacheHelper", "IsEnabledLogPSO");

	Params::UFlibShaderPipelineCacheHelper_IsEnabledLogPSO_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableShaderPipelineCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibShaderPipelineCacheHelper::EnableShaderPipelineCache(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibShaderPipelineCacheHelper", "EnableShaderPipelineCache");

	Params::UFlibShaderPipelineCacheHelper_EnableShaderPipelineCache_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableSaveBoundPSOLog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibShaderPipelineCacheHelper::EnableSaveBoundPSOLog(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibShaderPipelineCacheHelper", "EnableSaveBoundPSOLog");

	Params::UFlibShaderPipelineCacheHelper_EnableSaveBoundPSOLog_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function HotPatcherRuntime.FlibShaderPipelineCacheHelper.EnableLogPSO
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFlibShaderPipelineCacheHelper::EnableLogPSO(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FlibShaderPipelineCacheHelper", "EnableLogPSO");

	Params::UFlibShaderPipelineCacheHelper_EnableLogPSO_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class HotPatcherRuntime.MountListener
// (None)

class UClass* UMountListener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MountListener");

	return Clss;
}


// MountListener HotPatcherRuntime.Default__MountListener
// (Public, ClassDefaultObject, ArchetypeObject)

class UMountListener* UMountListener::GetDefaultObj()
{
	static class UMountListener* Default = nullptr;

	if (!Default)
		Default = static_cast<UMountListener*>(UMountListener::StaticClass()->DefaultObject);

	return Default;
}


// Function HotPatcherRuntime.MountListener.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMountListener::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MountListener", "Init");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class HotPatcherRuntime.ScopedSlowTaskContext
// (None)

class UClass* UScopedSlowTaskContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScopedSlowTaskContext");

	return Clss;
}


// ScopedSlowTaskContext HotPatcherRuntime.Default__ScopedSlowTaskContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UScopedSlowTaskContext* UScopedSlowTaskContext::GetDefaultObj()
{
	static class UScopedSlowTaskContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UScopedSlowTaskContext*>(UScopedSlowTaskContext::StaticClass()->DefaultObject);

	return Default;
}

}



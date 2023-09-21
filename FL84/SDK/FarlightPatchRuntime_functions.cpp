#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FarlightPatchRuntime.PakHelper
// (None)

class UClass* UPakHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakHelper");

	return Clss;
}


// PakHelper FarlightPatchRuntime.Default__PakHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UPakHelper* UPakHelper::GetDefaultObj()
{
	static class UPakHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakHelper*>(UPakHelper::StaticClass()->DefaultObject);

	return Default;
}


// Function FarlightPatchRuntime.PakHelper.ReloadIniFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      StrippedConfigFileName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPakHelper::ReloadIniFile(const class FString& StrippedConfigFileName, const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PakHelper", "ReloadIniFile");

	Params::UPakHelper_ReloadIniFile_Params Parms{};

	Parms.StrippedConfigFileName = StrippedConfigFileName;
	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FarlightPatchRuntime.PakHelper.ReloadGameUserSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UPakHelper::ReloadGameUserSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PakHelper", "ReloadGameUserSettings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FarlightPatchRuntime.PakHelper.ReloadDeviceProfiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UPakHelper::ReloadDeviceProfiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PakHelper", "ReloadDeviceProfiles");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FarlightPatchRuntime.PakHelper.ReloadCVarSettingsFromIni
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UPakHelper::ReloadCVarSettingsFromIni()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PakHelper", "ReloadCVarSettingsFromIni");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FarlightPatchRuntime.PakHelper.OpenShaderPatchLibrary
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ShaderPatchLibraryName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      LibraryDir                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShaderPatchLibUnique                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPakHelper::OpenShaderPatchLibrary(const class FString& ShaderPatchLibraryName, const class FString& LibraryDir, bool& bShaderPatchLibUnique)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PakHelper", "OpenShaderPatchLibrary");

	Params::UPakHelper_OpenShaderPatchLibrary_Params Parms{};

	Parms.ShaderPatchLibraryName = ShaderPatchLibraryName;
	Parms.LibraryDir = LibraryDir;
	Parms.bShaderPatchLibUnique = bShaderPatchLibUnique;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FarlightPatchRuntime.PakHelper.MountPak
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InPakFilename                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PakOrder                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPakHelper::MountPak(const class FString& InPakFilename, int32 PakOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PakHelper", "MountPak");

	Params::UPakHelper_MountPak_Params Parms{};

	Parms.InPakFilename = InPakFilename;
	Parms.PakOrder = PakOrder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FarlightPatchRuntime.PakHelper.GetStrippedConfigFileName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      IniName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPakHelper::GetStrippedConfigFileName(const class FString& IniName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PakHelper", "GetStrippedConfigFileName");

	Params::UPakHelper_GetStrippedConfigFileName_Params Parms{};

	Parms.IniName = IniName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FarlightPatchRuntime.PakHelper.GetProjectName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPakHelper::GetProjectName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PakHelper", "GetProjectName");

	Params::UPakHelper_GetProjectName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FarlightPatchRuntime.PakHelper.CreatePakWriter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFilename                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InMountPoint                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPakWriter*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPakWriter* UPakHelper::CreatePakWriter(const class FString& InFilename, const class FString& InMountPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PakHelper", "CreatePakWriter");

	Params::UPakHelper_CreatePakWriter_Params Parms{};

	Parms.InFilename = InFilename;
	Parms.InMountPoint = InMountPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FarlightPatchRuntime.PakHelper.CreatePakReader
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InFilename                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLoadIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPakReader*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPakReader* UPakHelper::CreatePakReader(const class FString& InFilename, bool bLoadIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PakHelper", "CreatePakReader");

	Params::UPakHelper_CreatePakReader_Params Parms{};

	Parms.InFilename = InFilename;
	Parms.bLoadIndex = bLoadIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FarlightPatchRuntime.PakReader
// (None)

class UClass* UPakReader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakReader");

	return Clss;
}


// PakReader FarlightPatchRuntime.Default__PakReader
// (Public, ClassDefaultObject, ArchetypeObject)

class UPakReader* UPakReader::GetDefaultObj()
{
	static class UPakReader* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakReader*>(UPakReader::StaticClass()->DefaultObject);

	return Default;
}


// Function FarlightPatchRuntime.PakReader.GetTotalSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UPakReader::GetTotalSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PakReader", "GetTotalSize");

	Params::UPakReader_GetTotalSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FarlightPatchRuntime.PakReader.GetPakIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPakEntryInfo>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<struct FPakEntryInfo> UPakReader::GetPakIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PakReader", "GetPakIndex");

	Params::UPakReader_GetPakIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FarlightPatchRuntime.PakReader.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPakReader::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PakReader", "Close");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class FarlightPatchRuntime.PakWriter
// (None)

class UClass* UPakWriter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PakWriter");

	return Clss;
}


// PakWriter FarlightPatchRuntime.Default__PakWriter
// (Public, ClassDefaultObject, ArchetypeObject)

class UPakWriter* UPakWriter::GetDefaultObj()
{
	static class UPakWriter* Default = nullptr;

	if (!Default)
		Default = static_cast<UPakWriter*>(UPakWriter::StaticClass()->DefaultObject);

	return Default;
}

}



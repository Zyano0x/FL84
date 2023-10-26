#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SolarlandResUpdate.DownloadFileTask
// (None)

class UClass* UDownloadFileTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloadFileTask");

	return Clss;
}


// DownloadFileTask SolarlandResUpdate.Default__DownloadFileTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloadFileTask* UDownloadFileTask::GetDefaultObj()
{
	static class UDownloadFileTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloadFileTask*>(UDownloadFileTask::StaticClass()->DefaultObject);

	return Default;
}


// Function SolarlandResUpdate.DownloadFileTask.StartDownload
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDownloadFileTask::StartDownload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadFileTask", "StartDownload");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SolarlandResUpdate.DownloadFileTask.SetSaveToFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InSet                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDownloadFileTask::SetSaveToFile(bool InSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadFileTask", "SetSaveToFile");

	Params::UDownloadFileTask_SetSaveToFile_Params Parms{};

	Parms.InSet = InSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SolarlandResUpdate.DownloadFileTask.SetForceRedownload
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InForceRedownload                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDownloadFileTask::SetForceRedownload(bool InForceRedownload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadFileTask", "SetForceRedownload");

	Params::UDownloadFileTask_SetForceRedownload_Params Parms{};

	Parms.InForceRedownload = InForceRedownload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SolarlandResUpdate.DownloadFileTask.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDownloadFileTask::GetUrl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadFileTask", "GetUrl");

	Params::UDownloadFileTask_GetUrl_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SolarlandResUpdate.DownloadFileTask.CreateNoFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bByChunk                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDownloadFileTask*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDownloadFileTask* UDownloadFileTask::CreateNoFile(const class FString& URL, bool bByChunk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadFileTask", "CreateNoFile");

	Params::UDownloadFileTask_CreateNoFile_Params Parms{};

	Parms.URL = URL;
	Parms.bByChunk = bByChunk;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SolarlandResUpdate.DownloadFileTask.Create
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FileDirectory                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bByChunk                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceWrite                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDownloadFileTask*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDownloadFileTask* UDownloadFileTask::Create(const class FString& URL, const class FString& FileDirectory, const class FString& Filename, bool bByChunk, bool bForceWrite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloadFileTask", "Create");

	Params::UDownloadFileTask_Create_Params Parms{};

	Parms.URL = URL;
	Parms.FileDirectory = FileDirectory;
	Parms.Filename = Filename;
	Parms.bByChunk = bByChunk;
	Parms.bForceWrite = bForceWrite;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SolarlandResUpdate.SolarlandResUpdater
// (None)

class UClass* USolarlandResUpdater::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarlandResUpdater");

	return Clss;
}


// SolarlandResUpdater SolarlandResUpdate.Default__SolarlandResUpdater
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarlandResUpdater* USolarlandResUpdater::GetDefaultObj()
{
	static class USolarlandResUpdater* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarlandResUpdater*>(USolarlandResUpdater::StaticClass()->DefaultObject);

	return Default;
}

}



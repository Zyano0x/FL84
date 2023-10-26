#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DownloaderTool.DownloaderHttpTask
// (None)

class UClass* UDownloaderHttpTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloaderHttpTask");

	return Clss;
}


// DownloaderHttpTask DownloaderTool.Default__DownloaderHttpTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloaderHttpTask* UDownloaderHttpTask::GetDefaultObj()
{
	static class UDownloaderHttpTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloaderHttpTask*>(UDownloaderHttpTask::StaticClass()->DefaultObject);

	return Default;
}


// Class DownloaderTool.DownloaderUtils
// (None)

class UClass* UDownloaderUtils::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DownloaderUtils");

	return Clss;
}


// DownloaderUtils DownloaderTool.Default__DownloaderUtils
// (Public, ClassDefaultObject, ArchetypeObject)

class UDownloaderUtils* UDownloaderUtils::GetDefaultObj()
{
	static class UDownloaderUtils* Default = nullptr;

	if (!Default)
		Default = static_cast<UDownloaderUtils*>(UDownloaderUtils::StaticClass()->DefaultObject);

	return Default;
}


// Function DownloaderTool.DownloaderUtils.StringFileRawData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDownloaderResponse         InResponse                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDownloaderUtils::StringFileRawData(struct FDownloaderResponse& InResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloaderUtils", "StringFileRawData");

	Params::UDownloaderUtils_StringFileRawData_Params Parms{};

	Parms.InResponse = InResponse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DownloaderTool.DownloaderUtils.SaveResponseToCache
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDownloaderResponse         InResponse                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      CachePath                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDownloaderUtils::SaveResponseToCache(struct FDownloaderResponse& InResponse, const class FString& CachePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloaderUtils", "SaveResponseToCache");

	Params::UDownloaderUtils_SaveResponseToCache_Params Parms{};

	Parms.InResponse = InResponse;
	Parms.CachePath = CachePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DownloaderTool.DownloaderUtils.GetVerbFromJsonRequestStr
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      JsonRequestStr                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDownloaderUtils::GetVerbFromJsonRequestStr(const class FString& JsonRequestStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloaderUtils", "GetVerbFromJsonRequestStr");

	Params::UDownloaderUtils_GetVerbFromJsonRequestStr_Params Parms{};

	Parms.JsonRequestStr = JsonRequestStr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DownloaderTool.DownloaderUtils.GetResponseFromCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InUrl                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CachePath                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDownloaderResponse         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FDownloaderResponse UDownloaderUtils::GetResponseFromCache(const class FString& InUrl, const class FString& CachePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloaderUtils", "GetResponseFromCache");

	Params::UDownloaderUtils_GetResponseFromCache_Params Parms{};

	Parms.InUrl = InUrl;
	Parms.CachePath = CachePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DownloaderTool.DownloaderUtils.GetHeadersFromJsonRequestStr
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      JsonRequestStr                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, class FString> ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FString, class FString> UDownloaderUtils::GetHeadersFromJsonRequestStr(const class FString& JsonRequestStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloaderUtils", "GetHeadersFromJsonRequestStr");

	Params::UDownloaderUtils_GetHeadersFromJsonRequestStr_Params Parms{};

	Parms.JsonRequestStr = JsonRequestStr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DownloaderTool.DownloaderUtils.execConvertRawDataToTexture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DataLength                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2DDynamic*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2DDynamic* UDownloaderUtils::ExecConvertRawDataToTexture(TArray<uint8>& Data, int32& DataLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloaderUtils", "execConvertRawDataToTexture");

	Params::UDownloaderUtils_ExecConvertRawDataToTexture_Params Parms{};

	Parms.Data = Data;
	Parms.DataLength = DataLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DownloaderTool.DownloaderUtils.DecodeFileRawData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDownloaderResponse         InResponse                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDownloaderUtils::DecodeFileRawData(struct FDownloaderResponse& InResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DownloaderUtils", "DecodeFileRawData");

	Params::UDownloaderUtils_DecodeFileRawData_Params Parms{};

	Parms.InResponse = InResponse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}



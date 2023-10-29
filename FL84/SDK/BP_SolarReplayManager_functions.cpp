#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SolarReplayManager.BP_SolarReplayManager_C
// (None)

class UClass* UBP_SolarReplayManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SolarReplayManager_C");

	return Clss;
}


// BP_SolarReplayManager_C BP_SolarReplayManager.Default__BP_SolarReplayManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SolarReplayManager_C* UBP_SolarReplayManager_C::GetDefaultObj()
{
	static class UBP_SolarReplayManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SolarReplayManager_C*>(UBP_SolarReplayManager_C::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnRecordingStartedDelegate_91627A7341B32ACFBC3B179B76F76DC7
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UBP_SolarReplayManager_C::OnRecordingStartedDelegate_91627A7341B32ACFBC3B179B76F76DC7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "OnRecordingStartedDelegate_91627A7341B32ACFBC3B179B76F76DC7");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction BP_SolarReplayManager.BP_SolarReplayManager_C.OnPlayingStartedDelegate_9D73D9064DCCBCE70705F991C815897C
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UBP_SolarReplayManager_C::OnPlayingStartedDelegate_9D73D9064DCCBCE70705F991C815897C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "OnPlayingStartedDelegate_9D73D9064DCCBCE70705F991C815897C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestBattleList
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              PageIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PageSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBP_SolarReplayManager_C::RequestBattleList(int32 PageIndex, int32 PageSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "RequestBattleList");

	Params::UBP_SolarReplayManager_C_RequestBattleList_Params Parms{};

	Parms.PageIndex = PageIndex;
	Parms.PageSize = PageSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.NotifyBackendPlayReplayFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

bool UBP_SolarReplayManager_C::NotifyBackendPlayReplayFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "NotifyBackendPlayReplayFinished");

	Params::UBP_SolarReplayManager_C_NotifyBackendPlayReplayFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReceivePlayingStartFailed
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SolarReplayManager_C::ReceivePlayingStartFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "ReceivePlayingStartFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestCheckpointForLiveWatch
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_SolarReplayManager_C::RequestCheckpointForLiveWatch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "RequestCheckpointForLiveWatch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestPlayReplayOfCurrentBattle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SolarReplayManager_C::RequestPlayReplayOfCurrentBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "RequestPlayReplayOfCurrentBattle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.SetReadyToRecord
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsReady                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class FString>              OBPlayerIDs                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBP_SolarReplayManager_C::SetReadyToRecord(bool bIsReady, TArray<class FString>& OBPlayerIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "SetReadyToRecord");

	Params::UBP_SolarReplayManager_C_SetReadyToRecord_Params Parms{};

	Parms.bIsReady = bIsReady;
	Parms.OBPlayerIDs = OBPlayerIDs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsReady
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

bool UBP_SolarReplayManager_C::IsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "IsReady");

	Params::UBP_SolarReplayManager_C_IsReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.LuaBindDelegates
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SolarReplayManager_C::LuaBindDelegates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "LuaBindDelegates");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.GetBattleIDByIndex
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBP_SolarReplayManager_C::GetBattleIDByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "GetBattleIDByIndex");

	Params::UBP_SolarReplayManager_C_GetBattleIDByIndex_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.GetStartRecordingParams
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FStartRecordingParams       OutParams                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UBP_SolarReplayManager_C::GetStartRecordingParams(struct FStartRecordingParams* OutParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "GetStartRecordingParams");

	Params::UBP_SolarReplayManager_C_GetStartRecordingParams_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutParams != nullptr)
		*OutParams = std::move(Parms.OutParams);

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.ReceivePlayingFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EReplayPlayingFinishReasonReason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              StreamerErrorCode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StreamerErrorMsg                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

bool UBP_SolarReplayManager_C::ReceivePlayingFinished(enum class EReplayPlayingFinishReason Reason, uint8 StreamerErrorCode, const class FString& StreamerErrorMsg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "ReceivePlayingFinished");

	Params::UBP_SolarReplayManager_C_ReceivePlayingFinished_Params Parms{};

	Parms.Reason = Reason;
	Parms.StreamerErrorCode = StreamerErrorCode;
	Parms.StreamerErrorMsg = StreamerErrorMsg;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestWatchingLiveOfPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SolarPlayerID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBP_SolarReplayManager_C::RequestWatchingLiveOfPlayer(const class FString& SolarPlayerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "RequestWatchingLiveOfPlayer");

	Params::UBP_SolarReplayManager_C_RequestWatchingLiveOfPlayer_Params Parms{};

	Parms.SolarPlayerID = SolarPlayerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.LuaOnPostLoadMapWithWorld
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      LevelName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBP_SolarReplayManager_C::LuaOnPostLoadMapWithWorld(const class FString& LevelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "LuaOnPostLoadMapWithWorld");

	Params::UBP_SolarReplayManager_C_LuaOnPostLoadMapWithWorld_Params Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.IsRequestingReplayDownloadInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

bool UBP_SolarReplayManager_C::IsRequestingReplayDownloadInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "IsRequestingReplayDownloadInfo");

	Params::UBP_SolarReplayManager_C_IsRequestingReplayDownloadInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.OnLiveWatchTargetLost
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SolarReplayManager_C::OnLiveWatchTargetLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "OnLiveWatchTargetLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.RequestPlayReplay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InBattleID                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsLive                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UBP_SolarReplayManager_C::RequestPlayReplay(const class FString& InBattleID, bool IsLive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "RequestPlayReplay");

	Params::UBP_SolarReplayManager_C_RequestPlayReplay_Params Parms{};

	Parms.InBattleID = InBattleID;
	Parms.IsLive = IsLive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SolarReplayManager.BP_SolarReplayManager_C.SetRequestTryStrategy
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Interval                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Times                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBP_SolarReplayManager_C::SetRequestTryStrategy(float Interval, int32 Times)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SolarReplayManager_C", "SetRequestTryStrategy");

	Params::UBP_SolarReplayManager_C_SetRequestTryStrategy_Params Parms{};

	Parms.Interval = Interval;
	Parms.Times = Times;

	UObject::ProcessEvent(Func, &Parms);

}

}



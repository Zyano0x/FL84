#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LimNativeWidget.AudioPermissionHelperProxy
// (None)

class UClass* UAudioPermissionHelperProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPermissionHelperProxy");

	return Clss;
}


// AudioPermissionHelperProxy LimNativeWidget.Default__AudioPermissionHelperProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPermissionHelperProxy* UAudioPermissionHelperProxy::GetDefaultObj()
{
	static class UAudioPermissionHelperProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPermissionHelperProxy*>(UAudioPermissionHelperProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function LimNativeWidget.AudioPermissionHelperProxy.OnAndroidPermissionResult
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              Permissions                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       Results                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioPermissionHelperProxy::OnAndroidPermissionResult(TArray<class FString>& Permissions, TArray<bool>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioPermissionHelperProxy", "OnAndroidPermissionResult");

	Params::UAudioPermissionHelperProxy_OnAndroidPermissionResult_Params Parms{};

	Parms.Permissions = Permissions;
	Parms.Results = Results;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.AudioPermissionHelperProxy.CheckIOSAudioPermission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EIOSAudioPermissionStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EIOSAudioPermissionState UAudioPermissionHelperProxy::CheckIOSAudioPermission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioPermissionHelperProxy", "CheckIOSAudioPermission");

	Params::UAudioPermissionHelperProxy_CheckIOSAudioPermission_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.AudioPermissionHelperProxy.CheckAndroidAudioPermission
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioPermissionHelperProxy::CheckAndroidAudioPermission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioPermissionHelperProxy", "CheckAndroidAudioPermission");

	Params::UAudioPermissionHelperProxy_CheckAndroidAudioPermission_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.AudioPermissionHelperProxy.AcquireIOSAudioPermission
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAudioPermissionHelperProxy::AcquireIOSAudioPermission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioPermissionHelperProxy", "AcquireIOSAudioPermission");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.AudioPermissionHelperProxy.AcquireAndroidAudioPermission
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAudioPermissionHelperProxy::AcquireAndroidAudioPermission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioPermissionHelperProxy", "AcquireAndroidAudioPermission");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class LimNativeWidget.ChatGMEManager
// (None)

class UClass* UChatGMEManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatGMEManager");

	return Clss;
}


// ChatGMEManager LimNativeWidget.Default__ChatGMEManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UChatGMEManager* UChatGMEManager::GetDefaultObj()
{
	static class UChatGMEManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatGMEManager*>(UChatGMEManager::StaticClass()->DefaultObject);

	return Default;
}


// Function LimNativeWidget.ChatGMEManager.UpdateSelfPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InSelfPosition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::UpdateSelfPosition(const struct FVector& InSelfPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "UpdateSelfPosition");

	Params::UChatGMEManager_UpdateSelfPosition_Params Parms{};

	Parms.InSelfPosition = InSelfPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.UpdateAudioRecvRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InRange                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::UpdateAudioRecvRange(int32 InRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "UpdateAudioRecvRange");

	Params::UChatGMEManager_UpdateAudioRecvRange_Params Parms{};

	Parms.InRange = InRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.UnRegisterLuaEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void UChatGMEManager::UnRegisterLuaEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "UnRegisterLuaEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LimNativeWidget.ChatGMEManager.Uninit
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UChatGMEManager::Uninit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "Uninit");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.SwitchRoomCompatible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InRoomId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      GmeToken                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChatGMEManager::SwitchRoomCompatible(const class FString& InRoomId, const class FString& GmeToken)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "SwitchRoomCompatible");

	Params::UChatGMEManager_SwitchRoomCompatible_Params Parms{};

	Parms.InRoomId = InRoomId;
	Parms.GmeToken = GmeToken;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.SwitchRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InRoomId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChatGMEManager::SwitchRoom(const class FString& InRoomId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "SwitchRoom");

	Params::UChatGMEManager_SwitchRoom_Params Parms{};

	Parms.InRoomId = InRoomId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.SetRangeAudioTeamID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InTeamId                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::SetRangeAudioTeamID(int32 InTeamId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "SetRangeAudioTeamID");

	Params::UChatGMEManager_SetRangeAudioTeamID_Params Parms{};

	Parms.InTeamId = InTeamId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.SetRangeAudioMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EChatGMERangeAudioMode  InAudioMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::SetRangeAudioMode(enum class EChatGMERangeAudioMode InAudioMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "SetRangeAudioMode");

	Params::UChatGMEManager_SetRangeAudioMode_Params Parms{};

	Parms.InAudioMode = InAudioMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.SetAudioSendAndRecvRules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EChatGMEAudioRouteSendTypeSendType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              SendOpenIDList                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChatGMEAudioRouteRecvTypeRecvType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              RecvOpenIDList                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::SetAudioSendAndRecvRules(enum class EChatGMEAudioRouteSendType SendType, const TArray<class FString>& SendOpenIDList, enum class EChatGMEAudioRouteRecvType RecvType, const TArray<class FString>& RecvOpenIDList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "SetAudioSendAndRecvRules");

	Params::UChatGMEManager_SetAudioSendAndRecvRules_Params Parms{};

	Parms.SendType = SendType;
	Parms.SendOpenIDList = SendOpenIDList;
	Parms.RecvType = RecvType;
	Parms.RecvOpenIDList = RecvOpenIDList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.SelectSpeak
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InDeviceID                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::SelectSpeak(const class FString& InDeviceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "SelectSpeak");

	Params::UChatGMEManager_SelectSpeak_Params Parms{};

	Parms.InDeviceID = InDeviceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.SelectMic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InDeviceID                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::SelectMic(const class FString& InDeviceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "SelectMic");

	Params::UChatGMEManager_SelectMic_Params Parms{};

	Parms.InDeviceID = InDeviceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.PreInit
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UChatGMEManager::PreInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "PreInit");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LimNativeWidget.ChatGMEManager.OnUserVolumesDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FChatGMEDataUserVolumes     InData                                                           (Parm, NativeAccessSpecifierPublic)

void UChatGMEManager::OnUserVolumesDelegate__DelegateSignature(const struct FChatGMEDataUserVolumes& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "OnUserVolumesDelegate__DelegateSignature");

	Params::UChatGMEManager_OnUserVolumesDelegate__DelegateSignature_Params Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.ChatGMEManager.OnUserUpdateDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FChatGMEDataUserUpdate      InData                                                           (Parm, NativeAccessSpecifierPublic)

void UChatGMEManager::OnUserUpdateDelegate__DelegateSignature(const struct FChatGMEDataUserUpdate& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "OnUserUpdateDelegate__DelegateSignature");

	Params::UChatGMEManager_OnUserUpdateDelegate__DelegateSignature_Params Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.ChatGMEManager.OnRoomManagementOperatorDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FChatGMEDataRoomOperator    InData                                                           (Parm, NativeAccessSpecifierPublic)

void UChatGMEManager::OnRoomManagementOperatorDelegate__DelegateSignature(const struct FChatGMEDataRoomOperator& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "OnRoomManagementOperatorDelegate__DelegateSignature");

	Params::UChatGMEManager_OnRoomManagementOperatorDelegate__DelegateSignature_Params Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.ChatGMEManager.OnResultDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FChatGMEDataResult          Result                                                           (Parm, NativeAccessSpecifierPublic)

void UChatGMEManager::OnResultDelegate__DelegateSignature(const struct FChatGMEDataResult& Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "OnResultDelegate__DelegateSignature");

	Params::UChatGMEManager_OnResultDelegate__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.ChatGMEManager.OnRecordCompletedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FChatGMEDataRecordCompleted InData                                                           (Parm, NativeAccessSpecifierPublic)

void UChatGMEManager::OnRecordCompletedDelegate__DelegateSignature(const struct FChatGMEDataRecordCompleted& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "OnRecordCompletedDelegate__DelegateSignature");

	Params::UChatGMEManager_OnRecordCompletedDelegate__DelegateSignature_Params Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.ChatGMEManager.OnNumberOfUsersUpdateDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FChatGMEDataNumberOfUserUpdateInData                                                           (Parm, NativeAccessSpecifierPublic)

void UChatGMEManager::OnNumberOfUsersUpdateDelegate__DelegateSignature(const struct FChatGMEDataNumberOfUserUpdate& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "OnNumberOfUsersUpdateDelegate__DelegateSignature");

	Params::UChatGMEManager_OnNumberOfUsersUpdateDelegate__DelegateSignature_Params Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.ChatGMEManager.OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FChatGMEDataNumberOfAudioStreamsUpdateInData                                                           (Parm, NativeAccessSpecifierPublic)

void UChatGMEManager::OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature(const struct FChatGMEDataNumberOfAudioStreamsUpdate& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature");

	Params::UChatGMEManager_OnNumberOfAudioStreamsUpdateDelegate__DelegateSignature_Params Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.ChatGMEManager.OnNotifyFileInfoDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FChatGMEDataFileInfo        InData                                                           (Parm, NativeAccessSpecifierPublic)

void UChatGMEManager::OnNotifyFileInfoDelegate__DelegateSignature(const struct FChatGMEDataFileInfo& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "OnNotifyFileInfoDelegate__DelegateSignature");

	Params::UChatGMEManager_OnNotifyFileInfoDelegate__DelegateSignature_Params Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.ChatGMEManager.OnNotifyDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      InData                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::OnNotifyDelegate__DelegateSignature(const class FString& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "OnNotifyDelegate__DelegateSignature");

	Params::UChatGMEManager_OnNotifyDelegate__DelegateSignature_Params Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNativeWidget.ChatGMEManager.OnGetAuthBuffer
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeGetGMETokenCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UChatGMEManager::OnGetAuthBuffer(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetGMETokenCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "OnGetAuthBuffer");

	Params::UChatGMEManager_OnGetAuthBuffer_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LimNativeWidget.ChatGMEManager.OnDeviceChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FChatGMEDataDeviceInfo      InData                                                           (Parm, NativeAccessSpecifierPublic)

void UChatGMEManager::OnDeviceChangedDelegate__DelegateSignature(const struct FChatGMEDataDeviceInfo& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "OnDeviceChangedDelegate__DelegateSignature");

	Params::UChatGMEManager_OnDeviceChangedDelegate__DelegateSignature_Params Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.ChatGMEManager.OnChangeRoomTypeDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FChatGMEDataChangeRoomType  InData                                                           (Parm, NativeAccessSpecifierPublic)

void UChatGMEManager::OnChangeRoomTypeDelegate__DelegateSignature(const struct FChatGMEDataChangeRoomType& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "OnChangeRoomTypeDelegate__DelegateSignature");

	Params::UChatGMEManager_OnChangeRoomTypeDelegate__DelegateSignature_Params Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.ChatGMEManager.OnChangeRoomQualityDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FChatGMEDataRoomQuality     InData                                                           (Parm, NativeAccessSpecifierPublic)

void UChatGMEManager::OnChangeRoomQualityDelegate__DelegateSignature(const struct FChatGMEDataRoomQuality& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "OnChangeRoomQualityDelegate__DelegateSignature");

	Params::UChatGMEManager_OnChangeRoomQualityDelegate__DelegateSignature_Params Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.ChatGMEManager.OnAndroidPermissionResult__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::OnAndroidPermissionResult__DelegateSignature(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "OnAndroidPermissionResult__DelegateSignature");

	Params::UChatGMEManager_OnAndroidPermissionResult__DelegateSignature_Params Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNativeWidget.ChatGMEManager.MediaMute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InMute                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::MediaMute(const class FString& InUserId, bool InMute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "MediaMute");

	Params::UChatGMEManager_MediaMute_Params Parms{};

	Parms.InUserId = InUserId;
	Parms.InMute = InMute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.IsRoomEntered
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChatGMEManager::IsRoomEntered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "IsRoomEntered");

	Params::UChatGMEManager_IsRoomEntered_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.IsAudioSendEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChatGMEManager::IsAudioSendEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "IsAudioSendEnabled");

	Params::UChatGMEManager_IsAudioSendEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.IsAudioRecvEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChatGMEManager::IsAudioRecvEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "IsAudioRecvEnabled");

	Params::UChatGMEManager_IsAudioRecvEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.IsAudioPlayDeviceEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChatGMEManager::IsAudioPlayDeviceEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "IsAudioPlayDeviceEnabled");

	Params::UChatGMEManager_IsAudioPlayDeviceEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.IsAudioCaptureDeviceEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChatGMEManager::IsAudioCaptureDeviceEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "IsAudioCaptureDeviceEnabled");

	Params::UChatGMEManager_IsAudioCaptureDeviceEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.InnerEnableMic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InEnable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::InnerEnableMic(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "InnerEnableMic");

	Params::UChatGMEManager_InnerEnableMic_Params Parms{};

	Parms.InEnable = InEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.InitGME
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InEnvId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InGMEUserID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::InitGME(const class FString& InEnvId, const class FString& InGMEUserID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "InitGME");

	Params::UChatGMEManager_InitGME_Params Parms{};

	Parms.InEnvId = InEnvId;
	Parms.InGMEUserID = InGMEUserID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InAppId                                                          (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InEnvId                                                          (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::Init(const class FString& InUserId, const class FString& InAppId, const class FString& InEnvId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "Init");

	Params::UChatGMEManager_Init_Params Parms{};

	Parms.InUserId = InUserId;
	Parms.InAppId = InAppId;
	Parms.InEnvId = InEnvId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.GetSpeakerState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChatGMEManager::GetSpeakerState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GetSpeakerState");

	Params::UChatGMEManager_GetSpeakerState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.GetSpeakerList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FChatGMEDataDeviceInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<struct FChatGMEDataDeviceInfo> UChatGMEManager::GetSpeakerList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GetSpeakerList");

	Params::UChatGMEManager_GetSpeakerList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.GetRecordingLocalFilePath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UChatGMEManager::GetRecordingLocalFilePath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GetRecordingLocalFilePath");

	Params::UChatGMEManager_GetRecordingLocalFilePath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.GetMicState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChatGMEManager::GetMicState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GetMicState");

	Params::UChatGMEManager_GetMicState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.GetMicList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FChatGMEDataDeviceInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<struct FChatGMEDataDeviceInfo> UChatGMEManager::GetMicList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GetMicList");

	Params::UChatGMEManager_GetMicList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UChatGMEManager*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UChatGMEManager* UChatGMEManager::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GetInstance");

	Params::UChatGMEManager_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.GameUploadRecordedFileCompatible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Token                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::GameUploadRecordedFileCompatible(const class FString& FilePath, const class FString& Token)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameUploadRecordedFileCompatible");

	Params::UChatGMEManager_GameUploadRecordedFileCompatible_Params Parms{};

	Parms.FilePath = FilePath;
	Parms.Token = Token;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.GameUploadRecordedFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::GameUploadRecordedFile(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameUploadRecordedFile");

	Params::UChatGMEManager_GameUploadRecordedFile_Params Parms{};

	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.GameStopRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UChatGMEManager::GameStopRecording()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameStopRecording");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.GameStopPlayFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UChatGMEManager::GameStopPlayFile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameStopPlayFile");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.GameStartRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::GameStartRecording(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameStartRecording");

	Params::UChatGMEManager_GameStartRecording_Params Parms{};

	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.GameSetSpeakerVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChatGMEManager::GameSetSpeakerVolume(int32 Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameSetSpeakerVolume");

	Params::UChatGMEManager_GameSetSpeakerVolume_Params Parms{};

	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.GameSetMicVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              MicVolume                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChatGMEManager::GameSetMicVolume(int32 MicVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameSetMicVolume");

	Params::UChatGMEManager_GameSetMicVolume_Params Parms{};

	Parms.MicVolume = MicVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.GameResumeRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UChatGMEManager::GameResumeRecording()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameResumeRecording");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.GamePlayRecordedFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::GamePlayRecordedFile(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GamePlayRecordedFile");

	Params::UChatGMEManager_GamePlayRecordedFile_Params Parms{};

	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.GamePauseRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UChatGMEManager::GamePauseRecording()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GamePauseRecording");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.GameGetVoiceFileDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChatGMEManager::GameGetVoiceFileDuration(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameGetVoiceFileDuration");

	Params::UChatGMEManager_GameGetVoiceFileDuration_Params Parms{};

	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.GameGetSpeakerVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChatGMEManager::GameGetSpeakerVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameGetSpeakerVolume");

	Params::UChatGMEManager_GameGetSpeakerVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.GameGetSpeakerLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChatGMEManager::GameGetSpeakerLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameGetSpeakerLevel");

	Params::UChatGMEManager_GameGetSpeakerLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.GameGetMicVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChatGMEManager::GameGetMicVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameGetMicVolume");

	Params::UChatGMEManager_GameGetMicVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.GameGetMicLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChatGMEManager::GameGetMicLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameGetMicLevel");

	Params::UChatGMEManager_GameGetMicLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.GameDownloadRecordedFileeCompatible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FileID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Token                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::GameDownloadRecordedFileeCompatible(const class FString& FileID, const class FString& FilePath, const class FString& Token)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameDownloadRecordedFileeCompatible");

	Params::UChatGMEManager_GameDownloadRecordedFileeCompatible_Params Parms{};

	Parms.FileID = FileID;
	Parms.FilePath = FilePath;
	Parms.Token = Token;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.GameDownloadRecordedFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FileID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::GameDownloadRecordedFile(const class FString& FileID, const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameDownloadRecordedFile");

	Params::UChatGMEManager_GameDownloadRecordedFile_Params Parms{};

	Parms.FileID = FileID;
	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.GameCancleRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UChatGMEManager::GameCancleRecording()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "GameCancleRecording");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.ExitRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChatGMEManager::ExitRoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "ExitRoom");

	Params::UChatGMEManager_ExitRoom_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.EnterRoomCompatible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InRoomId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      GmeToken                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChatGMEManager::EnterRoomCompatible(const class FString& InRoomId, const class FString& GmeToken)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "EnterRoomCompatible");

	Params::UChatGMEManager_EnterRoomCompatible_Params Parms{};

	Parms.InRoomId = InRoomId;
	Parms.GmeToken = GmeToken;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.EnterRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InRoomId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChatGMERoomType        InRoomType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChatGMEManager::EnterRoom(const class FString& InRoomId, enum class EChatGMERoomType InRoomType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "EnterRoom");

	Params::UChatGMEManager_EnterRoom_Params Parms{};

	Parms.InRoomId = InRoomId;
	Parms.InRoomType = InRoomType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.ChatGMEManager.EnableSpeaker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InEnable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::EnableSpeaker(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "EnableSpeaker");

	Params::UChatGMEManager_EnableSpeaker_Params Parms{};

	Parms.InEnable = InEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.EnableMic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InEnable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::EnableMic(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "EnableMic");

	Params::UChatGMEManager_EnableMic_Params Parms{};

	Parms.InEnable = InEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.EnableAudioSend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::EnableAudioSend(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "EnableAudioSend");

	Params::UChatGMEManager_EnableAudioSend_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.EnableAudioRecv
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::EnableAudioRecv(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "EnableAudioRecv");

	Params::UChatGMEManager_EnableAudioRecv_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.EnableAudioPlayDevice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InEnable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::EnableAudioPlayDevice(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "EnableAudioPlayDevice");

	Params::UChatGMEManager_EnableAudioPlayDevice_Params Parms{};

	Parms.InEnable = InEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.EnableAudioCaptureDevice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InEnable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChatGMEManager::EnableAudioCaptureDevice(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "EnableAudioCaptureDevice");

	Params::UChatGMEManager_EnableAudioCaptureDevice_Params Parms{};

	Parms.InEnable = InEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.DestroyInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UChatGMEManager::DestroyInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "DestroyInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.DeleteCacheFiles
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UChatGMEManager::DeleteCacheFiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "DeleteCacheFiles");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.ChatGMEManager.CheckPlatformMicPermission
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChatGMEManager::CheckPlatformMicPermission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatGMEManager", "CheckPlatformMicPermission");

	Params::UChatGMEManager_CheckPlatformMicPermission_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LimNativeWidget.ChatListEmojiEntryData
// (None)

class UClass* UChatListEmojiEntryData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatListEmojiEntryData");

	return Clss;
}


// ChatListEmojiEntryData LimNativeWidget.Default__ChatListEmojiEntryData
// (Public, ClassDefaultObject, ArchetypeObject)

class UChatListEmojiEntryData* UChatListEmojiEntryData::GetDefaultObj()
{
	static class UChatListEmojiEntryData* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatListEmojiEntryData*>(UChatListEmojiEntryData::StaticClass()->DefaultObject);

	return Default;
}


// Class LimNativeWidget.ChatListEntryDataBase
// (None)

class UClass* UChatListEntryDataBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatListEntryDataBase");

	return Clss;
}


// ChatListEntryDataBase LimNativeWidget.Default__ChatListEntryDataBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UChatListEntryDataBase* UChatListEntryDataBase::GetDefaultObj()
{
	static class UChatListEntryDataBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatListEntryDataBase*>(UChatListEntryDataBase::StaticClass()->DefaultObject);

	return Default;
}


// Class LimNativeWidget.ChatListEntryDataText
// (None)

class UClass* UChatListEntryDataText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatListEntryDataText");

	return Clss;
}


// ChatListEntryDataText LimNativeWidget.Default__ChatListEntryDataText
// (Public, ClassDefaultObject, ArchetypeObject)

class UChatListEntryDataText* UChatListEntryDataText::GetDefaultObj()
{
	static class UChatListEntryDataText* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatListEntryDataText*>(UChatListEntryDataText::StaticClass()->DefaultObject);

	return Default;
}


// Class LimNativeWidget.ChatListEntryDataSystem
// (None)

class UClass* UChatListEntryDataSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatListEntryDataSystem");

	return Clss;
}


// ChatListEntryDataSystem LimNativeWidget.Default__ChatListEntryDataSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UChatListEntryDataSystem* UChatListEntryDataSystem::GetDefaultObj()
{
	static class UChatListEntryDataSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatListEntryDataSystem*>(UChatListEntryDataSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class LimNativeWidget.ChatListEntryDataVoice
// (None)

class UClass* UChatListEntryDataVoice::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatListEntryDataVoice");

	return Clss;
}


// ChatListEntryDataVoice LimNativeWidget.Default__ChatListEntryDataVoice
// (Public, ClassDefaultObject, ArchetypeObject)

class UChatListEntryDataVoice* UChatListEntryDataVoice::GetDefaultObj()
{
	static class UChatListEntryDataVoice* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatListEntryDataVoice*>(UChatListEntryDataVoice::StaticClass()->DefaultObject);

	return Default;
}


// Class LimNativeWidget.ChatListEntryDataImage
// (None)

class UClass* UChatListEntryDataImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatListEntryDataImage");

	return Clss;
}


// ChatListEntryDataImage LimNativeWidget.Default__ChatListEntryDataImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UChatListEntryDataImage* UChatListEntryDataImage::GetDefaultObj()
{
	static class UChatListEntryDataImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatListEntryDataImage*>(UChatListEntryDataImage::StaticClass()->DefaultObject);

	return Default;
}


// Class LimNativeWidget.ChatListEntryDataCustomEmotion
// (None)

class UClass* UChatListEntryDataCustomEmotion::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatListEntryDataCustomEmotion");

	return Clss;
}


// ChatListEntryDataCustomEmotion LimNativeWidget.Default__ChatListEntryDataCustomEmotion
// (Public, ClassDefaultObject, ArchetypeObject)

class UChatListEntryDataCustomEmotion* UChatListEntryDataCustomEmotion::GetDefaultObj()
{
	static class UChatListEntryDataCustomEmotion* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatListEntryDataCustomEmotion*>(UChatListEntryDataCustomEmotion::StaticClass()->DefaultObject);

	return Default;
}


// Class LimNativeWidget.ChatListEntryDataShaderedGameCard
// (None)

class UClass* UChatListEntryDataShaderedGameCard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatListEntryDataShaderedGameCard");

	return Clss;
}


// ChatListEntryDataShaderedGameCard LimNativeWidget.Default__ChatListEntryDataShaderedGameCard
// (Public, ClassDefaultObject, ArchetypeObject)

class UChatListEntryDataShaderedGameCard* UChatListEntryDataShaderedGameCard::GetDefaultObj()
{
	static class UChatListEntryDataShaderedGameCard* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatListEntryDataShaderedGameCard*>(UChatListEntryDataShaderedGameCard::StaticClass()->DefaultObject);

	return Default;
}


// Class LimNativeWidget.ChatListUserEntryData
// (None)

class UClass* UChatListUserEntryData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatListUserEntryData");

	return Clss;
}


// ChatListUserEntryData LimNativeWidget.Default__ChatListUserEntryData
// (Public, ClassDefaultObject, ArchetypeObject)

class UChatListUserEntryData* UChatListUserEntryData::GetDefaultObj()
{
	static class UChatListUserEntryData* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatListUserEntryData*>(UChatListUserEntryData::StaticClass()->DefaultObject);

	return Default;
}


// Class LimNativeWidget.LimChatManager
// (None)

class UClass* ULimChatManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LimChatManager");

	return Clss;
}


// LimChatManager LimNativeWidget.Default__LimChatManager
// (Public, ClassDefaultObject, ArchetypeObject)

class ULimChatManager* ULimChatManager::GetDefaultObj()
{
	static class ULimChatManager* Default = nullptr;

	if (!Default)
		Default = static_cast<ULimChatManager*>(ULimChatManager::StaticClass()->DefaultObject);

	return Default;
}


// Function LimNativeWidget.LimChatManager.UnRegisterLuaEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void ULimChatManager::UnRegisterLuaEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "UnRegisterLuaEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LimNativeWidget.LimChatManager.UnInitChatManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULimChatManager::UnInitChatManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "UnInitChatManager");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.TranslateText
// (Final, Native, Public)
// Parameters:
// class FString                      Text                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Lang                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExtraInfo                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::TranslateText(const class FString& Text, const class FString& Lang, const class FString& ExtraInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "TranslateText");

	Params::ULimChatManager_TranslateText_Params Parms{};

	Parms.Text = Text;
	Parms.Lang = Lang;
	Parms.ExtraInfo = ExtraInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.SwitchConvTo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChatListConvData           InConvData                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               RefreshConvList                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::SwitchConvTo(struct FChatListConvData& InConvData, bool RefreshConvList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "SwitchConvTo");

	Params::ULimChatManager_SwitchConvTo_Params Parms{};

	Parms.InConvData = InConvData;
	Parms.RefreshConvList = RefreshConvList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.SetCtxLanguage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Lang                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::SetCtxLanguage(const class FString& Lang)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "SetCtxLanguage");

	Params::ULimChatManager_SetCtxLanguage_Params Parms{};

	Parms.Lang = Lang;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.SetConvRead
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChatListConvData           ConvData                                                         (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::SetConvRead(struct FChatListConvData& ConvData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "SetConvRead");

	Params::ULimChatManager_SetConvRead_Params Parms{};

	Parms.ConvData = ConvData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.SetConvMsgRead
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MsgId                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Extra                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::SetConvMsgRead(const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& MsgId, const class FString& Extra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "SetConvMsgRead");

	Params::ULimChatManager_SetConvMsgRead_Params Parms{};

	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.MsgId = MsgId;
	Parms.Extra = Extra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.SendVoiceMessageToConv
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ConvID                                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FileID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Extra                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::SendVoiceMessageToConv(const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& FileID, const class FString& Extra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "SendVoiceMessageToConv");

	Params::ULimChatManager_SendVoiceMessageToConv_Params Parms{};

	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.FileID = FileID;
	Parms.Extra = Extra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.SendTextMessageToConv
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ConvID                                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Extra                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::SendTextMessageToConv(const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& Message, const class FString& Extra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "SendTextMessageToConv");

	Params::ULimChatManager_SendTextMessageToConv_Params Parms{};

	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.Message = Message;
	Parms.Extra = Extra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.SendTextMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Extra                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::SendTextMessage(const class FString& Message, const class FString& Extra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "SendTextMessage");

	Params::ULimChatManager_SendTextMessage_Params Parms{};

	Parms.Message = Message;
	Parms.Extra = Extra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.PostInitChatManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLimNativeReportConfig      ReportConfig                                                     (Parm, NativeAccessSpecifierPublic)
// struct FLimNativeParkConfig        ParkConfig                                                       (Parm, NativeAccessSpecifierPublic)

void ULimChatManager::PostInitChatManager(const struct FLimNativeReportConfig& ReportConfig, const struct FLimNativeParkConfig& ParkConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "PostInitChatManager");

	Params::ULimChatManager_PostInitChatManager_Params Parms{};

	Parms.ReportConfig = ReportConfig;
	Parms.ParkConfig = ParkConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.OpenChatUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ChatWidgetPath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ZOrder                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* ULimChatManager::OpenChatUI(class UObject* WorldContextObject, const class FString& ChatWidgetPath, int32 ZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OpenChatUI");

	Params::ULimChatManager_OpenChatUI_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ChatWidgetPath = ChatWidgetPath;
	Parms.ZOrder = ZOrder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction LimNativeWidget.LimChatManager.OnTextTranslateDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               TranslateRes                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      TranslatedText                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Translator                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ExtraInfo                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnTextTranslateDynamicDelegate__DelegateSignature(bool TranslateRes, const class FString& TranslatedText, const class FString& Translator, const class FString& ExtraInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnTextTranslateDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnTextTranslateDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.TranslateRes = TranslateRes;
	Parms.TranslatedText = TranslatedText;
	Parms.Translator = Translator;
	Parms.ExtraInfo = ExtraInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.LimChatManager.OnSendMessageCallBackDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FChatListMessageData        MsgCallBack                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnSendMessageCallBackDynamicDelegate__DelegateSignature(struct FChatListMessageData& MsgCallBack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnSendMessageCallBackDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnSendMessageCallBackDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.MsgCallBack = MsgCallBack;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.LimChatManager.OnRedHintUpdateDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void ULimChatManager::OnRedHintUpdateDynamicDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnRedHintUpdateDynamicDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction LimNativeWidget.LimChatManager.OnReceiveMessageDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FChatListMessageData        Msg                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnReceiveMessageDynamicDelegate__DelegateSignature(struct FChatListMessageData& Msg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnReceiveMessageDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnReceiveMessageDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.Msg = Msg;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.LimChatManager.OnReceiveLogicMessageDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// int32                              MsgType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLimNativeDataBizFullObj    NativeMsg                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnReceiveLogicMessageDynamicDelegate__DelegateSignature(int32 MsgType, struct FLimNativeDataBizFullObj& NativeMsg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnReceiveLogicMessageDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnReceiveLogicMessageDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.MsgType = MsgType;
	Parms.NativeMsg = NativeMsg;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNativeWidget.LimChatManager.OnOpenChatUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULimChatManager::OnOpenChatUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnOpenChatUI");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LimNativeWidget.LimChatManager.OnNewSendMessageCallBackDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FNewChatListMessageData     MsgCallBack                                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RetData                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Code                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnNewSendMessageCallBackDynamicDelegate__DelegateSignature(struct FNewChatListMessageData& MsgCallBack, const class FString& RetData, int32 Code)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnNewSendMessageCallBackDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnNewSendMessageCallBackDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.MsgCallBack = MsgCallBack;
	Parms.RetData = RetData;
	Parms.Code = Code;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.LimChatManager.OnNewReceiveMessageDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FNewChatListMessageData     Msg                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnNewReceiveMessageDynamicDelegate__DelegateSignature(struct FNewChatListMessageData& Msg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnNewReceiveMessageDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnNewReceiveMessageDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.Msg = Msg;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNativeWidget.LimChatManager.OnMiscConfigInfoHandle
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeGetMiscConfigInfoCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnMiscConfigInfoHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetMiscConfigInfoCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnMiscConfigInfoHandle");

	Params::ULimChatManager_OnMiscConfigInfoHandle_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.OnMessageSend
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnSendMsgCallBack RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnMessageSend(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSendMsgCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnMessageSend");

	Params::ULimChatManager_OnMessageSend_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.OnMessageReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnMsgReceivedEventCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnMessageReceived(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgReceivedEventCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnMessageReceived");

	Params::ULimChatManager_OnMessageReceived_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LimNativeWidget.LimChatManager.OnLoginDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               LoginRes                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Code                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RetData                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnLoginDynamicDelegate__DelegateSignature(bool LoginRes, int32 Code, const class FString& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnLoginDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnLoginDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.LoginRes = LoginRes;
	Parms.Code = Code;
	Parms.RetData = RetData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNativeWidget.LimChatManager.OnLogin
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnLoginCallBack   RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnLogin(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnLoginCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnLogin");

	Params::ULimChatManager_OnLogin_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.OnLogicMsgReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnMsgLogicReceivedEventCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnLogicMsgReceived(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnMsgLogicReceivedEventCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnLogicMsgReceived");

	Params::ULimChatManager_OnLogicMsgReceived_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.OnLog
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Data                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnLog(struct FLimNativeLowLevelWrapper& InWrapper, const class FString& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnLog");

	Params::ULimChatManager_OnLog_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LimNativeWidget.LimChatManager.OnInputBoxStateChangeDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bUp                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Left                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Top                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Right                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Bottom                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnInputBoxStateChangeDelegate__DelegateSignature(bool bUp, int32 Left, int32 Top, int32 Right, int32 Bottom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnInputBoxStateChangeDelegate__DelegateSignature");

	Params::ULimChatManager_OnInputBoxStateChangeDelegate__DelegateSignature_Params Parms{};

	Parms.bUp = bUp;
	Parms.Left = Left;
	Parms.Top = Top;
	Parms.Right = Right;
	Parms.Bottom = Bottom;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.LimChatManager.OnGetUsersStateCallBackDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void ULimChatManager::OnGetUsersStateCallBackDynamicDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetUsersStateCallBackDynamicDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction LimNativeWidget.LimChatManager.OnGetUsersCallBackDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FChatListUserData>   UserDataList                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnGetUsersCallBackDynamicDelegate__DelegateSignature(TArray<struct FChatListUserData>& UserDataList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetUsersCallBackDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnGetUsersCallBackDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.UserDataList = UserDataList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNativeWidget.LimChatManager.OnGetUserListState
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetUsersStateCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnGetUserListState(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUsersStateCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetUserListState");

	Params::ULimChatManager_OnGetUserListState_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.OnGetUserListInfo
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetUsersCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnGetUserListInfo(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUsersCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetUserListInfo");

	Params::ULimChatManager_OnGetUserListInfo_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.OnGetUserInfo
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetUserCallBack RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnGetUserInfo(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetUserCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetUserInfo");

	Params::ULimChatManager_OnGetUserInfo_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LimNativeWidget.LimChatManager.OnGetUserCallBackDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FChatListUserData           UserData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnGetUserCallBackDynamicDelegate__DelegateSignature(struct FChatListUserData& UserData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetUserCallBackDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnGetUserCallBackDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.UserData = UserData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNativeWidget.LimChatManager.OnGetTextTranslateHandle
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeTextTranslateCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnGetTextTranslateHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeTextTranslateCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetTextTranslateHandle");

	Params::ULimChatManager_OnGetTextTranslateHandle_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.OnGetNetStatHandle
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              RetData                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnGetNetStatHandle(struct FLimNativeLowLevelWrapper& InWrapper, int32 RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetNetStatHandle");

	Params::ULimChatManager_OnGetNetStatHandle_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LimNativeWidget.LimChatManager.OnGetNetStatDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              Val                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnGetNetStatDynamicDelegate__DelegateSignature(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetNetStatDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnGetNetStatDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNativeWidget.LimChatManager.OnGetMessageInRange
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetMsgsCallBack RetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnGetMessageInRange(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetMsgsCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetMessageInRange");

	Params::ULimChatManager_OnGetMessageInRange_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LimNativeWidget.LimChatManager.OnGetMessageDataDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              Code                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnGetMessageDataDynamicDelegate__DelegateSignature(int32 Code, const class FString& ConvID, enum class ELimNativeConvType ConvType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetMessageDataDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnGetMessageDataDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.Code = Code;
	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.LimChatManager.OnGetFriendsCallBackDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FChatListUserData>   FriendList                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnGetFriendsCallBackDynamicDelegate__DelegateSignature(TArray<struct FChatListUserData>& FriendList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetFriendsCallBackDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnGetFriendsCallBackDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.FriendList = FriendList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNativeWidget.LimChatManager.OnGetFriends
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetFriendCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnGetFriends(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetFriendCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetFriends");

	Params::ULimChatManager_OnGetFriends_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.OnGetConnStateHandle
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeGetConnStateCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnGetConnStateHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeGetConnStateCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetConnStateHandle");

	Params::ULimChatManager_OnGetConnStateHandle_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LimNativeWidget.LimChatManager.OnGetConnStatDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Val                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnGetConnStatDynamicDelegate__DelegateSignature(bool Result, int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnGetConnStatDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnGetConnStatDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.LimChatManager.OnConvsGetDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               GetConvRes                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnConvsGetDynamicDelegate__DelegateSignature(bool GetConvRes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnConvsGetDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnConvsGetDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.GetConvRes = GetConvRes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNativeWidget.LimChatManager.OnConvRead
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnSetConvReadCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnConvRead(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnSetConvReadCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnConvRead");

	Params::ULimChatManager_OnConvRead_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.OnConvListGet
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnConvsGetCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnConvListGet(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnConvsGetCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnConvListGet");

	Params::ULimChatManager_OnConvListGet_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LimNativeWidget.LimChatManager.OnConvHandleDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// bool                               Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLimNativeConvHandleCallBackDataData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnConvHandleDynamicDelegate__DelegateSignature(bool Result, struct FLimNativeConvHandleCallBackData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnConvHandleDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnConvHandleDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNativeWidget.LimChatManager.OnConvHandle
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnConvHandleCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnConvHandle(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnConvHandleCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnConvHandle");

	Params::ULimChatManager_OnConvHandle_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.OnConvChatLevelConfig
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FLimNativeLowLevelWrapper   InWrapper                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLimNativeOnGetConvChatLevelConfigCallBackRetData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ULimChatManager::OnConvChatLevelConfig(struct FLimNativeLowLevelWrapper& InWrapper, struct FLimNativeOnGetConvChatLevelConfigCallBack& RetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnConvChatLevelConfig");

	Params::ULimChatManager_OnConvChatLevelConfig_Params Parms{};

	Parms.InWrapper = InWrapper;
	Parms.RetData = RetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LimNativeWidget.LimChatManager.OnConfigInfoHandleDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Val                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnConfigInfoHandleDynamicDelegate__DelegateSignature(bool Result, int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnConfigInfoHandleDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnConfigInfoHandleDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.LimChatManager.OnConfigGetChatLevlDynamicDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::OnConfigGetChatLevlDynamicDelegate__DelegateSignature(bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "OnConfigGetChatLevlDynamicDelegate__DelegateSignature");

	Params::ULimChatManager_OnConfigGetChatLevlDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNativeWidget.LimChatManager.Logout
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULimChatManager::Logout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "Logout");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.Login
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InAppId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InAppUserID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InToken                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InRoleID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InExtra                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::Login(const class FString& InAppId, const class FString& InAppUserID, const class FString& InToken, const class FString& InRoleID, const class FString& InExtra)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "Login");

	Params::ULimChatManager_Login_Params Parms{};

	Parms.InAppId = InAppId;
	Parms.InAppUserID = InAppUserID;
	Parms.InToken = InToken;
	Parms.InRoleID = InRoleID;
	Parms.InExtra = InExtra;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.InitChatManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLimNativeInitConfig        InitConfig                                                       (Parm, NativeAccessSpecifierPublic)
// class FString                      InEnvId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InGMEUserID                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::InitChatManager(const struct FLimNativeInitConfig& InitConfig, const class FString& InEnvId, const class FString& InGMEUserID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "InitChatManager");

	Params::ULimChatManager_InitChatManager_Params Parms{};

	Parms.InitConfig = InitConfig;
	Parms.InEnvId = InEnvId;
	Parms.InGMEUserID = InGMEUserID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.GetUserListState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InUserIDList                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::GetUserListState(TArray<class FString>& InUserIDList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetUserListState");

	Params::ULimChatManager_GetUserListState_Params Parms{};

	Parms.InUserIDList = InUserIDList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.GetUserListInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              InUserIDList                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::GetUserListInfo(const TArray<class FString>& InUserIDList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetUserListInfo");

	Params::ULimChatManager_GetUserListInfo_Params Parms{};

	Parms.InUserIDList = InUserIDList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.GetUserInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InUserId                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::GetUserInfo(const class FString& InUserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetUserInfo");

	Params::ULimChatManager_GetUserInfo_Params Parms{};

	Parms.InUserId = InUserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.GetMiscConfigInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULimChatManager::GetMiscConfigInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetMiscConfigInfo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.GetMessageInRange
// (Final, Native, Public)
// Parameters:
// class FString                      ConvID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FromMsgId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ToMsgId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::GetMessageInRange(const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& FromMsgId, const class FString& ToMsgId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetMessageInRange");

	Params::ULimChatManager_GetMessageInRange_Params Parms{};

	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.FromMsgId = FromMsgId;
	Parms.ToMsgId = ToMsgId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.GetMessage
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChatListConvData           TargetConv                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::GetMessage(struct FChatListConvData& TargetConv)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetMessage");

	Params::ULimChatManager_GetMessage_Params Parms{};

	Parms.TargetConv = TargetConv;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.GetLimSlssvr
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULimChatManager::GetLimSlssvr()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetLimSlssvr");

	Params::ULimChatManager_GetLimSlssvr_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.LimChatManager.GetLimSDKRegion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULimChatManager::GetLimSDKRegion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetLimSDKRegion");

	Params::ULimChatManager_GetLimSDKRegion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.LimChatManager.GetLimGameID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULimChatManager::GetLimGameID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetLimGameID");

	Params::ULimChatManager_GetLimGameID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.LimChatManager.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULimChatManager*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULimChatManager* ULimChatManager::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetInstance");

	Params::ULimChatManager_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.LimChatManager.GetFriendList
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULimChatManager::GetFriendList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetFriendList");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.GetFarlightDomain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULimChatManager::GetFarlightDomain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetFarlightDomain");

	Params::ULimChatManager_GetFarlightDomain_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.LimChatManager.GetConvMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ConvID                                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FromMsgId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ToMsgId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::GetConvMessage(const class FString& ConvID, enum class ELimNativeConvType ConvType, const class FString& FromMsgId, const class FString& ToMsgId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetConvMessage");

	Params::ULimChatManager_GetConvMessage_Params Parms{};

	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;
	Parms.FromMsgId = FromMsgId;
	Parms.ToMsgId = ToMsgId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.GetConvList
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULimChatManager::GetConvList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetConvList");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.GetConvChatLevelConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULimChatManager::GetConvChatLevelConfig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetConvChatLevelConfig");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.GetConnState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULimChatManager::GetConnState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "GetConnState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.DiscardConv
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ConvID                                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELimNativeConvType      ConvType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULimChatManager::DiscardConv(const class FString& ConvID, enum class ELimNativeConvType ConvType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "DiscardConv");

	Params::ULimChatManager_DiscardConv_Params Parms{};

	Parms.ConvID = ConvID;
	Parms.ConvType = ConvType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.DestroyInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULimChatManager::DestroyInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "DestroyInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.LimChatManager.CheckTargetIsContainIn
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FChatListConvData           InConvData                                                       (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULimChatManager::CheckTargetIsContainIn(struct FChatListConvData& InConvData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimChatManager", "CheckTargetIsContainIn");

	Params::ULimChatManager_CheckTargetIsContainIn_Params Parms{};

	Parms.InConvData = InConvData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LimNativeWidget.LimNativeWidgetSettings
// (None)

class UClass* ULimNativeWidgetSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LimNativeWidgetSettings");

	return Clss;
}


// LimNativeWidgetSettings LimNativeWidget.Default__LimNativeWidgetSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class ULimNativeWidgetSettings* ULimNativeWidgetSettings::GetDefaultObj()
{
	static class ULimNativeWidgetSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<ULimNativeWidgetSettings*>(ULimNativeWidgetSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function LimNativeWidget.LimNativeWidgetSettings.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULimNativeWidgetSettings*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULimNativeWidgetSettings* ULimNativeWidgetSettings::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LimNativeWidgetSettings", "GetInstance");

	Params::ULimNativeWidgetSettings_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LimNativeWidget.NertcManager
// (None)

class UClass* UNertcManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NertcManager");

	return Clss;
}


// NertcManager LimNativeWidget.Default__NertcManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UNertcManager* UNertcManager::GetDefaultObj()
{
	static class UNertcManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UNertcManager*>(UNertcManager::StaticClass()->DefaultObject);

	return Default;
}


// Function LimNativeWidget.NertcManager.UpdateSelfPosition
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InSelfPosition                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    InSelfRotator                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UNertcManager::UpdateSelfPosition(struct FVector& InSelfPosition, struct FRotator& InSelfRotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "UpdateSelfPosition");

	Params::UNertcManager_UpdateSelfPosition_Params Parms{};

	Parms.InSelfPosition = InSelfPosition;
	Parms.InSelfRotator = InSelfRotator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.UpdateAudioRecvRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InRange                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::UpdateAudioRecvRange(int32 InRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "UpdateAudioRecvRange");

	Params::UNertcManager_UpdateAudioRecvRange_Params Parms{};

	Parms.InRange = InRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.UnRegisterLuaEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void UNertcManager::UnRegisterLuaEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "UnRegisterLuaEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LimNativeWidget.NertcManager.Uninit
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNertcManager::Uninit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "Uninit");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.SwitchRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      RoomID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AppToken                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Uid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TeamID                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AudioDistance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::SwitchRoom(const class FString& RoomID, const class FString& AppToken, int32 Uid, int32 TeamID, int32 AudioDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "SwitchRoom");

	Params::UNertcManager_SwitchRoom_Params Parms{};

	Parms.RoomID = RoomID;
	Parms.AppToken = AppToken;
	Parms.Uid = Uid;
	Parms.TeamID = TeamID;
	Parms.AudioDistance = AudioDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.SetSubscribeAudioOnlyBy
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      OpenIDList                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::SetSubscribeAudioOnlyBy(TArray<int32>& OpenIDList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "SetSubscribeAudioOnlyBy");

	Params::UNertcManager_SetSubscribeAudioOnlyBy_Params Parms{};

	Parms.OpenIDList = OpenIDList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.SetSubscribeAudioBlocklist
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      OpenIDList                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::SetSubscribeAudioBlocklist(TArray<int32>& OpenIDList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "SetSubscribeAudioBlocklist");

	Params::UNertcManager_SetSubscribeAudioBlocklist_Params Parms{};

	Parms.OpenIDList = OpenIDList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.SetSubscribeAudioAllowlist
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      OpenIDList                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::SetSubscribeAudioAllowlist(TArray<int32>& OpenIDList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "SetSubscribeAudioAllowlist");

	Params::UNertcManager_SetSubscribeAudioAllowlist_Params Parms{};

	Parms.OpenIDList = OpenIDList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.SetRangeAudioTeamID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TeamID                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::SetRangeAudioTeamID(int32 TeamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "SetRangeAudioTeamID");

	Params::UNertcManager_SetRangeAudioTeamID_Params Parms{};

	Parms.TeamID = TeamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.SetRangeAudioMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EChatGMERangeAudioMode  InAudioMode                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::SetRangeAudioMode(enum class EChatGMERangeAudioMode InAudioMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "SetRangeAudioMode");

	Params::UNertcManager_SetRangeAudioMode_Params Parms{};

	Parms.InAudioMode = InAudioMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.SetClientRole
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bBroadCast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::SetClientRole(bool bBroadCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "SetClientRole");

	Params::UNertcManager_SetClientRole_Params Parms{};

	Parms.bBroadCast = bBroadCast;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.SetAudioSessionRestriction
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNertcManager::SetAudioSessionRestriction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "SetAudioSessionRestriction");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.SetAudioSendAndRecvRules
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EChatGMEAudioRouteSendTypeInSendType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      InSendOpenIDList                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EChatGMEAudioRouteRecvTypeInRecvType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      InRecvOpenIDList                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::SetAudioSendAndRecvRules(enum class EChatGMEAudioRouteSendType InSendType, TArray<int32>& InSendOpenIDList, enum class EChatGMEAudioRouteRecvType InRecvType, TArray<int32>& InRecvOpenIDList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "SetAudioSendAndRecvRules");

	Params::UNertcManager_SetAudioSendAndRecvRules_Params Parms{};

	Parms.InSendType = InSendType;
	Parms.InSendOpenIDList = InSendOpenIDList;
	Parms.InRecvType = InRecvType;
	Parms.InRecvOpenIDList = InRecvOpenIDList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.SelectSpeak
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InDeviceID                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::SelectSpeak(const class FString& InDeviceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "SelectSpeak");

	Params::UNertcManager_SelectSpeak_Params Parms{};

	Parms.InDeviceID = InDeviceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.SelectMic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InDeviceID                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::SelectMic(const class FString& InDeviceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "SelectMic");

	Params::UNertcManager_SelectMic_Params Parms{};

	Parms.InDeviceID = InDeviceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction LimNativeWidget.NertcManager.OnUserRoomStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               EnterRoom                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Uid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::OnUserRoomStateChange__DelegateSignature(bool EnterRoom, int32 Uid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "OnUserRoomStateChange__DelegateSignature");

	Params::UNertcManager_OnUserRoomStateChange__DelegateSignature_Params Parms{};

	Parms.EnterRoom = EnterRoom;
	Parms.Uid = Uid;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.NertcManager.OnUserInfoUpdateDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FNertcUserUpdateData        UserData                                                         (Parm, NativeAccessSpecifierPublic)

void UNertcManager::OnUserInfoUpdateDelegate__DelegateSignature(const struct FNertcUserUpdateData& UserData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "OnUserInfoUpdateDelegate__DelegateSignature");

	Params::UNertcManager_OnUserInfoUpdateDelegate__DelegateSignature_Params Parms{};

	Parms.UserData = UserData;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.NertcManager.OnNertcConnectionChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::OnNertcConnectionChange__DelegateSignature(int32 State, int32 Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "OnNertcConnectionChange__DelegateSignature");

	Params::UNertcManager_OnNertcConnectionChange__DelegateSignature_Params Parms{};

	Parms.State = State;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.NertcManager.OnLocalUserVolumeChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVad                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::OnLocalUserVolumeChanged__DelegateSignature(int32 Volume, bool bVad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "OnLocalUserVolumeChanged__DelegateSignature");

	Params::UNertcManager_OnLocalUserVolumeChanged__DelegateSignature_Params Parms{};

	Parms.Volume = Volume;
	Parms.bVad = bVad;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.NertcManager.OnExitRoomDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::OnExitRoomDelegate__DelegateSignature(int32 Result, int64 Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "OnExitRoomDelegate__DelegateSignature");

	Params::UNertcManager_OnExitRoomDelegate__DelegateSignature_Params Parms{};

	Parms.Result = Result;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.NertcManager.OnEnterRoomDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int64                              RoomID                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Uid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Result                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Elapsed                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::OnEnterRoomDelegate__DelegateSignature(int64 RoomID, int32 Uid, int32 Result, int64 Elapsed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "OnEnterRoomDelegate__DelegateSignature");

	Params::UNertcManager_OnEnterRoomDelegate__DelegateSignature_Params Parms{};

	Parms.RoomID = RoomID;
	Parms.Uid = Uid;
	Parms.Result = Result;
	Parms.Elapsed = Elapsed;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.NertcManager.OnAudioDeviceStateChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bChanged                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::OnAudioDeviceStateChanged__DelegateSignature(bool bChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "OnAudioDeviceStateChanged__DelegateSignature");

	Params::UNertcManager_OnAudioDeviceStateChanged__DelegateSignature_Params Parms{};

	Parms.bChanged = bChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction LimNativeWidget.NertcManager.OnAndroidPermissionResult__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::OnAndroidPermissionResult__DelegateSignature(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "OnAndroidPermissionResult__DelegateSignature");

	Params::UNertcManager_OnAndroidPermissionResult__DelegateSignature_Params Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LimNativeWidget.NertcManager.MuteLocalStream
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bMute                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::MuteLocalStream(bool bMute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "MuteLocalStream");

	Params::UNertcManager_MuteLocalStream_Params Parms{};

	Parms.bMute = bMute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.MediaMute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Uid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMute                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::MediaMute(int32 Uid, bool bMute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "MediaMute");

	Params::UNertcManager_MediaMute_Params Parms{};

	Parms.Uid = Uid;
	Parms.bMute = bMute;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.IsRoomEntered
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNertcManager::IsRoomEntered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "IsRoomEntered");

	Params::UNertcManager_IsRoomEntered_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.NertcManager.InnerEnterRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      RoomID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AppToken                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Uid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::InnerEnterRoom(const class FString& RoomID, const class FString& AppToken, int32 Uid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "InnerEnterRoom");

	Params::UNertcManager_InnerEnterRoom_Params Parms{};

	Parms.RoomID = RoomID;
	Parms.AppToken = AppToken;
	Parms.Uid = Uid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.InnerEnableMic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InEnable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::InnerEnableMic(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "InnerEnableMic");

	Params::UNertcManager_InnerEnableMic_Params Parms{};

	Parms.InEnable = InEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Appkey                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::Init(const class FString& Appkey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "Init");

	Params::UNertcManager_Init_Params Parms{};

	Parms.Appkey = Appkey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.GetSpeakerList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FChatGMEDataDeviceInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<struct FChatGMEDataDeviceInfo> UNertcManager::GetSpeakerList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "GetSpeakerList");

	Params::UNertcManager_GetSpeakerList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.NertcManager.GetMicList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FChatGMEDataDeviceInfo>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<struct FChatGMEDataDeviceInfo> UNertcManager::GetMicList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "GetMicList");

	Params::UNertcManager_GetMicList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.NertcManager.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNertcManager*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNertcManager* UNertcManager::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "GetInstance");

	Params::UNertcManager_GetInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.NertcManager.GameSetSpeakerVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNertcManager::GameSetSpeakerVolume(int32 Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "GameSetSpeakerVolume");

	Params::UNertcManager_GameSetSpeakerVolume_Params Parms{};

	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.NertcManager.GameSetMicVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              MicVolume                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNertcManager::GameSetMicVolume(int32 MicVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "GameSetMicVolume");

	Params::UNertcManager_GameSetMicVolume_Params Parms{};

	Parms.MicVolume = MicVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LimNativeWidget.NertcManager.ExitRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNertcManager::ExitRoom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "ExitRoom");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.EnterRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      RoomID                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AppToken                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Uid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::EnterRoom(const class FString& RoomID, const class FString& AppToken, int32 Uid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "EnterRoom");

	Params::UNertcManager_EnterRoom_Params Parms{};

	Parms.RoomID = RoomID;
	Parms.AppToken = AppToken;
	Parms.Uid = Uid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.EnableSpeaker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InEnable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::EnableSpeaker(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "EnableSpeaker");

	Params::UNertcManager_EnableSpeaker_Params Parms{};

	Parms.InEnable = InEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.EnableRangeVoice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnbale                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::EnableRangeVoice(bool bEnbale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "EnableRangeVoice");

	Params::UNertcManager_EnableRangeVoice_Params Parms{};

	Parms.bEnbale = bEnbale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.EnableMic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InEnable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::EnableMic(bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "EnableMic");

	Params::UNertcManager_EnableMic_Params Parms{};

	Parms.InEnable = InEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.EnabelAudioIndication
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InEnable                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Millions                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnbaleLocal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNertcManager::EnabelAudioIndication(bool InEnable, int32 Millions, bool bEnbaleLocal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "EnabelAudioIndication");

	Params::UNertcManager_EnabelAudioIndication_Params Parms{};

	Parms.InEnable = InEnable;
	Parms.Millions = Millions;
	Parms.bEnbaleLocal = bEnbaleLocal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LimNativeWidget.NertcManager.DestroyInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UNertcManager::DestroyInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NertcManager", "DestroyInstance");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}



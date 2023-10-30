#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SettlementStageMgr.BP_SettlementStageMgr_C
// (None)

class UClass* UBP_SettlementStageMgr_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SettlementStageMgr_C");

	return Clss;
}


// BP_SettlementStageMgr_C BP_SettlementStageMgr.Default__BP_SettlementStageMgr_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SettlementStageMgr_C* UBP_SettlementStageMgr_C::GetDefaultObj()
{
	static class UBP_SettlementStageMgr_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SettlementStageMgr_C*>(UBP_SettlementStageMgr_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.CloseDiePage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SettlementStageMgr_C::CloseDiePage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SettlementStageMgr_C", "CloseDiePage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.ShowDiePage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SettlementStageMgr_C::ShowDiePage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SettlementStageMgr_C", "ShowDiePage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.Init
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SettlementStageMgr_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SettlementStageMgr_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.ShowNextStage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SettlementStageMgr_C::ShowNextStage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SettlementStageMgr_C", "ShowNextStage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.SkipToTarget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_SettlementStageMgr_C::SkipToTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SettlementStageMgr_C", "SkipToTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.GetClassRelativePathName
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass*                      InClass                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBP_SettlementStageMgr_C::GetClassRelativePathName(class UClass* InClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SettlementStageMgr_C", "GetClassRelativePathName");

	Params::UBP_SettlementStageMgr_C_GetClassRelativePathName_Params Parms{};

	Parms.InClass = InClass;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



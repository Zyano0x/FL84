#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaGCBP_BlindMark_Blind.ChaGCBP_BlindMark_Blind_C
// (Actor)

class UClass* AChaGCBP_BlindMark_Blind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaGCBP_BlindMark_Blind_C");

	return Clss;
}


// ChaGCBP_BlindMark_Blind_C ChaGCBP_BlindMark_Blind.Default__ChaGCBP_BlindMark_Blind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChaGCBP_BlindMark_Blind_C* AChaGCBP_BlindMark_Blind_C::GetDefaultObj()
{
	static class AChaGCBP_BlindMark_Blind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChaGCBP_BlindMark_Blind_C*>(AChaGCBP_BlindMark_Blind_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaGCBP_BlindMark_Blind.ChaGCBP_BlindMark_Blind_C.OnRemoveInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASolarCharacter*             NullableCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AChaGCBP_BlindMark_Blind_C::OnRemoveInternal(class ASolarCharacter* NullableCharacter, struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_BlindMark_Blind_C", "OnRemoveInternal");

	Params::AChaGCBP_BlindMark_Blind_C_OnRemoveInternal_Params Parms{};

	Parms.NullableCharacter = NullableCharacter;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChaGCBP_BlindMark_Blind.ChaGCBP_BlindMark_Blind_C.WhileActiveInternal
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASolarCharacter*             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerLocallyControlled_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AChaGCBP_BlindMark_Blind_C::WhileActiveInternal(class ASolarCharacter* Character, struct FGameplayCueParameters& Parameters, bool CallFunc_IsPlayerLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaGCBP_BlindMark_Blind_C", "WhileActiveInternal");

	Params::AChaGCBP_BlindMark_Blind_C_WhileActiveInternal_Params Parms{};

	Parms.Character = Character;
	Parms.Parameters = Parameters;
	Parms.CallFunc_IsPlayerLocallyControlled_ReturnValue = CallFunc_IsPlayerLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



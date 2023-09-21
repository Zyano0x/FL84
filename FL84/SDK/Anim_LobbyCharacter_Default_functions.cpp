#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// DynamicClass Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C
// (None)

class UClass* UAnim_LobbyCharacter_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Anim_LobbyCharacter_Default_C");

	return Clss;
}


// Anim_LobbyCharacter_Default_C Anim_LobbyCharacter_Default.Default__Anim_LobbyCharacter_Default_C
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnim_LobbyCharacter_Default_C* UAnim_LobbyCharacter_Default_C::GetDefaultObj()
{
	static class UAnim_LobbyCharacter_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnim_LobbyCharacter_Default_C*>(UAnim_LobbyCharacter_Default_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.SetCharacterCanBeLooked
// (Native, Event, Public)
// Parameters:
// bool                               bpp__IsVisible__pf                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnim_LobbyCharacter_Default_C::SetCharacterCanBeLooked(bool bpp__IsVisible__pf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "SetCharacterCanBeLooked");

	Params::UAnim_LobbyCharacter_Default_C_SetCharacterCanBeLooked_Params Parms{};

	Parms.bpp__IsVisible__pf = bpp__IsVisible__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.Rand Idle Show BP
// (Native, Public, BlueprintCallable)
// Parameters:

void UAnim_LobbyCharacter_Default_C::Rand_Idle_Show_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "Rand Idle Show BP");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.RandIdleShow
// (Native, Event, Public)
// Parameters:

void UAnim_LobbyCharacter_Default_C::RandIdleShow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "RandIdleShow");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.PlayIdleShow
// (Native, Public, BlueprintCallable)
// Parameters:

void UAnim_LobbyCharacter_Default_C::PlayIdleShow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "PlayIdleShow");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TwoWayBlend_1324C6B947749553DBAB488CF6FFAA1D
// (Native, Public)
// Parameters:

void UAnim_LobbyCharacter_Default_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TwoWayBlend_1324C6B947749553DBAB488CF6FFAA1D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TwoWayBlend_1324C6B947749553DBAB488CF6FFAA1D");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_EFF864F2415FFE7C85667C9B1A0CC213
// (Native, Public)
// Parameters:

void UAnim_LobbyCharacter_Default_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_EFF864F2415FFE7C85667C9B1A0CC213()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_EFF864F2415FFE7C85667C9B1A0CC213");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_91AB0B2E43FDD2622D11D4823EEDD73C
// (Native, Public)
// Parameters:

void UAnim_LobbyCharacter_Default_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_91AB0B2E43FDD2622D11D4823EEDD73C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_91AB0B2E43FDD2622D11D4823EEDD73C");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_D129D66148A76FE8404F6BB53C41B2F5
// (Native, Public)
// Parameters:

void UAnim_LobbyCharacter_Default_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_D129D66148A76FE8404F6BB53C41B2F5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_D129D66148A76FE8404F6BB53C41B2F5");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_9F92E37E45D0DB25B7813584454F8BDC
// (Native, Public)
// Parameters:

void UAnim_LobbyCharacter_Default_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_9F92E37E45D0DB25B7813584454F8BDC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_9F92E37E45D0DB25B7813584454F8BDC");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_8F8046714AA0A8276EC35FB1CD0F037A
// (Native, Public)
// Parameters:

void UAnim_LobbyCharacter_Default_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_8F8046714AA0A8276EC35FB1CD0F037A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_8F8046714AA0A8276EC35FB1CD0F037A");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.BlueprintUpdateAnimation
// (Native, Event, Public)
// Parameters:
// float                              bpp__DeltaTimeX__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnim_LobbyCharacter_Default_C::BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "BlueprintUpdateAnimation");

	Params::UAnim_LobbyCharacter_Default_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.bpp__DeltaTimeX__pf = bpp__DeltaTimeX__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.AnimNotify_IdleShowStart
// (Native, Public, BlueprintCallable)
// Parameters:

void UAnim_LobbyCharacter_Default_C::AnimNotify_IdleShowStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "AnimNotify_IdleShowStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.AnimNotify_IdleShowFinish
// (Native, Public, BlueprintCallable)
// Parameters:

void UAnim_LobbyCharacter_Default_C::AnimNotify_IdleShowFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "AnimNotify_IdleShowFinish");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.AnimNotify_IdleAnimStart
// (Native, Public, BlueprintCallable)
// Parameters:

void UAnim_LobbyCharacter_Default_C::AnimNotify_IdleAnimStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "AnimNotify_IdleAnimStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.AnimGraph
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   bpp__AnimGraph__pf                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UAnim_LobbyCharacter_Default_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Anim_LobbyCharacter_Default_C", "AnimGraph");

	Params::UAnim_LobbyCharacter_Default_C_AnimGraph_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bpp__AnimGraph__pf != nullptr)
		*bpp__AnimGraph__pf = std::move(Parms.bpp__AnimGraph__pf);

}

}



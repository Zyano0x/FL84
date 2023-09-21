#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// DynamicClass R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C
// (None)

class UClass* UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C");

	return Clss;
}


// R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.Default__R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject)

class UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C* UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C*>(UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.TestAPI
// (Native, Public, BlueprintCallable)
// Parameters:

void UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C::TestAPI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C", "TestAPI");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.InterruptAnim
// (Native, Public, BlueprintCallable)
// Parameters:

void UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C::InterruptAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C", "InterruptAnim");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_QuitIdle
// (Native, Public, BlueprintCallable)
// Parameters:

void UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C::AnimNotify_QuitIdle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C", "AnimNotify_QuitIdle");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_QuitBolt
// (Native, Public, BlueprintCallable)
// Parameters:

void UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C::AnimNotify_QuitBolt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C", "AnimNotify_QuitBolt");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_EnterIdle
// (Native, Public, BlueprintCallable)
// Parameters:

void UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C::AnimNotify_EnterIdle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C", "AnimNotify_EnterIdle");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_EnterBolt
// (Native, Public, BlueprintCallable)
// Parameters:

void UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C::AnimNotify_EnterBolt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C", "AnimNotify_EnterBolt");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.AnimGraph
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   bpp__AnimGraph__pf                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bpp__AnimGraph__pf != nullptr)
		*bpp__AnimGraph__pf = std::move(Parms.bpp__AnimGraph__pf);

}

}



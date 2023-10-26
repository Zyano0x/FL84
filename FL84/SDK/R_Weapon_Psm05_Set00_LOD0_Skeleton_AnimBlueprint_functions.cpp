#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// DynamicClass R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint.R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C
// (None)

class UClass* UR_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C");

	return Clss;
}


// R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint.Default__R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject)

class UR_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C* UR_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UR_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UR_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C*>(UR_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint.R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C.ExecuteUbergraph_R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint
// (Final, Native, Public)
// Parameters:
// int32                              bpp__EntryPoint__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UR_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C::ExecuteUbergraph_R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint(int32 bpp__EntryPoint__pf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint");

	Params::UR_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C_ExecuteUbergraph_R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_Params Parms{};

	Parms.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint.R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C.AnimGraph
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   bpp__AnimGraph__pf                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UR_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("R_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UR_Weapon_Psm05_Set00_LOD0_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bpp__AnimGraph__pf != nullptr)
		*bpp__AnimGraph__pf = std::move(Parms.bpp__AnimGraph__pf);

}

}



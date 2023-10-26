#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// DynamicClass ABP_MCP_Skill_DuckRollingMesh.ABP_MCP_Skill_DuckRollingMesh_C
// (None)

class UClass* UABP_MCP_Skill_DuckRollingMesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_MCP_Skill_DuckRollingMesh_C");

	return Clss;
}


// ABP_MCP_Skill_DuckRollingMesh_C ABP_MCP_Skill_DuckRollingMesh.Default__ABP_MCP_Skill_DuckRollingMesh_C
// (Public, ClassDefaultObject, ArchetypeObject)

class UABP_MCP_Skill_DuckRollingMesh_C* UABP_MCP_Skill_DuckRollingMesh_C::GetDefaultObj()
{
	static class UABP_MCP_Skill_DuckRollingMesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_MCP_Skill_DuckRollingMesh_C*>(UABP_MCP_Skill_DuckRollingMesh_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_MCP_Skill_DuckRollingMesh.ABP_MCP_Skill_DuckRollingMesh_C.ExecuteUbergraph_ABP_MCP_Skill_DuckRollingMesh
// (Final, Native, Public)
// Parameters:
// int32                              bpp__EntryPoint__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UABP_MCP_Skill_DuckRollingMesh_C::ExecuteUbergraph_ABP_MCP_Skill_DuckRollingMesh(int32 bpp__EntryPoint__pf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MCP_Skill_DuckRollingMesh_C", "ExecuteUbergraph_ABP_MCP_Skill_DuckRollingMesh");

	Params::UABP_MCP_Skill_DuckRollingMesh_C_ExecuteUbergraph_ABP_MCP_Skill_DuckRollingMesh_Params Parms{};

	Parms.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ABP_MCP_Skill_DuckRollingMesh.ABP_MCP_Skill_DuckRollingMesh_C.AnimGraph
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   bpp__AnimGraph__pf                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UABP_MCP_Skill_DuckRollingMesh_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MCP_Skill_DuckRollingMesh_C", "AnimGraph");

	Params::UABP_MCP_Skill_DuckRollingMesh_C_AnimGraph_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bpp__AnimGraph__pf != nullptr)
		*bpp__AnimGraph__pf = std::move(Parms.bpp__AnimGraph__pf);

}

}



/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01AE7680
	 * 		Name   -> Function ABP_MCP_Skill_DuckRollingMesh.ABP_MCP_Skill_DuckRollingMesh_C.ExecuteUbergraph_ABP_MCP_Skill_DuckRollingMesh
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_MCP_Skill_DuckRollingMesh_C::ExecuteUbergraph_ABP_MCP_Skill_DuckRollingMesh(int32_t bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ABP_MCP_Skill_DuckRollingMesh.ABP_MCP_Skill_DuckRollingMesh_C.ExecuteUbergraph_ABP_MCP_Skill_DuckRollingMesh"));
		
		UABP_MCP_Skill_DuckRollingMesh_C_ExecuteUbergraph_ABP_MCP_Skill_DuckRollingMesh_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01AE5100
	 * 		Name   -> Function ABP_MCP_Skill_DuckRollingMesh.ABP_MCP_Skill_DuckRollingMesh_C.AnimGraph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_MCP_Skill_DuckRollingMesh_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ABP_MCP_Skill_DuckRollingMesh.ABP_MCP_Skill_DuckRollingMesh_C.AnimGraph"));
		
		UABP_MCP_Skill_DuckRollingMesh_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__AnimGraph__pf != nullptr)
			*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_MCP_Skill_DuckRollingMesh_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_MCP_Skill_DuckRollingMesh_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("DynamicClass ABP_MCP_Skill_DuckRollingMesh.ABP_MCP_Skill_DuckRollingMesh_C"));
		return ptr;
	}

}



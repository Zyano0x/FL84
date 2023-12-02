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
	 * 		RVA    -> 0x01B2FF00
	 * 		Name   -> Function SpecABP_Skill_KeepFiring.SpecABP_Skill_KeepFiring_C.SkillAnimationLayer
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__BasePose__pf                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPoseLink                                   bpp__SkillAnimationLayer__pf                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USpecABP_Skill_KeepFiring_C::SkillAnimationLayer(const struct FPoseLink& bpp__BasePose__pf, struct FPoseLink* bpp__SkillAnimationLayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SpecABP_Skill_KeepFiring.SpecABP_Skill_KeepFiring_C.SkillAnimationLayer"));
		
		USpecABP_Skill_KeepFiring_C_SkillAnimationLayer_Params params {};
		params.bpp__BasePose__pf = bpp__BasePose__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__SkillAnimationLayer__pf != nullptr)
			*bpp__SkillAnimationLayer__pf = params.bpp__SkillAnimationLayer__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01AE54A0
	 * 		Name   -> Function SpecABP_Skill_KeepFiring.SpecABP_Skill_KeepFiring_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_KeepFiring_AnimGraphNode_RotationOffsetBlendSpace_519BC4914BD91B5DA5A3F58792D43A5B
	 * 		Flags  -> (Native, Public)
	 */
	void USpecABP_Skill_KeepFiring_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_KeepFiring_AnimGraphNode_RotationOffsetBlendSpace_519BC4914BD91B5DA5A3F58792D43A5B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SpecABP_Skill_KeepFiring.SpecABP_Skill_KeepFiring_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_KeepFiring_AnimGraphNode_RotationOffsetBlendSpace_519BC4914BD91B5DA5A3F58792D43A5B"));
		
		USpecABP_Skill_KeepFiring_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_KeepFiring_AnimGraphNode_RotationOffsetBlendSpace_519BC4914BD91B5DA5A3F58792D43A5B_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2BEF0
	 * 		Name   -> Function SpecABP_Skill_KeepFiring.SpecABP_Skill_KeepFiring_C.AnimGraph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USpecABP_Skill_KeepFiring_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SpecABP_Skill_KeepFiring.SpecABP_Skill_KeepFiring_C.AnimGraph"));
		
		USpecABP_Skill_KeepFiring_C_AnimGraph_Params params {};
		
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
	 * 		Name   -> PredefinedFunction USpecABP_Skill_KeepFiring_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpecABP_Skill_KeepFiring_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("DynamicClass SpecABP_Skill_KeepFiring.SpecABP_Skill_KeepFiring_C"));
		return ptr;
	}

}



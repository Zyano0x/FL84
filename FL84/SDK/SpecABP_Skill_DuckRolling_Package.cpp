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
	 * 		RVA    -> 0x01B2C110
	 * 		Name   -> Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.SkillAnimationLayer
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__BasePose__pf                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPoseLink                                   bpp__SkillAnimationLayer__pf                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USpecABP_Skill_DuckRolling_C::SkillAnimationLayer(const struct FPoseLink& bpp__BasePose__pf, struct FPoseLink* bpp__SkillAnimationLayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.SkillAnimationLayer"));
		
		USpecABP_Skill_DuckRolling_C_SkillAnimationLayer_Params params {};
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
	 * 		RVA    -> 0x01AD7A70
	 * 		Name   -> Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_FF208C6E45D6EF58A2170793D868D7F6
	 * 		Flags  -> (Native, Public)
	 */
	void USpecABP_Skill_DuckRolling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_FF208C6E45D6EF58A2170793D868D7F6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_FF208C6E45D6EF58A2170793D868D7F6"));
		
		USpecABP_Skill_DuckRolling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_FF208C6E45D6EF58A2170793D868D7F6_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01AD7980
	 * 		Name   -> Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_E3863C5B4EEF760666D2C09BC8FABD28
	 * 		Flags  -> (Native, Public)
	 */
	void USpecABP_Skill_DuckRolling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_E3863C5B4EEF760666D2C09BC8FABD28()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_E3863C5B4EEF760666D2C09BC8FABD28"));
		
		USpecABP_Skill_DuckRolling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_E3863C5B4EEF760666D2C09BC8FABD28_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01AD7960
	 * 		Name   -> Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_DF9C726A46619D9F6336ED8C76B85A28
	 * 		Flags  -> (Native, Public)
	 */
	void USpecABP_Skill_DuckRolling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_DF9C726A46619D9F6336ED8C76B85A28()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_DF9C726A46619D9F6336ED8C76B85A28"));
		
		USpecABP_Skill_DuckRolling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_DF9C726A46619D9F6336ED8C76B85A28_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01AE5380
	 * 		Name   -> Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_C4A03A7C427E91A12468F180AE12DDDC
	 * 		Flags  -> (Native, Public)
	 */
	void USpecABP_Skill_DuckRolling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_C4A03A7C427E91A12468F180AE12DDDC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_C4A03A7C427E91A12468F180AE12DDDC"));
		
		USpecABP_Skill_DuckRolling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_C4A03A7C427E91A12468F180AE12DDDC_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01AD78C0
	 * 		Name   -> Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_C1B0DD464C5E6E75F0B17A979FA04050
	 * 		Flags  -> (Native, Public)
	 */
	void USpecABP_Skill_DuckRolling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_C1B0DD464C5E6E75F0B17A979FA04050()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_C1B0DD464C5E6E75F0B17A979FA04050"));
		
		USpecABP_Skill_DuckRolling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_TransitionResult_C1B0DD464C5E6E75F0B17A979FA04050_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01AD7A90
	 * 		Name   -> Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_BlendSpacePlayer_655CF91F4A7FCF89A3A02BA1C0AB1F81
	 * 		Flags  -> (Native, Public)
	 */
	void USpecABP_Skill_DuckRolling_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_BlendSpacePlayer_655CF91F4A7FCF89A3A02BA1C0AB1F81()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_BlendSpacePlayer_655CF91F4A7FCF89A3A02BA1C0AB1F81"));
		
		USpecABP_Skill_DuckRolling_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Skill_DuckRolling_AnimGraphNode_BlendSpacePlayer_655CF91F4A7FCF89A3A02BA1C0AB1F81_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01AD7AB0
	 * 		Name   -> Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.AnimNotify_SixDirRunF
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void USpecABP_Skill_DuckRolling_C::AnimNotify_SixDirRunF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.AnimNotify_SixDirRunF"));
		
		USpecABP_Skill_DuckRolling_C_AnimNotify_SixDirRunF_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01AE54A0
	 * 		Name   -> Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.AnimNotify_SixDirRunB
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void USpecABP_Skill_DuckRolling_C::AnimNotify_SixDirRunB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.AnimNotify_SixDirRunB"));
		
		USpecABP_Skill_DuckRolling_C_AnimNotify_SixDirRunB_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01AD76E0
	 * 		Name   -> Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.AnimGraph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USpecABP_Skill_DuckRolling_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C.AnimGraph"));
		
		USpecABP_Skill_DuckRolling_C_AnimGraph_Params params {};
		
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
	 * 		Name   -> PredefinedFunction USpecABP_Skill_DuckRolling_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpecABP_Skill_DuckRolling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("DynamicClass SpecABP_Skill_DuckRolling.SpecABP_Skill_DuckRolling_C"));
		return ptr;
	}

}



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
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function SkillAnimLayerInterface.SkillAnimLayerInterface_C.SkillAnimationLayer
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__BasePose__pf                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPoseLink                                   bpp__SkillAnimationLayer__pf                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USkillAnimLayerInterface_C::SkillAnimationLayer(const struct FPoseLink& bpp__BasePose__pf, struct FPoseLink* bpp__SkillAnimationLayer__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SkillAnimLayerInterface.SkillAnimLayerInterface_C.SkillAnimationLayer"));
		
		USkillAnimLayerInterface_C_SkillAnimationLayer_Params params {};
		params.bpp__BasePose__pf = bpp__BasePose__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__SkillAnimationLayer__pf != nullptr)
			*bpp__SkillAnimationLayer__pf = params.bpp__SkillAnimationLayer__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillAnimLayerInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillAnimLayerInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("DynamicClass SkillAnimLayerInterface.SkillAnimLayerInterface_C"));
		return ptr;
	}

}



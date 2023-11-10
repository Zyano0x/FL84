/**
 * Name: FL84
 * Version: 15.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B49730
	 * 		Name   -> Function R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.ExecuteUbergraph_R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C::ExecuteUbergraph_R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint(int32_t bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.ExecuteUbergraph_R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint"));
		
		UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C_ExecuteUbergraph_R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B471B0
	 * 		Name   -> Function R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.AnimGraph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.AnimGraph"));
		
		UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C_AnimGraph_Params params {};
		
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
	 * 		Name   -> PredefinedFunction UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("DynamicClass R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C"));
		return ptr;
	}

}



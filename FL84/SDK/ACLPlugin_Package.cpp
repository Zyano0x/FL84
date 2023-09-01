/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x016C7C90
	 * 		Name   -> Function ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UAnimationCompressionLibraryDatabase*        DatabaseAsset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EACLVisualFidelityChangeResult                     Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EACLVisualFidelity                                 VisualFidelity                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnimationCompressionLibraryDatabase::STATIC_SetVisualFidelity(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UAnimationCompressionLibraryDatabase* DatabaseAsset, EACLVisualFidelityChangeResult* Result, EACLVisualFidelity VisualFidelity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity");
		
		UAnimationCompressionLibraryDatabase_SetVisualFidelity_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.DatabaseAsset = DatabaseAsset;
		params.VisualFidelity = VisualFidelity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016C7C00
	 * 		Name   -> Function ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimationCompressionLibraryDatabase*        DatabaseAsset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EACLVisualFidelity UAnimationCompressionLibraryDatabase::STATIC_GetVisualFidelity(class UAnimationCompressionLibraryDatabase* DatabaseAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity");
		
		UAnimationCompressionLibraryDatabase_GetVisualFidelity_Params params {};
		params.DatabaseAsset = DatabaseAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationCompressionLibraryDatabase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationCompressionLibraryDatabase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimationCompressionLibraryDatabase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBoneCompressionCodec_ACLBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBoneCompressionCodec_ACLBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACLBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBoneCompressionCodec_ACL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBoneCompressionCodec_ACL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACL");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBoneCompressionCodec_ACLCustom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBoneCompressionCodec_ACLCustom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBoneCompressionCodec_ACLDatabase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBoneCompressionCodec_ACLDatabase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACLDatabase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimBoneCompressionCodec_ACLSafe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBoneCompressionCodec_ACLSafe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimCurveCompressionCodec_ACL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimCurveCompressionCodec_ACL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimCurveCompressionCodec_ACL");
		return ptr;
	}

}



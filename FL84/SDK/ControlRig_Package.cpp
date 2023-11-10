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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.ControlRig"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdditiveControlRig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdditiveControlRig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.AdditiveControlRig"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigBindingTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigBindingTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.ControlRigBindingTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigBlueprintGeneratedClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigBlueprintGeneratedClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.ControlRigBlueprintGeneratedClass"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x007E4180
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPreInitialize
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UControlRigComponent::OnPreInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ControlRig.ControlRigComponent.OnPreInitialize"));
		
		UControlRigComponent_OnPreInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C6D000
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPreEvaluate
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UControlRigComponent::OnPreEvaluate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ControlRig.ControlRigComponent.OnPreEvaluate"));
		
		UControlRigComponent_OnPreEvaluate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C6CFE0
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPostInitialize
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UControlRigComponent::OnPostInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ControlRig.ControlRigComponent.OnPostInitialize"));
		
		UControlRigComponent_OnPostInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C6CFC0
	 * 		Name   -> Function ControlRig.ControlRigComponent.OnPostEvaluate
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void UControlRigComponent::OnPostEvaluate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ControlRig.ControlRigComponent.OnPostEvaluate"));
		
		UControlRigComponent_OnPostEvaluate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00C6CF90
	 * 		Name   -> Function ControlRig.ControlRigComponent.BP_GetControlRig
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UControlRig* UControlRigComponent::BP_GetControlRig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function ControlRig.ControlRigComponent.BP_GetControlRig"));
		
		UControlRigComponent_BP_GetControlRig_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.ControlRigComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigGizmoLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigGizmoLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.ControlRigGizmoLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigLayerInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigLayerInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.ControlRigLayerInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigObjectHolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigObjectHolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.ControlRigObjectHolder"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.ControlRigSequence"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigSequencerAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigSequencerAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.ControlRigSequencerAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.ControlRigSettings"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UControlRigManipulatable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlRigManipulatable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.ControlRigManipulatable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneControlRigParameterSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneControlRigParameterSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.MovieSceneControlRigParameterSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneControlRigParameterTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneControlRigParameterTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.MovieSceneControlRigParameterTrack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneControlRigSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneControlRigSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.MovieSceneControlRigSection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneControlRigTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneControlRigTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class ControlRig.MovieSceneControlRigTrack"));
		return ptr;
	}

}



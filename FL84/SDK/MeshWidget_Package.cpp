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
	 * 		Name   -> PredefinedFunction UMeshWidgetUWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshWidgetUWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MeshWidget.MeshWidgetUWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParticleWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParticleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MeshWidget.ParticleWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B49730
	 * 		Name   -> Function MeshWidget.MeshRectangleWidget.SetInstanceNum
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshRectangleWidget::SetInstanceNum(int32_t NewNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MeshWidget.MeshRectangleWidget.SetInstanceNum"));
		
		UMeshRectangleWidget_SetInstanceNum_Params params {};
		params.NewNum = NewNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B49730
	 * 		Name   -> Function MeshWidget.MeshRectangleWidget.ModifyInstanceNum
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            dNum                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshRectangleWidget::ModifyInstanceNum(int32_t dNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MeshWidget.MeshRectangleWidget.ModifyInstanceNum"));
		
		UMeshRectangleWidget_ModifyInstanceNum_Params params {};
		params.dNum = dNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00906EE0
	 * 		Name   -> Function MeshWidget.MeshRectangleWidget.InitUnitTestProvider
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMeshRectangleWidget::InitUnitTestProvider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function MeshWidget.MeshRectangleWidget.InitUnitTestProvider"));
		
		UMeshRectangleWidget_InitUnitTestProvider_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshRectangleWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshRectangleWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MeshWidget.MeshRectangleWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTextMeshWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTextMeshWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MeshWidget.TextMeshWidget"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProgressBarMeshWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgressBarMeshWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class MeshWidget.ProgressBarMeshWidget"));
		return ptr;
	}

}



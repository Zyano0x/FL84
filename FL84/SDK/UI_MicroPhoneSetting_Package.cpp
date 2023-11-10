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
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnMouseButtonDownEvent_71616335490BDB6DF4AFAEA9C4FC62D8
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUI_MicroPhoneSetting_C::OnMouseButtonDownEvent_71616335490BDB6DF4AFAEA9C4FC62D8(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnMouseButtonDownEvent_71616335490BDB6DF4AFAEA9C4FC62D8"));
		
		UUI_MicroPhoneSetting_C_OnMouseButtonDownEvent_71616335490BDB6DF4AFAEA9C4FC62D8_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnMouseButtonDownEvent_5A2E134C45C5B73F9CD6BE9AA141D97F
	 * 		Flags  -> (Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FEventReply UUI_MicroPhoneSetting_C::OnMouseButtonDownEvent_5A2E134C45C5B73F9CD6BE9AA141D97F(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnMouseButtonDownEvent_5A2E134C45C5B73F9CD6BE9AA141D97F"));
		
		UUI_MicroPhoneSetting_C_OnMouseButtonDownEvent_5A2E134C45C5B73F9CD6BE9AA141D97F_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnStateChangedEvent_0BFE88304F1A434F1D3A1D980795F34B
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		TArray<class UCheckBox*>                           ChildChangedArray                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CheckedChildIndex                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_MicroPhoneSetting_C::OnStateChangedEvent_0BFE88304F1A434F1D3A1D980795F34B(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnStateChangedEvent_0BFE88304F1A434F1D3A1D980795F34B"));
		
		UUI_MicroPhoneSetting_C_OnStateChangedEvent_0BFE88304F1A434F1D3A1D980795F34B_Params params {};
		params.ChildChangedArray = ChildChangedArray;
		params.CheckedChildIndex = CheckedChildIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnStateChangedEvent_91F014F845889D6AFF37689DD5287289
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		TArray<class UCheckBox*>                           ChildChangedArray                                          (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CheckedChildIndex                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_MicroPhoneSetting_C::OnStateChangedEvent_91F014F845889D6AFF37689DD5287289(TArray<class UCheckBox*> ChildChangedArray, int32_t CheckedChildIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnStateChangedEvent_91F014F845889D6AFF37689DD5287289"));
		
		UUI_MicroPhoneSetting_C_OnStateChangedEvent_91F014F845889D6AFF37689DD5287289_Params params {};
		params.ChildChangedArray = ChildChangedArray;
		params.CheckedChildIndex = CheckedChildIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_MicroPhoneSetting_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.Destruct"));
		
		UUI_MicroPhoneSetting_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_MicroPhoneSetting_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.Construct"));
		
		UUI_MicroPhoneSetting_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_MicroPhoneSetting_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.GetModuleName"));
		
		UUI_MicroPhoneSetting_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MicroPhoneSetting_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.PreConstruct"));
		
		UUI_MicroPhoneSetting_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.ExecuteUbergraph_UI_MicroPhoneSetting
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MicroPhoneSetting_C::ExecuteUbergraph_UI_MicroPhoneSetting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.ExecuteUbergraph_UI_MicroPhoneSetting"));
		
		UUI_MicroPhoneSetting_C_ExecuteUbergraph_UI_MicroPhoneSetting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MicroPhoneSetting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MicroPhoneSetting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_MicroPhoneSetting.UI_MicroPhoneSetting_C"));
		return ptr;
	}

}



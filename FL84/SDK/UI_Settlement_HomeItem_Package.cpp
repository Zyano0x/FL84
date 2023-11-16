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
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnBackKey
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EWidgetBackKeyType                                 BackKeyType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Settlement_HomeItem_C::OnBackKey(EWidgetBackKeyType BackKeyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnBackKey"));
		
		UUI_Settlement_HomeItem_C_OnBackKey_Params params {};
		params.BackKeyType = BackKeyType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.EventCanContinueCopy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settlement_HomeItem_C::EventCanContinueCopy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.EventCanContinueCopy"));
		
		UUI_Settlement_HomeItem_C_EventCanContinueCopy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnSolarUIOpened
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_Settlement_HomeItem_C::OnSolarUIOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnSolarUIOpened"));
		
		UUI_Settlement_HomeItem_C_OnSolarUIOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnAnimationFinished
	 * 		Flags  -> (BlueprintCosmetic, Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Settlement_HomeItem_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnAnimationFinished"));
		
		UUI_Settlement_HomeItem_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnSolarUIClosed
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UUI_Settlement_HomeItem_C::OnSolarUIClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnSolarUIClosed"));
		
		UUI_Settlement_HomeItem_C_OnSolarUIClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Settlement_HomeItem_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnInitialized"));
		
		UUI_Settlement_HomeItem_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnAnimationStarted
	 * 		Flags  -> (BlueprintCosmetic, Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Settlement_HomeItem_C::OnAnimationStarted(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnAnimationStarted"));
		
		UUI_Settlement_HomeItem_C_OnAnimationStarted_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.PlayGoldAnimCopy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settlement_HomeItem_C::PlayGoldAnimCopy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.PlayGoldAnimCopy"));
		
		UUI_Settlement_HomeItem_C_PlayGoldAnimCopy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Settlement_HomeItem_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.GetModuleName"));
		
		UUI_Settlement_HomeItem_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_3
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settlement_HomeItem_C::SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_3"));
		
		UUI_Settlement_HomeItem_C_SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_2
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settlement_HomeItem_C::SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_2"));
		
		UUI_Settlement_HomeItem_C_SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settlement_HomeItem_C::SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_1"));
		
		UUI_Settlement_HomeItem_C_SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settlement_HomeItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.PreConstruct"));
		
		UUI_Settlement_HomeItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Settlement_HomeItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.Construct"));
		
		UUI_Settlement_HomeItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settlement_HomeItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.Tick"));
		
		UUI_Settlement_HomeItem_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.PlayGoldAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settlement_HomeItem_C::PlayGoldAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.PlayGoldAnim"));
		
		UUI_Settlement_HomeItem_C_PlayGoldAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.EventCanContinue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settlement_HomeItem_C::EventCanContinue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.EventCanContinue"));
		
		UUI_Settlement_HomeItem_C_EventCanContinue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.BP_EventSetBlur
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Settlement_HomeItem_C::BP_EventSetBlur()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.BP_EventSetBlur"));
		
		UUI_Settlement_HomeItem_C_BP_EventSetBlur_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.ExecuteUbergraph_UI_Settlement_HomeItem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settlement_HomeItem_C::ExecuteUbergraph_UI_Settlement_HomeItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.ExecuteUbergraph_UI_Settlement_HomeItem"));
		
		UUI_Settlement_HomeItem_C_ExecuteUbergraph_UI_Settlement_HomeItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Settlement_HomeItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Settlement_HomeItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Settlement_HomeItem.UI_Settlement_HomeItem_C"));
		return ptr;
	}

}



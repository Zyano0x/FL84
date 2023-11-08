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
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function UI_Anim_Circle_2.UI_Anim_Circle_1_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Anim_Circle_1_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Anim_Circle_2.UI_Anim_Circle_1_C.Construct"));
		
		UUI_Anim_Circle_1_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function UI_Anim_Circle_2.UI_Anim_Circle_1_C.PlayLoadingAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Anim_Circle_1_C::PlayLoadingAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Anim_Circle_2.UI_Anim_Circle_1_C.PlayLoadingAnim"));
		
		UUI_Anim_Circle_1_C_PlayLoadingAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function UI_Anim_Circle_2.UI_Anim_Circle_1_C.StopLoadingAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Anim_Circle_1_C::StopLoadingAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Anim_Circle_2.UI_Anim_Circle_1_C.StopLoadingAnim"));
		
		UUI_Anim_Circle_1_C_StopLoadingAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D63E80
	 * 		Name   -> Function UI_Anim_Circle_2.UI_Anim_Circle_1_C.ExecuteUbergraph_UI_Anim_Circle_2
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Anim_Circle_1_C::ExecuteUbergraph_UI_Anim_Circle_2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Anim_Circle_2.UI_Anim_Circle_1_C.ExecuteUbergraph_UI_Anim_Circle_2"));
		
		UUI_Anim_Circle_1_C_ExecuteUbergraph_UI_Anim_Circle_2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Anim_Circle_1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Anim_Circle_1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Anim_Circle_2.UI_Anim_Circle_1_C"));
		return ptr;
	}

}



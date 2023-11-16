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
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function UI_Common_TransBlack_Anim.UI_Common_TransBlack_Anim_C.ReceiveShow
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UUI_Common_TransBlack_Anim_C::ReceiveShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Common_TransBlack_Anim.UI_Common_TransBlack_Anim_C.ReceiveShow"));
		
		UUI_Common_TransBlack_Anim_C_ReceiveShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function UI_Common_TransBlack_Anim.UI_Common_TransBlack_Anim_C.OnEnterAnimFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Common_TransBlack_Anim_C::OnEnterAnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Common_TransBlack_Anim.UI_Common_TransBlack_Anim_C.OnEnterAnimFinished"));
		
		UUI_Common_TransBlack_Anim_C_OnEnterAnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function UI_Common_TransBlack_Anim.UI_Common_TransBlack_Anim_C.ExecuteUbergraph_UI_Common_TransBlack_Anim
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Common_TransBlack_Anim_C::ExecuteUbergraph_UI_Common_TransBlack_Anim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Common_TransBlack_Anim.UI_Common_TransBlack_Anim_C.ExecuteUbergraph_UI_Common_TransBlack_Anim"));
		
		UUI_Common_TransBlack_Anim_C_ExecuteUbergraph_UI_Common_TransBlack_Anim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Common_TransBlack_Anim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Common_TransBlack_Anim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Common_TransBlack_Anim.UI_Common_TransBlack_Anim_C"));
		return ptr;
	}

}



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
	 * 		Name   -> Function UI_Skill_CDRefresh_Anim.UI_Skill_CDRefresh_Anim_C.SetColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Skill_CDRefresh_Anim_C::SetColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Skill_CDRefresh_Anim.UI_Skill_CDRefresh_Anim_C.SetColor"));
		
		UUI_Skill_CDRefresh_Anim_C_SetColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Skill_CDRefresh_Anim.UI_Skill_CDRefresh_Anim_C.Play
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Skill_CDRefresh_Anim_C::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Skill_CDRefresh_Anim.UI_Skill_CDRefresh_Anim_C.Play"));
		
		UUI_Skill_CDRefresh_Anim_C_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Skill_CDRefresh_Anim.UI_Skill_CDRefresh_Anim_C.RefreshColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Skill_CDRefresh_Anim_C::RefreshColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Skill_CDRefresh_Anim.UI_Skill_CDRefresh_Anim_C.RefreshColor"));
		
		UUI_Skill_CDRefresh_Anim_C_RefreshColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Skill_CDRefresh_Anim.UI_Skill_CDRefresh_Anim_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Skill_CDRefresh_Anim_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Skill_CDRefresh_Anim.UI_Skill_CDRefresh_Anim_C.PreConstruct"));
		
		UUI_Skill_CDRefresh_Anim_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Skill_CDRefresh_Anim.UI_Skill_CDRefresh_Anim_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Skill_CDRefresh_Anim_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Skill_CDRefresh_Anim.UI_Skill_CDRefresh_Anim_C.Construct"));
		
		UUI_Skill_CDRefresh_Anim_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Skill_CDRefresh_Anim.UI_Skill_CDRefresh_Anim_C.ExecuteUbergraph_UI_Skill_CDRefresh_Anim
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Skill_CDRefresh_Anim_C::ExecuteUbergraph_UI_Skill_CDRefresh_Anim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Skill_CDRefresh_Anim.UI_Skill_CDRefresh_Anim_C.ExecuteUbergraph_UI_Skill_CDRefresh_Anim"));
		
		UUI_Skill_CDRefresh_Anim_C_ExecuteUbergraph_UI_Skill_CDRefresh_Anim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Skill_CDRefresh_Anim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Skill_CDRefresh_Anim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Skill_CDRefresh_Anim.UI_Skill_CDRefresh_Anim_C"));
		return ptr;
	}

}



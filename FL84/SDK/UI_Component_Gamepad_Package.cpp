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
	 * 		Name   -> Function UI_Component_Gamepad.UI_Component_Gamepad_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Component_Gamepad_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Gamepad.UI_Component_Gamepad_C.Construct"));
		
		UUI_Component_Gamepad_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function UI_Component_Gamepad.UI_Component_Gamepad_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Component_Gamepad_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Gamepad.UI_Component_Gamepad_C.OnInitialized"));
		
		UUI_Component_Gamepad_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function UI_Component_Gamepad.UI_Component_Gamepad_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Component_Gamepad_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Gamepad.UI_Component_Gamepad_C.Destruct"));
		
		UUI_Component_Gamepad_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Component_Gamepad.UI_Component_Gamepad_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Component_Gamepad_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Gamepad.UI_Component_Gamepad_C.GetModuleName"));
		
		UUI_Component_Gamepad_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetMainKeySelection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Component_Gamepad_C::SetMainKeySelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetMainKeySelection"));
		
		UUI_Component_Gamepad_C_SetMainKeySelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetMainKeyNormal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Component_Gamepad_C::SetMainKeyNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetMainKeyNormal"));
		
		UUI_Component_Gamepad_C_SetMainKeyNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Component_Gamepad.UI_Component_Gamepad_C.GetGamepadIconByKey
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UPaperSprite*                                GamepadIcon                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Component_Gamepad_C::GetGamepadIconByKey(const struct FKey& InKey, class UPaperSprite** GamepadIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Gamepad.UI_Component_Gamepad_C.GetGamepadIconByKey"));
		
		UUI_Component_Gamepad_C_GetGamepadIconByKey_Params params {};
		params.InKey = InKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GamepadIcon != nullptr)
			*GamepadIcon = params.GamepadIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        ModifierKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		struct FKey                                        MainKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_Component_Gamepad_C::SetData(const struct FKey& ModifierKey, const struct FKey& MainKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetData"));
		
		UUI_Component_Gamepad_C_SetData_Params params {};
		params.ModifierKey = ModifierKey;
		params.MainKey = MainKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Component_Gamepad.UI_Component_Gamepad_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Component_Gamepad_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Gamepad.UI_Component_Gamepad_C.PreConstruct"));
		
		UUI_Component_Gamepad_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Component_Gamepad.UI_Component_Gamepad_C.ExecuteUbergraph_UI_Component_Gamepad
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Component_Gamepad_C::ExecuteUbergraph_UI_Component_Gamepad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Gamepad.UI_Component_Gamepad_C.ExecuteUbergraph_UI_Component_Gamepad"));
		
		UUI_Component_Gamepad_C_ExecuteUbergraph_UI_Component_Gamepad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Component_Gamepad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Component_Gamepad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Component_Gamepad.UI_Component_Gamepad_C"));
		return ptr;
	}

}



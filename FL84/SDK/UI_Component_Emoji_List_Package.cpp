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
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction UI_Component_Emoji_List.UI_Component_Emoji_List_C.OnStateChangedEvent_BD86E6C84E6E54DAB0B25E86032924E9
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            InLastButtonIndex                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_Component_Emoji_List_C::OnStateChangedEvent_BD86E6C84E6E54DAB0B25E86032924E9(int32_t InLastButtonIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Component_Emoji_List.UI_Component_Emoji_List_C.OnStateChangedEvent_BD86E6C84E6E54DAB0B25E86032924E9"));
		
		UUI_Component_Emoji_List_C_OnStateChangedEvent_BD86E6C84E6E54DAB0B25E86032924E9_Params params {};
		params.InLastButtonIndex = InLastButtonIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Component_Emoji_List.UI_Component_Emoji_List_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Component_Emoji_List_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Emoji_List.UI_Component_Emoji_List_C.Construct"));
		
		UUI_Component_Emoji_List_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Component_Emoji_List.UI_Component_Emoji_List_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Component_Emoji_List_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Emoji_List.UI_Component_Emoji_List_C.Destruct"));
		
		UUI_Component_Emoji_List_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Emoji_List.UI_Component_Emoji_List_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Component_Emoji_List_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Emoji_List.UI_Component_Emoji_List_C.GetModuleName"));
		
		UUI_Component_Emoji_List_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Component_Emoji_List_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Component_Emoji_List_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Component_Emoji_List.UI_Component_Emoji_List_C"));
		return ptr;
	}

}



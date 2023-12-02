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
	 * 		Name   -> Function UI_Notice_Noya.UI_Notice_Noya_C.Init
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Notice_Noya_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Notice_Noya.UI_Notice_Noya_C.Init"));
		
		UUI_Notice_Noya_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Notice_Noya.UI_Notice_Noya_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Notice_Noya_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Notice_Noya.UI_Notice_Noya_C.Construct"));
		
		UUI_Notice_Noya_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Notice_Noya.UI_Notice_Noya_C.刷新显示CD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Notice_Noya_C::CD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Notice_Noya.UI_Notice_Noya_C.刷新显示CD"));
		
		UUI_Notice_Noya_C_CD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Notice_Noya.UI_Notice_Noya_C.ExecuteUbergraph_UI_Notice_Noya
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Notice_Noya_C::ExecuteUbergraph_UI_Notice_Noya(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Notice_Noya.UI_Notice_Noya_C.ExecuteUbergraph_UI_Notice_Noya"));
		
		UUI_Notice_Noya_C_ExecuteUbergraph_UI_Notice_Noya_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Notice_Noya_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Notice_Noya_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Notice_Noya.UI_Notice_Noya_C"));
		return ptr;
	}

}



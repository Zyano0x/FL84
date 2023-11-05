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
	 * 		RVA    -> 0x00B6C980
	 * 		Name   -> Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Target_Medal_Challenge_S_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.Destruct"));
		
		UUI_Target_Medal_Challenge_S_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6C980
	 * 		Name   -> Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Target_Medal_Challenge_S_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.Construct"));
		
		UUI_Target_Medal_Challenge_S_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Target_Medal_Challenge_S_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.GetModuleName"));
		
		UUI_Target_Medal_Challenge_S_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.SetStateIsLocked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Target_Medal_Challenge_S_C::SetStateIsLocked(bool IsLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.SetStateIsLocked"));
		
		UUI_Target_Medal_Challenge_S_C_SetStateIsLocked_Params params {};
		params.IsLock = IsLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Target_Medal_Challenge_S_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.PreConstruct"));
		
		UUI_Target_Medal_Challenge_S_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.ExecuteUbergraph_UI_Target_Medal_Challenge_S
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Target_Medal_Challenge_S_C::ExecuteUbergraph_UI_Target_Medal_Challenge_S(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.ExecuteUbergraph_UI_Target_Medal_Challenge_S"));
		
		UUI_Target_Medal_Challenge_S_C_ExecuteUbergraph_UI_Target_Medal_Challenge_S_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Target_Medal_Challenge_S_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Target_Medal_Challenge_S_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C"));
		return ptr;
	}

}



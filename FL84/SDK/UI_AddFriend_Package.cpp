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
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_AddFriend.UI_AddFriend_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_AddFriend_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_AddFriend.UI_AddFriend_C.Construct"));
		
		UUI_AddFriend_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_AddFriend.UI_AddFriend_C.InitWidgetCopy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InPlayerID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsBotAI                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_AddFriend_C::InitWidgetCopy(const class FString& InPlayerID, bool InIsBotAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_AddFriend.UI_AddFriend_C.InitWidgetCopy"));
		
		UUI_AddFriend_C_InitWidgetCopy_Params params {};
		params.InPlayerID = InPlayerID;
		params.InIsBotAI = InIsBotAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_AddFriend.UI_AddFriend_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_AddFriend_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_AddFriend.UI_AddFriend_C.Destruct"));
		
		UUI_AddFriend_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_AddFriend.UI_AddFriend_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_AddFriend_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_AddFriend.UI_AddFriend_C.GetModuleName"));
		
		UUI_AddFriend_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_AddFriend.UI_AddFriend_C.InitWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InPlayerID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsBotAI                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_AddFriend_C::InitWidget(const class FString& InPlayerID, bool InIsBotAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_AddFriend.UI_AddFriend_C.InitWidget"));
		
		UUI_AddFriend_C_InitWidget_Params params {};
		params.InPlayerID = InPlayerID;
		params.InIsBotAI = InIsBotAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_AddFriend.UI_AddFriend_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_AddFriend_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_AddFriend.UI_AddFriend_C.PreConstruct"));
		
		UUI_AddFriend_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_AddFriend.UI_AddFriend_C.ExecuteUbergraph_UI_AddFriend
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_AddFriend_C::ExecuteUbergraph_UI_AddFriend(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_AddFriend.UI_AddFriend_C.ExecuteUbergraph_UI_AddFriend"));
		
		UUI_AddFriend_C_ExecuteUbergraph_UI_AddFriend_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_AddFriend_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_AddFriend_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_AddFriend.UI_AddFriend_C"));
		return ptr;
	}

}



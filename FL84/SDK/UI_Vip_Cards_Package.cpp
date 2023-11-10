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
	 * 		Name   -> DelegateFunction UI_Vip_Cards.UI_Vip_Cards_C.OnClicked_0507E44B4EAF9BD368E2AF978FAF9223
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Vip_Cards_C::OnClicked_0507E44B4EAF9BD368E2AF978FAF9223()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Vip_Cards.UI_Vip_Cards_C.OnClicked_0507E44B4EAF9BD368E2AF978FAF9223"));
		
		UUI_Vip_Cards_C_OnClicked_0507E44B4EAF9BD368E2AF978FAF9223_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5BE00
	 * 		Name   -> DelegateFunction UI_Vip_Cards.UI_Vip_Cards_C.OnClicked_A330DF6D47021A2CE0DE77A28C994876
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Vip_Cards_C::OnClicked_A330DF6D47021A2CE0DE77A28C994876()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Vip_Cards.UI_Vip_Cards_C.OnClicked_A330DF6D47021A2CE0DE77A28C994876"));
		
		UUI_Vip_Cards_C_OnClicked_A330DF6D47021A2CE0DE77A28C994876_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Vip_Cards.UI_Vip_Cards_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Vip_Cards_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Vip_Cards.UI_Vip_Cards_C.GetModuleName"));
		
		UUI_Vip_Cards_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Vip_Cards.UI_Vip_Cards_C.SetCardType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CardType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Vip_Cards_C::SetCardType(int32_t CardType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Vip_Cards.UI_Vip_Cards_C.SetCardType"));
		
		UUI_Vip_Cards_C_SetCardType_Params params {};
		params.CardType = CardType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Vip_Cards.UI_Vip_Cards_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Vip_Cards_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Vip_Cards.UI_Vip_Cards_C.PreConstruct"));
		
		UUI_Vip_Cards_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64A40
	 * 		Name   -> Function UI_Vip_Cards.UI_Vip_Cards_C.ExecuteUbergraph_UI_Vip_Cards
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Vip_Cards_C::ExecuteUbergraph_UI_Vip_Cards(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Vip_Cards.UI_Vip_Cards_C.ExecuteUbergraph_UI_Vip_Cards"));
		
		UUI_Vip_Cards_C_ExecuteUbergraph_UI_Vip_Cards_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Vip_Cards_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Vip_Cards_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Vip_Cards.UI_Vip_Cards_C"));
		return ptr;
	}

}



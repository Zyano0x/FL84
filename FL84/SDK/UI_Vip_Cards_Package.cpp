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
	 * 		RVA    -> 0x00B5E720
	 * 		Name   -> DelegateFunction UI_Vip_Cards.UI_Vip_Cards_C.OnClicked_24F247CE46D4AD3BA7CD49B08FEE4709
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Vip_Cards_C::OnClicked_24F247CE46D4AD3BA7CD49B08FEE4709()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Vip_Cards.UI_Vip_Cards_C.OnClicked_24F247CE46D4AD3BA7CD49B08FEE4709"));
		
		UUI_Vip_Cards_C_OnClicked_24F247CE46D4AD3BA7CD49B08FEE4709_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B5E720
	 * 		Name   -> DelegateFunction UI_Vip_Cards.UI_Vip_Cards_C.OnClicked_AA73CECF48FF618AD1A7F59AA072C574
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Vip_Cards_C::OnClicked_AA73CECF48FF618AD1A7F59AA072C574()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Vip_Cards.UI_Vip_Cards_C.OnClicked_AA73CECF48FF618AD1A7F59AA072C574"));
		
		UUI_Vip_Cards_C_OnClicked_AA73CECF48FF618AD1A7F59AA072C574_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
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
	 * 		RVA    -> 0x02D64C70
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
	 * 		RVA    -> 0x02D64C70
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
	 * 		RVA    -> 0x02D64C70
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



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
	 * 		Name   -> DelegateFunction UI_Component_Friend.UI_Component_Friend_C.OnClicked_B2C0BD254FAF62D9AAAAF194FFFC469F
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Component_Friend_C::OnClicked_B2C0BD254FAF62D9AAAAF194FFFC469F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Component_Friend.UI_Component_Friend_C.OnClicked_B2C0BD254FAF62D9AAAAF194FFFC469F"));
		
		UUI_Component_Friend_C_OnClicked_B2C0BD254FAF62D9AAAAF194FFFC469F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B59400
	 * 		Name   -> DelegateFunction UI_Component_Friend.UI_Component_Friend_C.OnClicked_D9145C3F4B854E5AAFB6368BA7F9A8C8
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UUI_Component_Friend_C::OnClicked_D9145C3F4B854E5AAFB6368BA7F9A8C8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_Component_Friend.UI_Component_Friend_C.OnClicked_D9145C3F4B854E5AAFB6368BA7F9A8C8"));
		
		UUI_Component_Friend_C_OnClicked_D9145C3F4B854E5AAFB6368BA7F9A8C8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Component_Friend.UI_Component_Friend_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Component_Friend_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Friend.UI_Component_Friend_C.Construct"));
		
		UUI_Component_Friend_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Component_Friend.UI_Component_Friend_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Component_Friend_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Friend.UI_Component_Friend_C.OnInitialized"));
		
		UUI_Component_Friend_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Friend.UI_Component_Friend_C.InitWidgetCopy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InPlayerID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsBotAI                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Component_Friend_C::InitWidgetCopy(const class FString& InPlayerID, bool InIsBotAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Friend.UI_Component_Friend_C.InitWidgetCopy"));
		
		UUI_Component_Friend_C_InitWidgetCopy_Params params {};
		params.InPlayerID = InPlayerID;
		params.InIsBotAI = InIsBotAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Component_Friend.UI_Component_Friend_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_Component_Friend_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Friend.UI_Component_Friend_C.Destruct"));
		
		UUI_Component_Friend_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Friend.UI_Component_Friend_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_Component_Friend_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Friend.UI_Component_Friend_C.GetModuleName"));
		
		UUI_Component_Friend_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_Component_Friend.UI_Component_Friend_C.InitWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InPlayerID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InIsBotAI                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Component_Friend_C::InitWidget(const class FString& InPlayerID, bool InIsBotAI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Friend.UI_Component_Friend_C.InitWidget"));
		
		UUI_Component_Friend_C_InitWidget_Params params {};
		params.InPlayerID = InPlayerID;
		params.InIsBotAI = InIsBotAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Friend.UI_Component_Friend_C.SetTypeFriend
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_Component_Friend_C::SetTypeFriend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Friend.UI_Component_Friend_C.SetTypeFriend"));
		
		UUI_Component_Friend_C_SetTypeFriend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Friend.UI_Component_Friend_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Component_Friend_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Friend.UI_Component_Friend_C.PreConstruct"));
		
		UUI_Component_Friend_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_Component_Friend.UI_Component_Friend_C.ExecuteUbergraph_UI_Component_Friend
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Component_Friend_C::ExecuteUbergraph_UI_Component_Friend(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_Component_Friend.UI_Component_Friend_C.ExecuteUbergraph_UI_Component_Friend"));
		
		UUI_Component_Friend_C_ExecuteUbergraph_UI_Component_Friend_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Component_Friend_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Component_Friend_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_Component_Friend.UI_Component_Friend_C"));
		return ptr;
	}

}



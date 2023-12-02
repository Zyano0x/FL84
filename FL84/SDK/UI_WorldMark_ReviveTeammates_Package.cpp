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
	 * 		Name   -> Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.SetIsOnScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_WorldMark_ReviveTeammates_C::SetIsOnScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.SetIsOnScreen"));
		
		UUI_WorldMark_ReviveTeammates_C_SetIsOnScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.Set Player ID And Change Color
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_WorldMark_ReviveTeammates_C::SetPlayerIDAndChangeColor(const class FString& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.Set Player ID And Change Color"));
		
		UUI_WorldMark_ReviveTeammates_C_SetPlayerIDAndChangeColor_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.SetColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WorldMark_ReviveTeammates_C::SetColor(unsigned char Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.SetColor"));
		
		UUI_WorldMark_ReviveTeammates_C_SetColor_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.GetVisibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UUI_WorldMark_ReviveTeammates_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.GetVisibility_1"));
		
		UUI_WorldMark_ReviveTeammates_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.SetIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                                                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WorldMark_ReviveTeammates_C::SetIcon(class UWidget* Content, int32_t )
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.SetIcon"));
		
		UUI_WorldMark_ReviveTeammates_C_SetIcon_Params params {};
		params.Content = Content;
		params. = ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_WorldMark_ReviveTeammates_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.PreConstruct"));
		
		UUI_WorldMark_ReviveTeammates_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WorldMark_ReviveTeammates_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.Tick"));
		
		UUI_WorldMark_ReviveTeammates_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_WorldMark_ReviveTeammates_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.OnInitialized"));
		
		UUI_WorldMark_ReviveTeammates_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.SetPlayerIDAndChangeColor
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_WorldMark_ReviveTeammates_C::SetPlayerIDAndChangeColor(const class FString& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.SetPlayerIDAndChangeColor"));
		
		UUI_WorldMark_ReviveTeammates_C_SetPlayerIDAndChangeColor_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.SetOutOfScreen
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OutOfScreen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_WorldMark_ReviveTeammates_C::SetOutOfScreen(bool OutOfScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.SetOutOfScreen"));
		
		UUI_WorldMark_ReviveTeammates_C_SetOutOfScreen_Params params {};
		params.OutOfScreen = OutOfScreen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.ExecuteUbergraph_UI_WorldMark_ReviveTeammates
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WorldMark_ReviveTeammates_C::ExecuteUbergraph_UI_WorldMark_ReviveTeammates(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C.ExecuteUbergraph_UI_WorldMark_ReviveTeammates"));
		
		UUI_WorldMark_ReviveTeammates_C_ExecuteUbergraph_UI_WorldMark_ReviveTeammates_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_WorldMark_ReviveTeammates_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_WorldMark_ReviveTeammates_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_WorldMark_ReviveTeammates.UI_WorldMark_ReviveTeammates_C"));
		return ptr;
	}

}



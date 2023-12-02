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
	 * 		Name   -> Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.Get UI Refs from Panel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget*                                     HorizontalBoxRef                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidgetSwitcher*                             WidgetSwitcher_IsOwner                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_4M_C::GetUIRefsfromPanel(class UWidget** HorizontalBoxRef, class UWidgetSwitcher** WidgetSwitcher_IsOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.Get UI Refs from Panel"));
		
		UUI_CreateRoom_Management_Team_4M_C_GetUIRefsfromPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HorizontalBoxRef != nullptr)
			*HorizontalBoxRef = params.HorizontalBoxRef;
		if (WidgetSwitcher_IsOwner != nullptr)
			*WidgetSwitcher_IsOwner = params.WidgetSwitcher_IsOwner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.Get SideText by Panel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USolarTextBlock*                             TargetPanel                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_4M_C::GetSideTextbyPanel(class USolarTextBlock** TargetPanel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.Get SideText by Panel"));
		
		UUI_CreateRoom_Management_Team_4M_C_GetSideTextbyPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetPanel != nullptr)
			*TargetPanel = params.TargetPanel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_Team_4M_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.PreConstruct"));
		
		UUI_CreateRoom_Management_Team_4M_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Team_4M_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.Construct"));
		
		UUI_CreateRoom_Management_Team_4M_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.ExecuteUbergraph_UI_CreateRoom_Management_Team_4M
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_4M_C::ExecuteUbergraph_UI_CreateRoom_Management_Team_4M(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C.ExecuteUbergraph_UI_CreateRoom_Management_Team_4M"));
		
		UUI_CreateRoom_Management_Team_4M_C_ExecuteUbergraph_UI_CreateRoom_Management_Team_4M_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CreateRoom_Management_Team_4M_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CreateRoom_Management_Team_4M_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_CreateRoom_Management_Team_4M.UI_CreateRoom_Management_Team_4M_C"));
		return ptr;
	}

}



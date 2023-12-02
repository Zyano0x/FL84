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
	 * 		Name   -> Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.Set Player ID And Change Color
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_MapMark_ReviveTeammates_C::SetPlayerIDAndChangeColor(const class FString& PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.Set Player ID And Change Color"));
		
		UUI_MapMark_ReviveTeammates_C_SetPlayerIDAndChangeColor_Params params {};
		params.PlayerId = PlayerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.SetColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapMark_ReviveTeammates_C::SetColor(unsigned char Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.SetColor"));
		
		UUI_MapMark_ReviveTeammates_C_SetColor_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.SetIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                                                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapMark_ReviveTeammates_C::SetIcon(class UWidget* Content, int32_t )
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.SetIcon"));
		
		UUI_MapMark_ReviveTeammates_C_SetIcon_Params params {};
		params.Content = Content;
		params. = ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.Event_PlayAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UUI_MapMark_ReviveTeammates_C::Event_PlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.Event_PlayAnim"));
		
		UUI_MapMark_ReviveTeammates_C_Event_PlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapMark_ReviveTeammates_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.Tick"));
		
		UUI_MapMark_ReviveTeammates_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.ExecuteUbergraph_UI_MapMark_ReviveTeammates
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapMark_ReviveTeammates_C::ExecuteUbergraph_UI_MapMark_ReviveTeammates(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C.ExecuteUbergraph_UI_MapMark_ReviveTeammates"));
		
		UUI_MapMark_ReviveTeammates_C_ExecuteUbergraph_UI_MapMark_ReviveTeammates_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MapMark_ReviveTeammates_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MapMark_ReviveTeammates_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_MapMark_ReviveTeammates.UI_MapMark_ReviveTeammates_C"));
		return ptr;
	}

}



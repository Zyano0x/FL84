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
	 * 		Name   -> DelegateFunction UI_DeathView_HeatScore.UI_DeathView_HeatScore_C.OnWatchingFriendCountChanged_4A11C1094CCBF02B3D6187ADAA281EE2
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		int32_t                                            WatchingFriendCount                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUI_DeathView_HeatScore_C::OnWatchingFriendCountChanged_4A11C1094CCBF02B3D6187ADAA281EE2(int32_t WatchingFriendCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("DelegateFunction UI_DeathView_HeatScore.UI_DeathView_HeatScore_C.OnWatchingFriendCountChanged_4A11C1094CCBF02B3D6187ADAA281EE2"));
		
		UUI_DeathView_HeatScore_C_OnWatchingFriendCountChanged_4A11C1094CCBF02B3D6187ADAA281EE2_Params params {};
		params.WatchingFriendCount = WatchingFriendCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_DeathView_HeatScore.UI_DeathView_HeatScore_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_DeathView_HeatScore_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_DeathView_HeatScore.UI_DeathView_HeatScore_C.Destruct"));
		
		UUI_DeathView_HeatScore_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_DeathView_HeatScore.UI_DeathView_HeatScore_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_DeathView_HeatScore_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_DeathView_HeatScore.UI_DeathView_HeatScore_C.OnInitialized"));
		
		UUI_DeathView_HeatScore_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B67660
	 * 		Name   -> Function UI_DeathView_HeatScore.UI_DeathView_HeatScore_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_DeathView_HeatScore_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_DeathView_HeatScore.UI_DeathView_HeatScore_C.Construct"));
		
		UUI_DeathView_HeatScore_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_DeathView_HeatScore.UI_DeathView_HeatScore_C.GetModuleName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UUI_DeathView_HeatScore_C::GetModuleName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_DeathView_HeatScore.UI_DeathView_HeatScore_C.GetModuleName"));
		
		UUI_DeathView_HeatScore_C_GetModuleName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_DeathView_HeatScore.UI_DeathView_HeatScore_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_DeathView_HeatScore_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_DeathView_HeatScore.UI_DeathView_HeatScore_C.PreConstruct"));
		
		UUI_DeathView_HeatScore_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_DeathView_HeatScore.UI_DeathView_HeatScore_C.ExecuteUbergraph_UI_DeathView_HeatScore
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_DeathView_HeatScore_C::ExecuteUbergraph_UI_DeathView_HeatScore(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_DeathView_HeatScore.UI_DeathView_HeatScore_C.ExecuteUbergraph_UI_DeathView_HeatScore"));
		
		UUI_DeathView_HeatScore_C_ExecuteUbergraph_UI_DeathView_HeatScore_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_DeathView_HeatScore_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_DeathView_HeatScore_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_DeathView_HeatScore.UI_DeathView_HeatScore_C"));
		return ptr;
	}

}



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
	 * 		Name   -> Function UI_CreateRoom_Management_TDM.UI_CreateRoom_Management_TDM_C.GetTeams
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UUI_CreateRoom_Management_Team_C*>    Teams                                                      (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_TDM_C::GetTeams(TArray<class UUI_CreateRoom_Management_Team_C*>* Teams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_TDM.UI_CreateRoom_Management_TDM_C.GetTeams"));
		
		UUI_CreateRoom_Management_TDM_C_GetTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Teams != nullptr)
			*Teams = params.Teams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_TDM.UI_CreateRoom_Management_TDM_C.InitTeams
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_TDM_C::InitTeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_TDM.UI_CreateRoom_Management_TDM_C.InitTeams"));
		
		UUI_CreateRoom_Management_TDM_C_InitTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_TDM.UI_CreateRoom_Management_TDM_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CreateRoom_Management_TDM_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_TDM.UI_CreateRoom_Management_TDM_C.PreConstruct"));
		
		UUI_CreateRoom_Management_TDM_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_TDM.UI_CreateRoom_Management_TDM_C.ExecuteUbergraph_UI_CreateRoom_Management_TDM
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_TDM_C::ExecuteUbergraph_UI_CreateRoom_Management_TDM(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_TDM.UI_CreateRoom_Management_TDM_C.ExecuteUbergraph_UI_CreateRoom_Management_TDM"));
		
		UUI_CreateRoom_Management_TDM_C_ExecuteUbergraph_UI_CreateRoom_Management_TDM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CreateRoom_Management_TDM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CreateRoom_Management_TDM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_CreateRoom_Management_TDM.UI_CreateRoom_Management_TDM_C"));
		return ptr;
	}

}



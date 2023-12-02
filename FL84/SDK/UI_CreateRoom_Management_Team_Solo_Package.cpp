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
	 * 		Name   -> Function UI_CreateRoom_Management_Team_Solo.UI_CreateRoom_Management_Team_Solo_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_CreateRoom_Management_Team_Solo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team_Solo.UI_CreateRoom_Management_Team_Solo_C.Construct"));
		
		UUI_CreateRoom_Management_Team_Solo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_CreateRoom_Management_Team_Solo.UI_CreateRoom_Management_Team_Solo_C.ExecuteUbergraph_UI_CreateRoom_Management_Team_Solo
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CreateRoom_Management_Team_Solo_C::ExecuteUbergraph_UI_CreateRoom_Management_Team_Solo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_CreateRoom_Management_Team_Solo.UI_CreateRoom_Management_Team_Solo_C.ExecuteUbergraph_UI_CreateRoom_Management_Team_Solo"));
		
		UUI_CreateRoom_Management_Team_Solo_C_ExecuteUbergraph_UI_CreateRoom_Management_Team_Solo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CreateRoom_Management_Team_Solo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CreateRoom_Management_Team_Solo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_CreateRoom_Management_Team_Solo.UI_CreateRoom_Management_Team_Solo_C"));
		return ptr;
	}

}



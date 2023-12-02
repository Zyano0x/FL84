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
	 * 		Name   -> Function UI_TOP3Victory_Notice.UI_TOP3Victory_Notice_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UUI_TOP3Victory_Notice_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_TOP3Victory_Notice.UI_TOP3Victory_Notice_C.Construct"));
		
		UUI_TOP3Victory_Notice_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function UI_TOP3Victory_Notice.UI_TOP3Victory_Notice_C.ExecuteUbergraph_UI_TOP3Victory_Notice
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TOP3Victory_Notice_C::ExecuteUbergraph_UI_TOP3Victory_Notice(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UI_TOP3Victory_Notice.UI_TOP3Victory_Notice_C.ExecuteUbergraph_UI_TOP3Victory_Notice"));
		
		UUI_TOP3Victory_Notice_C_ExecuteUbergraph_UI_TOP3Victory_Notice_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TOP3Victory_Notice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TOP3Victory_Notice_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass UI_TOP3Victory_Notice.UI_TOP3Victory_Notice_C"));
		return ptr;
	}

}



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
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.ReceiveUpdateMaxAmmoEvent
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InMaxAmmo                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_GridBulletContainer_C::ReceiveUpdateMaxAmmoEvent(int32_t InMaxAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.ReceiveUpdateMaxAmmoEvent"));
		
		UHUD_GridBulletContainer_C_ReceiveUpdateMaxAmmoEvent_Params params {};
		params.InMaxAmmo = InMaxAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHUD_GridBulletContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.Construct"));
		
		UHUD_GridBulletContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D64C70
	 * 		Name   -> Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.ExecuteUbergraph_HUD_GridBulletContainer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_GridBulletContainer_C::ExecuteUbergraph_HUD_GridBulletContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.ExecuteUbergraph_HUD_GridBulletContainer"));
		
		UHUD_GridBulletContainer_C_ExecuteUbergraph_HUD_GridBulletContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUD_GridBulletContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_GridBulletContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass HUD_GridBulletContainer.HUD_GridBulletContainer_C"));
		return ptr;
	}

}



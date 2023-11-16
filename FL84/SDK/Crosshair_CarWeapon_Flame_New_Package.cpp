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
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnOverloadChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InOverload                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrosshair_CarWeapon_Flame_New_C::OnOverloadChanged(bool InOverload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnOverloadChanged"));
		
		UCrosshair_CarWeapon_Flame_New_C_OnOverloadChanged_Params params {};
		params.InOverload = InOverload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.SetWidgetResources
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCanvasPanel*                                InSecondReticlePanel                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      InReticleDirectionImage                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      InRangedImage                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USizeBox*                                    InAssistLockSizeBox                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                InChangeNewAssistLockPawnPanel                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                InEnterLockPawnPanel                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCanvasPanel*                                InCanvas_Dynamic                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Flame_New_C::SetWidgetResources(class UCanvasPanel** InSecondReticlePanel, class UImage** InReticleDirectionImage, class UImage** InRangedImage, class USizeBox** InAssistLockSizeBox, class UCanvasPanel** InChangeNewAssistLockPawnPanel, class UCanvasPanel** InEnterLockPawnPanel, class UCanvasPanel** InCanvas_Dynamic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.SetWidgetResources"));
		
		UCrosshair_CarWeapon_Flame_New_C_SetWidgetResources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSecondReticlePanel != nullptr)
			*InSecondReticlePanel = params.InSecondReticlePanel;
		if (InReticleDirectionImage != nullptr)
			*InReticleDirectionImage = params.InReticleDirectionImage;
		if (InRangedImage != nullptr)
			*InRangedImage = params.InRangedImage;
		if (InAssistLockSizeBox != nullptr)
			*InAssistLockSizeBox = params.InAssistLockSizeBox;
		if (InChangeNewAssistLockPawnPanel != nullptr)
			*InChangeNewAssistLockPawnPanel = params.InChangeNewAssistLockPawnPanel;
		if (InEnterLockPawnPanel != nullptr)
			*InEnterLockPawnPanel = params.InEnterLockPawnPanel;
		if (InCanvas_Dynamic != nullptr)
			*InCanvas_Dynamic = params.InCanvas_Dynamic;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnOverloadStateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrosshair_CarWeapon_Flame_New_C::OnOverloadStateChanged(bool bEnter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnOverloadStateChanged"));
		
		UCrosshair_CarWeapon_Flame_New_C_OnOverloadStateChanged_Params params {};
		params.bEnter = bEnter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnAnimationFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Flame_New_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnAnimationFinished"));
		
		UCrosshair_CarWeapon_Flame_New_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnCrosshairInNormalState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCrosshair_CarWeapon_Flame_New_C::OnCrosshairInNormalState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnCrosshairInNormalState"));
		
		UCrosshair_CarWeapon_Flame_New_C_OnCrosshairInNormalState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D656B0
	 * 		Name   -> Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.ExecuteUbergraph_Crosshair_CarWeapon_Flame_New
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrosshair_CarWeapon_Flame_New_C::ExecuteUbergraph_Crosshair_CarWeapon_Flame_New(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.ExecuteUbergraph_Crosshair_CarWeapon_Flame_New"));
		
		UCrosshair_CarWeapon_Flame_New_C_ExecuteUbergraph_Crosshair_CarWeapon_Flame_New_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrosshair_CarWeapon_Flame_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrosshair_CarWeapon_Flame_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C"));
		return ptr;
	}

}



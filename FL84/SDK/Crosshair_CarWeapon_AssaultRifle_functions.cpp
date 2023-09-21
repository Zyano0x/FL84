#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_AssaultRifle.Crosshair_CarWeapon_AssaultRifle_C
// (None)

class UClass* UCrosshair_CarWeapon_AssaultRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_CarWeapon_AssaultRifle_C");

	return Clss;
}


// Crosshair_CarWeapon_AssaultRifle_C Crosshair_CarWeapon_AssaultRifle.Default__Crosshair_CarWeapon_AssaultRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_CarWeapon_AssaultRifle_C* UCrosshair_CarWeapon_AssaultRifle_C::GetDefaultObj()
{
	static class UCrosshair_CarWeapon_AssaultRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_CarWeapon_AssaultRifle_C*>(UCrosshair_CarWeapon_AssaultRifle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crosshair_CarWeapon_AssaultRifle.Crosshair_CarWeapon_AssaultRifle_C.GetAmmoWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UCrosshair_CarWeapon_AssaultRifle_C::GetAmmoWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_AssaultRifle_C", "GetAmmoWidget");

	Params::UCrosshair_CarWeapon_AssaultRifle_C_GetAmmoWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Crosshair_CarWeapon_AssaultRifle.Crosshair_CarWeapon_AssaultRifle_C.GetReloadWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UCrosshair_CarWeapon_AssaultRifle_C::GetReloadWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_AssaultRifle_C", "GetReloadWidget");

	Params::UCrosshair_CarWeapon_AssaultRifle_C_GetReloadWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Crosshair_CarWeapon_AssaultRifle.Crosshair_CarWeapon_AssaultRifle_C.SetWidgetResources
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*                InSecondReticlePanel                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      InReticleDirectionImage                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      InRangedImage                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    InAssistLockSizeBox                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                InChangeNewAssistLockPawnPanel                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                InEnterLockPawnPanel                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                InCanvas_Dynamic                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_CarWeapon_AssaultRifle_C::SetWidgetResources(class UCanvasPanel** InSecondReticlePanel, class UImage** InReticleDirectionImage, class UImage** InRangedImage, class USizeBox** InAssistLockSizeBox, class UCanvasPanel** InChangeNewAssistLockPawnPanel, class UCanvasPanel** InEnterLockPawnPanel, class UCanvasPanel** InCanvas_Dynamic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_CarWeapon_AssaultRifle_C", "SetWidgetResources");

	Params::UCrosshair_CarWeapon_AssaultRifle_C_SetWidgetResources_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InSecondReticlePanel != nullptr)
		*InSecondReticlePanel = Parms.InSecondReticlePanel;

	if (InReticleDirectionImage != nullptr)
		*InReticleDirectionImage = Parms.InReticleDirectionImage;

	if (InRangedImage != nullptr)
		*InRangedImage = Parms.InRangedImage;

	if (InAssistLockSizeBox != nullptr)
		*InAssistLockSizeBox = Parms.InAssistLockSizeBox;

	if (InChangeNewAssistLockPawnPanel != nullptr)
		*InChangeNewAssistLockPawnPanel = Parms.InChangeNewAssistLockPawnPanel;

	if (InEnterLockPawnPanel != nullptr)
		*InEnterLockPawnPanel = Parms.InEnterLockPawnPanel;

	if (InCanvas_Dynamic != nullptr)
		*InCanvas_Dynamic = Parms.InCanvas_Dynamic;

}

}



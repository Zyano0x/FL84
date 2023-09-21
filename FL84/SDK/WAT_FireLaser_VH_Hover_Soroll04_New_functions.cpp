#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WAT_FireLaser_VH_Hover_Soroll04_New.WAT_FireLaser_VH_Hover_Soroll04_New_C
// (None)

class UClass* UWAT_FireLaser_VH_Hover_Soroll04_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WAT_FireLaser_VH_Hover_Soroll04_New_C");

	return Clss;
}


// WAT_FireLaser_VH_Hover_Soroll04_New_C WAT_FireLaser_VH_Hover_Soroll04_New.Default__WAT_FireLaser_VH_Hover_Soroll04_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted, StrongRefOnFrame)

class UWAT_FireLaser_VH_Hover_Soroll04_New_C* UWAT_FireLaser_VH_Hover_Soroll04_New_C::GetDefaultObj()
{
	static class UWAT_FireLaser_VH_Hover_Soroll04_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWAT_FireLaser_VH_Hover_Soroll04_New_C*>(UWAT_FireLaser_VH_Hover_Soroll04_New_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WAT_FireLaser_VH_Hover_Soroll04_New.WAT_FireLaser_VH_Hover_Soroll04_New_C.K2_ActivateRealFire
// (Event, Public, BlueprintEvent)
// Parameters:

void UWAT_FireLaser_VH_Hover_Soroll04_New_C::K2_ActivateRealFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WAT_FireLaser_VH_Hover_Soroll04_New_C", "K2_ActivateRealFire");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WAT_FireLaser_VH_Hover_Soroll04_New.WAT_FireLaser_VH_Hover_Soroll04_New_C.ExecuteUbergraph_WAT_FireLaser_VH_Hover_Soroll04_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraShake*                CallFunc_PlayCameraShake_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWAT_FireLaser_VH_Hover_Soroll04_New_C::ExecuteUbergraph_WAT_FireLaser_VH_Hover_Soroll04_New(int32 EntryPoint, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UCameraShake* CallFunc_PlayCameraShake_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WAT_FireLaser_VH_Hover_Soroll04_New_C", "ExecuteUbergraph_WAT_FireLaser_VH_Hover_Soroll04_New");

	Params::UWAT_FireLaser_VH_Hover_Soroll04_New_C_ExecuteUbergraph_WAT_FireLaser_VH_Hover_Soroll04_New_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_PlayCameraShake_ReturnValue = CallFunc_PlayCameraShake_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



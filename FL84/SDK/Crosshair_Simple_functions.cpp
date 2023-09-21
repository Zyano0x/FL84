#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Crosshair_Simple.Crosshair_Simple_C
// (None)

class UClass* UCrosshair_Simple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crosshair_Simple_C");

	return Clss;
}


// Crosshair_Simple_C Crosshair_Simple.Default__Crosshair_Simple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrosshair_Simple_C* UCrosshair_Simple_C::GetDefaultObj()
{
	static class UCrosshair_Simple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshair_Simple_C*>(UCrosshair_Simple_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crosshair_Simple.Crosshair_Simple_C.InitializeCrosshairSpread
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Spread                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_Simple_C::InitializeCrosshairSpread(float Spread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_Simple_C", "InitializeCrosshairSpread");

	Params::UCrosshair_Simple_C_InitializeCrosshairSpread_Params Parms{};

	Parms.Spread = Spread;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_Simple.Crosshair_Simple_C.SetCrosshairSprite
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPaperSprite*                InSprite                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_Simple_C::SetCrosshairSprite(class UPaperSprite* InSprite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_Simple_C", "SetCrosshairSprite");

	Params::UCrosshair_Simple_C_SetCrosshairSprite_Params Parms{};

	Parms.InSprite = InSprite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Crosshair_Simple.Crosshair_Simple_C.ExecuteUbergraph_Crosshair_Simple
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                K2Node_Event_InSprite                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISlateTextureAtlasInterface>CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISlateTextureAtlasInterface>CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_1      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISlateTextureAtlasInterface>CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_2      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISlateTextureAtlasInterface>CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_3      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Spread                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISlateTextureAtlasInterface>CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_4      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrosshair_Simple_C::ExecuteUbergraph_Crosshair_Simple(int32 EntryPoint, class UPaperSprite* K2Node_Event_InSprite, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_1, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_2, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_3, float K2Node_Event_Spread, TScriptInterface<class ISlateTextureAtlasInterface> CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crosshair_Simple_C", "ExecuteUbergraph_Crosshair_Simple");

	Params::UCrosshair_Simple_C_ExecuteUbergraph_Crosshair_Simple_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InSprite = K2Node_Event_InSprite;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput = CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_1 = CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_1;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_2 = CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_2;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_3 = CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_3;
	Parms.K2Node_Event_Spread = K2Node_Event_Spread;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_4 = CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput_4;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}



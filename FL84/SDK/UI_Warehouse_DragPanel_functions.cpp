#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Warehouse_DragPanel.UI_Warehouse_DragPanel_C
// (None)

class UClass* UUI_Warehouse_DragPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Warehouse_DragPanel_C");

	return Clss;
}


// UI_Warehouse_DragPanel_C UI_Warehouse_DragPanel.Default__UI_Warehouse_DragPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Warehouse_DragPanel_C* UUI_Warehouse_DragPanel_C::GetDefaultObj()
{
	static class UUI_Warehouse_DragPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Warehouse_DragPanel_C*>(UUI_Warehouse_DragPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Warehouse_DragPanel.UI_Warehouse_DragPanel_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUI_Warehouse_DragPanel_C::GetModuleName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Warehouse_DragPanel_C", "GetModuleName");

	Params::UUI_Warehouse_DragPanel_C_GetModuleName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



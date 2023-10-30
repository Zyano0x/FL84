#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Common_TransBlack_Anim.UI_Common_TransBlack_Anim_C
// (None)

class UClass* UUI_Common_TransBlack_Anim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Common_TransBlack_Anim_C");

	return Clss;
}


// UI_Common_TransBlack_Anim_C UI_Common_TransBlack_Anim.Default__UI_Common_TransBlack_Anim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Common_TransBlack_Anim_C* UUI_Common_TransBlack_Anim_C::GetDefaultObj()
{
	static class UUI_Common_TransBlack_Anim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Common_TransBlack_Anim_C*>(UUI_Common_TransBlack_Anim_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Common_TransBlack_Anim.UI_Common_TransBlack_Anim_C.ReceiveShow
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUI_Common_TransBlack_Anim_C::ReceiveShow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Common_TransBlack_Anim_C", "ReceiveShow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Common_TransBlack_Anim.UI_Common_TransBlack_Anim_C.OnEnterAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Common_TransBlack_Anim_C::OnEnterAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Common_TransBlack_Anim_C", "OnEnterAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Common_TransBlack_Anim.UI_Common_TransBlack_Anim_C.ExecuteUbergraph_UI_Common_TransBlack_Anim
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Common_TransBlack_Anim_C::ExecuteUbergraph_UI_Common_TransBlack_Anim(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Common_TransBlack_Anim_C", "ExecuteUbergraph_UI_Common_TransBlack_Anim");

	Params::UUI_Common_TransBlack_Anim_C_ExecuteUbergraph_UI_Common_TransBlack_Anim_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



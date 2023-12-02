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
	 * 		Name   -> Function Local_RequestMessage.Local_RequestMessage_C.UIInitFinishEventDispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 WidgetRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULocal_RequestMessage_C::UIInitFinishEventDispatcher__DelegateSignature(class UUserWidget* WidgetRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function Local_RequestMessage.Local_RequestMessage_C.UIInitFinishEventDispatcher__DelegateSignature"));
		
		ULocal_RequestMessage_C_UIInitFinishEventDispatcher__DelegateSignature_Params params {};
		params.WidgetRef = WidgetRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocal_RequestMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocal_RequestMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass Local_RequestMessage.Local_RequestMessage_C"));
		return ptr;
	}

}



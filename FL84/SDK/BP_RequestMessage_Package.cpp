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
	 * 		Name   -> Function BP_RequestMessage.BP_RequestMessage_C.OnMessageDeal__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FS_MessageRequest                           Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RequestMessage_C::OnMessageDeal__DelegateSignature(const struct FS_MessageRequest& Info, bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_RequestMessage.BP_RequestMessage_C.OnMessageDeal__DelegateSignature"));
		
		ABP_RequestMessage_C_OnMessageDeal__DelegateSignature_Params params {};
		params.Info = Info;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RequestMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RequestMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_RequestMessage.BP_RequestMessage_C"));
		return ptr;
	}

}



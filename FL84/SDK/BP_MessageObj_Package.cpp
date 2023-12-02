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
	 * 		Name   -> Function BP_MessageObj.BP_MessageObj_C.Init
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FS_MessageRequest                           MessageInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MessageObj_C::Init(const struct FS_MessageRequest& MessageInfo, int32_t Time, bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MessageObj.BP_MessageObj_C.Init"));
		
		UBP_MessageObj_C_Init_Params params {};
		params.MessageInfo = MessageInfo;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MessageObj.BP_MessageObj_C.ReplyDeal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BlockTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Reply                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MessageObj_C::ReplyDeal(int32_t BlockTime, bool Reply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MessageObj.BP_MessageObj_C.ReplyDeal"));
		
		UBP_MessageObj_C_ReplyDeal_Params params {};
		params.BlockTime = BlockTime;
		params.Reply = Reply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MessageObj.BP_MessageObj_C.Timeout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MessageObj_C::Timeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MessageObj.BP_MessageObj_C.Timeout"));
		
		UBP_MessageObj_C_Timeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MessageObj.BP_MessageObj_C.BlockTimeUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MessageObj_C::BlockTimeUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MessageObj.BP_MessageObj_C.BlockTimeUp"));
		
		UBP_MessageObj_C_BlockTimeUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MessageObj.BP_MessageObj_C.ExecuteUbergraph_BP_MessageObj
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MessageObj_C::ExecuteUbergraph_BP_MessageObj(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MessageObj.BP_MessageObj_C.ExecuteUbergraph_BP_MessageObj"));
		
		UBP_MessageObj_C_ExecuteUbergraph_BP_MessageObj_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MessageObj.BP_MessageObj_C.OnTimeOut__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FS_MessageRequest                           Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MessageObj_C::OnTimeOut__DelegateSignature(const struct FS_MessageRequest& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MessageObj.BP_MessageObj_C.OnTimeOut__DelegateSignature"));
		
		UBP_MessageObj_C_OnTimeOut__DelegateSignature_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MessageObj_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MessageObj_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_MessageObj.BP_MessageObj_C"));
		return ptr;
	}

}



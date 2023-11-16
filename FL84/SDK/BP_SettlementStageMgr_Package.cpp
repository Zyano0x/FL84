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
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.Init
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_SettlementStageMgr_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.Init"));
		
		UBP_SettlementStageMgr_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.CloseDiePage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SettlementStageMgr_C::CloseDiePage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.CloseDiePage"));
		
		UBP_SettlementStageMgr_C_CloseDiePage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.ShowNextStage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SettlementStageMgr_C::ShowNextStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.ShowNextStage"));
		
		UBP_SettlementStageMgr_C_ShowNextStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.ShowDiePage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SettlementStageMgr_C::ShowDiePage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.ShowDiePage"));
		
		UBP_SettlementStageMgr_C_ShowDiePage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.SkipToTarget
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SettlementStageMgr_C::SkipToTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.SkipToTarget"));
		
		UBP_SettlementStageMgr_C_SkipToTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00B6A060
	 * 		Name   -> Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.GetClassRelativePathName
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InClass                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UBP_SettlementStageMgr_C::GetClassRelativePathName(class UClass* InClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.GetClassRelativePathName"));
		
		UBP_SettlementStageMgr_C_GetClassRelativePathName_Params params {};
		params.InClass = InClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SettlementStageMgr_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SettlementStageMgr_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_SettlementStageMgr.BP_SettlementStageMgr_C"));
		return ptr;
	}

}



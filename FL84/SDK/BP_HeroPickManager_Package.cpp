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
	 * 		Name   -> Function BP_HeroPickManager.BP_HeroPickManager_C.ReceiveAllHeroPickEnd
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HeroPickManager_C::ReceiveAllHeroPickEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_HeroPickManager.BP_HeroPickManager_C.ReceiveAllHeroPickEnd"));
		
		ABP_HeroPickManager_C_ReceiveAllHeroPickEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_HeroPickManager.BP_HeroPickManager_C.ReceiveTeamPickHeroEnd
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      TeamName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_HeroPickManager_C::ReceiveTeamPickHeroEnd(const class FString& TeamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_HeroPickManager.BP_HeroPickManager_C.ReceiveTeamPickHeroEnd"));
		
		ABP_HeroPickManager_C_ReceiveTeamPickHeroEnd_Params params {};
		params.TeamName = TeamName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_HeroPickManager.BP_HeroPickManager_C.ExecuteUbergraph_BP_HeroPickManager
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HeroPickManager_C::ExecuteUbergraph_BP_HeroPickManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_HeroPickManager.BP_HeroPickManager_C.ExecuteUbergraph_BP_HeroPickManager"));
		
		ABP_HeroPickManager_C_ExecuteUbergraph_BP_HeroPickManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_HeroPickManager.BP_HeroPickManager_C.OnSideHeroPickEnd__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Side                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_HeroPickManager_C::OnSideHeroPickEnd__DelegateSignature(const class FString& Side)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_HeroPickManager.BP_HeroPickManager_C.OnSideHeroPickEnd__DelegateSignature"));
		
		ABP_HeroPickManager_C_OnSideHeroPickEnd__DelegateSignature_Params params {};
		params.Side = Side;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_HeroPickManager.BP_HeroPickManager_C.OnAllHeroPickEnd__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HeroPickManager_C::OnAllHeroPickEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_HeroPickManager.BP_HeroPickManager_C.OnAllHeroPickEnd__DelegateSignature"));
		
		ABP_HeroPickManager_C_OnAllHeroPickEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HeroPickManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HeroPickManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_HeroPickManager.BP_HeroPickManager_C"));
		return ptr;
	}

}



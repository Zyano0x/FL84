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
	 * 		Name   -> Function BP_DirectionArrow.BP_DirectionArrow_C.Init
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AttachTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DirectionArrow_C::Init(class AActor* AttachTarget, float Scale, const struct FVector& Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DirectionArrow.BP_DirectionArrow_C.Init"));
		
		ABP_DirectionArrow_C_Init_Params params {};
		params.AttachTarget = AttachTarget;
		params.Scale = Scale;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DirectionArrow.BP_DirectionArrow_C.SetVisiblity
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewVisiblity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DirectionArrow_C::SetVisiblity(bool NewVisiblity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DirectionArrow.BP_DirectionArrow_C.SetVisiblity"));
		
		ABP_DirectionArrow_C_SetVisiblity_Params params {};
		params.NewVisiblity = NewVisiblity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DirectionArrow.BP_DirectionArrow_C.UpdateDirection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DirectionArrow_C::UpdateDirection(const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DirectionArrow.BP_DirectionArrow_C.UpdateDirection"));
		
		ABP_DirectionArrow_C_UpdateDirection_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_DirectionArrow.BP_DirectionArrow_C.ExecuteUbergraph_BP_DirectionArrow
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DirectionArrow_C::ExecuteUbergraph_BP_DirectionArrow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_DirectionArrow.BP_DirectionArrow_C.ExecuteUbergraph_BP_DirectionArrow"));
		
		ABP_DirectionArrow_C_ExecuteUbergraph_BP_DirectionArrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DirectionArrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DirectionArrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_DirectionArrow.BP_DirectionArrow_C"));
		return ptr;
	}

}



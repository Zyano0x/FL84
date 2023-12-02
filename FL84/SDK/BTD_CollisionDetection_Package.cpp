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
	 * 		Name   -> Function BTD_CollisionDetection.BTD_CollisionDetection_C.GetCircleInter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index_01                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index_02                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            circleTimes                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Inter                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTD_CollisionDetection_C::GetCircleInter(int32_t Index_01, int32_t Index_02, int32_t circleTimes, int32_t* Inter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BTD_CollisionDetection.BTD_CollisionDetection_C.GetCircleInter"));
		
		UBTD_CollisionDetection_C_GetCircleInter_Params params {};
		params.Index_01 = Index_01;
		params.Index_02 = Index_02;
		params.circleTimes = circleTimes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Inter != nullptr)
			*Inter = params.Inter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BTD_CollisionDetection.BTD_CollisionDetection_C.PerformConditionCheckAI
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBTD_CollisionDetection_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BTD_CollisionDetection.BTD_CollisionDetection_C.PerformConditionCheckAI"));
		
		UBTD_CollisionDetection_C_PerformConditionCheckAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTD_CollisionDetection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTD_CollisionDetection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BTD_CollisionDetection.BTD_CollisionDetection_C"));
		return ptr;
	}

}



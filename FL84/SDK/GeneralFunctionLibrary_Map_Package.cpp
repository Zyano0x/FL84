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
	 * 		Name   -> Function GeneralFunctionLibrary_Map.GeneralFunctionLibrary_Map_C.[ C]Debug Drawing Poison Circle
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             CenterArr                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext1                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<float>                                      Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGeneralFunctionLibrary_Map_C::STATIC_CDebugDrawingPoisonCircle(TArray<struct FVector>* CenterArr, class UObject* __WorldContext1, TArray<float>* Radius, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GeneralFunctionLibrary_Map.GeneralFunctionLibrary_Map_C.[ C]Debug Drawing Poison Circle"));
		
		UGeneralFunctionLibrary_Map_C_CDebugDrawingPoisonCircle_Params params {};
		params.__WorldContext1 = __WorldContext1;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CenterArr != nullptr)
			*CenterArr = params.CenterArr;
		if (Radius != nullptr)
			*Radius = params.Radius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function GeneralFunctionLibrary_Map.GeneralFunctionLibrary_Map_C.[ C]Get Viewport Focused Character
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASolarCharacter*                             Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGeneralFunctionLibrary_Map_C::STATIC_CGetViewportFocusedCharacter(class UObject* WorldContextObject, class UObject* __WorldContext, class ASolarCharacter** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GeneralFunctionLibrary_Map.GeneralFunctionLibrary_Map_C.[ C]Get Viewport Focused Character"));
		
		UGeneralFunctionLibrary_Map_C_CGetViewportFocusedCharacter_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function GeneralFunctionLibrary_Map.GeneralFunctionLibrary_Map_C.CircularInterceptPoint
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   CenterPoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LargeRadius                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SmallRadius                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TruncationAngle                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   LargePointStart                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   LargePointEnd                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   SmallPointStart                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   SmallPointEnd                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGeneralFunctionLibrary_Map_C::STATIC_CircularInterceptPoint(const struct FVector2D& CenterPoint, float LargeRadius, float SmallRadius, float TruncationAngle, class UObject* __WorldContext, struct FVector2D* LargePointStart, struct FVector2D* LargePointEnd, struct FVector2D* SmallPointStart, struct FVector2D* SmallPointEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GeneralFunctionLibrary_Map.GeneralFunctionLibrary_Map_C.CircularInterceptPoint"));
		
		UGeneralFunctionLibrary_Map_C_CircularInterceptPoint_Params params {};
		params.CenterPoint = CenterPoint;
		params.LargeRadius = LargeRadius;
		params.SmallRadius = SmallRadius;
		params.TruncationAngle = TruncationAngle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LargePointStart != nullptr)
			*LargePointStart = params.LargePointStart;
		if (LargePointEnd != nullptr)
			*LargePointEnd = params.LargePointEnd;
		if (SmallPointStart != nullptr)
			*SmallPointStart = params.SmallPointStart;
		if (SmallPointEnd != nullptr)
			*SmallPointEnd = params.SmallPointEnd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function GeneralFunctionLibrary_Map.GeneralFunctionLibrary_Map_C.[ S]Get Point On Line
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector2D>                           Sample                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FVector2D                                   StartPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Length                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   TargetPoint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGeneralFunctionLibrary_Map_C::STATIC_SGetPointOnLine(TArray<struct FVector2D>* Sample, const struct FVector2D& StartPoint, float Length, class UObject* __WorldContext, struct FVector2D* TargetPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GeneralFunctionLibrary_Map.GeneralFunctionLibrary_Map_C.[ S]Get Point On Line"));
		
		UGeneralFunctionLibrary_Map_C_SGetPointOnLine_Params params {};
		params.StartPoint = StartPoint;
		params.Length = Length;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sample != nullptr)
			*Sample = params.Sample;
		if (TargetPoint != nullptr)
			*TargetPoint = params.TargetPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function GeneralFunctionLibrary_Map.GeneralFunctionLibrary_Map_C.[S]Create Air Drop by Out Come ID Auto Trace Ground Height
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      SpawnerASolarTreasureBoxSpawner                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutcomeID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ChestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            2                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUseAirship                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGeneralFunctionLibrary_Map_C::STATIC_SCreateAirDropbyOutComeIDAutoTraceGroundHeight(class UObject* WorldContextObject, const struct FTransform& , class UClass* SpawnerASolarTreasureBoxSpawner, int32_t OutcomeID, int32_t ChestID, int32_t 2, bool bUseAirship, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GeneralFunctionLibrary_Map.GeneralFunctionLibrary_Map_C.[S]Create Air Drop by Out Come ID Auto Trace Ground Height"));
		
		UGeneralFunctionLibrary_Map_C_SCreateAirDropbyOutComeIDAutoTraceGroundHeight_Params params {};
		params.WorldContextObject = WorldContextObject;
		params. = ;
		params.SpawnerASolarTreasureBoxSpawner = SpawnerASolarTreasureBoxSpawner;
		params.OutcomeID = OutcomeID;
		params.ChestID = ChestID;
		params.2 = 2;
		params.bUseAirship = bUseAirship;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function GeneralFunctionLibrary_Map.GeneralFunctionLibrary_Map_C.[S]CreateAirDropByItemID_AutoTraceGroundHeight
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      SpawnerASolarTreasureBoxSpawner                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSolarItemData>                      ItemIDNum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		int32_t                                            ChestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            2                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGeneralFunctionLibrary_Map_C::STATIC_SCreateAirDropByItemID_AutoTraceGroundHeight(class UObject* WorldContextObject, const struct FTransform& , class UClass* SpawnerASolarTreasureBoxSpawner, TArray<struct FSolarItemData>* ItemIDNum, int32_t ChestID, int32_t 2, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function GeneralFunctionLibrary_Map.GeneralFunctionLibrary_Map_C.[S]CreateAirDropByItemID_AutoTraceGroundHeight"));
		
		UGeneralFunctionLibrary_Map_C_SCreateAirDropByItemID_AutoTraceGroundHeight_Params params {};
		params.WorldContextObject = WorldContextObject;
		params. = ;
		params.SpawnerASolarTreasureBoxSpawner = SpawnerASolarTreasureBoxSpawner;
		params.ChestID = ChestID;
		params.2 = 2;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemIDNum != nullptr)
			*ItemIDNum = params.ItemIDNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneralFunctionLibrary_Map_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneralFunctionLibrary_Map_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass GeneralFunctionLibrary_Map.GeneralFunctionLibrary_Map_C"));
		return ptr;
	}

}



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
	 * 		Name   -> Function BP_MapInfoComponent.BP_MapInfoComponent_C.Calculate Required Parameters
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<float>                                      RadiusArr                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxOffset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              GoToTheCentreRadius                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MapInfoComponent_C::CalculateRequiredParameters(TArray<float>* RadiusArr, int32_t Index, float* Radius, float* MaxOffset, float* GoToTheCentreRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MapInfoComponent.BP_MapInfoComponent_C.Calculate Required Parameters"));
		
		UBP_MapInfoComponent_C_CalculateRequiredParameters_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RadiusArr != nullptr)
			*RadiusArr = params.RadiusArr;
		if (Radius != nullptr)
			*Radius = params.Radius;
		if (MaxOffset != nullptr)
			*MaxOffset = params.MaxOffset;
		if (GoToTheCentreRadius != nullptr)
			*GoToTheCentreRadius = params.GoToTheCentreRadius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MapInfoComponent.BP_MapInfoComponent_C.Random Get Fake Bomb Point
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Pos                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MapInfoComponent_C::RandomGetFakeBombPoint(int32_t Key, struct FVector* Pos, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MapInfoComponent.BP_MapInfoComponent_C.Random Get Fake Bomb Point"));
		
		UBP_MapInfoComponent_C_RandomGetFakeBombPoint_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pos != nullptr)
			*Pos = params.Pos;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MapInfoComponent.BP_MapInfoComponent_C.SetFakeBombPointRangeArrr
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<int32_t, struct FVector2D>                    FakeBombPointRangeArr                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MapInfoComponent_C::SetFakeBombPointRangeArrr(TMap<int32_t, struct FVector2D> FakeBombPointRangeArr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MapInfoComponent.BP_MapInfoComponent_C.SetFakeBombPointRangeArrr"));
		
		UBP_MapInfoComponent_C_SetFakeBombPointRangeArrr_Params params {};
		params.FakeBombPointRangeArr = FakeBombPointRangeArr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MapInfoComponent.BP_MapInfoComponent_C.SetFakePointRnageArr
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<int32_t, struct FVector2D>                    FakePointRnageArr                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_MapInfoComponent_C::SetFakePointRnageArr(TMap<int32_t, struct FVector2D> FakePointRnageArr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MapInfoComponent.BP_MapInfoComponent_C.SetFakePointRnageArr"));
		
		UBP_MapInfoComponent_C_SetFakePointRnageArr_Params params {};
		params.FakePointRnageArr = FakePointRnageArr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MapInfoComponent.BP_MapInfoComponent_C.Get Safe Area Centers Len
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Len                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MapInfoComponent_C::GetSafeAreaCentersLen(int32_t* Len)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MapInfoComponent.BP_MapInfoComponent_C.Get Safe Area Centers Len"));
		
		UBP_MapInfoComponent_C_GetSafeAreaCentersLen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Len != nullptr)
			*Len = params.Len;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MapInfoComponent.BP_MapInfoComponent_C.CalculateFakePoint
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Centre                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SmallRadiu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LargeRadiu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Pos                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MapInfoComponent_C::CalculateFakePoint(const struct FVector& Centre, float SmallRadiu, float LargeRadiu, int32_t Index, struct FVector* Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MapInfoComponent.BP_MapInfoComponent_C.CalculateFakePoint"));
		
		UBP_MapInfoComponent_C_CalculateFakePoint_Params params {};
		params.Centre = Centre;
		params.SmallRadiu = SmallRadiu;
		params.LargeRadiu = LargeRadiu;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pos != nullptr)
			*Pos = params.Pos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MapInfoComponent.BP_MapInfoComponent_C.Join Next
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LastIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVector>                             TargetArray                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		float                                              GoToTheCentreRadius                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MapInfoComponent_C::JoinNext(float Radius, float MaxOffset, int32_t LastIndex, TArray<struct FVector>* TargetArray, float GoToTheCentreRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MapInfoComponent.BP_MapInfoComponent_C.Join Next"));
		
		UBP_MapInfoComponent_C_JoinNext_Params params {};
		params.Radius = Radius;
		params.MaxOffset = MaxOffset;
		params.LastIndex = LastIndex;
		params.GoToTheCentreRadius = GoToTheCentreRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetArray != nullptr)
			*TargetArray = params.TargetArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MapInfoComponent.BP_MapInfoComponent_C.Random Selection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TargetDisMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVector>                             TargetArray                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               NeedCheckBoundary                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Add                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MapInfoComponent_C::RandomSelection(float TargetDisMax, float Radius, TArray<struct FVector>* TargetArray, bool NeedCheckBoundary, bool* Add)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MapInfoComponent.BP_MapInfoComponent_C.Random Selection"));
		
		UBP_MapInfoComponent_C_RandomSelection_Params params {};
		params.TargetDisMax = TargetDisMax;
		params.Radius = Radius;
		params.NeedCheckBoundary = NeedCheckBoundary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetArray != nullptr)
			*TargetArray = params.TargetArray;
		if (Add != nullptr)
			*Add = params.Add;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MapInfoComponent.BP_MapInfoComponent_C.JudgeBoundary
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DontInBoundary                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MapInfoComponent_C::JudgeBoundary(const struct FVector& Pos, float Radius, bool* DontInBoundary)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MapInfoComponent.BP_MapInfoComponent_C.JudgeBoundary"));
		
		UBP_MapInfoComponent_C_JudgeBoundary_Params params {};
		params.Pos = Pos;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DontInBoundary != nullptr)
			*DontInBoundary = params.DontInBoundary;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MapInfoComponent.BP_MapInfoComponent_C.Calculate Poison Circle Point Array
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<float>                                      RadiusArr                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_MapInfoComponent_C::CalculatePoisonCirclePointArray(TArray<float>* RadiusArr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MapInfoComponent.BP_MapInfoComponent_C.Calculate Poison Circle Point Array"));
		
		UBP_MapInfoComponent_C_CalculatePoisonCirclePointArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RadiusArr != nullptr)
			*RadiusArr = params.RadiusArr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MapInfoComponent.BP_MapInfoComponent_C.Get Safe Area Center
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Pos                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MapInfoComponent_C::GetSafeAreaCenter(int32_t Index, struct FVector* Pos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MapInfoComponent.BP_MapInfoComponent_C.Get Safe Area Center"));
		
		UBP_MapInfoComponent_C_GetSafeAreaCenter_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pos != nullptr)
			*Pos = params.Pos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MapInfoComponent.BP_MapInfoComponent_C.GetAirline
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FAirlineData                                Airline                                                    (Parm, OutParm, NoDestructor)
	 */
	int32_t UBP_MapInfoComponent_C::GetAirline(struct FAirlineData* Airline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MapInfoComponent.BP_MapInfoComponent_C.GetAirline"));
		
		UBP_MapInfoComponent_C_GetAirline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Airline != nullptr)
			*Airline = params.Airline;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MapInfoComponent.BP_MapInfoComponent_C.SetStaticSafeArea
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             SafeAreaCenters                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FInt32Range                                 OverrideIndexRange                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MapInfoComponent_C::SetStaticSafeArea(TArray<struct FVector>* SafeAreaCenters, const struct FInt32Range& OverrideIndexRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MapInfoComponent.BP_MapInfoComponent_C.SetStaticSafeArea"));
		
		UBP_MapInfoComponent_C_SetStaticSafeArea_Params params {};
		params.OverrideIndexRange = OverrideIndexRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SafeAreaCenters != nullptr)
			*SafeAreaCenters = params.SafeAreaCenters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BP_MapInfoComponent.BP_MapInfoComponent_C.SetStaticAirline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAirlineData                                Airline                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            StaticAirlineID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MapInfoComponent_C::SetStaticAirline(const struct FAirlineData& Airline, int32_t StaticAirlineID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BP_MapInfoComponent.BP_MapInfoComponent_C.SetStaticAirline"));
		
		UBP_MapInfoComponent_C_SetStaticAirline_Params params {};
		params.Airline = Airline;
		params.StaticAirlineID = StaticAirlineID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MapInfoComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MapInfoComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BP_MapInfoComponent.BP_MapInfoComponent_C"));
		return ptr;
	}

}



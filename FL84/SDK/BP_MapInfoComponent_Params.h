#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_MapInfoComponent.BP_MapInfoComponent_C.Calculate Required Parameters
	 */
	struct UBP_MapInfoComponent_C_CalculateRequiredParameters_Params
	{
	public:
		TArray<float>                                              RadiusArr;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxOffset;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      GoToTheCentreRadius;                                     // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapInfoComponent.BP_MapInfoComponent_C.Random Get Fake Bomb Point
	 */
	struct UBP_MapInfoComponent_C_RandomGetFakeBombPoint_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Pos;                                                     // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_893D[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MapInfoComponent.BP_MapInfoComponent_C.SetFakeBombPointRangeArrr
	 */
	struct UBP_MapInfoComponent_C_SetFakeBombPointRangeArrr_Params
	{
	public:
		TMap<int32_t, struct FVector2D>                            FakeBombPointRangeArr;                                   // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MapInfoComponent.BP_MapInfoComponent_C.SetFakePointRnageArr
	 */
	struct UBP_MapInfoComponent_C_SetFakePointRnageArr_Params
	{
	public:
		TMap<int32_t, struct FVector2D>                            FakePointRnageArr;                                       // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MapInfoComponent.BP_MapInfoComponent_C.Get Safe Area Centers Len
	 */
	struct UBP_MapInfoComponent_C_GetSafeAreaCentersLen_Params
	{
	public:
		int32_t                                                    Len;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapInfoComponent.BP_MapInfoComponent_C.CalculateFakePoint
	 */
	struct UBP_MapInfoComponent_C_CalculateFakePoint_Params
	{
	public:
		struct FVector                                             Centre;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SmallRadiu;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LargeRadiu;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Pos;                                                     // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapInfoComponent.BP_MapInfoComponent_C.Join Next
	 */
	struct UBP_MapInfoComponent_C_JoinNext_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxOffset;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LastIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ULSX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     TargetArray;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		float                                                      GoToTheCentreRadius;                                     // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapInfoComponent.BP_MapInfoComponent_C.Random Selection
	 */
	struct UBP_MapInfoComponent_C_RandomSelection_Params
	{
	public:
		float                                                      TargetDisMax;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FVector>                                     TargetArray;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       NeedCheckBoundary;                                       // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Add;                                                     // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_59TX[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MapInfoComponent.BP_MapInfoComponent_C.JudgeBoundary
	 */
	struct UBP_MapInfoComponent_C_JudgeBoundary_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DontInBoundary;                                          // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QCMR[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MapInfoComponent.BP_MapInfoComponent_C.Calculate Poison Circle Point Array
	 */
	struct UBP_MapInfoComponent_C_CalculatePoisonCirclePointArray_Params
	{
	public:
		TArray<float>                                              RadiusArr;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapInfoComponent.BP_MapInfoComponent_C.Get Safe Area Center
	 */
	struct UBP_MapInfoComponent_C_GetSafeAreaCenter_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Pos;                                                     // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapInfoComponent.BP_MapInfoComponent_C.GetAirline
	 */
	struct UBP_MapInfoComponent_C_GetAirline_Params
	{
	public:
		struct FAirlineData                                        Airline;                                                 // 0x0000(0x0028)  (Parm, OutParm, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapInfoComponent.BP_MapInfoComponent_C.SetStaticSafeArea
	 */
	struct UBP_MapInfoComponent_C_SetStaticSafeArea_Params
	{
	public:
		TArray<struct FVector>                                     SafeAreaCenters;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		struct FInt32Range                                         OverrideIndexRange;                                      // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MapInfoComponent.BP_MapInfoComponent_C.SetStaticAirline
	 */
	struct UBP_MapInfoComponent_C_SetStaticAirline_Params
	{
	public:
		struct FAirlineData                                        Airline;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    StaticAirlineID;                                         // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

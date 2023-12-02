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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_MapInfoComponent.BP_MapInfoComponent_C
	 * Size -> 0x0134 (FullSize[0x02B4] - InheritedSize[0x0180])
	 */
	class UBP_MapInfoComponent_C : public UCGMMapInfo
	{
	public:
		struct FAirlineData                                        Airline;                                                 // 0x0180(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<struct FVector>                                     SafeAreaCenters;                                         // 0x01A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       StaticAirline;                                           // 0x01B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StaticSafeArea;                                          // 0x01B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5SA6[0x6];                                   // 0x01BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          DT_EventTimeline_BattleRoyale;                           // 0x01C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsePoisonCircleMarker;                                   // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DHTI[0x3];                                   // 0x01C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           TempDir;                                                 // 0x01CC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseFakePoint;                                            // 0x01D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GUGK[0x3];                                   // 0x01D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, struct FVector2D>                            FakePointRangeArr;                                       // 0x01D8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       UseFakeBombPoint;                                        // 0x0228(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X2LM[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, struct FVector2D>                            FakeBombPointRangeArr;                                   // 0x0230(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             PreCirclePoint;                                          // 0x0280(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8AA0[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              CircleRadiusArr;                                         // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    StaticAirlineID;                                         // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInt32Range                                         OverrideCenterIndex;                                     // 0x02A4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CalculateRequiredParameters(TArray<float>* RadiusArr, int32_t Index, float* Radius, float* MaxOffset, float* GoToTheCentreRadius);
		void RandomGetFakeBombPoint(int32_t Key, struct FVector* Pos, bool* Success);
		void SetFakeBombPointRangeArrr(TMap<int32_t, struct FVector2D> FakeBombPointRangeArr);
		void SetFakePointRnageArr(TMap<int32_t, struct FVector2D> FakePointRnageArr);
		void GetSafeAreaCentersLen(int32_t* Len);
		void CalculateFakePoint(const struct FVector& Centre, float SmallRadiu, float LargeRadiu, int32_t Index, struct FVector* Pos);
		void JoinNext(float Radius, float MaxOffset, int32_t LastIndex, TArray<struct FVector>* TargetArray, float GoToTheCentreRadius);
		void RandomSelection(float TargetDisMax, float Radius, TArray<struct FVector>* TargetArray, bool NeedCheckBoundary, bool* Add);
		void JudgeBoundary(const struct FVector& Pos, float Radius, bool* DontInBoundary);
		void CalculatePoisonCirclePointArray(TArray<float>* RadiusArr);
		void GetSafeAreaCenter(int32_t Index, struct FVector* Pos);
		int32_t GetAirline(struct FAirlineData* Airline);
		void SetStaticSafeArea(TArray<struct FVector>* SafeAreaCenters, const struct FInt32Range& OverrideIndexRange);
		void SetStaticAirline(const struct FAirlineData& Airline, int32_t StaticAirlineID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

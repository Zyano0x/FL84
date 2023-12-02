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
	 * BlueprintGeneratedClass GeneralFunctionLibrary_Map.GeneralFunctionLibrary_Map_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeneralFunctionLibrary_Map_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_CDebugDrawingPoisonCircle(TArray<struct FVector>* CenterArr, class UObject* __WorldContext1, TArray<float>* Radius, class UObject* __WorldContext);
		void STATIC_CGetViewportFocusedCharacter(class UObject* WorldContextObject, class UObject* __WorldContext, class ASolarCharacter** Character);
		void STATIC_CircularInterceptPoint(const struct FVector2D& CenterPoint, float LargeRadius, float SmallRadius, float TruncationAngle, class UObject* __WorldContext, struct FVector2D* LargePointStart, struct FVector2D* LargePointEnd, struct FVector2D* SmallPointStart, struct FVector2D* SmallPointEnd);
		void STATIC_SGetPointOnLine(TArray<struct FVector2D>* Sample, const struct FVector2D& StartPoint, float Length, class UObject* __WorldContext, struct FVector2D* TargetPoint);
		void STATIC_SCreateAirDropbyOutComeIDAutoTraceGroundHeight(class UObject* WorldContextObject, const struct FTransform& , class UClass* SpawnerASolarTreasureBoxSpawner, int32_t OutcomeID, int32_t ChestID, int32_t _2, bool bUseAirship, class UObject* __WorldContext);
		void STATIC_SCreateAirDropByItemID_AutoTraceGroundHeight(class UObject* WorldContextObject, const struct FTransform& , class UClass* SpawnerASolarTreasureBoxSpawner, TArray<struct FSolarItemData>* ItemIDNum, int32_t ChestID, int32_t _2, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

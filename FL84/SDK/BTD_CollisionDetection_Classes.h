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
	 * BlueprintGeneratedClass BTD_CollisionDetection.BTD_CollisionDetection_C
	 * Size -> 0x005C (FullSize[0x00FC] - InheritedSize[0x00A0])
	 */
	class UBTD_CollisionDetection_C : public UBTDecorator_BlueprintBase
	{
	public:
		float                                                      Height;                                                  // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsActor;                                                 // 0x00A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4X4Y[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              CheckPointLocation;                                      // 0x00A8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              CheckPointActor;                                         // 0x00D0(0x0028) Edit, BlueprintVisible
		float                                                      Radiu;                                                   // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCircleInter(int32_t Index_01, int32_t Index_02, int32_t circleTimes, int32_t* Inter);
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

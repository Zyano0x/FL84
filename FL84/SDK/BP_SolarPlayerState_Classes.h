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
	 * BlueprintGeneratedClass BP_SolarPlayerState.BP_SolarPlayerState_C
	 * Size -> 0x0010 (FullSize[0x0C58] - InheritedSize[0x0C48])
	 */
	class ABP_SolarPlayerState_C : public ASolarPlayerState
	{
	public:
		class UBP_AchievementComponent_C*                          BP_AchievementComponent;                                 // 0x0C48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0C50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		class FString GetModuleName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

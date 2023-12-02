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
	 * BlueprintGeneratedClass BP_SolarVehicleSpawner.BP_SolarVehicleSpawner_C
	 * Size -> 0x0028 (FullSize[0x0418] - InheritedSize[0x03F0])
	 */
	class ABP_SolarVehicleSpawner_C : public ASolarVehicleSpawner
	{
	public:
		unsigned char                                              SolarVehicleSpawnerVis[0x8];                             // 0x03F0(0x0008) UNKNOWN PROPERTY: ObjectProperty
		class UBoxComponent*                                       Box;                                                     // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube1;                                                   // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube;                                                    // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SceneRoot;                                               // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

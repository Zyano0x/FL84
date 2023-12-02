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
	 * BlueprintGeneratedClass BP_SolarVH_Tire_WL05.BP_SolarVH_Tire_WL05_C
	 * Size -> 0x003D (FullSize[0x142D] - InheritedSize[0x13F0])
	 */
	class ABP_SolarVH_Tire_WL05_C : public ABP_WheeledVehicleBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x13F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Platform;                                                // 0x13F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                VehicleHitbox2;                                          // 0x1400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh3;                                             // 0x1408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextRenderComponent*                                TextRender;                                              // 0x1410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     VFX_BloodVolume;                                         // 0x1418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MoveableHitBoxLocation;                                  // 0x1420(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDestroying;                                            // 0x142C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_SolarVH_Tire_WL05(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass BP_CustomPoisonCircle_Template.BP_CustomPoisonCircle_Template_C
	 * Size -> 0x0034 (FullSize[0x04FC] - InheritedSize[0x04C8])
	 */
	class ABP_CustomPoisonCircle_Template_C : public ASolarCircleSafeArea
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMeshCicle;                                         // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SafeArea;                                                // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceThreshold;                                       // 0x04E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InitRadius;                                              // 0x04EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             InitPosition;                                            // 0x04F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FString GetModuleName();
		void SetMeshVisibility();
		void DataTrace(int32_t inInt, const struct FVector& Vector, float InFloat);
		void OnLoaded_2CF9BD9E4D7B992D773DE7AE62F29135(class UObject* Loaded);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void SSetNextArea(const struct FVector& Center, float Radius, float WaitTime, float MoveTime, int32_t DamageLevel);
		void ShowEffectInside(bool bInside);
		void Evnet_ResetMaterial();
		void ExecuteUbergraph_BP_CustomPoisonCircle_Template(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

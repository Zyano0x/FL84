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
	 * BlueprintGeneratedClass BP_SetRenderParametersBasedOnDifferentStates.BP_SetRenderParametersBasedOnDifferentStates_C
	 * Size -> 0x0098 (FullSize[0x02C8] - InheritedSize[0x0230])
	 */
	class ABP_SetRenderParametersBasedOnDifferentStates_C : public ASolarRenderParametersBasedOnDifferentStates
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ASolarCharacter*                                     SolarCharacter;                                          // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        LoopTimer;                                               // 0x0248(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      MinSkydivingHeight;                                      // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8B7B[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AExponentialHeightFog*                               HeightFog;                                               // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InterpolateFogColor;                                     // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FYA4[0x3];                                   // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DefaultFogColor;                                         // 0x0264(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LandingFogColor;                                         // 0x0274(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CharacteStartSkydivingHeight;                            // 0x0284(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSkydivingHeight;                                      // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InterpolateFogDensity;                                   // 0x028C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JYLP[0x3];                                   // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultFogDensity;                                       // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LandingFogDensity;                                       // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InterpolateFogHeightFalloff;                             // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5QBT[0x3];                                   // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultFogHeightFalloff;                                 // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LandingFogHeightFalloff;                                 // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InterpolateStartDistance;                                // 0x02A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8LS3[0x3];                                   // 0x02A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultStartDistance;                                    // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LandingStartDistance;                                    // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterSkydivingState                                   CharacterSkydivingState;                                 // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterSkydivingState                                   BeginPlayState;                                          // 0x02B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8OLD[0x6];                                   // 0x02B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ResetFogLoopTimer;                                       // 0x02B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        FogLoopTimer;                                            // 0x02C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void InterpolationStartDistance();
		void InterpolationFogHeightFalloff();
		void InterpolationFogDensity();
		void InterpolationFogColor(struct FLinearColor* FogColorafterInterpolation);
		void HeightFog_(ECharacterSkydivingState CharacterSkydivingState);
		void MaterialShadowDistance_Change(ECharacterSkydivingState CharacterSkydivingState);
		void TreeCullDistance_Change(ECharacterSkydivingState CharacterSkydivingState);
		void SetRenderParamerts(class ASolarCharacter* SolarCharacter);
		void SetRenderParamertsWithHeight();
		void ReceiveBeginPlay();
		void ResetToInitialState(class ASolarCharacter* SolarCharacter);
		void ResetSetFog();
		void FlyingsetFog();
		void ExecuteUbergraph_BP_SetRenderParametersBasedOnDifferentStates(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

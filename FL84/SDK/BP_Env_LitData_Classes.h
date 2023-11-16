#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * BlueprintGeneratedClass BP_Env_LitData.BP_Env_LitData_C
	 * Size -> 0x0108 (FullSize[0x0330] - InheritedSize[0x0228])
	 */
	class ABP_Env_LitData_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ASkyLight*                                           SkyLight;                                                // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADirectionalLight*                                   DirectionalLight;                                        // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStr_LightData                                      LocalLightData;                                          // 0x0248(0x0070) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		TMap<class FString, struct FStr_LightData>                 LightDatas;                                              // 0x02B8(0x0050) Edit, BlueprintVisible, ContainsInstancedReference
		class ABP_C_EdgeLitControl_C*                              CharacterEdgeLitControl;                                 // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASkyLight*                                           NewVar_1;                                                // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseDefaultLight;                                        // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_797F[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentLightDataKey;                                     // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void ToggleEnvLighting(bool bUseDefaultLight);
		void SetEdgeLightSetting(const struct FStr_EdgeLightSetting& EdgeLightSetting);
		void AddorSetLightDataElement(const class FString& Key);
		void LoadSceneLightData(const class FString& Key);
		void MakeLightData();
		void SaveLightData();
		void LoadLightData();
		void SetDirectionalLightSetting(class ADirectionalLight* DirectionalLight, const struct FStr_DirectionalLightSetting& Str_DirectionalLightSetting);
		void SetSkyLightSetting(class ASkyLight* SkyLight, const struct FStr_SkyLightSetting& Str_SkyLightSetting);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Env_LitData(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

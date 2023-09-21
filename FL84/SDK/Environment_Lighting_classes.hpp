#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x248 - 0x230)
// BlueprintGeneratedClass Environment_Lighting.Environment_Lighting_C
class AEnvironment_Lighting_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ASkyLight*                             SkyLight_0_ExecuteUbergraph_Environment_Lighting_RefProperty; // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Env_LitData_C*                     BP_Env_LitData_2_ExecuteUbergraph_Environment_Lighting_RefProperty; // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AEnvironment_Lighting_C* GetDefaultObj();

	class FString GetModuleName();
	void SetLight(const class FString& SceneName);
	void SetCardSkyLightData(float Indensity);
	void ExecuteUbergraph_Environment_Lighting(int32 EntryPoint, const class FString& K2Node_CustomEvent_SceneName, float K2Node_CustomEvent_Indensity);
};

}



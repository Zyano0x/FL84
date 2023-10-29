#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x328 - 0x320)
// BlueprintGeneratedClass BP_PBags_VF_Set02.BP_PBags_VF_Set02_C
class ABP_PBags_VF_Set02_C : public ABP_SolarBackpackActor_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PBags_VF_Set02_C* GetDefaultObj();

	void FX_LowPower(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void FX_Flying(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void FX_Idle(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void FX_Charging(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void FX_Default();
	void OnMeshEffectFactorChange();
	void ExecuteUbergraph_BP_PBags_VF_Set02(int32 EntryPoint);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x318 - 0x310)
// BlueprintGeneratedClass BP_PBags_BDogF_Set01.BP_PBags_BDogF_Set01_C
class ABP_PBags_BDogF_Set01_C : public ABP_SolarBackpackActor_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PBags_BDogF_Set01_C* GetDefaultObj();

	void FX_Flying();
	void FX_Idle();
	void FX_LowPower();
	void FX_Charging();
	void FX_Default();
	void OnMeshEffectFactorChange();
	void ExecuteUbergraph_BP_PBags_BDogF_Set01(int32 EntryPoint);
};

}



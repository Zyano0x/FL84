#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x320 - 0x320)
// BlueprintGeneratedClass BP_SolarBackpackActor.BP_SolarBackpackActor_C
class ABP_SolarBackpackActor_C : public ASolarBackpackActor
{
public:

	static class UClass* StaticClass();
	static class ABP_SolarBackpackActor_C* GetDefaultObj();

	void LobbyForceSetLOD();
	class UMaterialInstanceDynamic* TryCreateDynamicMaterialInstance(class UPrimitiveComponent* Component, int32 ElementIndex, class UMaterialInterface* SourceMaterial, class FName OptionlName, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void FX_Idle();
	void FX_Flying();
	void FX_Charging();
	void FX_LowPower();
	void FX_Default(bool CallFunc_IsFly_ReturnValue);
};

}



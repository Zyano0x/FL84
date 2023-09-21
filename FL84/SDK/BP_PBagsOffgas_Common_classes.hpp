#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2A0 - 0x280)
// BlueprintGeneratedClass BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C
class ABP_PBagsOffgas_Common_C : public ASolarBackpackSFX
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              FX_BoostClimb_Start;                               // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FX_PowerBag_MainJet;                               // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       VFX;                                               // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PBagsOffgas_Common_C* GetDefaultObj();

	void BackpackSFXBegin(enum class EFXJetType InJetType, bool GroundDetected);
	void BackpackSFXEnd();
	void OnBackpackTrailAssembling(struct FBackpackTrailAssemblingParams& Params, enum class EBackpackPropellingMode PropellingMode);
	void ExecuteUbergraph_BP_PBagsOffgas_Common(int32 EntryPoint, enum class EFXJetType K2Node_Event_InJetType, bool K2Node_Event_GroundDetected, bool K2Node_SwitchEnum_CmpSuccess, const struct FBackpackTrailAssemblingParams& K2Node_Event_Params, enum class EBackpackPropellingMode K2Node_Event_PropellingMode, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}



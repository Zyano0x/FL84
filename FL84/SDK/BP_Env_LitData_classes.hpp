#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x330 - 0x228)
// BlueprintGeneratedClass BP_Env_LitData.BP_Env_LitData_C
class ABP_Env_LitData_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                             SkyLight;                                          // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                     DirectionalLight;                                  // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStr_LightData                        LocalLightData;                                    // 0x248(0x70)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	TMap<class FString, struct FStr_LightData>   LightDatas;                                        // 0x2B8(0x50)(Edit, BlueprintVisible, ContainsInstancedReference)
	class ABP_C_EdgeLitControl_C*                CharacterEdgeLitControl;                           // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                             NewVar_0;                                          // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseDefaultLight;                                  // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2812[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrentLightDataKey;                               // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Env_LitData_C* GetDefaultObj();

	void Toggle_Env_Lighting(bool bUseDefaultLight, class ASphereReflectionCapture* NewLocalVar_0, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, TArray<class ASphereReflectionCapture*>& CallFunc_GetAllActorsOfClass_OutActors, class ASphereReflectionCapture* CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, TArray<class ADirectionalLight*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ADirectionalLight* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName Temp_name_Variable, TArray<class ASkyLight*>& CallFunc_GetAllActorsOfClass_OutActors_2, class ASkyLight* CallFunc_Array_Get_Item_2, bool CallFunc_Array_Contains_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1);
	void SetEdgeLightSetting(const struct FStr_EdgeLightSetting& EdgeLightSetting, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void Add_or_Set_Light_Data_Element(class FString& Key, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, int32 CallFunc_Len_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Contains_ReturnValue);
	void LoadSceneLightData(class FString& Key, int32 CallFunc_Len_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FStr_LightData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void MakeLightData(const struct FStr_SkyLightSetting& K2Node_MakeStruct_Str_SkyLightSetting, const struct FStr_EdgeLightSetting& K2Node_MakeStruct_Str_EdgeLightSetting, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class UDirectionalLightComponent* K2Node_DynamicCast_AsDirectional_Light_Component, bool K2Node_DynamicCast_bSuccess, const struct FStr_DirectionalLightSetting& K2Node_MakeStruct_Str_DirectionalLightSetting, const struct FStr_LightData& K2Node_MakeStruct_Str_LightData);
	void SaveLightData();
	void LoadLightData(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetDirectionalLightSetting(class ADirectionalLight* DirectionalLight, struct FStr_DirectionalLightSetting& Str_DirectionalLightSetting, class UDirectionalLightComponent* K2Node_DynamicCast_AsDirectional_Light_Component, bool K2Node_DynamicCast_bSuccess, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetSkyLightSetting(class ASkyLight* SkyLight, struct FStr_SkyLightSetting& Str_SkyLightSetting, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Env_LitData(int32 EntryPoint, const struct FStr_LightData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
};

}



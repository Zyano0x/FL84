#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x470 (0x698 - 0x228)
// BlueprintGeneratedClass BP_2PiontLight.BP_2PiontLight_C
class ABP_2PiontLight_C : public AActor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class APointLight*                           A_PointLight;                                      // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APointLight*                           B_PointLight;                                      // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                PlayerPos;                                         // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStr_2PointLightData                  Local2PointLightData;                              // 0x248(0x1F8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct FStr_2PointLightData> Group2PointLightData;                              // 0x440(0x50)(Edit, BlueprintVisible)
	struct FStr_2PointLightDetail                Zero_Default;                                      // 0x490(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FStr_2PointLightDetail                One_Character;                                     // 0x4D8(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FStr_2PointLightDetail                Two_Capsule;                                       // 0x520(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FStr_2PointLightDetail                Three_Weapone;                                     // 0x568(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FStr_2PointLightDetail                Four_Vehicale;                                     // 0x5B0(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FStr_2PointLightDetail                Five_Bag_Trail;                                    // 0x5F8(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FStr_2PointLightDetail                Six_Gold;                                          // 0x640(0x48)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                LevelName;                                         // 0x688(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_2PiontLight_C* GetDefaultObj();

	class FString GetModuleName();
	void Set2PointLightDetail_Initialize(struct FStr_2PointLightDetail& TwoPointLightDetail, int32& ID, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FStr_2PointLightData& K2Node_MakeStruct_Str_2PointLightData, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6);
	void Set2PointLightDetail(struct FStr_2PointLightDetail& TwoPointLightDetail, int32& ID, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, const struct FStr_2PointLightData& K2Node_MakeStruct_Str_2PointLightData);
	void Make2PointLightDetail(struct FStr_2PointLightDetail* DataDetail, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FStr_2PointLightDetail& K2Node_MakeStruct_Str_2PointLightDetail);
	void SaveLightSettingByLevel(class FString& Key_Map, int32& ID, enum class E_ButtonType E_ButtonType, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, int32 CallFunc_Len_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Contains_ReturnValue);
	void LoadSceneLightData(class FString& Key_Map, int32& ID, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FStr_2PointLightData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void LoadLightData(int32& ID, bool K2Node_SwitchInteger_CmpSuccess, const struct FStr_2PointLightData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Make_Light_Data(int32& ID, enum class E_ButtonType ButtonType, const struct FStr_2PointLightDetail& CallFunc_Make2PointLightDetail_DataDetail, bool K2Node_SwitchEnum_CmpSuccess);
	void Set_2Point_Light_Setting(class APointLight* Point_A, class APointLight* Point_B, struct FStr_2PointLightDetail& TwoPointLightSetting, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x4B9 - 0x488)
// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C
class UCrosshair_CarWeapon_Gatling_C : public UVehicleWeaponCrossHairWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x488(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          Coredot;                                           // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          SpreadCanvasPanel;                                 // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_coredot;                                 // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_leftarrow_1;                             // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpreadImg_rightarrow_1;                            // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         NewlyControlled;                                   // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCrosshair_CarWeapon_Gatling_C* GetDefaultObj();

	void CalculateRotAngle(float DeltaTime, float InSpeed, bool bFire, float* OutAngle, float CurrentDeltaAngle, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float Temp_float_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool Temp_bool_Variable_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_ClampAxis_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1);
	void OnUpdateGatlingRoll(float DeltaTmie, float InRollSpeedInterp, bool bWantFire);
	void OnCrosshairInNormalState();
	void ExecuteUbergraph_Crosshair_CarWeapon_Gatling(int32 EntryPoint, float K2Node_Event_DeltaTmie, float K2Node_Event_InRollSpeedInterp, bool K2Node_Event_bWantFire, float CallFunc_CalculateRotAngle_OutAngle, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}



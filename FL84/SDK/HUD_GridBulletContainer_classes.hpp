#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x218 (0x650 - 0x438)
// WidgetBlueprintGeneratedClass HUD_GridBulletContainer.HUD_GridBulletContainer_C
class UHUD_GridBulletContainer_C : public UGridBulletContainer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                bg_BulletEmpty;                                    // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                bg_BulletEmptyShine;                               // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                bg_BulletGrid;                                     // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_LightAll;                                      // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CurrentBulletForDebug;                             // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxBulletForDebug;                                 // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProgressBarStyle                     NewVar_0;                                          // 0x468(0x1D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsMaxAmmoChanged;                                  // 0x638(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AE7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       DivisorWidgetArray;                                // 0x640(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHUD_GridBulletContainer_C* GetDefaultObj();

	void ReceiveUpdateMaxAmmoEvent(int32 InMaxAmmo);
	void Construct();
	void ExecuteUbergraph_HUD_GridBulletContainer(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Event_InMaxAmmo, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, TArray<class UWidget*>& K2Node_MakeArray_Array, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1);
};

}



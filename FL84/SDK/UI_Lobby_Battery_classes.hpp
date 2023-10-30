#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3A0 (0x600 - 0x260)
// WidgetBlueprintGeneratedClass UI_Lobby_Battery.UI_Lobby_Battery_C
class UUI_Lobby_Battery_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_Charging;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Battery;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_1EDB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ProgressBarBgImage;                                // 0x280(0xE0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           ProgressBarMarqueeImage;                           // 0x360(0xE0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           ProgressBarFillNormal;                             // 0x440(0xE0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           ProgressBarFillCharging;                           // 0x520(0xE0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_Lobby_Battery_C* GetDefaultObj();

	void ForceRefreshBatteryUI(bool CallFunc_IsRunningOnBattery_ReturnValue, int32 CallFunc_GetBatteryLevel_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void RefreshBatteryUI(int32 BatteryLevelNewParam, bool bCharging, bool bBatteryCharging, bool Temp_bool_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, const struct FLinearColor& Temp_struct_Variable_4, bool Temp_bool_Variable_5, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateBrush& K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle, const struct FLinearColor& K2Node_Select_Default_3, const struct FLinearColor& K2Node_Select_Default_4, const struct FLinearColor& K2Node_Select_Default_5);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void EventRefreshBatteryUI();
	void Destruct();
	void ExecuteUbergraph_UI_Lobby_Battery(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}



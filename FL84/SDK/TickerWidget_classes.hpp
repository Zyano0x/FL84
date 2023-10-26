#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x540 - 0x400)
// WidgetBlueprintGeneratedClass TickerWidget.TickerWidget_C
class UTickerWidget_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                        RichText;                                          // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          TextPanel;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x420(0x18)(Edit, BlueprintVisible)
	bool                                         bEnableTickering;                                  // 0x438(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9C3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopIntervalDuration;                              // 0x43C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AnimationSpeed;                                    // 0x440(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanTicker;                                        // 0x444(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9C4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OriTextWidth;                                      // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ShortenedText;                                     // 0x450(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          TimerHandle;                                       // 0x468(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnableLocText;                                    // 0x470(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9C6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LocTextID;                                         // 0x474(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsAnimationPlaying;                               // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9C7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TargetXVal;                                        // 0x47C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x480(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TickerTimerHandle;                                 // 0x488(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        Font;                                              // 0x490(0x60)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateColor                           TxtColor;                                          // 0x4F0(0x28)(Edit, BlueprintVisible)
	struct FLinearColor                          ShadowColor;                                       // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ShadowOffset;                                      // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Size;                                              // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Direction;                                         // 0x538(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAlwaysTickering;                                  // 0x53C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETextJustify                      Justification;                                     // 0x53D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAlwaysKeepJustification;                          // 0x53E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETextJustify                      NewVar_0;                                          // 0x53F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTickerWidget_C* GetDefaultObj();

	void UpdateText(const class FString& CallFunc_GetLocalText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void ApplyJustification(enum class ETextJustify Temp_byte_Variable, enum class EHorizontalAlignment Temp_byte_Variable_1, enum class EHorizontalAlignment Temp_byte_Variable_2, enum class EHorizontalAlignment Temp_byte_Variable_3, enum class ETextJustify Temp_byte_Variable_4, enum class EHorizontalAlignment Temp_byte_Variable_5, enum class EHorizontalAlignment Temp_byte_Variable_6, enum class EHorizontalAlignment Temp_byte_Variable_7, enum class EHorizontalAlignment K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue, class USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, enum class EHorizontalAlignment K2Node_Select_Default_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void CanTicker(const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void PlayerTickerAnimHelper();
	void SetTextEditorLoc();
	void StopTickerAnimation(bool CallFunc_BooleanAND_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void PlayTickerAnimation(const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3);
	void SetText(class FText InText);
	void OnSynchronizeProperties();
	void PreConstruct(bool IsDesignTime);
	void OnHide();
	void OnSolarUIClosed();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnLocalLangChangedEx(const class FString& InLang);
	void ExecuteUbergraph_TickerWidget(int32 EntryPoint, const class FString& K2Node_Event_InLang, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_GetCurrentLang_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_IsEmpty_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, class USolarTables* CallFunc_GetInstance_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, const struct FSolarTablesData_LanguageSwitcher& CallFunc_GetRowData_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Conv_StringToFloat_ReturnValue, const struct FSolarTablesData_LanguageSwitcher& CallFunc_GetRowData_ReturnValue_1, float CallFunc_Conv_StringToFloat_ReturnValue_1);
};

}



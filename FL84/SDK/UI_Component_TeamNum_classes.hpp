#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x478 - 0x400)
// WidgetBlueprintGeneratedClass UI_Component_TeamNum.UI_Component_TeamNum_C
class UUI_Component_TeamNum_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USolarImage*                           Img_TeamNum;                                       // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_Type_TeamNum                    TeamNum;                                           // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Size;                                              // 0x41C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           DefaultColor;                                      // 0x420(0x28)(Edit, BlueprintVisible)
	bool                                         Selected;                                          // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           DefaultColor_Seleted;                              // 0x450(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUI_Component_TeamNum_C* GetDefaultObj();

	void OnShow();
	void OnSolarUIOpened();
	void OnInitialized();
	void OnSolarUIClosed();
	class FString GetModuleName();
	void Set_Team_Num(enum class E_Type_TeamNum Index, enum class E_Type_TeamNum Temp_byte_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* K2Node_Select_Default);
	void SetSelected(bool Selected, enum class E_Type_TeamNum Temp_byte_Variable, enum class E_Type_TeamNum Temp_byte_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1);
	void SetColor(const struct FLinearColor& InColorAndOpacity);
	void SetType(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Component_TeamNum(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}



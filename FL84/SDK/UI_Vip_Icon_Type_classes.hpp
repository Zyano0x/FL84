#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x364 - 0x348)
// WidgetBlueprintGeneratedClass UI_Vip_Icon_Type.UI_Vip_Icon_Type_C
class UUI_Vip_Icon_Type_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USolarImage*                           Img_Vip_Icon;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_1;                                         // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Type;                                              // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Vip_Icon_Type_C* GetDefaultObj();

	void SetType(int32 Type, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UObject* Temp_object_Variable, enum class ESlateVisibility K2Node_Select_Default, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* Temp_object_Variable_3, class UObject* K2Node_Select_Default_1);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Vip_Icon_Type(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}



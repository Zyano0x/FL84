#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x419 - 0x400)
// WidgetBlueprintGeneratedClass UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C
class UUI_Target_Medal_Challenge_S_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Btn_Medal;                                         // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Medal_Icon;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsLock;                                            // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_Target_Medal_Challenge_S_C* GetDefaultObj();

	void Destruct();
	void Construct();
	class FString GetModuleName();
	void SetStateIsLocked(bool IsLock, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Target_Medal_Challenge_S(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x23 (0x36B - 0x348)
// WidgetBlueprintGeneratedClass SolarRedHint_General.SolarRedHint_General_C
class USolarRedHint_General_C : public USolarUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_HintPoint;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_HintNum;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        HintKey;                                           // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERedHintPath                      HintPath;                                          // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAutoRefresh;                                     // 0x369(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Type_RedHint                    Type;                                              // 0x36A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USolarRedHint_General_C* GetDefaultObj();

	class FString GetModuleName();
	void OnSetHintDataComplete();
	void SetStyle(enum class E_Type_RedHint Type, enum class E_Type_RedHint Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class E_Type_RedHint Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, enum class E_Type_RedHint Temp_byte_Variable_4, const struct FLinearColor& K2Node_Select_Default_1, const struct FVector2D& Temp_struct_Variable_2, const struct FVector2D& Temp_struct_Variable_3, enum class E_Type_RedHint Temp_byte_Variable_5, const struct FVector2D& K2Node_Select_Default_2, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* K2Node_Select_Default_3);
	void SetHintData(int64 Key, enum class ERedHintPath Path, bool bAutoRefresh, enum class E_Type_RedHint Type);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_SolarRedHint_General(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}



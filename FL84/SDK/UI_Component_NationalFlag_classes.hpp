#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D (0x44D - 0x430)
// WidgetBlueprintGeneratedClass UI_Component_NationalFlag.UI_Component_NationalFlag_C
class UUI_Component_NationalFlag_C : public UUIComponentNationalFlag
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              SizeBox_0;                                         // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Flag;                               // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Size;                                              // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_FlagType                        FlagType;                                          // 0x44C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Component_NationalFlag_C* GetDefaultObj();

	void OnInitialized();
	void Destruct();
	void LoadClanFlagByUrl();
	void OnSolarUIOpened();
	bool IsExclusiveFlagId(int32 InFlagID);
	void SetDefaultClanFlag();
	void OnSolarUIClosed();
	void Construct();
	void SetDefaultNationalFlag();
	bool IsBroadCastMode();
	class FString GetModuleName();
	void SetEmptyClan();
	void SetFlagType(enum class E_FlagType FlagType, int32 CallFunc_Conv_ByteToInt_ReturnValue);
	void Set_UI_State(enum class E_FlagType Temp_byte_Variable, enum class E_FlagType Temp_byte_Variable_1, float CallFunc_Multiply_IntFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue, float K2Node_Select_Default_1);
	void PreConstruct(bool IsDesignTime);
	void SetNationalFlagType();
	void SetClanFlagType();
	void ExecuteUbergraph_UI_Component_NationalFlag(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}



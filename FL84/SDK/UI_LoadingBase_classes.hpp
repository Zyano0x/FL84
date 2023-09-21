#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4B0 - 0x4A8)
// WidgetBlueprintGeneratedClass UI_LoadingBase.UI_LoadingBase_C
class UUI_LoadingBase_C : public ULoadingUIBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUI_LoadingBase_C* GetDefaultObj();

	void StartLoading();
	void FinishLoading();
	void ExecuteUbergraph_UI_LoadingBase(int32 EntryPoint);
};

}



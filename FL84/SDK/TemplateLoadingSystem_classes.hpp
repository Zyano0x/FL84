#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// Class TemplateLoadingSystem.LoadingScreenSubsystem
class ULoadingScreenSubsystem : public UGameInstanceSubsystem
{
public:
	class ULoadingWidgetBase*                    LoadingWidget;                                     // 0x30(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULoadingScreenSubsystem* GetDefaultObj();

	void StopLoadingScreen();
	class ULoadingWidgetBase* StartLoadingScreen(TSubclassOf<class ULoadingWidgetBase> InWidgetClass);
	class ULoadingScreenSubsystem* Get(class UObject* WorldContextObject);
};

// 0x0 (0x260 - 0x260)
// Class TemplateLoadingSystem.LoadingWidgetBase
class ULoadingWidgetBase : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class ULoadingWidgetBase* GetDefaultObj();

	void LoadingStarted();
	void LoadingFinished();
};

}


